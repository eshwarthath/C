#include <stdio.h>
int main() {
    int tot_mins, hrs, mins;
    int MINaHOUR = 60;
    int THRESHOLD = 1799;
    scanf("%d", &tot_mins);
    if(tot_mins>THRESHOLD) {
        printf("Invalid input");
    } else {
          hrs = (tot_mins / MINaHOUR);
          mins = (tot_mins % MINaHOUR);
          printf("%d Hours and %d Minutes", hrs, mins);
    }
	return 0;
	
}
