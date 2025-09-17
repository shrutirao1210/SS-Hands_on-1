/*
Rao Shruti Mohankumar
MT2025101

/*
write a program to execute ls -Rl by the following system calls
a. execl
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
    char *path = "/bin/ls";
    execl(path, "ls", "-Rl", NULL);
    return 0;
}
/*
.:
total 324
-rw-rw-r-- 1 shruti-rao shruti-rao   799 Aug 30  2025 10.c
-rw-r--r-- 1 shruti-rao shruti-rao    30 Aug  9  2025 10txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   899 Aug 30  2025 11.c
-rw-r--r-- 1 shruti-rao shruti-rao    64 Aug  9  2025 11txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   700 Aug 12  2025 12.c
-rw-rw-r-- 1 shruti-rao shruti-rao   685 Aug 30  2025 13.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1069 Sep  6  2025 14.c
-rw-rw-r-- 1 shruti-rao shruti-rao  3852 Aug 30  2025 15.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1747 Aug 31  2025 16a.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1717 Aug 31  2025 16b.c
-rw-rw-r-- 1 shruti-rao shruti-rao   872 Aug 31  2025 17a.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1082 Aug 31  2025 17b.c
-rwx------ 1 shruti-rao shruti-rao     2 Aug 20  2025 17_ticket.txt
-rwx------ 1 shruti-rao shruti-rao     2 Sep 1  2025 17txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   991 Aug 30  2025 18a.c
-rw-rw-r-- 1 shruti-rao shruti-rao   921 Sep  6  2025 18b.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1413 Sep  6  2025 18c.c
-rwx------ 1 shruti-rao shruti-rao    51 Aug 31 14:49 18txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   547 Aug 30  2025 19.c
-rw-rw-r-- 1 shruti-rao shruti-rao    77 Aug  8  2025 1a
-rw-rw-r-- 1 shruti-rao shruti-rao   326 Aug 22  2025 1a.c
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 14:45 1a.out
-rw-rw-r-- 1 shruti-rao shruti-rao   516 Aug 30  2025 1b.c
-rw-rw-r-- 1 shruti-rao shruti-rao   570 Sep  6  2025 1c.c
-rw------- 1 shruti-rao shruti-rao     0 Aug  9  2025 1txt.txt
-rwxrwxr-x 1 shruti-rao shruti-rao 16000 Aug 20  2025 2
-rw-rw-r-- 1 shruti-rao shruti-rao   806 Aug 30  2025 20.c
-rw-rw-r-- 1 shruti-rao shruti-rao   387 Aug 30  2025 21.c
-rw-rw-r-- 1 shruti-rao shruti-rao   519 Aug 29  2025 22.c
-rwx------ 1 shruti-rao shruti-rao    54 Aug 30  2025 22txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao  1077 Aug 30  2025 23.c
-rw-rw-r-- 1 shruti-rao shruti-rao   971 Sep  6  2025 24.c
-rwxrwxr-x 1 shruti-rao shruti-rao 16032 Aug 31  2025 25
-rw-rw-r-- 1 shruti-rao shruti-rao  1571 Aug 31  2025 25.c
-rw-rw-r-- 1 shruti-rao shruti-rao   244 Aug 31  2025 26a.c
-rw-rw-r-- 1 shruti-rao shruti-rao   340 Aug 31  2025 26b.c
-rw-rw-r-- 1 shruti-rao shruti-rao  3360 Sep 2  2025 27a.c
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 14:48 27a.out
-rw-rw-r-- 1 shruti-rao shruti-rao  3494 Aug 31  2025 27b.c
-rw-rw-r-- 1 shruti-rao shruti-rao   402 Aug 31  2025 27c.c
-rw-rw-r-- 1 shruti-rao shruti-rao  3386 Aug 31  2025 27d.c
-rw-rw-r-- 1 shruti-rao shruti-rao  3522 Aug 31  2025 27e.c
-rw-rw-r-- 1 shruti-rao shruti-rao   973 Aug 31  2025 28.c
-rw-rw-r-- 1 shruti-rao shruti-rao  2704 Aug 31  2025 29.c
-rw-rw-r-- 1 shruti-rao shruti-rao   362 Aug 22  2025 2.c
-rw------- 1 shruti-rao shruti-rao     0 Aug  9  2025 2txt.txt
-rwxrwxr-x 1 shruti-rao shruti-rao 16128 Aug 20  2025 3
-rw-rw-r-- 1 shruti-rao shruti-rao  1023 Aug 31  2025 30.c
-rw-rw-r-- 1 shruti-rao shruti-rao   460 Sep  6  2025 3.c
-rw------- 1 shruti-rao shruti-rao     0 Aug 30  2025 3txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   329 Aug 30  2025 4.c
-rw------- 1 shruti-rao shruti-rao     0 Aug  9  2025 4txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   965 Aug 30  2025 5.c
-rw------- 1 shruti-rao shruti-rao     0 Aug  9  2025 5txt.txt
-rw-rw-r-- 1 shruti-rao shruti-rao   572 Aug 30  2025 6.c
-rw-rw-r-- 1 shruti-rao shruti-rao   459 Aug 30  2025 7.c
-rw-rw-r-- 1 shruti-rao shruti-rao   703 Aug 30  2025 8.c
-rw-rw-r-- 1 shruti-rao shruti-rao  1254 Sep 2  2025 9.c
-rwxrwxr-x 1 shruti-rao shruti-rao 16416 Sep 2  2025 a.out
-rw-rw-r-- 1 shruti-rao shruti-rao     0 Aug  9  2025 file
-rwxrwxr-x 1 shruti-rao shruti-rao 16000 Aug 20  2025 infinite
-rwxr--r-- 1 shruti-rao shruti-rao     0 Aug  8  2025 newfile.txt
-rw-rw-r-- 1 shruti-rao shruti-rao     0 Aug 14  2025 README.md
-rwxrwxr-x 1 shruti-rao shruti-rao 15960 Aug 31 14:56 runls
lrwxrwxrwx 1 shruti-rao shruti-rao     4 Aug 31 14:39 sftl -> file
lrwxrwxrwx 1 shruti-rao shruti-rao     4 Aug 31 14:39 sftlf -> file
-rw-rw-r-- 1 shruti-rao shruti-rao     0 Aug  8  2024 sftlh

*/
