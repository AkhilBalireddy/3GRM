#include"header.h"
void recursion(SL *a)
{
//SL *a=hptr;
        if(a)
        {
                recursion(a->next);
                printf("%d %s %f\n",a->roll,a->s,a->mar);
        }

}

