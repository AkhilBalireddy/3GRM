#include"header.h"
void print(void)
{
        SL *ptr=hptr;
        while(ptr)
        {
                printf("%d %s %f\n",ptr->roll,ptr->s,ptr->mar);
                ptr=ptr->next;
        }
}

