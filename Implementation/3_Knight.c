#include <stdio.h>

int main(void)
{
	int nx, ny, xpos, ypos, res = 0;
	char pa[3];
	int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
	int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
	scanf("%s", pa);
	xpos = pa[0] - 'a' + 1;
	ypos = pa[1] - '0';
	for (int i = 0; i < 8; i++){
		nx = xpos + dx[i];
		ny = ypos + dy[i];
		if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8){
			res += 1;
		}
	}
	printf ("%d", res);
}

