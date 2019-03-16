#include"header.h"
int count(void)
{
        SL *abc=hptr;
        int c=0;
        while(abc)
        {
                c++;
                abc=abc->next;
        }
        return c;
}

