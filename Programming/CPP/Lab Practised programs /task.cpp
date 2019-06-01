#include<iostream>
#include<cstring>
using namespace std;
class student
{
	int no;
	string s;
	float mar;
	public:
	void set(int ,string ,float);
	void print();
	void sort_name(student (&p)[5]);
	void sort_marks(student (&p)[5]);
	void sort_roll(student (&)[5]);
};

void student::sort_name(student (&p)[5])
{
	int i,j;
	student t;
	for(i=0;i<5-1;i++)
		for(j=i+1;j<5;j++)
			if(p[i].s > p[j].s)
			{	
				t=p[i];
				p[i]=p[j];
				p[j]=t;
//				i--;
			}
};

void student::sort_roll(student (&p)[5])
{
	int i,j;
	student t;
	for(i=0;i<5-1;i++)
		for(j=i+1;j<5;j++)
			if((p[i]).no > (p[j]).no)
			{	
				t=p[i];
				p[i]=p[j];
				p[j]=t;
//				i--;
			}
};

void student::sort_marks(student (&p)[5])
{

	int i,j;
	student t;
	for(i=0;i<5-1;i++)
		for(j=i+1;j<5;j++)
			if((p[i]).mar < (p[j]).mar)
			{	
				t=p[i];
				p[i]=p[j];
				p[j]=t;
//				i--;
			};
}
void student::set(int a,string p,float b)
{
	no=a;
	s=p;
	mar=b;
	print();
};

void student::print()
{
	cout<<"name  :  "<<s<<endl;
	cout<<"roll.no :  "<<no<<endl;
	cout<<"marks  :   "<<mar<<endl<<endl<<endl;
};

int main()
{
	int n;
	student A[5];
	A[0].set(464,"greeshma",74.32);
	A[1].set(463,"aravind",59.84);
	A[2].set(468,"dheemanth",75.12);
	A[3].set(485,"khasim",64.96);
	A[4].set(470,"dinesh",64.28);

	cout <<"enter choice "<<endl<<"1,NAME wise"<<endl<<"2,marks wise"<<endl<<"3,Roll.no wise"<<endl<<endl;
	cin>> n;
	if(n>4)
		cout <<"you entered wrong option"<<endl;
	else if(n==1)
		A[0].sort_name(A);
	else if(n==2)
		A[0].sort_marks(A);
	else if(n==3)
		A[0].sort_roll(A);

	A[0].print();
	A[1].print();
	A[2].print();
	A[3].print();
	A[4].print();
};
