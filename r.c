#include <stdio.h>

typedef struct s_point
{
	int numb[4][4];
} t_point;

int main(int argc, char **argv)
{
	t_point p;

	int x = 4;
	int y = 4;
	int i = 0;
	int j = 0;
	
	while (j < y)
	{
		while (i < x)
		{
			if ((*argv[1] == '4' && *argv[9] == '4') && i == 0 && j == 0)
				p.numb[i][j] = 1;
			else if ((*argv[4] == '4' && *argv[13] == '4') && i == 3 && j == 0)
				p.numb[i][j] = 1;
			else if ((*argv[5] == '4' && *argv[12] == '4') && i == 0 && j == 3)
				p.numb[i][j] = 1;
			else if ((*argv[8] == '4' && *argv[16] == '4') && i == 3 && j == 3)
				p.numb[i][j] = 1;
			else if ((*argv[1] == '1' && *argv[9] == '1') && i == 0 && j == 0)
				p.numb[i][j] = 4;
			else if ((*argv[4] == '1' && *argv[13] == '1') && i == 3 && j == 0)
				p.numb[i][j] = 4;
			else if ((*argv[5] == '1' && *argv[12] == '1') && i == 0 && j == 3)
				p.numb[i][j] = 4;
			else if ((*argv[8] == '1' && *argv[16] == '1') && i == 3 && j == 3)
				p.numb[i][j] = 4;
			else
				p.numb[i][j] = 2;
			i++;
		}
		i = 0;
		j++;
	}

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if (p.numb[0][0] == 1 && p.numb[0][3] == 4)
			{
				p.numb[0][1] = 2;
				p.numb[0][2] = 3;
			}
			else if (p.numb[0][0] == 1 && p.numb[3][0] == 4)
			{
				p.numb[1][0] = 2;
				p.numb[2][0] = 3;
			}
			printf("%d", p.numb[i][j]);
			i++;
		}
		if (x == 4)
			printf("\n");
		i = 0;
		j++;
	}
	return 0;
}
