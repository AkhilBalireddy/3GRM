#include<iostream>
using namespace std;
class AA
{
	int x;
	int y;
	public:
	friend class BB;
	void print( );
	void set(int ,int );
};

class BB
{
	int x;
	int y;
	public:
	void print( );
	void set(AA);
};

int main()
{
	AA a1;
	BB b1;
	a1.set(10,20);
	a1.print();
	b1.set(a1);
	b1.print();
}

void AA::set(int a,int b)
{
	x=a,y=b;
};

void AA::print()
{
	cout<<"class AA"<<endl;
	cout<<"x  =  "<<x<<endl;
	cout<<"y  =  "<<y<<endl;
};

void BB::print()
{
	cout <<"class BB"<<endl;
	cout << "x  = "<<x<<endl;
	cout << "y  = "<<y<<endl;
};

void BB::set(AA a1)
{
	x=a1.x;
	y=a1.y;
};

