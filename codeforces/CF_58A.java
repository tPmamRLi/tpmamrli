import java.util.Scanner;

public class CF_58A {	
	public static void main(String[] args) {
		
		final char[] a = {'h','e','l','l','o'};
		int count = 0;

		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		
		for(int i=0;i<str.length();++i) {
			if(str.charAt(i) == a[count])
				count++;
			if(count == 5)
				break;
		}
		
		if(count <=4)
			System.out.println("NO");
		else
			System.out.println("YES");		
		
	}

}
