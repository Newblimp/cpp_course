# Sorting
[[Functions]]

## bubblesort
Bubblesort works by comparing each element to the one preceding it, and swapping the two if the preceding element is larger than the later one, starting at the end of the array. This way the smalles values "bubble up" to the top, sorting the list. Fairly inefficient but simple to implement. 
Of order **O(n*log n)**.
See [[Bubblesort implementation]].

## mergesort
Mergesort works by splitting the array in half until all resulting strings are one element long, and then merging them again until the complete ordered array is obtained. This implementation implies that only arrays of length $2^n$ can be sorted.

The merging of the arrays is done by taking the first element of array ```a```, first element of array ```b```, and then adding the smallest of the two to array ```c```. If ```a``` and ```b``` were already sorted, this results in a sorted array ```c```. Repeating until done results in a sorted array, the algorithm being much more efficient than bubblesort. 
Of order **O(n*log n)**.
See [[Mergesort implementation]].