import java.util.Scanner;

public class CF_580A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		int count = 1, flag = 1;
		if (n == 1) {
			System.out.println("1");
			return;
		}
		for (int i = 1; i < n; i++) {
			if (a[i] >= a[i - 1]) {
				count++;
				if (flag < count)
					flag = count;
			} else {
				if (flag < count)
					flag = count;
				count = 1;
			}
		}
		System.out.println(flag);
	}

}
