import java.util.Scanner;

public class CF_266B {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int t = sc.nextInt();

		char[] a = sc.next().toCharArray();
		for (int j = 0; j < t; j++) {
			for (int i = 0; i < n-1; i++) {
				if (a[i] == 'B' && a[i + 1] == 'G') {
					a[i] = 'G';
					a[i + 1] = 'B';
					i++;
				}
//				System.out.print(a[i]);
			}
		}
		for(int i =0;i<n;i++) {
			System.out.print(a[i]);
		}
	}

}
