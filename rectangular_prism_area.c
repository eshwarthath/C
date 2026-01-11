#include <stdio.h>
int main()
{
    int length, width, height, surfacearea;
    scanf("%d %d %d", &length, &width, &height);
    if(width>=1 && height>=1 && length>=1 && width<=10 && height<=10 && length<=10){
        surfacearea=2*(width*length+length*height+height*width);
        printf("%d", surfacearea);
    }else{
        printf("Invalid input");
    }   return 0;
}
