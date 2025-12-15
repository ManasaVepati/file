#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs = fopen("fact.c","r");
	if(fs == NULL)
	{
		printf("file not exist");
		exit(0);
	}
	ft = fopen("fact.txt","w");
	if(ft==NULL)
	{
		printf("unable to create");
		exit(0);
	}
	ch = fgetc(fs);
	while(ch!=EOF)
	{
		fputc(ch,ft);
		ch = fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	printf("file success");
	return 0;
}
