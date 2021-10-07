//2012143-Q.1
#include<stdio.h>
int main()
{  char num[500];
   printf("enter the number\n");
   gets(num);
   int x,count=0;
   for(int i=0;num[i]!='\0';i++)
   {  if(num[i]=='.') 
      count++;
   }
   if(count!=1)
   printf("invalid");
   else 
   { 
    for(int i=0;num[i]!=0;i++)
     {    if(num[i]=='.')
            x=i;
     } 
     if(num[x+1]!='\0' && num[x-1]!='\0')
        printf("valid");
     else 
        printf("invalid");
     
    }
return 0;
 }   

   
    


