#include<stdio.h>
union U
{
	int i;
	char ch;
	float f;
};
main()
{
	union U u1;
	u1.i=10;
	if(u1.ch==10) printf("we are working on little endian\n");
	else printf("we are working on big endian\n");
}
