import java.util.*;

public class untilOne {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int res = 0;
		
		while (true) {
			int target = (n / k) * k;
			res += (n - target);
			n = target;
			if (n < k)
				break ;
			res += 1;
			n /= k;
		}
		res += (n - 1);
		System.out.println(res);
	}

}
