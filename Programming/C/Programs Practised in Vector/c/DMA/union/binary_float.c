#include<stdio.h>
union u
{
	int i;
	float f;
};
main()
{
	int pos;
	union u a1;
	a1.f=23.7;
	for(pos=31;pos>=0;pos--)
		printf("%d",a1.i>>pos&1);
	printf("\n\n");
}
