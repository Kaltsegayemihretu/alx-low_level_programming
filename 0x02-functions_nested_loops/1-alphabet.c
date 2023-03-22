#include "main.h"
	/**
	 * print_alphabet - "print all alphabet in lowercase"
	 * Description: "it will print alphabets"
	 */
	void print_alphabet(void)
	/* Description: "it will print alpahabets"*/
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
