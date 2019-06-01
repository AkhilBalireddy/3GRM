#include<iostream>
using namespace std;
class AAA
{
	int x;
	int y;
	void set_da();
	public:
	void print();
};
void AAA::set_da()
{
	cout <<"enter X and Y values"<<endl;
	cin >> x >> y;
};
void AAA::print()
{
	cout << "x  =  " << x<<endl;
	cout << "y  =  " << y<<endl;
};
int main()
{
	AAA A1;
	A1.set_da();
	A1.print();
}
