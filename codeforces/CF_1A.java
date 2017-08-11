    import java.io.*;  
    import java.math.*;  
    import java.util.*;  
    import java.text.*;  
    public class CF_1A  {  
        public static void main(String[] args)  {  
            Scanner cin = new Scanner (new BufferedInputStream(System.in));  
            int n = cin.nextInt();  
       //      int a[] = new int [n];  
       //      for (int i = 0; i < n; i++) a[i] = cin.nextInt();  
       //      Arrays.sort(a);  
       //      for (int i = 0; i < n; i++) 
       //               System.out.print(a[i] + " ");  
       
       
              int m = cin.nextInt();
              int a = cin.nextInt();
              long k , l ;
              if(m%a!=0)k=m/a+1;else k=m/a;
              if(n%a!=0)l=n/a+1;else l=n/a;
              System.out.println((long) (k*l));
        }  
    }  
