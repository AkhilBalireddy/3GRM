#include<iostream>
using namespace std;
namespace first
{
	int x=100;
	void test()
	{
		cout<<"test in first"<<endl;
	}
}
namespace second
{
	int x=1000;
	void test()
	{
		cout<<"test in second"<<endl;
	}
}
main()
{
	using namespace second;
	cout<< x <<endl;
	test();
}






