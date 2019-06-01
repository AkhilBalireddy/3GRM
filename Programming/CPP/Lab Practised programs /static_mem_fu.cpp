#include<iostream>
using namespace std;
class A
{
	int x;
	static int y;
	A() {
		cout <<"constructer  "<<endl;
		x=10;
	};

	public:
	static void create_obj() {
		A obj;
		cout << obj.x<<endl;
		cout << y <,endl;
		obj.print();
	};
	void print() {
		cout << " x  = "<< x <<endl;
		cout << " y  = "<< y <<endl;
	}

}

int A::y=100;

main() {
	A::create_object();
}
