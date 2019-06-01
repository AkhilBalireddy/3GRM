#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A() {
		cout << "Constructer A"<<endl;
	};
	~A() {
		cout << "Destructer A"<<endl;
	};
};
class B:public A
{
	int m,n;
	public:
	B() {
		cout << "Constructer B"<<endl;
	};

	~B() {
		cout <<" Destructer B"<<endl;
	};
};
main() {
	B b1;
}
