#include <stdio.h>

int main(void) {
	int h, m;
	int alarm_h, alarm_m;
	scanf("%d %d", &h, &m);

	if (m >= 45)
		alarm_m = m - 45;
	else
		alarm_m = 60 - (45 - m);

	if (h == 0 && m < 45)
		alarm_h = 23;
	else if (m < 45)
		alarm_h = h - 1;
	else
		alarm_h = h;

	printf("%d %d", alarm_h, alarm_m);
}
