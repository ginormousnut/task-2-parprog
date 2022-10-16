#include <stdio.h>
#include <math.h>
#include <time.h>
//our task is to multiply two 3x3 matrixes

void Conclusion(int a[3][3])
{
    int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%4d", a[i][j]); //sets the width of the output field
            }
            printf("\n");
        }
}

int main()
{
    srand(time(0));//sets the current time as the base, it is needed for different triggering of the random number generator
    
    int i, j, a[3][3], b[3][3], c[3][3], k;

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                a[i][j] = rand() % 20 + 1;
                b[i][j] = rand() % 20 + 1;

            }
        }
    printf("First array(matrix) \n");
    Conclusion(a);

    printf("Second array(matrix) \n");
    Conclusion(b);

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                c[i][j] = 0;

                    for (k = 0; k < 3; k++)
                    {
                        c[i][j] = c[i][j] + a[i][k] * b[k][j];

                    }
            }
        }
    printf("Multiplication of arrays(matrixes) \n");
    Conclusion(c);
    int endtime = clock();//counts the time in beats
    float t = (float)endtime / CLOCKS_PER_SEC;
    printf("Running time of the program: "); //we divided beats/beats per second to translate timing into seconds
    printf("%f", t);
}