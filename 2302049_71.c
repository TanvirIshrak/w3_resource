#include <stdio.h>

int main(){
    char str1[100],str2[100];
    int i;
    printf("Input a string:");
    scanf("%s",str1);
    for( i=0 ; str1[i] != '\0' ; i++){
        str2[i]=str1[i];
    } 
    printf("original str: %s\n",str2);
    printf("Number of char :%d\n",i);
    return 0;
}

