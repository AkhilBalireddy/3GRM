#include<iostream>
#include<cstring>
using namespace std;
class A
{
	char *str;
	public:
	A();
	A(const char *);
	A(A&);
	void print();
	void modify();
};

A::A()
{
	cout <<"default constructer"<<endl;
};

A::A(const char *p) {
	cout <<"parameterised constructer"<<endl;
	str = new char [strlen(p)+1];
	strcpy(str,p);
};

A::A(A& temp) {
	cout <<"copy constructer"<<endl;
	str = new char [strlen(temp.str)+1];
	strcpy(str,temp.str);
};

void A::modify() {
	cout<<"modifying "<<endl;
	str[1]='s';
};

void A::print() {
	cout <<str<<endl;
};

main()
{
	A a1("vector"),a2(a1);
	cout <<"**********before******"<<endl;
	a1.print();
	a2.print();
	cout <<"*******after******"<<endl;
	a1.modify();
	a1.print();
	a2.print();
}
