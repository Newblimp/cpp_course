# Mergesort implementation
Sample code for implemented mergesort in C++:

```
void print_array(int array[], int how_many)
{
	printf("\n");
	for (int i = 0; i < how_many; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}


void merge(int a[], int b[], int c[], int how_many)
{
	int i = 0, j = 0, k = 0;
	while (i < how_many && j < how_many)
	{
		if (a[i] < b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}
	while (i < how_many)
	{
		c[k++] = a[i++];
	}
	while (j < how_many)
	{
		c[k++] = b[j++];
	}
}

  
void mergesort(int array[], int how_many)
{
	int i = 0, j = 0, k = 1;
	int temp[how_many] = {0};
	for (k = 1; k < how_many-1; k *= 2)
	{
		for (i = 0; i < how_many - k; i += 2*k)
		{
			merge(array + i, array + i + k, temp + i, k);
		}
		for (i = 0; i < how_many; i++)
		{
			array[i] = temp[i];
		}
	}
}


int main(void)
{
	const int SIZE = 16;
	int numbers[SIZE] = {22, 44, 52, 12, 95, 999, 544, 1, 0, 82, 20, 9, 84, 54, 23, 24};
	printf("Still running.");
	mergesort(numbers, SIZE);
}