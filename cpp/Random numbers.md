# Random numbers
The easiest way is to use rand(), the distribution is not perfect however. Initialize with srand(time(0)) exactly once, include stdlib.h:

```
#include <stdio.h>
#include <stdlib.h>

srand(time(0)); // assigns seed
int r = rand(); // random integer between 0 and RAND_MAX
```

Usually set to a range using ```% n``` where *n* is the range.