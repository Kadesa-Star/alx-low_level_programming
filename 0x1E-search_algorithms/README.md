0x1E. C - Search Algorithms
# 0x1E. C - Search Algorithms

## Description
This project involves implementing various search algorithms in C and understanding their complexities. The goal is to learn how to efficiently search for elements in arrays using different techniques and to understand when to use each method.

## Learning Objectives
By the end of this project, you should be able to explain:
- What is a search algorithm?
- What is a linear search?
- What is a binary search?
- What is the best search algorithm to use depending on your needs?

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should follow the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- Only the `printf` function from the standard library is allowed. Functions like `strdup`, `malloc`, etc., are forbidden.
- All function prototypes should be included in a header file called `search_algos.h`
- All header files should be include guarded

## Files
- `search_algos.h`: Header file containing prototypes for all functions.
- `0-linear.c`: Implementation of the linear search algorithm.
- `1-binary.c`: Implementation of the binary search algorithm.
- `0-O`: File containing the big O notation for linear search.
- `1-O`: File containing the big O notation for binary search.

## Functions
### Linear Search
**Prototype:** `int linear_search(int *array, size_t size, int value);`
- Searches for a value in an array of integers using the Linear search algorithm.
- Returns the first index where the value is located, or `-1` if the value is not found or the array is `NULL`.

### Binary Search
**Prototype:** `int binary_search(int *array, size_t size, int value);`
- Searches for a value in a sorted array of integers using the Binary search algorithm.
- Returns the index where the value is located, or `-1` if the value is not found or the array is `NULL`.

## Compilation
To compile the code, use:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-linear.c -o 0-linear
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-binary.c -o 1-binary

