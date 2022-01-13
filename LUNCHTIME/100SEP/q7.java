import java.util.*;

class isPrimeList {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		long n = sc.nextLong();
		long m = sc.nextLong();

		ArrayList<Long> result = new ArrayList<Long>();

		for (long i = n; i <= m; i++) {
			if (IsPrime(i)) {
				result.add(i);
			}
		}

		for (int i = 0; i < result.size() - 1; i++) {
			System.out.print(result.get(i) + ",");
		}
		if (result.size() != 0) {
			System.out.print(result.get(result.size() - 1));
		}
	}
	static boolean IsPrime(long n) {

		if (n < 2) {
			return false;
		}
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}