#include<stdio.h>
void main()
{
     char a[50],ch;
      int i=0,count=0 ,sp=1;
     printf("Enter the string");
    fgets(a,50,stdin);
    printf("Enter the letter which you want to find");
    scanf("%c",&ch);
   while(a[i]!='\0')
   {
    if(a[i]==' ')

    {
           sp++;

    }
     if(a[i]==ch)
     {
       count++;
     }
       i++;

   }
printf("the letter : %c is repeted : %d times",ch,count);
printf("\nNumber of words is %d",sp);
}
