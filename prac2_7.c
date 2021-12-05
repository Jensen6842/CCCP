#include <stdio.h>
#include <string.h>
int main() {
    char name1[10] = "Joe";
    char name2[10] = "Bloggs";
    char fullname[20];
   
    // TODO: use string manipulation functions to make fullname be "Joe Bloggs".
    
    char space[2] = " ";
    
    strncat(fullname, name1, 3);
    strncat(fullname, space, 1);
    strncat(fullname, name2, 6);
   
    printf("%s\n", fullname); // should print "Joe Bloggs"
}
