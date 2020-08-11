import java.util.*;

public class bignumrule {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int m = sc.nextInt();
		int k = sc.nextInt();
		
		int[] arr = new int[n];
		for (int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		
		Arrays.sort(arr);
		int first = arr[n - 1];
		int second = arr[n - 2];
		
		int cnt = (m / (k + 1)) * k;
		cnt += m % (k + 1);
		
		int res = 0;
		res += cnt * first;
		res += (m - cnt) * second;
		
		System.out.println(res);
	}

}
