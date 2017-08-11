import java.util.Scanner;

public class CF_122A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int in = sc.nextInt();
		
		final int[] ac = {4,7,44,47,77,444,447,474,477,744,747,777};
		
		for(int i=0;i<ac.length;i++) {
			if(in%ac[i]==0 ) {
				System.out.println("YES");
				return ;
			}
		}		
		System.out.println("NO");
	}

}
