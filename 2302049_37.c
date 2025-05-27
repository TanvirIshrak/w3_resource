#include <stdio.h>

int main(){
    int x,y;
    printf("Input the coordinate(x,y):");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0) printf("Quadrant-i(+,+)");
    else if(x<0 && y>0) printf("Quadrant-ii(-,+)");
    if(x<0 && y<0) printf("Quadrant-iii(-,-)");
    if(x>0 && y<0) printf("Quadrant-iv(+,-)");

    return 0;
}
