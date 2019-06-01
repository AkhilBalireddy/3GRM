#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void set();
	void get() const;
};

main()
{
	A a1;
	a1.set();
	a1.get();
}

void A::set(){
	cout <<"enter data"<<endl;
	cin >> x >>y;
};

void A::get() const {
	cout <<"x  = "<<x<<endl;
	cout <<"y  = "<<y<<endl;
};
