#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
char pass[13];
int i;

srand(time(NULL));

for (i = 0; i < 12; i++) {
	int j;

	j = rand() % 128;

	if ((j >= 48 && j <= 57) || (j >= 65 && j <= 90) || (j >= 97 && j <= 122)) {
		pass[i] = j;
	} else {
		i--;
	}
}

pass[12] = '\0';

printf("%s\n", pass);

return 0;
}
