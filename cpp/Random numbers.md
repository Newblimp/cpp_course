# Random numbers
The easiest way is to use rand(), the distribution is not perfect however. Initialize with srand(time(0)) exactly once, include stdlib.h:

```
#include <stdio.h>
#include <stdlib.h>

srand(time(0)); // assigns seed
int r = rand(); // random integer between 0 and RAND_MAX
```

Usually set to a range using ```% n``` where *n* is the range.

## In C++
Use the following lines:
```
mt19937 generator{random_device{}()};
uniform_int_distribution<> dist(a,b); //creates a random, uniform distribution from a to b

int random_number = dist(generator);
```