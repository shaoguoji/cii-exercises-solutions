#include <stdio.h>
#include "stack.h"

int main()
{
    Stack_T s;

    s = Stack_new(3);

    Stack_push(s, (void*)1);
    Stack_push(s, (void*)2);
    Stack_push(s, (void*)3);
    // Stack_push(s, (void*)4); // over max size

    printf("pop: %d\n", (int)Stack_pop(s));
    printf("pop: %d\n", (int)Stack_pop(s));
    printf("pop: %d\n", (int)Stack_pop(s));

	return 0;
}

