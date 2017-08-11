import java.util.Scanner;

public class CF_580A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
//		int[] a = new int[n];
//		for (int i = 0; i < n; i++) {
//			a[i] = sc.nextInt();
//		}
//		int count = 1, flag = 1;
//		for (int i = 1; i < n; i++) {
//			if (a[i] >= a[i - 1]) {
//				count++;
//				if (flag < count)
//					flag = count;
//			} else {
//				if (flag < count)
//					flag = count;
//				count = 1;
//			}
//		}
//		System.out.println(flag);
		
		int[] a2 = new int[n];
		a2[0] = sc.nextInt();
		int count2 = 1, flag2 = 1;
		for (int i = 1; i < n; i++) {
			a2[i] = sc.nextInt();
			if (a2[i] >= a2[i - 1]) {
				count2++;
				if (flag2 < count2)
					flag2 = count2;
			} else {
				if (flag2 < count2)
					flag2 = count2;
				count2 = 1;
			}
		}
		System.out.println(flag2);
		
	}

}
