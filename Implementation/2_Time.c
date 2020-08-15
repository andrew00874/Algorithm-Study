#include <stdio.h>

int check (int a, int b, int c){
	if (a % 10 == 3 || b / 10 == 3 || b % 10 == 3 || c / 10 == 3 || c % 10 == 3)
		return 1;
	return 0;
}

int main (){
	int cnt = 0;
	int h, m, s, n;
	h = m = s = 0;
	scanf("%d", &n);
	while (h <= n){
		m = 0;
		while (m < 60){
			s = 0;
			while (s < 60){
				if (check(h, m, s))
					cnt++;
				s++;
			}
			m++;
		}
		h++;
	}
	printf("%d", cnt);
}
