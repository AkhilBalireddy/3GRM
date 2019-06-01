#include<iostream>
using namespace std;
namespace first	
{
	int x=10;
	namespace second
	{
		int x=100;
		namespace third
		{
			int x=500;
		}
	}
}
main()

{	
	cout << first ::second :: third::  x<<endl;
}





