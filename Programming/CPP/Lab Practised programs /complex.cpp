#include<iostream>	//reference
using namespace std;
class my_com
{
	int real;
	int img;
	public:
	void set_da(int a,int b);
	void get_da();
	void add(my_com &A1,my_com &A2);
	my_com& comp_add(my_com A1);
};
void my_com::set_da(int a,int b):real(a),img(b){
};

void my_com::get_da()
{
cout <<"real  = "<<real<<endl;
cout <<"img = "<<img<<endl;
};

void my_com::add(my_com &A1,my_com &A2)
{


}
int main()
{

