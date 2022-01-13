import java.util.*;

class sumMatrix {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter The number and Column of Matrix ::");
		int n = sc.nextInt();

		int[][] a = new int[n][n];
		int[][] b = new int[n][n];

		System.out.println("Enter The Element in Matrix First::");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = sc.nextInt();
			}
		}

		System.out.println("Enter The Element in Matrix Second::");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b[i][j] = sc.nextInt();
			}
		}

		int[][] c = new int[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				System.out.print(c[i][j] + "\t");
			}
			System.out.println();
		}


	}
}