#include <stdio.h>

char str[105];
char s_f[205];
char vow[]={'a', 'o', 'y','e', 'u','i'};
int kkk(char c){
       int k=0;
       for(int i=0;i<6;i++){
              if(c==vow[i]){
                     k++;
                     break;
              }
       }
       return k;
}
int main()
{
       int len;
       scanf("%s",str);
       for(int i=0;i<=100;i++){
              if(str[i]=='\0'){
                     len = i ;
                     break;
              } 
       }
       for(int i =0;i<len;i++){
              if(str[i]<='Z'&&str[i]>='A')
                     str[i]=str[i]+32;
       }
       int m=1;
       for(int i=0;i<len;i++){
              if(kkk(str[i])==0){
                     s_f[m-1]='.';
                     s_f[m]=str[i];
                     m=m+2;
              }
       }
       printf("%s\n",s_f);
       
       return 0;
}
