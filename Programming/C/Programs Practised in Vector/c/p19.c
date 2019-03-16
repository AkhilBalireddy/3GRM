#include<stdio.h>
int main()
{
int num,pos;
printf("enter the number\n");
scanf("%d",&num);
printf("enter bit position\n");
scanf("%d",&pos);
/*printf("before set the number=%d\n",num);
num=num&1<<pos;
printf("after set the number=%d\n",num);
*/
/*printf("before clear the number=%d\n\n",num);
num=num&~(1<<pos);
printf("after clear the number=%d\n\n", num);

*/
printf("before compliment the number=%d\n\n",num);
num=num^1<<pos;

printf("after compliment the number=%d\n\n",num);
}
