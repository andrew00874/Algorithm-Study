#include <stdio.h>

int getMin(int arr[], int n) 
{ 
    int res = arr[0]; 
    for (int i = 1; i < n; i++) 
        res = (res < arr[i]) ? res : arr[i]; 
    return res; 
} 

int main()
{
	int n, m, tmp;
	int res = 0;
	scanf ("%d %d", &n , &m);
	int map[n][m];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &map[i][j]);
		}
	}
	for (int i = 0; i < n; i++){
		tmp = getMin(map[i], m);
		res = (res > tmp) ? res : tmp;
	}
	printf("%d", res);
}
