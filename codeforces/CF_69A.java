import java.util.Scanner;

public class CF_69A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
//		int x = 0, y = 0, z = 0;
		int[] a = { 0, 0, 0 };
		for (int i = 0; i < n; i++) {
			a[0]+=sc.nextInt();
			a[1]+=sc.nextInt();
			a[2]+=sc.nextInt();
			
		}
		if(a[0]==0 && a[1]==0 && a[2]==0)
			System.out.println("YES");
		else
			System.out.println("NO");
		sc.close();
	}

}
