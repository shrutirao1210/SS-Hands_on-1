// Rao Shruti Mohankumar
// MT2025101

/*
1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
c. FIFO (mkfifo Library Function or mknod system call)
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main() {
    int status = mknod("file", __S_IFIFO | 0666, 0);
    if (status == 0) {
        printf("FIFO created successfully.\n");
    } else {
        perror("mknod");
    }
    return 0;
}
/*
FIFO created successfully.
*/
/*
mknod: File exists
*/
