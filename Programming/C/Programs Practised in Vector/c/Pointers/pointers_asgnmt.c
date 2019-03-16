/*1)
#include<stdio.h>
     int main() 
     {
	int *p = 10;
	printf(" %u\n", (unsigned int)p);
	printf("%d\n",*p);
     }
*//////////////////////////////////////////////////////////

/*2)
#include <stdio.h> 
     int main() 
     {
	int *ptr,a=10;
ptr=&a;
*ptr+=1;

	printf("%d %d\n",*ptr,a);	//11 11
     }
*//////////////////////////////////////////////////////////
/*3)
#include<stdio.h>
     int main()
     {
	int x=-300;
	unsigned char *p;
	p=&x;
	printf("%d\n",*p++);	//212
	printf("%d\n",*p);	//254
     
}*//////////////////////////
 /*4)
#include<stdio.h>
      int main()
      {
	int x = 256;
	char *p = &x;
	*++p = 2;
	printf("%d\n",x);
      }
*///////////////////
/*5)
 #include<stdio.h>
     int main() 
     {
 	int x = 300;
	if(*(char *)&x == 44)
	printf("Little Endian\n");	//result: Little endian
	else
	printf("Big Endian\n");
     }

*///////////
/*
  #include <stdio.h>
        void main()
        {
            int x = 0;
            int *ptr = &5;
            printf("%p\n", ptr);
        }	//error: Lvalue required


*//////////////////////////

 #include<stdio.h>
     int main()
     {
	int const *p = 5;
	int q;
	p = &q;
	printf("%d",++(*p)); 
     }






















