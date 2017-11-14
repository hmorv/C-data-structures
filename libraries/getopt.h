/*

A library is a roup of functions and declarations, exposed for use by other programs.
the library therefore consists of an interface expressed in a .h file (named the "header")
and an implementation expressed in a .c file

*/

#ifndef GETOPT_H
	#define GETOPT_H

	/* exported variables */
	extern int opterr, optind, optopt;
	extern char *optarg;

	/* exported function */
	int getopt(int, char **, char *);
#endif

/* END OF FILE */

/*

As a general rule, headers contain anything that should be exported, or "seen" by the other modules in a program.
This include macro definitions:
	-structure,
	-union,
	-enumeration declarations,
	-external function declarations
	-global variable declarations

The #ifndef GETOPT_H/#define GETOPT_H trick is colloquially called include guards.
This is used so that if the getopt.h file were included more than once in a translation unit,
the unit would only see the contents once.

*/