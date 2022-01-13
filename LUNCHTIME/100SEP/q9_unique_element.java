import java.util.*;

class unique_element {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter How Many Number of element you want to Enter in Array First ::");
		int n = sc.nextInt();
		int arr1[] = new int[n];

		System.out.println("Enter element in Array First ::");
		for (int i = 0; i < n; i++) {
			arr1[i] = sc.nextInt();
		}

		System.out.println("Enter How Many Number of element you want to Enter in Array Second :: ");
		int m = sc.nextInt();
		int arr2[] = new int[m];

		System.out.println("Enter element in Array Second :: ");
		for (int i = 0; i < m; i++) {
			arr2[i] = sc.nextInt();
		}

		ArrayList<Integer>res =  unique_element(arr1, arr2);
		System.out.print(res);
	}

	static ArrayList<Integer> unique_element(int arr1[], int arr2[]) {

		ArrayList<Integer> result = new ArrayList<>();

		for (int i = 0; i < arr1.length; i++) {
			if (!result.contains(arr1[i])) {
				result.add(arr1[i]);
			}
		}
		for (int i = 0; i < arr2.length; i++) {
			if (!result.contains(arr2[i])) {
				result.add(arr2[i]);
			}
		}
		return result;
	}
}