#include <stdio.h>

int main(){
    char input[]={'X','M','L'};
    int lenght=sizeof(input)/sizeof(input[0]);
    for( int i=lenght-1; i>=0 ; i--){
        printf("%c ",input[i]);
    }
    
    return 0;
}
