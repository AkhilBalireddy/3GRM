#include"header.h"
void add_end(void)
{
        SL *new=malloc(sizeof(SL));
        printf("enter data\n");
        scanf("%d %s %f",&new->roll,new->s,&new->mar);
        new->next=0;
        if(hptr==0)  hptr=last=new;
        else
        {
                last->next=new;
                last=new;
        }
}

