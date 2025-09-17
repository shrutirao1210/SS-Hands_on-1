/*
Rao Shruti Mohankumar
MT2025101

5. Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd.
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fds[5];
    char filename[20];

    for (int i = 0; i < 5; i++) {
        sprintf(filename, "%dtxt.txt", i+1);
        fds[i] = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
        
        if (fds[i] == -1) {
            perror("Error creating file");
            return 1;
        } else {
            printf("File descriptor for '%s': %d\n", filename, fds[i]);
        }
    }

    while (1) {
        sleep(1);  
    }

    for (int i = 0; i < 5; i++) {
        close(fds[i]);
    }

    return 0;
}

/*
File descriptor for '1txt.txt': 3
File descriptor for '2txt.txt': 4
File descriptor for '3txt.txt': 5
File descriptor for '4txt.txt': 6
File descriptor for '5txt.txt': 7
*/
