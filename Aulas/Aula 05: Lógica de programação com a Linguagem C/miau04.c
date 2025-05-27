#include <stdio.h>

void miau(int n);

int main(void)
{
    miau(3);
}

void miau(int n)

{
    for (int i = 0; i < n; i++)
    {
        printf("miau\n");
    }
}