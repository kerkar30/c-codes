#include<stdio.h>
int main(){
    int  num1 =135,r=0;
    while(num1!=0){
        r=r*10+num1%10;
        num1/=10;
    }
 printf("%d",num1);
    return 0;
}
