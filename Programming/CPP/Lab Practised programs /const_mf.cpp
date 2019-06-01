#include<iostream>
using namespace std;
class A {
	int x,y;
	public:
	void data();
	void print () const;
};

void A::data() {
	cout <<"enter x and y values"<<endl;
	cin >> x >>y;
};

void A::print() const {
	cout <<"x  ="<<x<<" y  = "<<y<<endl;
	cout <<"x  ="<<x<<" y  = "<<y<<endl;
};

main()
{
	A a1;
	a1.data();
	a1.print();
}
