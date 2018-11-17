#include<stdio.h>
int main()
{
    int d, m, y;
    int flag=1, isleap=0;
    printf("Enter date(dd/mm/yyyy);");
    scanf("%d %d %d", &d, &m, &y);
    if(y%100!=0 &&y%4==0 || y%400==0)
        isleap=1;
    if(y<1850 || y>2050 || m<1 || m>12 ||d<1 ||d>31)
        flag=0;
    else if(m==2)       /*Check for number of days in feb*/
    {
        if(m==30 || m==31 || ( d==29 && !isleap))
            flag=0;
}
else if (m==4 || m==6 || m==9 || m==11)  /*To Check days in April, june, Sept, Nov*/
{
    if(d==31)
        flag=0;
}
if (flag==0)
    printf("Not a valid date\n");
else
    printf("Valid Date \n");
return 0;

}
