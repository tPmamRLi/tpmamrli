#include <stdio.h>
 
char str[5];
int main()
{
      int n;
      scanf("%d",&n);
      int x =0;
      for(int i=0;i<n;i++){
             scanf("%s",str);
             if(str[1]=='-')
                      x--;
              else
                     x++;
      }
       printf("%d",x);
      
      return 0;
}
