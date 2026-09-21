#include <stdio.h>

int main()
{
    float input, result;
    int ch2, ct;

    do
    {
        printf("\nEnter amount in Rupee: ");
        scanf("%f", &input);

        printf("\nConvert Rupee to:");
        printf("\n1. Rupee");
        printf("\n2. Dollar");
        printf("\n3. Euro");
        printf("\nEnter your choice: ");
        scanf("%d", &ch2);

        switch (ch2)
        {
            case 1:
                result = input;
                printf("\n%.2f Rupee = %.2f Rupee", input, result);
                break;

            case 2:
                result = input / 95;
                printf("\n%.2f Rupee = %.2f Dollar", input, result);
                break;

            case 3:
                result = input / 108;
                printf("\n%.2f Rupee = %.2f Euro", input, result);
                break;

            default:
                printf("\nInvalid Choice");
        }

        printf("\n\nDo you want to continue? Press 1 for Yes: ");
        scanf("%d", &ct);

    } while (ct == 1);

    printf("\n-------------- THANK YOU ---- Rupee Converter --------------");

    return 0;
}