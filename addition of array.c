#include <p18f4550.h>

#include<stdio.h>

#include<xc.h>

void main(void)

{

int i, sum,n;

int number[]={1,2,3,4,5,6,7,8,9,11};

sum=0;

TRISD=0;

for(i=0;i<=9;i++)

{

sum=sum+number[i];

}

PORTD=sum;

} 
