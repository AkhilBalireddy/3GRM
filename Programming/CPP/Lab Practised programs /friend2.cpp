#include<iostream>
using namespace std;
class AA
{
	int x;
	int y;
	friend int main();
	friend void get_da(AA);
	friend void get_da(AA *);
	public:
	void set_da(int a,int b);
};

void AA::set_da(int a,int b)
{
	x=a,y=b;
};

void get_da(AA obj1)
{
	cout << obj1.x <<"  "<< obj1.y<<endl;
};

void get_da(AA *obj1)
{
	cout << obj1->x << "  " << obj1->y<<endl;
};

int main()
{
	AA a1;
	a1.set_da(10,20);
	cout << "in main"<<endl;
	cout <<a1.x<<"  "<<a1.y<<endl;
	get_da(a1);
	get_da(&a1);
};
