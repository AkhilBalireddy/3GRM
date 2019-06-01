#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A() { };
	A(int a,int b) {
		x=a,y=b;
	}
	A operator-() {
		A result;
		result.x = -x;
		result.y = -y;
		return result;
	}
	void print() {
		cout << x  << "  "<< y << endl;
	}
};

main() {
A obj(100,200),obj2;
obj2 = -obj;
obj2.print();
}
