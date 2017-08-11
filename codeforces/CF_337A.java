import java.util.Arrays;
import java.util.Scanner;

public class CF_337A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int[] a = new int[m];
		for(int i=0;i<m;i++) {
			a[i] = sc.nextInt();
		}
		Arrays.sort(a);
		int count = a[n-1]-a[0];
		for(int i =0;i<=m-n;i++) {
//			if(a[i+n]-a[i]<count)
//				count = a[i+n-1]-a[i];
			count = a[i+n-1]-a[i]<count?a[i+n-1]-a[i]:count;
		}
		System.out.println(count);
	}

}
