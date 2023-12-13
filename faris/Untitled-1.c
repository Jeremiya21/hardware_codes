#include <stdio.h>
int *fib(int );
void main(){
    int n;
    //int output[10];
    printf("enter an input number ");
    scanf("%d",&n);
    int *output=fib(n);
    printf("fibnocii series upto %d is",n);
    for(int i=0;output[i]!=-1;i++){
        printf("%d",output[i]);
    }
    return;
}

int *fib(int n){
    int series[100];
    int a=0,b=1,c;
    int count=0;
    count=count+1;
    series[count]=a;
    while(a+b<n){
        c=a+b;
        count=count+1;
        series[count]=c;
        a=b;
        b=c;

    }
    series[count]=-1;
    return series;
}
