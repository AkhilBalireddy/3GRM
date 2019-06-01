#include<iostream>
using namespace std;
main()
{
	int **p              
;
	p=new int*[3];
	for(int i=0;i<3;i++)
	p[i]=new int[2];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
			cout << p[i][j] <<" " << endl;
	}
	for(int i=0;i<3; i++)
		delete[] p[i];
	delete[]p;
}






