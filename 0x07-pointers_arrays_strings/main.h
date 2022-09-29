#ifndef _MAIN_
#define _MAIN_
int _putchar(char c);
/**
 * set_string - sets string to something
 * @s: string to set to
 * @to: set to
 */
void print_diagsums(int *a, int size);
/**
 * print_chessboard - prints board
 * @a: prints a characters
 *
 */
void print_chessboard(char (*a)[8]);
/**
 * _strstr - locates substring
 * @haystack: string to locate substring
 * @needle: string to locate
 * Return: return string found
 */
char *_strpbrk(char *s, char *accept);
/**
 * _memcpy - copies value from src to dest
 * @dest: destination to copy
 * @src: source to copy from
 * @n: amount of times from 0 to copy
 * Return: return string char value
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _memset - set memory to a character
 * @s: value and pointer
 * @b: value to replace at pointers
 * @n: n amount of times to replace
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned
#endif
