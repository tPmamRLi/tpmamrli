#include <stdio.h>

int main()
{
       int n,  count =1,flag = 1;
       scanf("%d",&n);
       int a[n];
       scanf("%d",&a[0]);
       for(int i =1 ; i<n;i++) 
       {
              scanf("%d",&a[i]);
              if(a[i]>=a[i-1]) {
                     count++;
                     if(flag < count)
                            flag =count;
              }
              else{
                     if(count>flag)
                            flag = count;
                     count =1;
              }
       }
       printf("%d\n",flag);
       return 0;
}
