#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *ptr,size,i;
	size=3;
	ptr=(int*)malloc(size*sizeof(int));
	*(ptr+0)=1;
	*(ptr+1)=2;
	*(ptr+2)=3;
	printf("Old memory allocation :\n");
	for(i=0;i<size;i++)
	printf("%d\n",ptr[i]);
	size=10;
	ptr=(int*)realloc(ptr,size*sizeof(int));
	*(ptr+3)=4;
	*(ptr+4)=5;
	*(ptr+5)=6;
	*(ptr+6)=7;
	*(ptr+7)=8;
	*(ptr+8)=9;
	*(ptr+9)=10;
	printf("New allocated memory:\n");
	for(i=0;i<size;i++)
	printf("%d\n",ptr[i]);
	getch();
	return 0;
}
