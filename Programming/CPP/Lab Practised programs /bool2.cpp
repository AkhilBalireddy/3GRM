#include<iostream>
using namespace std;
bool is_even(int n)
{
	if(n%2==0)
		return true;
	else
		return false;
}
main()
{
	int num;
	cout <<"enter the number"<<endl;
	cin >> num;
	cout << boolalpha;
	cout << is even(num)<<endl;
}


