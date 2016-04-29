#include <stdio.h>
#include <math.h>

int isprim(unsigned long z)
{
    unsigned long i;
    for(i=2; i<=z/2; ++i)
    {
        if(!(z%i))
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    unsigned long z, i;
    printf("Zahl:");
    scanf("%lu",&z);
    printf("\nErgebnis:");
    while(z>1)
    {
        printf("\nnaechster durchgang: %lu",z);
        i=2;
        while(1)
        {
            if(!(z%i) && isprim(i))
            {
                printf(" %lu",i);
                z/=i;
                break;
            }
            ++i;
        }
    }       
    printf(" ENDE\n");
    return 0;
}