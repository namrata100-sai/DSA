#include<stdio.h>
void main()
{
    char str[50];
    int vcount=0,dcount=0, ccount=0,spcount =0,wcount=1, i;
    printf("Entre the string  :");
    fgets(str,50,stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A' || str[i]=='E'||str[i]=='O'|| str[i]=='I'||str[i]=='U')
    {
       vcount++;
    } 
    else if(str[i]>= '0' && str[i]<='9')
    {
      dcount++;
    }
    else if(str[i]==' ')
    {
       spcount++;
        wcount++;
    }
     else
    {
        ccount++;
    }
  }
  printf("Vovels = %d",vcount);
  printf(" digits = %d", dcount);
  printf(" space = %d", spcount);
  printf(" words = %d",wcount);
  printf("charecter = %d", ccount);
}
