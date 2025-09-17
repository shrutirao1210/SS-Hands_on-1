// Rao Shruti Mohankumar
// MT2025101

/*
1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
c. FIFO (mkfifo Library Function or mknod system call)
*/

#include<stdio.h>
#include<unistd.h>
int main(){
symlink("file","sftl");
}

/*
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 14:56 runls
lrwxrwxrwx 1 shruti-rao shruti-rao     4 Aug 31 14:39 sftl -> file
lrwxrwxrwx 1 shruti-rao shruti-rao     4 Aug 31 14:39 sftlf -> file

*/
