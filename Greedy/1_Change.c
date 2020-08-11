#include <stdio.h>

int main(void)
{
	int i, n, cnt = 0;
	int cointypes[4] = {500, 100, 50, 10};
	int coin;
	
	scanf("%d", &n);
	for (i = 0; i < 4; i++) {
		coin = cointypes[i];
		cnt += n / coin;
		n %= coin;	
	}
	printf("%d", cnt);
}
