#include <stdio.h>
#include<math.h>

int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;
    printf("Input P(x1,y1):\n");
    scanf("%d %d",&x1,&y1);
    printf("Input Q(x2,y2):\n");
    scanf("%d %d",&x2,&y2);
    printf("Input R(x3,y3):\n");
    scanf("%d %d",&x3,&y3);
    printf("Input S(x4,y4):\n");
    scanf("%d %d",&x4,&y4);
    if(sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) == sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4))){
        printf("PQ and RS are paralles");
    }
    else printf("PS & RS are not parellel");
    return 0;
}


