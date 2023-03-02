main.h: Header file containing prototypes for all functions written in the project.

0-strcat.c: C function that concatenates two strings.

Adds a terminating null byte at end.
1-strncat.c: C function that concatenates two strings using at most an inputted number of bytes.

Adds a terminating null byte at end, unless source string is longer than maximum byte number.
2-strncpy.c: C function that copies a string, including the terminating null byte, using at most an inputted number of bytes.

If the length of the source string is less than the maximum byte number, the remainder of the destination string is filled with null bytes.
Works identically to the standard library function strncpy.
3-strcmp.c: C function that compares two strings.

Returns the difference in bytes at point of difference.
Works identically to the standard library function strcmp.
4-rev_array.c: C function that reverses the content of an array of integers.

5-string_toupper.c: C function that changes all lowercase letters of a string to uppercase.

6-cap_string.c: C function that capitalizes all words of a string.

7-leet.c: C function that encodes a string into 1337, without switch or ternary operations and using only one if and two loops.

Letters a and A are replaced by 4.
Leters e and E are replaced by 3.
Letters o and O are replaced by 0.
Letters t and T are replaced by 7.
Letters l and L are replaced by 1.
