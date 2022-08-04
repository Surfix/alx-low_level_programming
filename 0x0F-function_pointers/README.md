# 0x0F. C- Function Pointers

## Resources
Read or Watch
- Function Pointer in C
- Pointers to Functions
- Function Pointers in C/C++
- why pointers to functions?
- Everything you need to know about pointers in C

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google

### General
- What are function pointers and how to use them
- what does a function pointer exactly hold
- where does a function pointer point in the virtual memory

## Tasks

0. Whats's my name
write a function that prints a name.
	* prototype: void print_name(char *name, void (*f)(char *));
repo:

GitHub repository: alx-low_level_programming
Directory: 0x0F-function_pointers
File: 0-print_name.c

1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.
	* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
	* where size is the size of the array
	* and action is a pointer to the function you need to use
Repo:

* GitHub repository: alx-low_level_programming
* Directory: 0x0F-function_pointers
* File: 1-array_iterator.c

2. To hell with circumstances; I create opportunities
Write a function that searches for an integer
	* Prototype: int int_index(int *array, int size, int (*cmp)(int));
	* where size is the number of elements in the array array
	* cmp is a pointer to the function to be used to compare values
	* int_index returns the index of the first element for which the cmp function does not return 0
	* if no element matches, return -1
	* if size <=0, return -1
Repo:

* GitHub repository: alx-low_level_programming
* Directory: 0x0F-function_pointers
* File: 2-int_index.c


