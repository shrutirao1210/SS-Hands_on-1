/*
Rao Shruti Mohankumar
MT2025101

/*
    Write a program to run a script at a specific time using a Daemon process.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
int main(int argc, char *argv[])
{
    time_t curr, dead;
    struct tm *deadline;

    time(&curr); // store current time in epoch
    deadline = localtime(&curr);

    // take time from terminal
    deadline->tm_hour = atoi(argv[1]);
    deadline->tm_min = argv[2] == NULL ? 0 : atoi(argv[2]);
    deadline->tm_sec = argv[3] == NULL ? 0 : atoi(argv[3]);

    dead = mktime(deadline); // convert time to epoch

    int cid = fork();
    if (cid == 0)
    {
        // as parent is executed so child becomes orphan using sessid it will become demon process;
        setsid();
        do
        {
            time(&curr); // get curr time
        } while (difftime(dead, curr) > 0);
        // run untill current time becomes deadline
        system("echo Current user=$USER");
    }
    else
    {
        exit(0);
    }
}
