#include<stdio.h>
int i=258;
char *cp;
cp=(char *)&i;
printf("%d\n",*cp);
cp=cp+1;
printf("%d\n",*cp);
printf("i=%d\n",i);
}

