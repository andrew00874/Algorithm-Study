#include <stdio.h>

int main()
{
	int i, n, m, k;
	int temp;
	int first, second, count, res;
	scanf ("%d %d %d", &n, &m, &k);
	int arr[n];
	i = 0;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for(int i = 0 ; i < n ; i ++) {
		for(int j = 0 ; j < n -i -1 ; j ++) {
			if(arr[j] > arr[j+1]) {
            	    temp = arr[j];
                	arr[j] = arr[j+1];
                    arr[j+1] = temp;
    	     	}
		}
 	}
 	first = arr[n - 1];
 	second = arr[n - 2];
 	count = (m / (k + 1)) * k;
 	count += m % (k + 1);
 	res = 0;
 	
 	res += count * first;
 	res += (m - count) * second;
 	printf ("%d", res);
}
