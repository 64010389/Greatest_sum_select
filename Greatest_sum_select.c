#include<stdio.h>
int main(){
	int i,j,min_index,a,b;
	int number[3];
	int sum;
	printf("Enter Number 3 Number : ");
	for(i=0;i<3;++i){
		scanf("%d",&number[i]);
	}
	for(i=0;i<3;++i){
		min_index = i;
		for(j=i;j<3;++j){
			if(number[j]<number[min_index]){
				min_index=j;
			}
		}
		a=number[i];
		b=number[min_index];
		number[i]=b;
		number[min_index]=a;
	}
	sum=number[1]+number[2];
	printf("The Greatest Sum = %d + %d = %d",number[1],number[2],sum);
}