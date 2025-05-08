#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here

    int array[100];
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int sum6 = 0;
    int total = 0;
    float totalfloat = 0; 


    for (int i = 0; i < 100; i++)
    {
        array[i] = (rand() % 6) + 1;
    }


    for (int i = 0; i < 100; i++)
    {
        if (array[i] == 1)
        {
            sum1++;
        }
        else if (array[i] == 2)
        {
            sum2++;
        }
        else if (array[i] == 3)
        {
            sum3++;
        }
        else if (array[i] == 4)
        {
            sum4++;
        }
        else if (array[i] == 5)
        {
            sum5++;
        }
        else
        {
            sum6++;
        }

    }

    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);
    printf("%d\n", sum4);
    printf("%d\n", sum5);
    printf("%d\n", sum6);

    for (int i = 0; i < 100; i++)
    {
        total += array[i];
    }
    printf("%d\n", total);

    
    totalfloat = (total);
    totalfloat = totalfloat / 100; 
    printf("%.1f\n", totalfloat);



    return 0;
}
