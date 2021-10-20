#include<stdio.h>
int main(){
    int  num =135,r=0;
    while(num!=0){
        r=r*10+num%10;
        num/=10;
    }
 printf("%d",num)
}