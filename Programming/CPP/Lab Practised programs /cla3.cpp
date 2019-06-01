#include<iostream>
using namespace std;
class AK
{
	int x;
	int y;
	public:
	void print();
	void set_da(int a,int b);
};
void AK::print()
{
	cout << "x  = "<<x<<endl;
	cout << "y  = "<<y<<endl;
};
void AK::set_da(int a,int b)
{
	(*this)->x=a;
	(*this)->y=b;
};
main()
{
	AK A1;
	
