#include <stdio.h>

void main() {
	char name[4][50];
	int nameLen[4];
	int i, j;
	int cnt = 0;

	i = 0;
	while (i < 4) {
		printf("Enter number %d : ", (i + 1));
		fgets(name[i], sizeof(name), stdin);
		cnt = 0;
		for (j = 0; name[i][j] != '=0'; j++) {
			if (name[i][j] != ' ') {
				cnt++;
			}
		}
		nameLen[i] = cnt - 1;
		nameLen[i][j-1] = '\0';
		i++;
	}
	for (i = 0; i < 4; i++) {
		printf("%d. %s words : ", (i + 1), name[i]);
		printf("%d\n", nameLen[i]);
	}
}