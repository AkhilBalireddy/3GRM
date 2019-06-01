#include<iostream>
using namespace std;
void abc(int (&p)[2][5]);
main()
{
	int x[2][5]={{1,2,3,4,5},{1,2,3,4,5}};
abc(x);
}
void abc(int (&p)[2][5])
{
cout <<p[1][3]<<endl;
}
