# Scope
Variables have scope, i.e. they only exist for the length of the code block they are in. It is possible to declare them to behave in a different way with certain keywords:

 - **extern**: Variable will persist throughout the entire execution of the program, including between different files, it becomes a *global* variable
 - **static**: Variable that will keep its value throughout function calls, useful as incrementing variable (?) 