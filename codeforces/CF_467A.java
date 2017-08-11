import java.util.Scanner;

public class CF_467A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, p, q, count = 0;
		n = sc.nextInt();
		for (int i = 0; i < n; ++i) {
			p = sc.nextInt();
			q = sc.nextInt();
			if(q-p>=2)
				++count;
			
		}
		System.out.println(count);
	}

}
