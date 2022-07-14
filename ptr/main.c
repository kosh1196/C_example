#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *words2[] = {"A", "cat", "like", NULL};
    const char **ptr = words2;
    while(*ptr != NULL){
            printf("%s", *ptr);
            ptr++;
    };
    printf("\n");

}
