#include <stdio.h>
#include <math.h>
//#include "parity_in_the_end.c"
int main(){
int num=172;
printf("num= %d\n",num);
int ex=num;
int n;
printf("Enter the number between 1-15");
scanf("%d",&n);
printf("n= %d ",n);
ex=((ex>>5)<<5);
printf("ex= %d\n",ex);
ex=ex|(n<<1);
printf("ex= %d\n",ex);
ex=parity_bits(ex);
printf("ex= %d\n",ex);
 /*   for(int i=4;i>0;i--){
    num=(num&&pow(2,i))?(!(num&&pow(2,i))):(num&&pow(2,i));
    printf("num= %d\n",num);
    }
printf("num= %d\n",num);
num=num|ex;*/
//printf("num= %d\n",num);

}





int parity_bits(int num){
int count=0;
int ex=num;
//printf("Before the loop\n");
int i=1;
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
