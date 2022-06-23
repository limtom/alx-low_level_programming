#include "main.h"

int chk_palindrome(char *s);
int len_recursion(char *s);

/**
  *is_palindrome - Returns if string is palindrome
  *@s: string to checked
  *Return: integer value
  */
int is_palindrome(char *s)
{
if (*s == '0')
return (1);
return (chk_palindrome(s));
}

/**
  *chk_palindrome - Check if string is palindrome
  *@s: the string to checked
  * Return: integer value
  */
int chk_palindrome(char *s)
{
int l = len_recursion(s) - 1;
if (*s == s[l])
{
s++;
l--;
}
else
{
return (0);
}
return (1);
}

/**
  *len_recursion - Get the length of a string
  *@s: string params
  * Return: interger value
  */
int len_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + len_recursion(s + 1));
}
