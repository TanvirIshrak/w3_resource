#include <stdio.h>

int main(){
    double celsius,farenheit;
    printf("celsius to Farenheit\n");
    printf("-----------------------------\n");
    printf("Celsius\tFarenheit\t\n");
    for(celsius=0 ; celsius<=150 ; celsius+=10){
        farenheit=((9*celsius)/5)+32;
        printf("%.2lf\t%.2lf\t\n",celsius,farenheit);
    }

    printf("\n");
    
    printf("Farenheit to Celcious\n");
    printf("-----------------------------\n");
    printf("Farenheit\tCelsius\t\n");
    for(farenheit=0 ; farenheit<=150 ; farenheit+=10){
        celsius=5*(farenheit-32)/9;
        printf("%.2lf\t%.2lf\t\n",farenheit,celsius);
    }
    return 0;
}


