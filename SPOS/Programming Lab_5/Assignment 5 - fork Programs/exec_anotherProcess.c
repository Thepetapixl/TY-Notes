#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#include "defined_function.h"
int main()
{
	pid_t pid;
	int arr[10];
	char * argv_list[] = {NULL};  
	pid=fork();    

	if(pid==0) //child process
	{
		printf("\n This is child process\n");
		execv("./fa",argv_list); //PATH of the executable-ls; Attributes
	}
	else
	{
		sleep(20);  //Un-interruptable
		printf("\n This is parent process\n");
	}
}
