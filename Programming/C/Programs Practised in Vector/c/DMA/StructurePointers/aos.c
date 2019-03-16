#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int ro;
	char s[20];
	float f;
};
main()
{
	int i;
	struct stu *p[5];

	for(i=0;i<5;i++)
		p[i]=malloc(sizeof(struct stu));

	for(i=0;i<5;i++)
		scanf("%d %s %f",&p[i]->ro,p[i]->s,&p[i]->f);

	for(i=0;i<5;i++)		
		printf("%d %s %f\n",p[i]->ro,p[i]->s,p[i]->f);
				
}
