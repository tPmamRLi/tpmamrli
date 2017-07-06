#include <stdio.h>
int sk[3]={0,0,0};
int main()
{
      int n;
      int res = 0;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
             scanf("%d%d%d",&sk[0],&sk[1],&sk[2]);
             if(sk[0]+sk[1]+sk[2]>=2)
                     res++;
      }
      printf("%d\n",res);
      
      return 0;
}
