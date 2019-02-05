#include<stdio.h>
int main(){
   int number, remainder, reverse_number, temparary, lowerlimit, upperlimit;

   printf("Enter the lower limit: ");
   scanf("%d",&lowerlimit);         //to scan the lowerlimit

   printf("Enter the upper limit: ");
   scanf("%d",&upperlimit);         //to scan the upper limit.

   printf("Palindrome numbers between %d and %d are: ",upperlimit,lowerlimit);
   for(number=lowerlimit; number<=upperlimit ;num++)    //loop to rotate upto given number
   {
      temparary=number;
      reverse_number=0;
      while(temp)
     {
         remainder=temparary%10;
         temparary=temparary/10;
         reverse_num=reverse_number*10+remainder;            // Condition for reverse the number
      }
      if(number==reverse_number)
         printf("%d ",number);
   }
   return 0;
}

