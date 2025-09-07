#include <stdio.h>

int main()
{
	float seconds,minute,hour,day;
	seconds=31558150.0;
	
	printf("\nthe earth take 31558150 seconds to complete 1 revolution");
	minute = seconds/60.0;
	printf("\nin minute is %f",minute);
	hour = minute/60.0;
	printf("\nin hour is %f",hour);
	day = hour/24.0;
	printf("\nin day is %f",day);
	
}
