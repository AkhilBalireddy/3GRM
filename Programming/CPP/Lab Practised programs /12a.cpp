#include<iostream>
using namespace std;
class A
{
	char *s;
	int n;
	public:
	A(){
		cout <<"constructer :  "<<endl;
		cout <<"enter string"<<endl;
		s=new char[20];
		cin >>s;
	};

	~A(){
		cout <<"destructer  :  "<<endl;
		cout <<(unsigned)this<<endl;
		cout <<(unsigned)&n<<endl;
		delete s;
	};

};

main()
{
	A *ptr;
	ptr =new A;
	cout <<(unsigned)ptr<<endl;
	delete ptr;
}
