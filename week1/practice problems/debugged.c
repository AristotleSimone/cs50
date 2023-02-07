// Become familiar wih C syntax
// Learn to debug buggy code



// I did it harvard, and i didnt use get_string, i made my own get_string with printf and scanf

#include <cs50.h>
#include <stdio.h>




int main(void)
{
    // Ask for your name and where live
    char name[32];
    char location[64];

    printf("What is your name?\n");
    scanf("%s", name);

    printf("ominously:\nWhere do you live?\n");
    scanf("%s", location);
    

    // Say hello
    printf("Hello, %s, from %s!\n", name, location);
    return 0;
}
