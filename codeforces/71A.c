#include <stdio.h>

char str[105]="";

int main()
{
       int n ;
       scanf("%d",&n);
       for(int i=0;i<n;i++){
              str[0]='\0';
              scanf("%s",str);
              int m=0;
              char a,b;
              for(int k=0;k<100;k++){
                     if(str[k]=='\0')
                            break;
                     else
                            m++;
              }
              if(m>10){
                     a=str[0];
                     b=str[m-1];
                     printf("%c%d%c\n",a,m-2,b);
              }
              else
                     printf("%s\n",str);              
       }
       return 0;
}
