#include<iostream>
using namespace std;
class A
{

	int x;
public:
	A();
	A(int );
	A(A&);
	~A();
	void print();
	void data(int );
};

A::~A(){
cout <<"destructer"<<endl;
};

A::A(){
	cout <<"defalut constructer"<<endl;
	x=10;
};

A::A(int n):x(n)
{
	cout <<"parameterised constructer"<<endl;
};

A::A(A& temp)
{
	cout <<"copy constructer"<<endl;
	x=temp.x;
};

void A::print()
{
	cout <<"x  = "<<x<<endl;
};

void A::data(int n)
{
x=n;
};

main()
{
	A a1,a2(2),a3(a1);
	a1.print();
	a2.print();
	a3.print();
	A a4;
	a4.data(200);
	a4.print();
	cout <<"*******dynamic************"<<endl;
	A *p=new A(463);
	p->print();
}
