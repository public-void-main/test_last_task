#include <stdio.h>
#include <stdlib.h>
int main(){
    int num=0;char ch;
    printf("Enter a character either w or r");
    scanf("%c",&ch);
    int ex=0;
 //  num=num&((int)pow(2,6)|(int)pow(2,5)|(int)pow(2,4)|(int)pow(2,2)|(int)pow(2,1)|(int)pow(2,0));
 num=clear_bits(num,7,7);
    if(ch=='w'){
        ex=1;
    }
    else
        ex=0;
    ex=ex<<7;
    printf("%d",num|ex);
}
int clear_bits(int num,int start,int end){
    int sum=0;
    for(int i=7;i>=0;i--){
            if(!(start<=i && end<=i))
            sum=sum|(int)pow(2,i);
    }
    return num&sum;
}
