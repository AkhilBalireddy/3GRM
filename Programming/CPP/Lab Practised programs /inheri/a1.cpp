#include<iostream>
using namespace std;
class A
{
	public:int x,y;
	public:
	void print() {
		cout << "x  = "<< x << endl;
		cout << "y  = "<< y << endl;
	};

	void set(int a,int b) {
		x=a,y=b;
	};
};
class B: protected A {

	int m,n;
	public:
	void print_de() {
		cout << "m  = "<< m << endl;
		cout << "n  = " << n << endl;
		cout << "x  = " << x << endl;
	};

	void set_de(int a ,int b,int c,int d) {
		m=c,n=d;
		set(a,b);
		print();
		print_de();
	};

};

main() {
	A a1;
	a1.set(20,30);
	B b1;
	b1.set_de(100,200,300,400);

		cout << "x  = " << a1.x << endl;
		//cout << "x  = " << b1.x << endl;

}
