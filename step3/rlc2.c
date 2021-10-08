#include<stdbool.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*
    Name: Herrhu
*/

int main() {
    bool valid = true;
    int l, c;
    double wc;

    printf("Input Capacitance (microfarads): ");
    scanf("%d", &c);
    
    if(c <= 0) {
        printf("You moron, you entered a invalid Capacitance!\n");
        c = 1;
    }
    else
        printf("Okay, I guess that's reasonable\n");
    

    printf("Input Inductance (millihenrys): ");
    scanf("%d", &l);
    
    if(l < 0){ 
        printf("You moron, you entered a negative inductance!\n");
        //exit(1);
        valid = false;
    }
    else if(l == 0){
        printf("You are really dumb, you entered zero.\n");
        //exit(1);
        valid = false;
    }
    else
        printf("Okay, I guess that's reasonable\n");

    if(valid) {
        wc = 1.0 / sqrt(l * 0.000001 * c * 0.001) / (2 * M_PI);
        printf("Resonant Frequency is %.3f\n", wc);    
        if(wc > 20 && wc < 20000) {
            printf("This frequency is one I can hear!\n");
        }
    }   
}