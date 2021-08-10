#include <stdio.h>
#include<sys/types.h>
#include<sys/wait.h>  //1
#include<stdlib.h>
#include<unistd.h>


int main()
{	
	pid_t cpid;
	int  *status=NULL; //2
	
	cpid = fork();

	if( cpid == 0 ) { //CHILD PROCESS
		sleep(20);
		printf("\n*************** This is child process ***************\n ");
		printf("\n\t My process id is : %d", getpid());
		printf("\n\t My Parent process id is : %d\n", getppid());
		
			
		printf("\n*************Child process terminates ***************\n");			
	}
	else { /*Parent process waiting for child process to terminate.*/
		printf("\n\t My process id is : %d", getpid());
		printf("\n\t My Parent process(SHELL) id is : %d\n", getppid());
		cpid=wait(status);
				
	}//end of if-else

	return 0;	
}//end of main
