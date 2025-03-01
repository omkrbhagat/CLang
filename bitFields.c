#include <stdio.h>

struct time {
	unsigned int hours:5;
	unsigned int minutes:6;
	unsigned int seconds:6;
};

int main() {
	struct time t = {10, 35, 5};
	printf("Time: %u:%u:%u\n", t.hours, t.minutes, t.seconds);
}