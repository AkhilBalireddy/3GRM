#include<iostream>
using namespace std;
main()
{
	int x=10;
	int *p=&x;
	int y=20;
	int *&rp=p;
	cout << &p <<endl;
	cout << &rp << endl;
	rp=&y;
	cout << *p << endl;
}
