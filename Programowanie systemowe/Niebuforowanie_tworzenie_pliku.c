#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char* argv[])
{
	
	char buff1[]="abcdefghij";
	char buff2[]="ABCDEFGHIJ";
	
	int fd;
	if((fd = open ("file.nohole", O_CREAT | O_WRONLY | O_TRUNC, 0664))==-1)
	{
		fprintf(stderr,"Couldn't create file\n");
		return 1;
	}
	
	if(write(fd, buff1, 10) != 10)
	{
		fprintf(stderr,"Error\n");
		return 2;
	}
	if(write(fd, buff2, 10)!=10)
		{
			
			fprintf(stderr,"Error\n");
			return 3;
		}
		return 0;
	if(lseek(fd, 0, SEEK_SET) == -1)
	{
		fprintf(stderr, "ERROR - lseek\n");
		return 2;
	}
	
	close(fd);
	
}