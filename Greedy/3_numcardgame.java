import java.util.*;

public class numcardgame {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int res = 0;
		int [][]map = new int[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				map[i][j] = sc.nextInt();
			}
		}
		for(int i = 0;i < n;i++) {
			Arrays.sort(map[i]);
		}
		for(int j = 0;j < n; j++) {
			res = Math.max(res, map[j][0]);
		}
		System.out.println(res);
	}

}
