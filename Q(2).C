//2012143 _Q.2
#include<stdio.h>
int main()
{ char email[320];
  printf("enter email address\n");
  gets(email);
  int count1=0;
  int count2=0;
  int x,y;
  for(int i=0;email[i]!='\0';i++)
  {    if(email[i]=='@')
        { count1++;
          x=i; }
       if(email[i]=='.')
        { count2++; 
          y=i;
        }
  }
  if(count1==1 && count2==1 && (y-x)>1 && ((email[0]>=65 || email[0]<=97)||(email[0]>=97 || email[0]<=122)))
  printf("valid");
  else
  printf("invalid");

return 0;
}
