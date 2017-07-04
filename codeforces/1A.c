#include <stdio.h>

int main()
{
       int a=1,n=1,m=1;
       long long x,y;
       scanf("%d%d%d",&n,&m,&a);
       if(n%a==0)
              x=n/a;
       else
              x=n/a+1;
       if(m%a==0)
              y=m/a;
       else
              y=m/a+1;
       long long s = x * y ;
       printf("%I64d",s);
       return 0;
}

