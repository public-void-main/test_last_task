#include<stdio.h>
#include <math.h>
int main(){

}
int parity(int num){
int count=0;
int ex=num;
//printf("Before the loop\n");
//int i=1;
while(ex>=1){
    if(ex%2==1){
        count++;
        //printf("in the condition\n");
        if(ex==1)ex=0;
        }
ex=ex/2;
//i++
//printf("In the loop %d\n",count);
}
int parity= count%2 ? 1:0;
printf("After parity  %d/n",parity);
num=num|parity;
//printf("%d",num);
return num;
}
