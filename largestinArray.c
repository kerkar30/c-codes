#include <stdio.h>
int main()
{
    int i, j, temp;
    int num[] = {2, 4, 64, 25, 23, 62, 66, 24, 1, 45};
    int largets;
    for(int i =1; i < 10;i++){
 if(num[i-1]<num[i]){
     largets=num[i-0];
 }else{
     largets=num[i];
 }
    }
  printf("%d",largets)
    
}