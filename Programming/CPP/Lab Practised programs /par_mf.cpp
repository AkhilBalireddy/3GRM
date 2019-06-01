#include<iostream>
using namespace std;
class A;
class B
{
	int x;
	int y;
	public:
	void data(A);
	void data1(A*);
	void print();
};

class A
{
	int x,y;
	public:
	void data(int a,int b);
	friend void B::data1(A*);
	friend void B::data(A);
	void print();
};

void A::data(int a,int b)
{
	x=a,y=b;
};

void A::print(){
	cout <<"class a"<<endl;
	cout <<"x   = "<<x<<endl;
	cout <<"y   = "<<y<<endl;
};

void B::print() {
	cout <<"class b"<<endl;
	cout <<"x  = "<<x<<endl;
	cout <<"y  = "<<y<<endl;
};

void B::data(A a1)
{
	x=a1.x,y=a1.y;
};

void B::data1(A *a1)
{
	x=a1->x,y=a1->y;
};

main()
{
	A a1;
	B b1;
	a1.data(10,20);
	b1.data(a1);
	b1.data1(&a1);
	a1.print();
	b1.print();

};
