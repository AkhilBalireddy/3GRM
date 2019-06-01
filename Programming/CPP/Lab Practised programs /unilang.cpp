#include<iostream>
#include<locale>
using namespace std;
main()
{
wchar_t ch[20]={0x0917,0x0941,0x0921};
setlocale(LC_ALL,"");
wcout << ch <<endl;
}



