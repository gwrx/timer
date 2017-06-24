#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc, const char *argv[]) {

	if (argc <= 3) {
		printf("Usage: %s [value] [s/m/h] [message]", argv[0]);
		exit(EXIT_FAILURE);
	}

	int sleeptime = atoi(argv[1]);
	int odd = 1;

	if (*argv[2] == 'm') {
		sleeptime = sleeptime * 60;
	} 
	if (*argv[2] == 'h') {
		sleeptime = sleeptime * 60 * 60;
	} 


	while (sleeptime > 0) {
		printf("sleeping for %d\n", sleeptime);
		if (sleeptime % 2 == 1 && odd == 1) {
			sleeptime = sleeptime + odd;
			odd = 0;
		} else {
			odd = 1;
		}
		sleeptime = sleeptime / 2;
		sleep(sleeptime);
	}


	printf("################# WAKEUP ################# \n");
	printf("#                                        # \n");
	printf("#                                        # \n");
	printf("#                                        # \n");
	printf("      %s\n", argv[3]);
	printf("#                                        # \n");
	printf("#                                        # \n");
	printf("#                                        # \n");
	printf("################# WAKEUP ################# \n");



	return EXIT_SUCCESS;
}
