#include <stdio.h>

int main(){
    int num,even=0,odd=0,pos=0,neg=0,i;
    printf("Input 7 numbers:");
    for(i=1 ; i<=7 ; i++){
        scanf("%d\n",&num);
        if(num<0 && num%2==0) neg++,even++; 
        else if(num>0 && num%2==0) pos++,even++;
        else if(num<0 && num%2!=0) neg++,odd++; 
        else if(num>0 && num%2!=0) pos++,odd++;
    }
    printf("Number of even values:%d\n",even);
    printf("Number of odd values:%d\n",odd);
    printf("Number of positive values:%d\n",pos);
    printf("Number of negative values:%d\n",neg);
    return 0;
}



//   if(num<0) neg++;
//         else if(num>0) pos++;
//         else if(num%2==0) even++;
//         else if(num%2==0) odd++;
//     }