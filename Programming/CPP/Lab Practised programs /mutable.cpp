#include<iostream>
using namespace std;
class A
{
	mutable int x;
	int y;
	public:
	void data();
	void print() const;
};

void A::data() {
	cout <<"enter x and y"<<endl;
	cin >> x >> y;
};

void A::print() const {
	x=100;
	y=300;
	cout <<"x  = "<<x <<" y  = "<<y<<endl;
};

main()
{
	A obj;
	obj.data();
	obj.print();
}
