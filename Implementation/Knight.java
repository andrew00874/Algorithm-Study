import java.util.*;

public class Knight {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	
	int xpos, ypos;
	String pa = sc.nextLine();
	ypos = pa.charAt(1) - '0';
	xpos = pa.charAt(0) - 'a' + 1;
	int[] dx = {-2, -1, 1, 2, 2, 1, -1, -2};
	int[] dy = {-1, -2, -2, -1, 1, 2, 2, 1};
	int res = 0;
	for (int i = 0; i < 8; i++) {
		int nextX = xpos + dx[i];
		int nextY = ypos + dy[i];
		if (nextX >= 1 && nextX <= 8 && nextY >= 1 && nextY <= 8) {
			res += 1;
		}
	}
	System.out.println(res);
	}
}
