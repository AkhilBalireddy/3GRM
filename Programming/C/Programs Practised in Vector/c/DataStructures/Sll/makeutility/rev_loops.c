#include"header.h"
void rev_loops(void)
{
        SL *ptr=hptr;
        int i,j,c=count();
        printf("**********Loops**********\n");

        for(i=0;i<c;i++)
        {
                ptr=hptr;
                for(j=0;j<c-1-i;j++) ptr=ptr->next;
                printf("%d %s %f\n",ptr->roll,ptr->s,ptr->mar);
        }
}

