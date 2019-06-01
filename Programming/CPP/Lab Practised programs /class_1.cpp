#include<iostream>
using namespace std;
class A
{
	int y;
	static int x;
	public:
	A();
	void get_data();
};

A::A() {
x=10,y=20;
};

void A::get_data() {
cout <<x<<" "<<y<<endl;
};

main()
{
	
