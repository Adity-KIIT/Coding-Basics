#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int getLength(int x1, int y1, int x2, int y2){
	int length = 0;
	int xdiff = x2 - x1;
	int ydiff = y2 - y1;
   length = (int)sqrt(pow(xdiff, 2) + pow(ydiff, 2));
	return length; 	
}

_Bool checkRightAngle(int side1, int side2, int side3){
	if(((pow(side1, 2) + pow(side2, 2)) == pow(side3, 2)) || ((pow(side2, 2) + pow(side3, 2)) == pow(side1, 2)) || ((pow(side3, 2) + pow(side1, 2)) == pow(side2, 2))){
		return 1;
	}
	return 0;	
}
_Bool isTriangle(int side1, int side2, int side3){
	if((side1 + side2 <= side3 ) || (side2 + side3 <= side1) || (side3 + side1 <= side2)){
		return 0;
	}
	return 1;
}

void main(){
	int x1, y1, x2, y2, x3, y3;

	printf("Enter the points x1 , y1 \n");
	scanf("%d", &x1);
	scanf("%d", &y1);

	printf("Enter the points x2 , y2 \n");
   scanf("%d", &x2);
   scanf("%d", &y2);

	printf("Enter the points x3 , y3 \n");
        scanf("%d", &x3);
        scanf("%d", &y3);

	int side1, side2, side3 = 0;
        side1 = getLength(x1, y1, x2, y2);
        side2 = getLength(x2, y2, x3, y3);
        side3 = getLength(x3, y3, x1, y1);

	_Bool istriangle = isTriangle(side1, side2, side3);
	if(istriangle){
		printf("The given points form a triangle.\n");
	}
	else{
		printf("The given points do not form a triangle.\n");
	}

	_Bool isrightangle = checkRightAngle(side1, side2, side3);
       	if(isrightangle){
                printf("The triangle is right angled triangle.\n");
        }
        else{
                printf("The triangle is not right angled triangle.\n");
        }
	

}

