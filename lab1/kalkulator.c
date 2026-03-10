#include<stdio.h>
#include<stdlib.h>
float first;
float second;
int operation;
float result;
float prov_result;
int is_the_end = 1;
int main(void)

{
    while (is_the_end != 0)
    {
        printf("Podaj pierwszą liczbę: \n");
        scanf("%f", &first);
        printf("Podaj drugą liczbę: \n");
        scanf("%f", &second);
        printf("Jaka operacja? (+ = 1, -= 2, *= 3, /= 4, ^= 5) \n");
        scanf("%d", &operation);

        switch(operation)
        {
            case 1:
            {
            result = first + second;
            printf("wynik to %f + %f = %f \n", first, second, result);
            break;
            }
            case 2:
            {
            result = first - second;
            printf("wynik to %f - %f = %f \n", first, second, result);
            break;
            }
            
            case 3:
            {
            result = first * second;
            printf("wynik to %f * %f = %f \n", first, second, result);
            break;
            }
            
            case 4:
            {
            if(second == 0)
            {
                printf("nIE! \n");
            }
            else
            {
                result = first / second;
                printf("wynik to %f / %f = %f \n", first, second, result);
            }
           
            break;
            }

            case 5:
            {
            result = 1;
            int i;
            for(i = 0; i < second; i++)
            {
                prov_result = result;
                result = prov_result*first;
            }
            printf("wynik to %f ^%f = %f \n", first, second, result);
            break;
            }
            default:
            {
                break;
            }

        }
        printf("czy chcesz skonczyc? (0 jak tak)");
        scanf("%d", &is_the_end);
           
        
    }  
    return 0;
}