import java.util.*;

class Hailstone {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);

		int n = input.nextInt();
		int cnt = 0;
		while (n != 1) {
			if (n % 2 == 0) {
				System.out.print(n + " is even so i take half: " + (n / 2) + "\n");
				n /= 2;
			} else {
				System.out.print(n + " is odd so i make 3n+1: " + (3 * n + 1) + "\n");
				n = 3 * n + 1;
			}
			cnt++;
		}
		System.out.print("There is total " + cnt + " steps to reach 1");
		input.close();
	}

}
