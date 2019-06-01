#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void operator()(int a,int b) {
		x=a,y=b;
	};

	void get() {
		cout << x << "  " << y <<endl;
	};
};

main() {
A obj;
obj(100,200);
obj.get();
}
