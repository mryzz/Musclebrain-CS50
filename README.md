# Harvard CS50 Template

## About this repl

This repl uses the [CS50 library](https://cs50.readthedocs.io/libraries/cs50/c/) for the C Programming Language. 

Learn mor about taking [self-paced CS50 online](https://www.edx.org/course/introduction-computer-science-harvardx-cs50x).

## Usage


```string```

Type representing a C string. Aliased to `char *`.

Example usage:
		
```c
string s = "hello, world!";
```

```c
char get_char(const char *format, ...)
```

    :param format: the :func:`printf`-like format string used to display the prompt
    :param ...: values to be substituted into the format string a la :func:`printf`
    :returns: the :code:`char` equivalent to the line read from stdin, or :macro:`CHAR_MAX` on error

    Prompts user for a line of text from standard input and returns the equivalent :code:`char`;
    if text does not represent a single char, user is reprompted.


Example usage:
		
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
		// attempt to read character from stdin
		char c = get_char("Enter char: ");

		// ensure character was read successfully
		if (c == CHAR_MAX)
		{
				return 1;
		}

		char next = get_char("You just entered %c. Enter another char: ", c);

		if (next == CHAR_MAX)
		{
				return 1;
		}

		printf("The last char you entered was %c\n", next);
}
```


```c
double get_double(const char *format, ...)
```
    
    :param format: the :func:`printf`-like format string used to display the prompt
    :param ...: values to be substituted into the format string a la :func:`printf`

    :returns: the :code:`double` equivalent to the line read from stdin in [:macro:`DBL_MIN`, :macro:`DBL_MAX`), as precisely as possible, or :macro:`DBL_MAX` on error

    Prompts user for a line of text from standard input and returns the equivalent :code:`double`;
    if text does not represent a double or would cause overflow or underflow, user is reprompted.
		
Example usage:

```c
double divide_doubles(void)
{
		// read double from stdin
		double d = get_double("Enter a double: ");

		// make sure we read one successfully
		if (d == DBL_MAX)
		{
				return DBL_MAX;
		}

		double e = get_double("What do you want to divide %lf by? ", d);

		// make sure we don't divide by zero
		if (e == DBL_MAX || e == 0.0)
		{
				return DBL_MAX;
		}

		return i / j;
}
```


```c
int get_int(const char *format, ...)
```
    
    :param format: the :func:`printf`-like format string used to display the prompt
    :param ...: values to be substituted into the format string a la :func:`printf`

    :returns: the :code:`int` equivalent to the line read from stdin in [:macro:`INT_MIN`, :macro:`INT_MAX`) or :macro:`INT_MAX` on error

    Prompts user for a line of text from standard input and returns the equivalent :code:`int`;
    if text does not represent an int or would cause overflow, user is reprompted.

Example usage::

```c
#include <cs50.h>

// Returns the sum of two ints read from stdin, or INT_MAX if there was an error.
int add_ints(void)
{
		// read int from stdin
		int i = get_int("Enter an int: ");

		// make sure we read one successfully
		if (i == INT_MAX)
		{
				return INT_MAX;
		}

		int j = get_int("What do you want to add %d to? ", i);

		if (j == INT_MAX)
		{
				return INT_MAX;
		}

		return i + j;
}
```

```c
float get_float(const char *format, ...)
```
    
    :param format: the :func:`printf`-like format string used to display the prompt
    :param ...: values to be substituted into the format string a la :func:`printf`

    :returns: the :code:`float` equivalent to the line read from stdin in [:macro:`FLT_MIN`, :macro:`FLT_MAX`), as precisely as possible, or :macro:`FLT_MAX` on error

    Prompts user for a line of text from standard input and returns the equivalent float;
    if text does not represent a float or would cause overflow or underflow, user is reprompted.

Example usage:

```c
// Returns the product of two floats, or FLT_MAX on error.
float multiply_floats(void)
{
		// read float from stdin
		float f = get_float("Enter a float: ");

		// make sure we read one successfully
		if (f == FLT_MAX)
		{
				return FLT_MAX;
		}

		float g = get_float("What do you want to multiply %f by? ", f);

		if (g == FLT_MAX)
		{
				return FLT_MAX;
		}

		return f * g;
}
```


```c
long get_long(const char *format, ...)
```
    
    :param format: the :func:`printf`-like format string used to display the prompt
    :param ...: values to be substituted into the format string a la :func:`printf`

    :returns: the :code:`long` equivalent to the line read from stdin in [:macro:`LONG_MIN`, :macro:`LONG_MAX`) or :macro:`LONG_MAX` on error

    Prompts user for a line of text from standard input and returns the equivalent :code:`long`; if text does not represent an int or would cause overflow, user is reprompted.

Example usage:

```c
#include <cs50.h>

... 

// Returns the difference of two longs read from stdin, or LONG_MAX if there was an error.
long subtract_longs(void)
{
		// read long from stdin
		long i = get_long("Enter a long: ");

		// make sure we read one successfully
		if (i == LONG_MAX)
		{
				return LONG_MAX;
		}

		long j = get_long("What do you want to subtract from %ld? ", i);

		if (j == LONG_MAX)
		{
				return LONG_MAX;
		}

		return i - j;
}
```

```c
char *get_string(const char *format, ...)
```

    :param format: the :func:`printf`-like format string used to display the prompt
    :param ...: values to be substituted into the format string a la :func:`printf`

    :returns: the read line as a string sans line endings, or :macro:`NULL` on :macro:`EOF`.

   Prompts user for a line of text from standard input and returns it as a string (:code:`char *`),
   sans trailing line ending. Supports CR (``\r``), LF (``\n``), and CRLF (``\r\n``) as line
   endings. Stores string on heap, but library’s destructor frees memory on program’s
   exit.

Example usage:

```c
int main(void)
{
	 string s = get_string("Enter string: ");

	 // ensure string was read
	 if (s == NULL)
	 {
			 return 1;
	 }

	 string next = get_string("You just entered %s. Enter a new string: ", s);

	 if (next == NULL)
	 {
			 return 1;
	 }

	 printf("Your last string was %s\n", next);
}
```

 