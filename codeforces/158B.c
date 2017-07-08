#include <stdio.h>

int str[4]={0,0,0,0};

int main()
{
      int n;
      scanf("%d",&n);
      int m,res=0;
      for(int i=0;i<n;i++){
              scanf("%d",&m);
              switch (m){
                     case 4:str[3]++;break;
                     case 3:str[2]++;break;
                     case 2:str[1]++;break;
                     case 1:str[0]++;break;
              }
      }
       res = res+str[3]+str[2]+str[1]/2;     
       str[1]=str[1]%2;
       if(str[1]!=0){
              res++;
              str[0]-=2; 
       }
       if(str[2]<str[0]){
              str[0]=str[0]-str[2];
              res=res+str[0]/4;
              if(str[0]%4!=0)
                     res++;
       }
       printf("%d",res);
       
       return 0;
}
