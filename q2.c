#include<stdlib.h>
#include<stdio.h>
#include"circle.h"
#include <sys/types.h>     
#include <signal.h>
#include"rectangle.h"
#include"square.h"

int main(){


printf("area of square = %d\n",sqr_area(5));
printf("area of rectangle = %d\n",rect_area(2,3));
printf("area of cicrle = %d\n",cir_area(2));

return 0;
}
