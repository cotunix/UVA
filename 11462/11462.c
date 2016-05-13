#include <stdio.h>


__inline void fscanl(int *x) {

	register char c = 0;
	while (c<33) {
		c = getchar();
	}
	*x = 0;
	while (c>33)
	{
		*x = (*x << 1) + (*x << 3) + c - 48;
		c = getchar();
	}
}

int main() {
	int read, ppl;
	while (1) {
		int sort[100] = { 0 };
		fscanl(&ppl);
		
		if (ppl == 0)
			break;
		int i = 0;
		for (i; i < ppl; i++) {
			fscanl(&read);
			sort[read]++;
		}
		i = 0;
		char space = 0;
		for (i; i < 100; i++) {			
			int j = 0;
			for (j; j < sort[i]; j++) {
				if (space) {
					printf(" ");					
				}
				space = 1;
				printf("%d", i);
			}
		}
		printf("\n");
	}
	
	return 0;

}