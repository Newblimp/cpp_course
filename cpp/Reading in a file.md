# Reading in a file
Reading in a file can be done through the use of ```scanf```, an example when reading in integers separated by whitespace is the following: 

```
	FILE *file;
    file = fopen("seal_data","r");

    //read file into array
    int seals[1000];
    int i;
    
    if (file == NULL)
    {
        printf("Error reading the file!\n");
        exit(0);
    }
    for (i = 0; i < 1000; i++)
    {
        fscanf(file, "%d", &seals[i]);
    }

```

Alternatively, if the numbers are separated by commas, the line ```fscanf(file, "%d,", &seals[i])``` can be used.