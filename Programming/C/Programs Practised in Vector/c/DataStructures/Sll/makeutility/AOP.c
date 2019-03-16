#include"header.h"
void AOP(void)
{
        int c=count(),i=0;
        SL *a=hptr;
        SL *p[c];
        while(a)
        {
                p[i++]=a;
                a=a->next;
        }
        printf("count=%d\n",c);
        printf("***********using AOP*************\n");
        for(i=c-1;i>=0;i--)
                printf("%d %s %f\n",p[i]->roll,p[i]->s,p[i]->mar);

}

