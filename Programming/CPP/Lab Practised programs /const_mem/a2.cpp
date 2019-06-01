#include<iostream>
using namespace std;
class A
{
	mutable int x;
	static int y;
	public:
	void set() {
		cout <<"enter data"<<endl;
		cin >>x;
	};

	void get() const{
		x=100;
		//y=300;
		cout <<"x= "<<x<<" y  = "<<y<<endl;
	};

};

int A::y;

main(){
	A a1;
	a1.set();
	a1.get();
}
