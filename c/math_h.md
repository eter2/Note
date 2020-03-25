# Using <math.h> #

## Pow ##
`double pow(double base, double exponent);`
```c
// pow example
#include <stdio.h>
#include <math.h>       

int main() {
    printf("2 ^ 3 = %f\n", pow(2.0, 3.0));

    return 0;
}
```
Output : `2 ^ 3 = 8`