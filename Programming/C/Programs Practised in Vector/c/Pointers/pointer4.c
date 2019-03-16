/*include<stdio.h>
int main()
{
int i,pos;
double f=23.5;
char *cp;
cp=(char *)&f;
cp=cp+7;
for(i=5;i<=8;i++)
{
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);
printf("\t");
cp=cp-1;
}
printf("\n");
}*/




#include<stdio.h>
int main()
{
int i,pos;
double f=23.5;
int *ip;
ip=(int *)&f;
ip=ip+1;
for(i=1;i<=2;i++)
{
for(pos=31;pos>=0;pos--)
printf(" %d",*ip>>pos&1);
printf("\t");
ip=ip-1;

}
printf("\n");
}



