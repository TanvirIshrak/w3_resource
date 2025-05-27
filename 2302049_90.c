#include <stdio.h>
#include<math.h>

int main(){
    int pre_num , post_num, part, i, prime;
    scanf("%d%d",&pre_num,&post_num);

    //identifing palingdrom number
    for(i=pre_num ; i<=post_num ; i++){
        int temp=i;
        int sum=0;  //i took sum here to reset it everytime
        int palingdrom=0;  //i took palingdrom here to reset it everytime
        while(temp!=0){
            part=temp%10;
            sum=sum*10+part;
            temp=temp/10;
        }
        
        if(i==sum) palingdrom=1;

        //identifing prime number
        prime=0;    //i took prime here to reset it everytime
        if(i<=1) prime=1;
        else{
            for(int x=2 ; x<=sqrt(i); x++){
                if(i%x==0){
                    prime=1;
                }
            }
        }

        if(palingdrom==1 && prime==0) printf("%d is both prime and palingdrom\n",i);
    }

    return 0;
}

// for(i=pre_num ; i<=post_num ; i++){
    //     prime=0;
    //     if(i<=1) prime=1;
    //     else{
    //         for(int x=2 ; x<=sqrt(i); x++){
    //             if(i%x==0){
    //                 prime=1;
    //             }
    //         }
    //     }
    // }