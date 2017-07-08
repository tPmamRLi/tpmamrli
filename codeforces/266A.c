#include <stdio.h>

int main()
{
       char str[55];
       int len,min=0;
       scanf("%d",&len);
       scanf("%s",&str);
       int n;
       char first=str[0];
       for(int i=1;i<len;i++){
              if(str[i]==first)
                     min++;
              else
                     first=str[i];
       }
       printf("%d",min);
       
       return 0;
}
