#include<stdio.h>
#include<math.h>

/*
    Name: Herrhu
    This is my first cse 251 C programm!!!
*/

int main() {
    double radius = 7.88;
    double height = 12.231;
    
    printf("The cylinder has a radius of %5.2f and a height of %8.lf\n", radius, height);

    int wins = 11;
    int losses = 2;
    printf("MSU had an %d-%d season in 2010!\n", wins, losses);

    printf("My first C programm\n");
    printf("Are't you impressed\n");

    double volume, diameter, hypot;
    int games;
    volume = radius * radius * M_PI * height;
    games = wins + losses;

    double near = 10;
    double far = 22.5;
    hypot = sqrt(near * near + far * far);

    double bottleVolume = 1700;
    double cupVolume = 350;
    int numCups;

    numCups = (int)(bottleVolume / cupVolume);
    printf("Number of cups: %d\n", numCups);
}