#include <stdio.h>

int main()
{
      int n;
      scanf("%d",&n);
      int a,b,result=0,max=0;
       while(~scanf("%d%d",&a,&b)){
              result=result-a+b;
              if(max<result)
                     max=result;
       }
       printf("%d",max);
       
       return 0;
}
