#include<iostream>
using namespace std;
class AA
{
	int x;
	int y;
	public:
	void set(int ,int);
	void print();
	friend int main();
};
int main()
{
	AA a1;
	a1.set(10,20);
	a1.print();
	cout<<"main  "<< a1.x<<"  "<<a1.y<<endl;
}

void AA::set(int a,int b)
{
	x=a,y=b;
};

void AA::print()
{
	cout <<x <<"  "<<y<<endl;
};
