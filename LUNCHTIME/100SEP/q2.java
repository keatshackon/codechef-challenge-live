import java.util.*;

class TwoArraySum {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter How Many Number of element you want to Enter in Array First ::");
		int n = sc.nextInt();
		double arr1[] = new double[n];

		System.out.println("Enter element in Array First ::");
		for (int i = 0; i < n; i++) {
			arr1[i] = sc.nextDouble();
		}

		System.out.println("Enter How Many Number of element you want to Enter in Array Second :: ");
		int m = sc.nextInt();
		double arr2[] = new double[m];

		System.out.println("Enter element in Array Second :: ");
		for (int i = 0; i < m; i++) {
			arr2[i] = sc.nextDouble();
		}

		int maxLength = n > m ? n : m;

		double []result = new double[maxLength];

		for (int i = 0; i < maxLength; i++) {
			if (i < m && i < n) {
				result[i] = arr1[i] + arr2[i];
			} else if (i < n) {
				result[i] = arr1[i];
			} else {
				result[i] = arr2[i];
			}
		}

		System.out.println("Resulting Array ::");

		for (int i = 0; i < maxLength; i++) {
			System.out.println(result[i]);
		}

	}
}