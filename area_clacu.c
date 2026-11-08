#include <stdio.h>
/*In this code you can calculate the area of different shapes .
weather it is circle, square, rectangle, triangle.
For area of cirle formula is = 3.14 * r * r
For area of square formula is = a * a
For area of rectangle formula is = l * b
For area of triangle formula is = 0.5 * b * h
hii
*/
int main() {
    int choice;
    float r;
    int area,  a, l, b, ba, h;

    printf("Choose the shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");
    scanf("%d", &choice);



    switch (choice){
        case 1:
        printf("Enter radius to calculate area of cirle: \n");
        scanf("%f",&r);
        
        printf("The area of cirle is: %f\n", 3.14*r*r);
        break;
        case 2:
        printf("Enter the value of side of squre to get area:\n");
        scanf("%d",&a);
        area=a*a;
        printf("The area of square is:%d \n",area);
        break;
        case 3:
        printf("Enter Length:\n");
        scanf("%d",&l);
        printf("Enter breath:\n");
        scanf("%d",&b);
        area = l * b;
        printf("The area of rectangle is: %d\n",area);
        break;
        case 4:
        printf("Enter base of triangle: \n");
        scanf("%d",ba);
        printf("Enter height of triangle: \n");
        scanf("%d",h);
        area=0.5*ba*h;
        printf("The area of triangle is: %d\n",area);
        break;
        default:
        printf("You have enter wrong choise... ");
        

    }


return 0;
}

