#include <stdio.h>

int main(int argc, char *argv[])
{
	int y;
	int a,b,c,d;
	scanf("%d",&y);
	for(++y;;++y)
	{
		a = y%10;
		b = y/10%10;
		c = y/100%10;
		d = y/1000;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
		{
			printf("%d\n",y);
			return 0;
		}

	}
	return 0;
}
