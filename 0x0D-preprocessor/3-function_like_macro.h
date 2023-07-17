#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * file: 3-function_like_macro.h
 * Desc: Its a header file that computes the absolute value of a
 * number x. It is guarded to avoid the problem of double inclusion.
 */

#define ABS(x) ((x) < 0 ? (-(x)) : (x))

#endif
