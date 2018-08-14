#include <stdio.h>
#include <math.h>

int num;
int i = 0;
int j = 0;
double pi = acos(-1);
double x = 0;
double y = 0;
double z = 1;
double mul = 1;
FILE *file;

int main(void) {
	printf("\nInput how many vertices you want your sphere to have\n");
	scanf("%d", &num);
	file = fopen("object.obj", "w+");
	if(num == 0) goto end;
	while(j < num) {
		i = 0;
		z = sin(2.0f * pi / num * j);
		mul = cos(2.0f * pi / num * j);
		while(i < num) {  
			x = sin(2.0f * pi / num * i) * mul;
			y = cos(2.0f * pi / num * i) * mul;
			fprintf(file, "v %.15f %.15f %.15f\n", x, y, z);
			i++;
		}
		j++;
	}
	end:
	fclose(file);
}
