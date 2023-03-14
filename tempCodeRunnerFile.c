#include<stdio.h>
int power(int a,int b){
    int result=a;
    for(int n=1;b>n;n++){
        result*=a;
    }
    return result;
}


int main()
{
int array[10]={1,2,3,4,5,6,7,8,9,10} ;
int loop;
for(loop=0,loop<11;loop++)
    printf("array",array[loop]);
return 0;
}