#include<iostream>
using namespace std;
class A
{ 
	int x,y;
	public:
	A() { };
	A(int a,int b)
	{
		x = a,y = b;
	};
	void print() {
		cout << x << "  " << y << endl;
	};

	A operator++(int) {
		cout << "post increament "<< endl;
		A temp;
		temp.x  = x ,temp.y = y;
		x+=1,y+=1;
		return temp;
	};

	A operator++() {
		cout << "pre increament"<<endl;
		A temp;
		x+=1,y+=1;
		temp.x=x,temp.y = y;
		return temp;
	};

};

main() {
	A obj1(100,200),obj2;
	obj2=++obj1;
	//obj2 = obj1++;
	obj2.print();
};
