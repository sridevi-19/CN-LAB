#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
 #include <conio.h>
 #include <string.h>
 void main() {
	int i,j,keylen,msglen;
	char input[100], gx[30],temp[30],quot[100],rem[30],key1[30];


	printf("Enter Data: ");
	gets(input);
	printf("Enter G(x): ");
	gets(gx);
	keylen=strlen(gx);
	msglen=strlen(input);
	strcpy(key1,gx);
	for (i=0;i<keylen-1;i++) {
		input[msglen+i]='0';
	}
	for (i=0;i<keylen;i++)
	 temp[i]=input[i];
	for (i=0;i<msglen;i++) {
		quot[i]=temp[0];
		if(quot[i]=='0')
		 for (j=0;j<keylen;j++)
		 gx[j]='0';
		 else
		 for (j=0;j<keylen;j++)
		 gx[j]=key1[j];
		for (j=keylen-1;j>0;j--) {
			if(temp[j]==gx[j])
			 rem[j-1]='0'; else
			 rem[j-1]='1';
		}
		rem[keylen-1]=input[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\nQuotient is ");
	for (i=0;i<msglen;i++)
	 printf("%c",quot[i]);
	printf("\nRemainder is ");
	for (i=0;i<keylen-1;i++)
	 printf("%c",rem[i]);
	printf("\nModified data is: ");
	for (i=0;i<msglen;i++)
	 printf("%c",input[i]);
	for (i=0;i<keylen-1;i++)
	 printf("%c",rem[i]);
	getch();
}
