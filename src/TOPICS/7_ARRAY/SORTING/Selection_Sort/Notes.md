## Selection Sort
1. Selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element from an unsorted portion of the array and placing it at the beginning of the sorted portion. The algorithm proceeds in the following way:
## Process :
- Find the smallest element in the unsorted portion of the array.
- Swap this element with the first element in the unsorted portion of the array.
- Move the boundary of the sorted portion one element to the right.
- Repeat steps 1-3 until the entire array is sorted.
- Here is an example of how selection sort works on an array of integers:

Initial array: [5, 3, 8, 4, 2]

- The smallest element in the unsorted portion of the array is 2. Swap it with the first element in the unsorted portion to get [2, 3, 8, 4, 5].
- Move the boundary of the sorted portion to the right by one element.
- The smallest element in the new unsorted portion of the array is 3. Swap it with the second element in the unsorted portion to get [2, 3, 8, 4, 5].
- Move the boundary of the sorted portion to the right by one element.
- The smallest element in the new unsorted portion of the array is 4. Swap it with the third element in the unsorted portion to get [2, 3, 4, 8, 5].
- Move the boundary of the sorted portion to the right by one element.
- The smallest element in the new unsorted portion of the array is 5. Swap it with the fourth element in the unsorted portion to get [2, 3, 4, 5, 8].
- Move the boundary of the sorted portion to the right by one element.
- The entire array is now sorted: [2, 3, 4, 5, 8].

## Time Complexity :
- Worst Case : `O(n^2)`
- Avg. Case : `O(n^2)`
- Best Case : `O(n^2)`

### Note : It is an unstable sorting