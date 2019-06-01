#include<iostream>
using namespace std;
class AAA
{
	int x;
	int y;
	public:
	int z;
	void set_da(int a,int b);
	void print();
};
void AAA::set_da(int x,int y)
{
this->x=x;
(*this).y=y;
/*	(*this).y=b;
	(*this).x=a;
	(*this).z=36;*/
cout << (unsigned)this <<endl;
};
void AAA::print()
{
	cout <<"x = "<<x<<endl;
	cout <<"y = "<<y<<endl;
	cout <<"z = "<<z<<endl;
};
main()
{	
	AAA A1;
	A1.set_da(10,20);
	A1.z=30;
	A1.print();
	cout << (unsigned)&A1<<endl;
}
