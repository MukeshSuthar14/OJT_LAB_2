#include<stdio.h>
#include<string.h>
int main()
{
	FILE *filePointer;
	char dataToBeWritten[50]="GeeksforGeeks-A Computer Science Portal for Geeks";
	filePointer=fopen("array.c","W");
	if(filePointer==NULL)
	{
		printf("GfgTest.c file failed to open.");
		
	}
	else
	{
		printf("The file is now opened.\n");
		if(strlen(dataToBeWritten)>0)
		{
			fputs(dataToBeWritten,filePointer);
			fputs("\n",filePointer);
		}
		fclose(filePointer);
		printf("Data succesfully written in file array.c\n0");
		printf("The file is now closed");
	}
	return 0;
	
}
