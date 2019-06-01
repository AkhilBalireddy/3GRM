#include<iostream>
using namespace std;
class aravind
{
	int x;
	int y;
	public:
	void print();
	void set_data(int a,int b);
};
void aravind::print()
{
	cout <<"x  = " <<x<<endl;
	cout <<"y  = " <<y<<endl;
}
void aravind::set_data(int a,int b)
{
	x=a,y=b;
}
int main()
{
	aravind A1;
	int a,b;
	cout <<"enter A and B values"<<endl;
	cin >>a >>b;
	A1.set_data(a,b);
	A1.print();
}
