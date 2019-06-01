#include<iostream>
using namespace std;
class A
{
	int x;
	int y;

	public:

	A(){ };

	A ( A &temp)
	{
		cout <<"copy constructer"<<endl;
		x=temp.x,y=temp.y;
	};

	void set() {
		cout << "enter data "<<endl;
		cin >> x >> y;
	};

	void operator=(A temp) {
		cout << "operator = overload"<<endl;
		x=temp.x,y=temp.y;
	};

	void print() {
		cout << " x  = "<<x <<endl;
		cout << " y  = "<<y <<endl;
	};
};

main() {
	A a1,a2,a3(a1);
	a1.set();
	a2=a1;
}
