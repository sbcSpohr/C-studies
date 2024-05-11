#include <stdio.h>
#include <windows.h>

int main()
{

int type;
printf("\n1. Hours");
printf("\n2. Minutes");
printf("\n3. Seconds");
printf("\nEnter your option: ");
scanf("%i", &type);


int quant;

printf("\nEnter the quantity: ");
scanf("%i", &quant);


int hours, minutes, seconds;

for(hours=0; hours<=24; hours++){

    for(minutes=0; minutes<60; minutes++){

        for(seconds = 0; seconds<60; seconds++){
            Sleep(1000);

            printf("\r%.2i : %.2i : %.2i ", hours, minutes, seconds);

            if(type == 1 && quant <= hours){
                printf("\nFinished");
                return 0;
            }
            else if(type == 2 && quant <= minutes){
                printf("\nFinished");
                return 0;
            }
            else if(type == 3 && quant <= seconds){
                printf("\nFinished");
                return 0;
            }
        }
    }
}

    return 0;
}