#include<iostream>
using namespace std;
main()
{
	int x=463;
	int *p=&x;
	int **q=&p;
	int *&rv=p;
	int **&rv1=q;
	cout << "p==  " << *p <<endl;
	cout << "q==  " << **q << endl;
	cout << "rv== " << *rv<< endl;
	cout << "rv1== "<< **rv1<< endl;
}
