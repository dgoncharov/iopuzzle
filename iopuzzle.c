#include <stdio.h>
#include <unistd.h>

int main()
{
    int i;
    for (i = 0; i < 3; ++i)
    {
        printf("%d\n", i);
        fork();
    }
    return 0;
}


