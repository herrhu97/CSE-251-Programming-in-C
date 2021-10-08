#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* 
 * Simple lunar lander program.
 * By:  HerrHu
 * 
 * Best Landing: You landed with a velocity of -2.27 Totolly 29 seconds past The amount of remaining fuel is 70.000000  
 * 
 * Build this program incrementally
 * 
 * Conditions:
 * initial status: velocity 0m/s, altitude 100m
 * consume: 1 kilogram/second => 1.5 meter/s/s
 * gravity: 1.63 meter/s/s
 * fuel: 100 kilogram(max consume: 5kilogram/s)
 * final velocity: <= 3 meter/s
 * save as much fuel as you can
 */

int main()
{
    printf("Lunar Lander - (c) 2012, by HerrHu\n");

    double altitude = 100;
    double velocity = 0;
    double fuel = 100;
    double power = 1.5;
    double g = -1.63;
    double burn; // Amount 0f fuel to burn
    int time;

    while (altitude > 0)
    {
        printf("Altitude: %f\n", altitude);
        printf("Velocity: %f\n", velocity);
        printf("You have %f kilograms of fuel\n", fuel);
        printf("Now the time is: %d\n", time);

        bool valid; // Valid data entry flag

        do
        {
            valid = false;

            printf("Home much fuel would you like to burn: ");
            scanf("%lf", &burn);

            if (burn < 0)
            {
                printf("You can't burn negative fuel\n");
            }
            else if (burn > fuel)
            {
                printf("You can't burn fuel you don't have\n");
            }
            else if (burn > 5)
            {
                printf("You can't burn more than 5 kilograms per second\n");
            }
            else
            {
                printf("Burning %.1f kilograms of fuel\n", burn);
                valid = true;
            }
        } while (!valid);

        velocity = velocity + g + power * burn;
        altitude += velocity;
        fuel -= burn;
        time ++;
    }

    printf("You landed with a velocity of %.2f\n", velocity);
    printf("Totolly %d seconds past\n", time);
    printf("The amount of remaining fuel is %f", fuel);
    
    if(fabs(velocity) > 3)
    {
        printf("Your next of kin have been notified\n");
    }
}