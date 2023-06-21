#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

int main(void)
{
  char str[] = "_putchar";
  int ch;
  for (ch = 0; ch<8; ch++)
	  _putchar(str[ch]);
  return (0);
}


