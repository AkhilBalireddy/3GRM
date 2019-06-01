#include<iostream>
using namespace std;
class aravind
{
	int x;
	int y;
	public:
	void insert_da(int a,int b)
	{
		x=a,y=b;
	}
	void print()
	{
		cout << x <<" "<< y << endl;
	}
}; 
int main()
{
	aravind A1;
	int a,b;
	cout <<"enter a and b values"<<endl;
	cin >> a >> b;
	A1.insert_da(a,b);
	A1.print();
}
