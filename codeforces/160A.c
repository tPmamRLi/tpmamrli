#include <stdio.h>
 
void quicksort(int* a, int p,int q)
{
    int i = p;
    int j = q;
    int temp = a[p];
    while(i < j)
    {
        while( a[j] >= temp && j > i ) j--;
        if( j > i ){
            a[i] = a[j];
            i++;
            while(a[i] <= temp && i < j )  i++;
            if( i < j ){
                a[j] = a[i];
                j--;
            }
        }        
    }
    a[i] = temp; 
    for(int k = p; k <= q;k++){
        if( k == i ) 
            continue;
    } 
    if( p < (i-1)) quicksort(a,p,i-1);
    if((j+1) < q ) quicksort(a,j+1,q);    
}

int main()
{
       int n;
       int a[105];
       scanf("%d",&n);
       if(n==1){
              printf("1");
              return 0;
       }
       for(int i=0;i<n;i++)
              scanf("%d",&a[i]);
       quicksort(a,0,n);
       int res1,res2,i=0,j=n-1;
       res1=a[0];
       res2=a[n-1];
       while(i<j){
              while(res1<res2){
                     i++;
                     res1+=a[i];
              }
              if(i!=j)j--;
              res2+=a[j];
       }
       printf("%d",n-j);
       return 0;
}
