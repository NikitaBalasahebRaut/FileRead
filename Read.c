// Application to open existing file and read the data from that file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd = 0;
	char name[30] = {'\0'};
	char arr[30] = {'\0'};
	int iRet = 0;
	
	printf("Enter The file name \n");
	scanf("%s",name);
	
	fd = open(name,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("file successfully open with fd : %d\n",fd);
	}
	
	iRet = read(fd,arr,10);
	
	if(iRet == -1)
	{
		printf("Unable to read from file \n");
	}
	else
	{
		printf("data successfully read from the file\n");
	}
	printf("data from the file is : %s\n",arr);
	return 0;
}

/*

output

Enter The file name
Info.txt
file successfully open with fd : 3
data successfully read from the file
data from the file is : janta vidh

*/