#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A() {
	cout << " default constr" <<endl;
 };
	A (int a,int b) {
		cout << "param constr A "<< endl;
		x=a,y=b;
	}
	~A() {
		cout <<"destructer A"<<endl;
	};
	void get_data(int a,int b) {
		x=a,y=b;
		cout << x << "  " << y << endl;
	};

};
class B:public A {
	int m,n;
	public:

	B() {
		cout <<"constructer B"<<endl;
		m=200,n=100;
	};

	~B() {
		cout <<"destructer B"<<endl;
	};

	void get_data() {
		A::get_data(20,10);
		cout << m << "  " << n << endl;
	};
};

main() {
	B b1;
	b1.get_data();
}
