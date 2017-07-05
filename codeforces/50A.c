#include <stdio.h>

int main()
{
      int m , n;
      scanf("%d%d",&m,&n);
       if(n%2==0)
              printf("%d",m*(n/2));
       else
              printf("%d",m*(n/2)+m/2);    
              
       return 0;
}
