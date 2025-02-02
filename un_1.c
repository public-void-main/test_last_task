#include <stdio.h>
#include <math.h>
int parity_bits(int num);
int read_write(int num,char ch);
int sector_bits(int num,int s);
int data_bits(int ex,int n);
int clear_bits(int num,int start,int end);

int main(){
int num=0,s=3,data=11;char ch='w';
num=read_write(num,ch);
num=sector_bits(num,s);
num=data_bits(num,data);
num=parity_bits(num);
printf("%d",num);
}
int parity_bits(int num){
//to count the number of ones and add a parity it in the end to make it an even parity
//we ll get odd numbers if the parity bit is one
    int count=0;
    int ex=num;
    int i=1;
    while(ex>=1){
        if(ex%2==1){
            count++;
            if(ex==1)ex=0;
        }
    ex=ex/2;
    }
    int parity= count%2 ? 1:0;
    //printf("After parity  %d/n",parity);
    num=num|parity;
    return num;
}
int clear_bits(int num,int start,int end){
    int sum=0;
    for(int i=7;i>=0;i--){
            if(!(start<=i && end<=i))
            sum=sum|(int)pow(2,i);
    }
    return (int)num&sum;
}

int read_write(int num,char ch){
 int ex=0;
    num=clear_bits(num,7,7);
    if(ch=='w'){
        ex=1;
    }
    else
        ex=0;
    ex=ex<<7;
    return num|ex;
}
//make it usable separately
int sector_bits(int num,int s){
    //test_binary_op
    //The way to make the sector its is to use the AND to along with zeroes at the places where zeroes are required and
    // rest should be ones
    int ex=num;
    ex=clear_bits(ex,0,4);
    ex=clear_bits(ex,7,7);
    ex=ex>>5;
    if(s==-1){
        s= ((ex) == 3)? 0: (ex)+1 ;
    } s= s<<5;
    num=num&((int)pow(2,7)|(int)pow(2,4)|(int)pow(2,3)|(int)pow(2,2)|(int)pow(2,1)|(int)pow(2,0));//can use the num=clear_bits(num,5,6);
    return (num|s);
}
int data_bits(int ex,int n){
    //convert to binary and add to the number
    //int ex=num;
    ex=((ex>>5)<<5);// can also use ex=ex&((int)pow(2,7),(int)pow(2,6),(int)pow(2,5),(int)pow(2,0));
                    //or use the function ex=clear_bits(ex,1,4);
    ex=ex|(n<<1);
    ex=parity_bits(ex);//clears the parity along with changing the bits
    return ex;
}
