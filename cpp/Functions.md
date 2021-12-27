# Functions
Need to be declared with a return type, e.g. ```int```, and a type for the arguments, e.g. ```void```.

Example function to return fibonacci number:

```
void fibonacci(int n){
	int F_old_old = 0, F_old = 1, F_next = 0;
	printf("Step 1:\t%d\n", 0);
	printf("Step 2:\t%d\n", 1);
	for (int i = 3; i <= n; i++)
	{
		F_next = F_old_old + F_old;
		printf("Step %d:\t%d\n", i, F_next);
		F_old_old = F_old;
		F_old = F_next;
	}
}
```

Often contain some kind of [[Control Flow]].