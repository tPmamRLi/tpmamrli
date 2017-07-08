#include <stdio.h>

int main()
{
       char str[105];
       scanf("%s",str);
       int flog=0;
       for(int i=1;str[i]!='\0';i++)
              if(str[i]>=0x61)
                     flog=1;
       if(flog==0){
              if(str[0]>=0x61)
                     str[0]-=32;
              else
                     str[0]+=32;
              for(int i=1;str[i]!='\0';i++)
                     str[i]+=32;
       }
       
       printf("%s",str);
       
       return 0;
}
