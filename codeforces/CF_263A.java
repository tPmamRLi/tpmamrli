import java.io.BufferedInputStream;
import java.util.Scanner;

public class CF_263A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(new BufferedInputStream(System.in));
		
		int[][]  a = new int[5][5];
		int m=0,n=0;
		
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				a[i][j] = sc.nextInt();
			}
		}
		
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if(1==a[i][j]) {
					n = i;
					m = j;
				}
			}
		}
		
		int result = 0;
		if (n < 2)
			n = 2 - n;
		else
			n = n - 2;
		if (m < 2)
			m = 2 - m;
		else
			m = m - 2;
		result = n + m ;
		System.out.println(result);

	}

}
