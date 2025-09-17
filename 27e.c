/*
Rao Shruti Mohankumar
MT2025101

/*
write a program to execute ls -Rl by the following system calls
d. execvp
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    // it will use environment variable PATH to run executable PATH .
    // it does not required entire file path as we did in execl().
    char *path = "ls";
    char *argv[] = {path, "-Rl", NULL};
    execvp(path, argv);
    return 0;
}

/*

.:
total 512
-rw-rw-r-- 1 shruti-rao shruti-rao   799 Aug 31 15:42 10.c
-rw-r--r-- 1 shruti-rao shruti-rao    51 Aug 31 16:01 10txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   899 Aug 31 15:49 11.c
-rw-r--r-- 1 shruti-rao shruti-rao   253 Aug 31 15:46 11txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   700 Aug 31 15:53 12.c
-rw-rw-r-- 1 shruti-rao shruti-rao   685 Aug 31 15:53 13.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1069 Aug 31 15:53 14.c
-rw-rw-r-- 1 shruti-rao shruti-rao  3911 Aug 31 15:58 15.c
-rwxrwxr-x 1 shruti-rao shruti-rao 16024 Aug 31 15:55 15.out
-rw-rw-r-- 1 shruti-rao shruti-rao  1747 Aug 31 15:59 16a.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1716 Aug 31 15:59 16b.c
-rw-rw-r-- 1 shruti-rao shruti-rao   871 Aug 31 16:00 17a.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1081 Aug 31 16:00 17b.c
-rwx------ 1 shruti-rao shruti-rao     2 Aug 31 16:00 17_ticket.txt
-rwx------ 1 shruti-rao shruti-rao     2 Aug 31 16:01 17txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   990 Aug 31 16:02 18a.c
-rw-rw-r-- 1 shruti-rao shruti-rao   921 Aug 31 16:02 18b.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1413 Aug 31 16:03 18c.c
-rwx------ 1 shruti-rao shruti-rao   124 Aug 31 16:03 18txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   547 Aug 31 16:04 19.c
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 15:13 1a
-rw-rw-r-- 1 shruti-rao shruti-rao   528 Aug 31 15:16 1a.c
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 15:10 1a.out
-rw-rw-r-- 1 shruti-rao shruti-rao   516 Aug 31 15:20 1b.c
-rw-rw-r-- 1 shruti-rao shruti-rao   570 Aug 31 15:21 1c.c
-rw------- 1 shruti-rao shruti-rao     0 Aug 31 16:01 1txt.txt
-rwxrwxr-x 1 shruti-rao shruti-rao 16000 Aug 20  2025 2
-rw-rw-r-- 1 shruti-rao shruti-rao   806 Aug 31 16:04 20.c
-rw-rw-r-- 1 shruti-rao shruti-rao   386 Aug 31 16:05 21.c
-rw-rw-r-- 1 shruti-rao shruti-rao   518 Aug 31 16:05 22.c
-rwx------ 1 shruti-rao shruti-rao    79 Aug 31 16:05 22txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao  1076 Aug 31 16:06 23.c
-rw-rw-r-- 1 shruti-rao shruti-rao   959 Aug 31 16:10 24.c
-rwxrwxr-x 1 shruti-rao shruti-rao 16128 Aug 31 16:07 24.out
-rwxrwxr-x 1 shruti-rao shruti-rao 16032 Aug 31  2025 25
-rw-rw-r-- 1 shruti-rao shruti-rao  1570 Aug 31 16:10 25.c
-rw-rw-r-- 1 shruti-rao shruti-rao   244 Aug 31 16:11 26a.c
-rw-rw-r-- 1 shruti-rao shruti-rao   340 Aug 31 16:11 26b.c
-rw-rw-r-- 1 shruti-rao shruti-rao  4307 Aug 31 16:14 27a.c
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 14:48 27a.out
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 16:13 27b
-rw-rw-r-- 1 shruti-rao shruti-rao  4870 Aug 31 16:18 27b.c
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 16:20 27c
-rw-rw-r-- 1 shruti-rao shruti-rao   414 Aug 31 16:24 27c.c
-rwxrwxr-x 1 shruti-rao shruti-rao 16008 Aug 31 16:29 27d
-rw-rw-r-- 1 shruti-rao shruti-rao  4881 Aug 31 16:32 27d.c
-rwxrwxr-x 1 shruti-rao shruti-rao 16008 Aug 31 16:33 27e
-rw-rw-r-- 1 shruti-rao shruti-rao  3522 Aug 31 16:32 27e.c
-rw-rw-r-- 1 shruti-rao shruti-rao   973 Aug 31  2025 28.c
-rw-rw-r-- 1 shruti-rao shruti-rao  2704 Aug 31  2025 29.c
-rw-rw-r-- 1 shruti-rao shruti-rao   361 Aug 31 15:32 2.c
-rw------- 1 shruti-rao shruti-rao     0 Aug 31 16:01 2txt.txt
-rwxrwxr-x 1 shruti-rao shruti-rao 16128 Aug 20  2025 3
-rw-rw-r-- 1 shruti-rao shruti-rao  1023 Aug 31  2025 30.c
-rw-rw-r-- 1 shruti-rao shruti-rao   460 Aug 31 15:34 3.c
-rw------- 1 shruti-rao shruti-rao     0 Aug 31 16:01 3txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   329 Aug 31 15:34 4.c
-rw------- 1 shruti-rao shruti-rao     0 Aug 31 16:01 4txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   964 Aug 31 15:35 5.c
-rw------- 1 shruti-rao shruti-rao     0 Aug 31 16:01 5txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   572 Aug 31 15:36 6.c
-rw-rw-r-- 1 shruti-rao shruti-rao   459 Aug 31 15:36 7.c
-rw-rw-r-- 1 shruti-rao shruti-rao   702 Aug 31 15:37 8.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1255 Aug 31 15:42 9.c
-rwxrwxr-x 1 shruti-rao shruti-rao 16416 Sep 2  2025  a.out
-rw-rw-r-- 1 shruti-rao shruti-rao     6 Aug 31 15:13 file
-rwxrwxr-x 1 shruti-rao shruti-rao 16136 Aug 31 15:40 fileinfo
-rwxrwxr-x 1 shruti-rao shruti-rao 16000 Aug 20  2025 infinite
-rwxrwxr-x 1 shruti-rao shruti-rao 16000 Aug 31 15:24 loop
-rwxr--r-- 1 shruti-rao shruti-rao     0 Aug 31 16:21 newfile.txt
-rwxrwxr-x 1 shruti-rao shruti-rao 16120 Aug 31 15:46 prog11
-rw-rw-r-- 1 shruti-rao shruti-rao     0 Aug 14  2025 README.md
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 14:56 runls
lrwxrwxrwx 1 shruti-rao shruti-rao     4 Aug 31 14:39 sftl -> file
lrwxrwxrwx 1 shruti-rao shruti-rao     4 Aug 31 14:39 sftlf -> file
-rw-rw-r-- 1 shruti-rao shruti-rao     0 Aug  8  2025 sftlh
-rwxrwxr-x 1 shruti-rao shruti-rao 16120 Aug 31 15:44 test_dup


*/
