import java.util.Scanner;

public class CF_41A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char[] first = sc.next().toCharArray();
		char[] second = sc.next().toCharArray();

		if (first.length != second.length) {
			System.out.println("NO");
			return;
		} else {
			for (int i = 0; i < first.length; i++) {
				if (first[i] != second[second.length - i - 1]) {
					System.out.println("NO");
					return;
				}
			}
			System.out.println("YES");
		}
		sc.close();
	}

}
