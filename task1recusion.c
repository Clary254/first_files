#include <stdio.h>
#include <math.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string
 * Return: void
 */
void print(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}