/*H************************************************************
 *
 * Main
 *
 * Use this as a template.
 *
 * @author John E Maddox
 *
*************************************************************H*/

#include "example.h"
#include <stdio.h>
#include <common/ring_buffer.h>

int main()
{
    char* hello_txt = hello();
    int value = double_val(2);

    printf("OUTPUT: %s %i\n", hello_txt, value);

    return 0;
}
