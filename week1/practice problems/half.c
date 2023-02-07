// You are to complete the function, half, which calculates exactly half of the bill after tax and tip are added, and returns that value.
// Your function should use the input parameters, bill, tax, and tip, to calculate the final amount. However, since these values are 
// percentages, you’ll have to do some work to convert these to more appropriate formats to use for your calculation.
// The tax should be added to the bill amount before calculating the tip. Finally, you will return exactly half of the full amount, 
// including the bill amount, the tax and the tip.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float bill, half, tax, tip;
    half = 0.5;

    printf("How much was the bill?\nPlease enter as $$.cc: ");
    scanf("%f", &bill);

    printf("How much is the tax?\nIf its 5 percent input 0.05: ");
    scanf("%f", &tax);

    printf("How much will the tip be?\nIf its going to be 15 percent input 0.15: ");
    scanf("%f", &tip);

    float total = bill + (bill*tax) + (bill*tip);
    float half_total = total * half;

    printf("You and your friend will owe %.2f\n", half_total);


    return 0;
}
