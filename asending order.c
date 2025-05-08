#include<stdio.h>

#include<stdlib.h>

#include<p18f4550.h>

void main(void)

{

int i,j,temp;

TRISA=0;

TRISB=0;

TRISC=0;

TRISD=0;

TRISE=0;

int num[]={10,2,5,1,6};

for(i=0;i<=4;i++)

{

for(j=i+1;j<=4;j++)

{

if (num[i]<num[j])

{

temp=num[i];

num[i]=num[j];

num[j]=temp;

}

}

}

PORTA=num[0];

PORTB=num[1];

PORTC=num[2];

PORTD=num[3];

PORTE=num[4];
}
