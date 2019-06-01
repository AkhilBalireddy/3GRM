#include<iostream>
using namespace std;
main()
{
	int *p,temp,n,tem;
	cout<< "Enter the number of elements u r going to enter in array:-"<<endl;
	cin>> n;

	p=new int[n];
	cout <<"Enter numbers for array:-"<< endl;
	for(int i=0;i<n;i++)
		cin>>p[i];
	
		temp=p[0];
		
	for(int i=1;i<n;i++)
	{

		if(temp<p[i])
		{
			temp=p[i];
		//	cout<< "Largest element is "<< temp<endl;
		}
		else
		{
			tem=p[i];
		//	cout<< "Smallest element is "<< tem << endl;
		}
	}	

			cout<< "Largest element is "<< temp<< endl;
			cout<< "Smallest element is "<< tem << endl;
}
		







