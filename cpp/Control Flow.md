# Control Flow
### for loops
```
for (beginning statement; condition; after loop execution)
{
	//execute code here x times
}
```
### while loops

### if-else
```
if (expression)
{
	//execute code here
}
else
{
	//execute this other code
}
```

### switch-case
When the ```break;``` expression at the end of a case is omitted, that leads to a so called *fallthrough*, i.e. the case after it also gets executed, until a break statement is encountered. May be on purpose, but often an error.
```
switch (expression)
{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}