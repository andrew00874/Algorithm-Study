import java.util.*;

public class Change {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int cnt = 0;
		int[]cointypes = {500, 100, 50, 10};
		
		for (int i = 0; i < 4; i++) {
			int coin = cointypes[i];
			cnt += n / coin;
			n %= coin;
		}
		System.out.println(cnt);
	}

}
