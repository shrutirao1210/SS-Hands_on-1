/*
Rao Shruti Mohankumar
MT2025101

21. Write a program, call fork and print the parent and child process id.
*/
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
int main()
{
    printf("parent process id = %d\n", getpid());
    int cid = fork();
    if(cid) printf("child process id = %d\n", cid);
    return 0;
}

/*
parent process id = 18540
child process id = 18541
*/
