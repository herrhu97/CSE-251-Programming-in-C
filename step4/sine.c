#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
Simple program to experiment with looping.
*/

int main()
{

    while (true)
    {
        double angle;
        int numSteps = 40, spaceSum = 60;
        double maxAngle = M_PI * 2;
        int i, leftSpaceNum, rightSpaceNum;
        double sinVal;

        printf("Input the number of steps: ");
        scanf("%d", &numSteps);

        if (numSteps <= 2)
        {
            continue;
        }
        else
        {
            for (i = 0; i <= numSteps; i++)
            {
                angle = (double)i / (double)numSteps * maxAngle;
                sinVal = sin(angle);
                printf("%3d: %5.2f ", i, angle);

                leftSpaceNum = spaceSum / 2 + sinVal * spaceSum / 2;
                rightSpaceNum = spaceSum - leftSpaceNum - 1;
                
                while (leftSpaceNum > 0)
                {
                    printf(" ");
                    leftSpaceNum--;
                }

                if (fabs(cos(angle)) <= 0.1) {
                    printf("*");
                }
                else if (angle < M_PI / 2 || (angle > M_PI * 3 / 2 && angle < M_PI * 2))
                {
                    printf("\\");
                }
                else if (angle > M_PI / 2 && angle < M_PI * 3 / 2) {
                    printf("/");
                }
                
                while (rightSpaceNum > 0)
                {
                    printf(" ");
                    rightSpaceNum--;
                }
                printf("\n");
            }
        }
    }
}
