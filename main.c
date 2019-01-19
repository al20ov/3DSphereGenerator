#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int num;
	int i = 0;
	int j = 0;
	double x = 0;
	double y = 0;
	double z = 1;
	double mul = 1;
	FILE *file;

	if (argc != 2) {
		puts("There should be two arguments.");
		return (84);
	}
	num = atoi(argv[1]);
	file = fopen("object.obj", "w+");
	if (num == 0) goto end;
	for (; j < num; j += 1) {
		i = 0;
		z = sin(2.0f * M_PI / num * j);
		mul = cos(2.0f * M_PI / num * j);
		for (; i < num; i += 1) {  
			x = sin(2.0f * M_PI / num * i) * mul;
			y = cos(2.0f * M_PI / num * i) * mul;
			fprintf(file, "v %.15f %.15f %.15f\n", x, y, z);
		}
	}
	end:
	fclose(file);
	return (0);
}
