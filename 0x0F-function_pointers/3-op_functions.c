#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: to the sums
 */
 
 int op_add(int a, int b)
 {
 	return (a + b);
 }
 
 /**
 * op_sub - the Difference of Minuend - Subtrahend numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: to the difference
 */
 
 int op_sub(int a, int b)
 {
 	return (a - b);
 }
 
 /**
 * op_mul - the Product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: to the Product
 */
 int op_mul(int a, int b)
 {
 	return (a * b);
 }
 
 /**
 * op_div - the Quotient of Dividend & Divisor numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: to the Quotient
 */
 int op_div(int a, int b)
 {
 	return (a / b);
 }
 
 /**
 * op_mod - the Remainder of Dividend & Divisor numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: to the Remainder
 */
 int op_mod(int a, int b)
 {
 	return (a % b);
 } 
