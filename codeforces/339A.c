#include <stdio.h>
 
char str[105];

int main()
{
       int res1=0,res2=0,res3=0;
       scanf("%s",&str);
       for(int i=0;str[2*i]!='\0';i++){
              if(str[2*i]=='1')res1++;
              else if(str[2*i]=='2')res2++;
              else res3++;
       }
       int s_i=0;
       for(;s_i<res1;s_i++)
              str[s_i*2]='1';
       for(;s_i<res1+res2;s_i++)
              str[s_i*2]='2';
       for(;s_i<res1+res2+res3;s_i++)
              str[s_i*2]='3';
       printf("%s",str);
       
       return 0;
}
