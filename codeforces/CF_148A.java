

import java.util.Scanner;

public class CF_148A {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] a = new int[5];
		for(int i = 0;i<5;i++) {
			a[i] = sc.nextInt();
		}
		int count =0;
		for(int i= 1;i<=a[4];i++) {
			if(i%a[0]==0||i%a[1]==0||i%a[2]==0||i%a[3]==0)
				count++;
		}
		System.out.println(count);
	}
}
