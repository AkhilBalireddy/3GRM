#include<iostream>
using namespace std;
class A
{
	int a[5];
	public:
	int & operator[](int index) {
		return a[index];
	};
};
main() {
	A obj;
	cout << "enter data" << endl;
	for(int i=0;i<5;i++) 
		cin >> obj[i];

	for(int i=0;i<5;i++)
		cout << obj[i];
}
