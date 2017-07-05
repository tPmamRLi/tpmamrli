#include <stdio.h>

int str[55]={0};

int main()
{
       int n , k ;
       scanf("%d%d",&n,&k);
       for(int i=0;i<n;i++){
              scanf("%d",&str[i]);
       }
       int s_0;
       for(int i=0;i<n;i++){
              if(str[i]==0){
                     s_0=i;
                     break;
              }
       }
       if(str[k-1]==0)
              printf("%d",s_0);
       else if(k==n)
              printf("%d",k);
       else{
              int ss = k;
              int num = str[k-1];
              for(int j=0;j<n-k;j++){
                     if(str[k+j]==num)
                            ss++;
                     else
                            break;
              }
              printf("%d",ss);
       }
       return 0;
}
