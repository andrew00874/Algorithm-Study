#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *rm_space(char *src){
	int i = 0, j = 0;
	char tmp[200];
	
	while (src[j]){
		if(src[j] != ' ')
			tmp[i++] = src[j++];
		j++;
	}
	tmp[i] = '\0';
	src = tmp;
	return (src);
}

int main (void){
	int n, x, y;
	int dx[4] = {0, 0, -1, 1};
	int dy[4] = {-1, 1, 0, 0};
	char move[5] = {'L', 'R', 'U', 'D'};
	char plan;
	int nx = -1 , ny = -1;
	char tmp[200];
	char *plans;

	scanf(" %d", &n);
	x = y = 1;
	scanf(" %[^\n]", tmp);
	plans = rm_space(tmp);
	for (int i = 0; i < strlen(plans); i++){
		plan = plans[i];
		for (int j = 0; j < 4; j++){
			if (plan == move[j]){
				nx = x + dx[j];
				ny = y + dy[j];
			}
		}
		if (nx < 1 || ny < 1 || nx > n || ny > n)
			continue;
		x = nx;
		y = ny;
	}
	printf ("%d %d\n", x, y);
}

