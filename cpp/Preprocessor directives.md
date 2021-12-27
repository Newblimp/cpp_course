# Preprocessor directives
Include standard IO, used almost always:
```#include <stdio.h>```
 ---
 Define a constant (e.g. $\pi$):
 ```#define PI 3.14159```
 Can also define operations, such as (called syntactic sugar):
 ```#define EQ ==```
 Or also used sometimes to define new operations:
 ```#define SQ(x) (x*x)```
 Not recommended, as it may cause unintentional errors.
 ---
 Define a new type, e.g. turn ```enum day``` into ```day```:
 ```typedef enum day day```