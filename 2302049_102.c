// #include <stdio.h>

// int main(){
//     int A,B,C,maximum,mid,minimum;
//     printf("Input 3 integers:");
//     scanf("%d%d%d",&A,&B,&C);
//     if(A>B && A>C) maximum=A;
//     else if(B>A && B>C) maximum=B;
//     else maximum=C;

//     if(A<B && A<B) minimum=A;
//     else if(B<A && B<C) minimum=B;
//     else minimum=C;

//     if(B<A && A<C || B>A && A>C) mid=A;
//     else if(A<B && B<C || A>B && B>C) mid=B;
//     else mid=C;
//     printf("original series:%d,%d,%d\n",A,B,C);
//     printf("shorted:%d,%d,%d",minimum,mid,maximum);

//     return 0;
// }

#include <stdio.h>

int main(       ){
    int A,B,C,maximum,mid,minimum;
    scanf("%d%d%d",&A,&B,&C);
    if(A>B && A>C) maximum=A;
    else if(B>A && B>C) maximum=B;
    else maximum=C;

    if(A<B && A<B) minimum=A;
    else if(B<A && B<C) minimum=B;
    else minimum=C;

    if(B<A && A<C || B>A && A>C) mid=A;
    else if(A<B && B<C || A>B && B>C) mid=B;
    else mid=C;
    // printf("original series:%d,%d,%d\n",A,B,C);
    printf("%d %d",minimum,maximum);

    return 0;
}

