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