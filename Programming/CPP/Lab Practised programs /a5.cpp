#include<iostream>
using namespace std;
main()
{
int x=123456;
int &rv=x;
int &rv1=rv;
int &rv2=rv1;
cout <<"rv  "<< rv<< endl;
cout <<"rv1 " <<rv1<< endl;
cout <<"rv2 "<<rv2<<endl;
}
