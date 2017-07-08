#include <stdio.h>
 
char str[105];
char ss[105];

int main()
{
      scanf("%s",&str);
      scanf("%s",&ss);
      for(int i=0;str[i]!='\0';i++){
             if(str[i]>=97)
                     str[i]-=32;
              if(ss[i]>=97)
                     ss[i]-=32;
              int k=str[i]-ss[i];
              if(k<0){
                     printf("-1");
                     return 0;
              }
              else if(k>0){
                     printf("1");
                     return 0;
              }
              else
                     ;
      }
      printf("0");
      
      return 0;
}
