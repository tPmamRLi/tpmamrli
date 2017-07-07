#include <stdio.h>
 
char str[105];
int main()
{
       scanf("%s",&str);
       int flog=str[0];
       int res=1;
        
       for(int i=1;i<100;i++){
              if(str[i]==flog)
                     res++;
              else{
                     flog=str[i];
                     res=1;
              }
              if(res==7){
                     printf("YES");
                     return 0;
              }
              if(str[i]!='0'&&str[i]!='1')
                     break;
       }
       printf("NO");
      return 0;
}
