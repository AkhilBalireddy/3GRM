#include<iostream>
using namespace std;
main()
{
	int a[5]={10,20,30,40,50};
	int (*p)[5];
	p=a;
	int i;
	for(i=0;i<5;i++)
		cout << (*p)[i] <<" ";
}
