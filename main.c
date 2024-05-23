#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>


int maxNum(){
    int num=0;
    printf("Enter number ");
    scanf("%d",&num);
    printf("%d\n",num);
    int i,max=-INFINITY,cnt=1,n=0;
    for(i=0;i<num;i++){
        printf("Enter next number ");
        scanf("%d",&n);
        if(n>max){
            max=n;
            cnt=1;
        }else{
            if(n==max){
                cnt++;
            }
        }
    }
    return cnt;
}

int findOdd(){
    int num=0;
    printf("Enter number ");
    scanf("%d",&num);
    printf("%d\n",num);

    int i,n=0,k=0;

    for(i=0;i<num;i++){
        printf("Enter next number ");
        scanf("%d",&n);
        printf("%d\n",n);
        k^=n;
    }

    return k;
}

int cesarCode(){
    int i,m=0;
    char c=0;
    printf("Enter number ");
    scanf("%d%c",&m,&c);
    printf("%d\n",m);

    printf("Enter string ");
    while((c=getchar())!='.'){
        if(c==' '){
            putchar(c);
        }else{
            putchar(c+m);
        }

    }
    putchar('.');
}



int main()
{
    printf("Hello world!\n");

    //1
    printf("%d\n",maxNum());


    //2
    uint32_t num2=0;
    printf("Enter number ");
    scanf("%u",&num2);
    printf("%u\n",num2^0xff000000);


    //3
    printf("%d\n",findOdd());


    //4
    cesarCode();


    return 0;
}
