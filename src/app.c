#include <demo-core.h>
#include <demo-side.h>
#include <stdio.h>

int main(void) {
    printf("demo-join core %d, side %d\n", demo_value(), demo_side_value());
    return 0;
}
