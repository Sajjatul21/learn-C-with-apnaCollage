#include <stdio.h>
// write a program to enter price of 3 item print there final cost with their gst;
int main()
{
    float price[3];
    printf("enter 3 prices: ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    
    printf("Total price1: %f \n", price[0]+ (price[0]*0.18));
    printf("Total price2: %f \n", price[0]+ (price[1]*0.18));
    printf("Total price3: %f \n", price[0]+ (price[2]*0.18));
    return 0;
}
