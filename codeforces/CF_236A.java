import java.util.Scanner;

public class CF_236A {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		String str = sc.next();

		final int[] a = new int[26];
		int count = 0;

		for (int i = 0; i < str.length(); i++) {
			a[str.charAt(i) - 'a']++;
		}

		for (int i = 0; i < 26; i++) {
			if (a[i] != 0)
				count++;
		}
		if (count % 2 == 0)
			System.out.println("CHAT WITH HER!");
		else
			System.out.println("IGNORE HIM!");
	}

}
