import java.util.*;

public class Time {
	
    public static boolean check(int h, int m, int s) {
        if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3)
            return true;
        return false;
    }
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int cnt = 0;
		int h, m, s;
		int n = sc.nextInt();
		h = m = s = 0;
		while(h <= n) {
			m = 0;
			while (m < 60) {
				s = 0;
				while (s < 60) {
					if (check(h, m, s)) cnt ++;
					s++;
				}
				m++;
			}
			h++;
		}
		
		System.out.println(cnt);
	}

}
