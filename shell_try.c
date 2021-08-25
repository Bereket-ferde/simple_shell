#include "shell.h"

/** 
 * main: prints the PId of the child.
 * 
 * retun nothing.
 * 
 */

int main(void)
{
    int my_pid;
    
    my_pid = getpid();
    printf("My current process id is: %d\n", my_pid);

    return 0;
}
