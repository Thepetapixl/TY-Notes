#include <stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>


int main() //Parent process
{	
	pid_t  cpid;
		
	cpid = fork(); //create a clone of the parent process

	if( cpid == 0 ) { //CHILD PROCESS
		
		printf("\n*************** This is child process ***************\n ");
		printf("\n\t My process id is : %d", getpid());
		printf("\n\t My Parent process id is : %d", getppid());		
		printf("\n*************Child process terminates ***************\n");			
	}
	else { //Parent process 
		sleep(50); //uninterruptable
		printf("\n\t My process id is : %d", getpid());
		printf("\n\t Parent's Parent process(shell) id is : %d", getppid()); 
				
	}//end of if-else

	return 0;	
}//end of main
