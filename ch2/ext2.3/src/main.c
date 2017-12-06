#include <stdio.h>
#include "stack.h"

int main()
{
    Stack_T s;
    int a = 0;

    s = Stack_new();

    // s = (Stack_T)&a;  // invalid pointer test

    Stack_push(s, (void*)1);
    Stack_push(s, (void*)2);
    Stack_push(s, (void*)3);

    printf("pop: %d\n", (int)Stack_pop(s));
    printf("pop: %d\n", (int)Stack_pop(s));
    printf("pop: %d\n", (int)Stack_pop(s));

	return 0;
}

