#include<iostream>
using namespace std;
class A {
	private:
		int x,y;
	public:
		void print() {
			cout << "x   = "<< x << endl;
			cout << "y   = "<< y << endl;
		};
		void set(int a ,int b) {
			x=a ,y=b;
		};
		
};
class B:public A {
	int m,n;
	public:
	void print_de() {
		cout <<"m   = " << m << endl;
		cout <<"n   = " << n << endl;
	};

	void set_de(int c,int d) {
		m=c,n=d;
		print_de();
	};
};

main() {
	A a1;
	a1.set(1,2);
	B b1;
	b1.set_de(6,7);
	cout << sizeof a1 << endl;
	cout << sizeof b1<< endl;
};
