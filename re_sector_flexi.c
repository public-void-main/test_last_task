#include<stdio.h>
#include<math.h>
int main(){
//int lastsector=0;
int num=256;int s;
printf("Enter the sector 0 1 2 3 -1");
scanf("%d",&s);
printf("%d\n",s);
    int ex=clear_bits(ex,0,4);
    ex=clear_bits(ex,7,7);
    ex=ex>>5;
 if(s==-1){
        s= ((ex) == 3)? 0: (ex)+1 ;
    }
//lastsector=s;
s= s<<6;
printf("%d\n",s);
//printf("%d\n",s);

//printf("EX= %d\n",ex);
num=num&((int)pow(2,7)|(int)pow(2,4)|(int)pow(2,3)|(int)pow(2,2)|(int)pow(2,1)|(int)pow(2,0));
printf("%d\n",num);
num=num|s;
printf("Num=%d ",num);
}
int clear_bits(int num,int start,int end){
    int sum=0;
    for(int i=7;i>=0;i--){
            if(!(start<=i && end<=i))
            sum=sum|(int)pow(2,i);
    }
    return num&sum;
}
