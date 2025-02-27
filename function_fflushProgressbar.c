#include <stdio.h>
#include <unistd.h>

void progressBar(void) {
	for(int i=0; i<=100; i++) {
		printf("Progress: %d%%\r", i);
		fflush(stdout);
		usleep(90000);
	}
}

int main() {
	progressBar();
	printf("\n");
	progressBar();
}