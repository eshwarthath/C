#include <stdio.h>
#include <ctype.h>
int main()
{
    char inputChar;
    scanf("%c",&inputChar);
    if (isdigit(inputChar))
        printf("%d",inputChar);
    else if(isalpha(inputChar))
        printf("%d",inputChar);
    else{
        printf("Invalid input: Not a digit or letter"); }
	return 0;
}
