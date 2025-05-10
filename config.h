/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int instant = 0;                     /* -n  option; if 1, selects matching item without the need to press enter */
static int center = 1;                      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width = 800;                 /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] =
{
	"monospace:size=10"
};
static const char *prompt      = "Launch: ";      /* -p  option; prompt to the left of input field */

static
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { "#000000", "#e3a84e" },
	[SchemeOut]  = { "#000000", "#00ffff" },
	[SchemeBorder] = { "#000000", "#e3a84e" },
	[SchemeSelHighlight]  = { "#000000", "#e3a84e" },
	[SchemeNormHighlight] = { "#e78a4e", "#222222" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -bw option; size of the window border */
static unsigned int border_width = 2;
