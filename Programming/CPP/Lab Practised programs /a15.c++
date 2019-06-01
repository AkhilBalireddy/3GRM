#include<iostream>
using namespace std;
main()
{
	int a[5]={10,20,30,40,50};
	int &rv[5]=a;
	for(int i=0;i<5;i++)
		cout << rv[i] << endl;
}
