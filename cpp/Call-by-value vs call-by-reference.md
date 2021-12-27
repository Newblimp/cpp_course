# Call-by-value vs call-by-reference

[[Functions]] can be called by value or by reference. When called by value, the value of the argument is passed to the function, but the variable in the argument itself is left untouched.

In C it's also possible to use call-by-reference, in which the variable itsels (instead of its value) is passed to the function, allowing it to be changed directly. As an example, the function below increments the variable ```a``` by the value of ```b```. In the function body the pointer is *dereferenced*, which means it is *pointing* at the address instead of just being the address itself, and is declared as a pointer in the function declaration (```int * a```).

```
void increment(int * a, int b)
{
    *a += b;
}
```

It can be called using the line below, note that the address of, not the variable ```a``` is passed, therefore ```&``` is used before.

```
increment(&a, b);
```