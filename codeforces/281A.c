#include <stdio.h>

int main()
{
       char str[1005];
       scanf("%s",str);
       if(str[0]>=0x61)
              str[0]-=32;
       printf("%s",str);
       
       return 0;
}
