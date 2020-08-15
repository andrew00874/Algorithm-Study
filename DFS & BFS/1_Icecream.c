#include <stdio.h>

int n, m;
int graph[1000][1000];

int dfs(int x, int y){
	if (x <= -1 || x >= n || y <= -1 || y >= m){
		return (0);
	}
	if (graph[x][y] == 0){
		graph[x][y] = 1;
		dfs(x - 1, y);
		dfs(x, y - 1);
		dfs(x + 1, y);
		dfs(x, y + 1);
		return (1);
	}
	return (0);
}

int main(){
	int res = 0;
	char tmp[1000];
	scanf ("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf(" %[^\n]", tmp);
		for (int j = 0; j < m; j++)
		{
			graph[i][j] = tmp[j] - '0';
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (dfs(i, j)){
				res += 1;
			}
		}
	}
	printf("%d\n", res);
}
