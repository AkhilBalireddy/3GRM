#include<iostream>
using namespace std;
class A
{	
	int y;
	public:
	static int x;
	A(int ,int );
	void print();
};

void A::print() {
	cout <<" x  =  "<<x<<endl;
	cout <<" y  =  " <<y <<endl;
};

A::A(int a,int b):y(b) {
	x=a;
};

int A::x=100;

main()
{
	A obj(11,2);
	cout <<sizeof( A )<< endl;
	cout <<sizeof obj << endl;
	obj.print();
	A obj1(20,30);
	obj1.print();
	obj.print();
cout <<"x value   = "<<x<<endl;
cout <<"x value   = "<<obj1.x<<endl;
}
