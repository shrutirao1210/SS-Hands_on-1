// Rao Shruti Mohankumar
// MT2025101

/*
2. Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
identify all the process related information in the corresponding proc directory.
*/

#include<stdio.h>
#include<unistd.h>
int main(){
	while(1){
		printf("Running in infinite loop...\n");
		sleep(1);
	}
	return 0;
}
