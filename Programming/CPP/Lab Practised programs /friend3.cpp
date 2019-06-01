#include<iostream>
using namespace std;
class AA
{
	int a[10];
	public:
	void get_da();
	friend class CC;
};

class BB
{
	int b[10];
	public:
	void get_data();
	friend class CC;
};

class CC
{
	int c[10];
	public:
	void print();
	void addition()
	{	
		AA a1;
		a1.get_da();
		BB b1;
		b1.get_data();
		for(int i=0;i<10;i++)
			c[i]=a1.a[i]+ b1.b[i];
	};
};
	main()
	{
		CC c1;
		c1.addition();
		c1.print();
	};

	void AA::get_da()
	{
		cout <<"enter first array"<<endl;
		for(int i=0;i<10;i++)
			cin >> a[i];
	};

	void BB::get_data()
	{
		cout <<"enter  second array"<<endl;
		for(int i=0;i<10;i++)
			cin >> b[i];		
	};

	void CC::print()
	{
		for(int i=0;i<10;i++)
			cout <<c[i]<<" ";
		cout <<endl;
	};
