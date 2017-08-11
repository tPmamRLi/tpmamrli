import java.util.Scanner;

public class CF_110A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		int count = 0;
		for (int i = 0; i < 18; i++) {
			if (n % 10 == 4 || n % 10 == 7)
				count++;
			if (n / 10 == 0)
				break;
			else
				n = n / 10;
		}
		if (count == 4 || count == 7)
			System.out.println("YES");
		else
			System.out.println("NO");

	}

}
