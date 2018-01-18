#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //variables cash = change owed and u = input of change

    float u;
    int cash;


    // determine how much change is owed
    do
    {
        printf("Please enter how much change is owed: ");
        u = get_float();
    }
    while (u < 0);

    //round the cents
    double round(double u);

    // start a counter to track number of coins
    int x = 0;

    // get rid of decimal
    cash = (u * 100);



    //give quarters
    while (cash >= 25)
    {

        x++;
        cash = cash - 25;
    }

    //give dimes
    while (cash >= 10)
    {

        x++;
        cash = cash - 10;
    }

    //give nickels
    while (cash >= 5)
    {

        x++;
        cash = cash - 5;
    }

    //give pennies
    while (cash >= 1)
    {

        x++;
        cash = cash - 1;
    }

   printf("%d\n", x);
}
