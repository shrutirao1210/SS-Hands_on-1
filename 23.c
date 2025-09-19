/*
Rao Shruti Mohankumar
MT2025101

23. Write a program to create a Zombie state of the running program.
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    int fd;
    fd = fork();
    if (fd == 0)
    {
        // inside child process as fd will be 0.
        printf("inside child pid= %d\n", getpid());
        printf("parent id= %d\n", getppid());
    }
    else
    {
        // inside parent as fd will be pid of child;

        // to create zombie we have create situation where child process finish execution and wait for parent to remove its processid from process table
        // for that we are using sleep() fun call in parent;
        // to check use zombie process use ps -l or top -b -n1 -u $USER cmd in terminal after child is executed

        sleep(10);
        printf("inside parent pid= %d\n", getpid());
        printf("child pid= %d\n", fd);
    }
    return 0;
}

/*
inside child pid= 18927
parent id= 18926

(after 10 seconds)

inside parent pid= 18926
child pid= 18927
*/
