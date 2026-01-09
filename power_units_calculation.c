#include <stdio.h>
#include <math.h>
int main()
{
    int unitconsumed, costperunit;
    scanf("%d %d", &unitconsumed, &costperunit);
    if(unitconsumed<1 || unitconsumed>500){
        printf("Invalid input");
    }else if(costperunit<2 || costperunit>10){
        printf("Invalid input");
    }else{
        printf("%0.0f",pow(unitconsumed,costperunit));  }
	return 0;
}
