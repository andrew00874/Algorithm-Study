#include <stdio.h>

int main(){
	int target, n, k, res = 0;
	scanf("%d %d", &n, &k);
	while (1){
		target = (n / k) * k;
		res += (n - target);
		n = target;
		if (n < k)
			break;
		res += 1;
		n /= k;
	}
	res += (n - 1);
	printf("%d\n", res);
}
