import java.util.Scanner;

public class CF_546A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int k = 0 , w = 0;
		long n = 0 , res = 0;
		k = sc.nextInt();
		n = sc.nextLong();
		w = sc.nextInt();
		
		res = k*w*(w+1)/2;
		res = res - n;
		if(res < 0)
			res = 0;
		System.out.println(res);
		
	}

}
