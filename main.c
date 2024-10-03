#include <stdio.h>
#include "askname.h"

int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
 printf("HelloOo, %s %s!\n", first, last); /* for stash (patch) practice */
 return 0;
}
