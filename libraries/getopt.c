#include <stdio.h>              /* for fprintf() and EOF */
#include <string.h>             /* for strchr() */
#include "getopt.h"             /* consistency check */

/* variables */
int opterr = 1;                 /* getopt prints errors if this is on */
int optind = 1;                 /* token pointer */
int optopt;                     /* option character passed back to user */
char *optarg;                   /* flag argument (or value) */

/* function */
/* return option character, EOF if no more or ? if problem.
	The arguments to the function:
	argc, argv - the arguments to the main() function. An argument of "--"
	stops the processing.
	opts - a string containing the valid option characters.
	an option character followed by a colon (:) indicates that
	the option has a required argument.
*/
int
getopt (int argc, char **argv, char *opts)
{
	static int sp = 1;            /* character index into current token */
	register char *cp;            /* pointer into current token */
	
	if (sp == 1)
	{
		/* check for more flag-like tokens */
		if (optind >= argc || argv[optind][0] != '-' || argv[optind][1] == '\0')
			return EOF;
		else if (strcmp (argv[optind], "--") == 0)
		{
			optind++;
			return EOF;
		}
	}
	
	optopt = argv[optind][sp];
	
	if (optopt == ':' || (cp = strchr (opts, optopt)) == NULL)
	{
		if (opterr)
			fprintf (stderr, "%s: invalid option -- '%c'\n", argv[0], optopt);
		
		/* if no characters left in this token, move to next token */
		if (argv[optind][++sp] == '\0')
		{
			optind++;
			sp = 1;
		}
		
		return '?';
	}
	
	if (*++cp == ':')
	{
		/* if a value is expected, get it */
		if (argv[optind][sp + 1] != '\0')
			/* flag value is rest of current token */
			optarg = argv[optind++] + (sp + 1);
		else if (++optind >= argc)
		{
			if (opterr)
				fprintf (stderr, "%s: option requires an argument -- '%c'\n",
							argv[0], optopt);
			sp = 1;
			return '?';
		}
		else
		/* flag value is next token */
		optarg = argv[optind++];
		sp = 1;
	}
	else
	{
		/* set up to look at next char in token, next time */
		if (argv[optind][++sp] == '\0')
		{
			/* no more in current token, so setup next token */
			sp = 1;
			optind++;
		}
		optarg = 0;
	}
	return optopt;
} 
/* END OF FILE */