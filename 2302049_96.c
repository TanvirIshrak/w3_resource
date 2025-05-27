#include <stdio.h>

int main(){
    int blank=0,tab=0,n_line=0;
    char line;
    scanf("%c",&line);
    for (; (line=getchar()) != EOF;){
        if(line==' ') blank++;
        if(line=='\n') n_line++;
        if(line='\t') tab++;
    }
    printf("Newline=%d\nBlank=%d\nTabs=%d",n_line,blank,tab);
    return 0;
}


