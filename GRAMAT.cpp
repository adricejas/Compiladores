#line 1 "C:\\GRAMAT.y"


#include "TablaSimbolos.h"
#include "Lexico.h"


#ifndef _YYGRAM_H
#define _YYGRAM_H
#define IF                 258
#define ENDIF              259
#define PRINT              260
#define INTEGER            261
#define ULONGINT           262
#define INTG               263
#define ULONGINTG          264
#define MATRIX             265
#define WHILE              266
#define ELSE               267
#define MAYORIGUAL         268
#define MENORIGUAL         269
#define IGUAL              270
#define DISTINTO           271
#define ASIGNACION         272
#define CARACTER           273
#define ID                 274
#define DECREMENTO         275
#define ALLOW              276
#define TO                 277
#define ANOTACION          278

#line 3 "C:\\Program Files\\Thinkage\\WinYay\\\\yyparse.c"
#ifndef YYSTYPE
	#define YYSTYPE int
#endif
extern int yyparse(void);
extern int yylex(void);
extern void yyerror(const char *);

extern int yychar, yyerrflag;
extern YYSTYPE yyval, yylval;

extern const char	* const yysvar[], * const yystoken[];
extern const short	yyrmap[], yysrmap[], yysmap[];
extern const int	yynvar, yyntoken;
extern int	yyprule(int);
extern int	yypstate(int);
extern int	yypgoto(int);
extern const char *yyptok(int);
extern int yyprule(int);
extern int yypgoto(int);
extern int yypstate(int);
extern int yygsmap(unsigned);

extern void yypdebug(int, int, int);
#define YYdebug_state	0
#define YYdebug_reduce	1
#define YYdebug_read	2
#define YYdebug_error	3
#define YYdebug_char	4
#define YYdebug_discard	5
#define YYdebug_select	6

extern int yygtest(int, int);
#define YYE_NONE	0
#define YYE_SHIFT(n)	(3-(n))
#endif /* defined(_YYGRAM_H) */
static const short yydef[] = {
	  -1,   76,   75,   35,   31,   -5,  -17,   30,   29,  -29, 
	 -33,  -37,  -41,  -45,  -49,  -53,  -57,  -69,  -79,  -89, 
	 -93,  -99, -105, -111, -121, -127
};
static const short yyex[] = {
	   0,    0,   -1,    1,  258,   21,  260,   21,  266,   21, 
	 274,   21,  123,   20,   -1,    1,  258,   17,  260,   17, 
	 266,   17,  274,   17,  123,   16,   -1,    1,   41,   27, 
	  -1,    1,   41,   26,   -1,    1,   41,   25,   -1,    1, 
	  41,   24,   -1,    1,   41,   23,   -1,    1,   41,   22, 
	  -1,    1,  259,   58,   -1,    1,  258,   18,  260,   18, 
	 266,   18,  274,   18,  123,   19,   -1,    1,  263,   10, 
	 264,   10,  276,   10,  123,   10,   -1,    1,  263,    6, 
	 264,    6,  276,    6,  123,    6,   -1,    1,  259,   58, 
	  -1,    1,  125,   73,   59,   73,   -1,    1,  125,   71, 
	  59,   71,   -1,    1,  125,   51,   59,   51,   -1,    1, 
	 263,    9,  264,    9,  276,    9,  123,    9,   -1,    1, 
	 125,   49,   59,   49,   -1,    1,  263,    5,  264,    5, 
	 276,    5,  123,    5,   -1,    1
};
static const short yyact[] = {
	-118,  274,   -3,   -2, -117,  276,  264,  263, -112, -113, 
	 262,  261, -111,  265, -110,  265, -168,   59, -124, -198, 
	 274,  256, -108,   -3,   -2, -117,  276,  264,  263,  123, 
	-107,  277, -106,  277, -105,  274, -104,  274, -103, -122, 
	-123,  256,   59,   44, -100, -102,  -99, -101,  274,  266, 
	 260,  258, -134,  261, -133,  262,  -97,   91,  -96,   91, 
	-135, -198,  274,  256,  -95,   40,  -94, -163,  -93,  272, 
	 256,   91,  -92, -181,  256,   40,  -91,   40, -165, -100, 
	-102,  -99, -101,  274,  266,  260,  258,  125,  -90,  261, 
	 -89,  261,  -88,  273, -158, -157,   -4,  274,  262,  261, 
	-162, -158, -157,   -4,  274,  262,  261,  256,  -82,   93, 
	 -81,   93,  -80,   41,  -79, -156,  275,   91,  -77,  -78, 
	  47,   42,  -74,  -75,  -76,   93,   45,   43,  -74,  -75, 
	-159, -161,  256,   59,   45,   43,  -74,  -75,  -73,  -72, 
	-148,  -68,  -69,  -70,  -71,  271,  270,  269,  268,  256, 
	  62,   60,   45,   43,   -6,   41,   -7,   41,  -67,   91, 
	 -66,   91, -164,   59,  -64,   91,  -59,  261,  -58,  261, 
	 -74,  -75,  -57,   93,   45,   43,  -74,  -75,   45,   43, 
	 -55,  123,  -54,  123,  -53,   93,  -52,   93,  -51,   91, 
	 -74,  -75,  -50,   93,   45,   43,  -17,  267,  -18,  -46, 
	 123,   59,  -19,  -45,  123,   59,  -43,  272,  -42,  259, 
	 -20, -100, -102,  -99, -101,  274,  266,  260,  258,  125, 
	-174, -100, -102,  -99, -101,  274,  266,  260,  258,  125, 
	-131,  278, -194,  262, -127,  278, -192,  261,  -74,  -75, 
	-182,   93,   45,   43, -180,   59,  -36,  123,  -34,   44, 
	 -33,  -32,  125,   59,  -31,   44,  -30,  -29,  125,   59, 
	 -74,  -75, -160,   59,   45,   43,  -27,  259, -172,  262, 
	 -24,   59, -170,  261,  -26,   59, -177, -100, -102,  -99, 
	-101,  274,  266,  260,  258,  125, -179,   59, -132,  278, 
	-128,  278,   -1
};
static const short yypact[] = {
	   8,   13,   15,  116,  120,  166,  166,  120,  120,  178, 
	 178,  178,  178,  178,  178,  197,  210,  231,  235,  197, 
	 249,  255,  249,  289,  255,  291,  287,  281,  275,  237, 
	 273,  271,  233,  269,  267,   48,  263,  258,  252,   48, 
	 247,  245,   97,  241,  237,  233,  225,  215,  209,  207, 
	  97,  204,  200,   48,   48,  193,  189,  187,  185,  183, 
	  48,  181,   48,   97,  173,  169,  167,   97,   97,   97, 
	  97,   97,   97,   97,   97,  165,   97,   97,   97,  163, 
	 161,  159,  157,  155,  145,  132,  125,  113,  111,  109, 
	  97,   97,  104,   97,   93,   91,   89,   83,   77,   74, 
	  69,   65,   62,   59,   57,   55,   53,   48,   41,   37, 
	  35,   33,   31,   26,   20,   17,   10,    5,    1
};
static const short yygo[] = {
	-119,   -1, -114,  -28,  -47,  -48,  -98,   54,   53,   35, 
	-166, -176, -166, -166, -175,  -16, -166, -183,   97,   62, 
	  60,   47,   46,   39,   27, -184, -185, -186, -187, -167, 
	-188,  113, -115, -109, -116, -189, -190,  -38,  -39,  -25, 
	 -22,   29,  -23,  -21,   32, -173, -197,  102,  -83,  -84, 
	  90,  -60,  -61,  -35,  -49,   19,  -40,  -41,  -62,  -63, 
	 -37,  -44,  -56,  -15,  -14,  -13,  -12,  -11,  -10,  -65, 
	 -86,  -87,  -85,   93,   92,   78,   72,   71,   70,   69, 
	  68,   67,   63,   50,   42,   -9,   -8,   -5,   74,   73, 
	-152, -153, -154,   77,   76,   -1
};
static const short yypgo[] = {
	   0,    0,   30,   30,   30,   35,   35,   35,   35,   36, 
	  36,   36,   36,   34,   34,   33,   51,   52,   56,   57, 
	  58,   59,   49,   49,   49,   49,   49,   49,   49,   72, 
	  72,   72,   87,   87,   87,   92,   92,   92,   92,   27, 
	  27,   27,   27,   27,   28,    1,    6,    2,   30,   37, 
	  40,   38,   43,   33,   25,   25,   54,   54,   54,   26, 
	  26,   26,   92,    6,   17,   17,   17,   17,    2,   30, 
	  30,   37,   40,   38,   43,   32,   32,   33,   46
};
static const short yyrlen[] = {
	   1,    0,    3,    3,    2,   13,   10,   11,   14,   13, 
	  10,   11,   14,    4,    4,    3,    0,    0,    0,    0, 
	   0,    0,    3,    3,    3,    3,    3,    3,    2,    3, 
	   3,    1,    3,    3,    1,    1,    2,    1,    1,    4, 
	  10,    4,    3,    2,    5,    5,    2,    2,    2,    3, 
	   3,    3,    3,    3,    8,    6,    3,    5,    0,   11, 
	   9,    2,    7
};
#define YYS0	118
#define YYMAXSTATE	197
#define YYNPACT	119
#define YYNDEF	26
#define YYNRULE	79
#define YYP2RULE	127
#define YYL1NA

#define YYa0	case 0:
#define YYa1	case 1:
#define YYa2	case 2:
#define YYa3	case 3:
#define YYa4	case 4:
#define YYa5	case 5:
#define YYa6	case 6:
#define YYa7	case 7:
#define YYa8	case 8:
#define YYa9	case 9:
#define YYa10	case 10:
#define YYa11	case 11:
#define YYa12	case 12:
#define YYa13	case 13:
#define YYa14	case 14:
#define YYa15	case 15:
#define YYa16	case 16:
#define YYa17	case 17:
#define YYa18	case 18:
#define YYa19	case 19:
#define YYa20	case 20:
#define YYa21	case 21:
#define YYa22	case 22:
#define YYa23	case 23:
#define YYa24	case 24:
#define YYa25	case 25:
#define YYa26	case 26:
#define YYa27	case 27:
#define YYa28	case 28:
#define YYa29	case 29:
#define YYa30	case 30:
#define YYa31	case 31:
#define YYa32	case 32:
#define YYa33	case 33:
#define YYa34	case 34:
#define YYa35	case 35:
#define YYa36	case 36:
#define YYa37	case 37:
#define YYa38	case 38:
#define YYa39	case 39:
#define YYa40	case 40:
#define YYa41	case 41:
#define YYa42	case 42:
#define YYa43	case 43:
#define YYa44	case 44:
#define YYaACCEPT YYa0
#define YYaERROR YYa1
#define YYaLR2 YYa44
#define YYrACCEPT 0
#define YYrERROR 1
#define YYrLR2 44

#line 3 "C:\\Program Files\\Thinkage\\WinYay\\\\yyparse.c"
/*
 * Automaton to interpret LALR(1) tables.
 *	Macros available in actions:
 *		yyclearin - clear the lookahead token.
 *		yyerrok   - forgive a pending error
 *		YYERROR   - simulate an error
 *		YYPOP(t)  - pop states (like for error) looking for shift on t, then
 *					shift on t, and continue parsing.
 *		YYACCEPT  - halt and return 0
 *		YYABORT   - halt and return 1
 *		YYRETURN(value) - halt and return value.  You should use this
 *					instead of return(value).
 *		YYREAD     - ensure yychar contains a lookahead token by reading
 *			         one if it does not.  See also YYSYNC.
 *		YYE_NONE  - value of yyerrflag when no error in progress
 *		YYE_SHIFT(n) - value of yyerrflag when 'n' tokens shifted since the
 *				  error handler was found. YYE_SHIFT(0) indicates that
 *				  tokens may still be discarded.
 *
 *	Macros set by user, used internally:
 *		YYSERROR() - prints the given "Syntax error" message. Defaults
 *			to yyerror(s).
 *		YYDEBUG - includes debug code.  The parser will print
 *			 a travelogue of the parse if this is defined
 *			 and yydebug is non-zero. (default undef)
 *		YYSSIZE - size of state and value stacks (default 150).
 *		YYSTATIC - By default, the state stack is an automatic array.
 *			If this is defined, the stack will be static.
 *			In either case, the value stack is static.
 *		YYALLOC - Dynamically allocate both the state and value stacks
 *			by calling malloc() and free(). If YYALLOC >= 10, the stacks 
 *			will be grown by YYALLOC elements. This means the user cannot
 *			keep pointer into the stack, if he wants to use this feature.
 *		YYLR2 - defined if lookahead is needed to resolve R/R or S/R conflicts
 *		YYSYNC - if defined, Yay guarantees to fetch a lookahead token
 *			before any action, even if it doesnt need it for a decision.
 *			If YYSYNC is defined, YYREAD will never be necessary unless
 *			the user explicitly sets yychar = -1
 *		YYSHIFT - called when a succesful shift occurs on the last value
 *			returned by yylex. Defaults to nothing.
 *		YYCPLUSPLUS - causes the value stack to be created using C++ yyarray
 *			template. Only works if YYALLOC is defined.
 *		YYSTYPE_INIT - defined to be extra arguments (including leading comma)
 *			to a constructor for yyarray<YYSTYPE>.
 *		yyarray<T> - C++ template required when YYCPLUSPLUS defined. Supports:
 *			constructor(int nelements YYSTYPE_INIT)
 *			constructor(int nelements) leaves elements default-initialized
 *			destructor that frees the array memory.
 *			conversion to (T *) pointer type (yields NULL ptr on alloc failure)
 *				This pointer points to the actual vector of T's, and remains
 *				valid until a recalloc call on the object.
 *			operator[](int)
 *			bool recalloc(int newsize)  returns non-zero on success. Result
 *				can actually be any logical-testable type, as long as nz means
 *				the reallocation succeeded. This can even return a ref to the
 *				original argument, in which case the conversion to (T*) does
 *				the trick.
 *
 *	Debug routines for use by user
 *		#define YYfile stdout for debug put
 *		const char *yyptok(int i)
 *			returns printable string for token i > 0
 *					printable string for variable i < 0
 *		int yyprule(int rule)
 * 			prints rule i to stdout return -1 if a invalid rule #
 *		int yypstate(int state) return 0 if a invalid state #
 *			prints the shifts and reduces for the state
 *		int yypgoto(int rule)
 *			prints the goto's that could occur as the
 *			result of reducing that rule. returns if invalid rule #
 *			(NOTE: gotos are associate by rule even though
 *			they are given by state in the desciption)
 *	Copyright (c) 1993, by Thinkage Ltd.
 */

#ifdef __BORLANDC__
	#pragma warn -sig	/* Don't complain about long->int conversions */
	#pragma warn -ccc	/* Don't complain about constant conditions */
	#pragma warn -rch	/* Don't complain about unreachable code */
#endif

#ifdef YYCPLUSPLUS
	extern "C" {
	#include <stdlib.h>		/* for malloc realloc, and NULL */
	}
	#ifndef YYSTYPE_INIT
		#define YYSTYPE_INIT
	#endif
#else
	#include <stdlib.h>
#endif

#ifndef YYSSIZE
	#define YYSSIZE	150
#endif
#ifndef YYSHIFT
	#define YYSHIFT	/* nothing */
#endif
#ifndef YYSERROR
	#define YYSERROR(s)	yyerror((s))
#endif
#define YYERROR		goto yyERROR
#define yyerrok		yylerr = yyerrflag = 0
#define yyclearin	yychar = -1
#define YYPOP(t)	do { yypopto = (t); yylerr = 0; goto yyPopStack; } while(0)
#define YYACCEPT	YYRETURN(0)
#define YYABORT		YYRETURN(1)
#define YYStest		yygtest( *yyps, yyi+
#define YYEtest		)
#define YYSselect	((void)(yyi +=
#define YYEselect	),YYPDEBUG(YYdebug_select, yyi, 0))
#ifdef YYALLOC
	#define YYRETURN(val)	{ yyretval = (val); goto yyReturn; }
#else
	#define YYRETURN(val)	return(val)
#endif
#ifdef YYDEBUG
	#ifndef YYfile
		#include <stdio.h>
		#define YYfile stdout
	#endif
#endif
#ifndef YYREAD
	#define YYREAD	do if (yychar < 0) {									\
						if ((yychar = yylex()) < 0) yychar = YYtEND;		\
						YYPDEBUG(YYdebug_read,yystate,yychar);				\
					} while(0)
#endif
#ifdef YYSYNC
	#define YYSYNC_READ YYREAD
	#define YYNSYNC_READ
#else
	#define YYSYNC_READ
	#define YYNSYNC_READ YYREAD
#endif

#define YYtEND		0		/* value for $end */
#define YYtERROR	256		/* value of `error' */
#define YYtCATCH	257		/* value for $catch */

YYSTYPE	yyval;			/* $$ */
YYSTYPE *yypvt;			/* $n */
YYSTYPE yylval;			/* yylex() sets this */
int	yychar;				/* current token */
int yyerrflag;			/* error flag */
int yynerrs;			/* error count */


#ifdef YYDEBUG
	#ifndef YYPDEBUG
		#define YYPDEBUG(what,i,j)			\
			((yydebug) ? yypdebug(what,i,j) : (void)0)
	#endif
	int yydebug = YYDEBUG-0;		/* debug flag & tables */
	# define yyassert(condition, msg, arg) 						\
		if (!(condition)) { fprintf(YYfile,"\nYay bug: ");		\
							fprintf(YYfile,msg, arg); YYABORT; }
#else /* !YYDEBUG */
	# define yyassert(condition, msg, arg)
	#undef  YYPDEBUG
	#define YYPDEBUG(what,i,j) ((void)0)
#endif

	int
yyparse(void) {

	register short			yyi;	/* for table lookup */
	register const short *yyp;	/* for table lookup */
	register short	      *yyps;	/* top of state stack */
	register short		yystate;	/* current state */
	register YYSTYPE	  *yypv;	/* top of value stack */
	register const short *yyq;
	register int			yyj;
	int						yylerr = 0;
	int						yypopto;

	#ifdef YYSTATIC
		static short	yys[YYSSIZE + 1];
		static YYSTYPE	yyv[YYSSIZE + 1];
	#elif defined(YYALLOC)
		#ifdef YYCPLUSPLUS
			yyarray<short>	  yys( YYSSIZE+1 );
			yyarray<YYSTYPE>  yyv( YYSSIZE+1 YYSTYPE_INIT );
		#else
			short	*yys;
			YYSTYPE *yyv;
		#endif

		int yyretval;

		YYSTYPE yysave_val;
		YYSTYPE *yysave_pvt;
		YYSTYPE yysave_lval;
		int yysave_char;
		int yysave_errflag;
		int yysave_nerrs;
	#else
		short			yys[YYSSIZE + 1];
		static YYSTYPE	yyv[YYSSIZE + 1];	/* historically static */
	#endif
	
	#if defined(YYALLOC) && YYALLOC-0 >= 10
		int yyssize = YYSSIZE+1;
	#else
		#define	yyssize		((YYSSIZE)+1)
	#endif
#ifdef __BORLANDC__
	#pragma warn .sig	/* Default complain about long->int conversions */
	#pragma warn .ccc	/* Default complain about constant conditions */
	#pragma warn .rch	/* Default complain about unreachable code */
#endif



#line 217 "C:\\Program Files\\Thinkage\\WinYay\\\\yyparse.c"
#ifdef __BORLANDC__
	#pragma warn -sig	/* Don't complain about long->int conversions */
	#pragma warn -ccc	/* Don't complain about constant conditions */
	#pragma warn -rch	/* Don't complain about unreachable code */
#endif

	#ifdef YYALLOC
		#ifndef YYCPLUSPLUS
			yys = (short *) malloc((YYSSIZE + 1) * sizeof(short));
			yyv = (YYSTYPE *) malloc((YYSSIZE + 1) * sizeof(YYSTYPE));
		#endif
		if (yys == (short *)0 || yyv == (YYSTYPE *)0) {
			yyerror("Not enough space for parser stacks");
			return 1;
		}
		yysave_val = yyval;
		yysave_pvt = yypvt;
		yysave_lval = yylval;
		yysave_char = yychar;
		yysave_errflag = yyerrflag;
		yysave_nerrs = yynerrs;
	#endif

	yynerrs = 0;
	yyerrflag = YYE_NONE;
	yychar = -1;
	yyps = yys;
	yypv = yyv;
	yystate = YYS0;		/* start state */

  yyStack:
	yyassert((unsigned)yystate <= YYMAXSTATE, "state %4d\n", yystate);
	if (++yyps >= &yys[yyssize]) {
		#if defined(YYALLOC) && YYALLOC-0 >= 10
			#ifdef YYCPLUSPLUS
				if( !yys.recalloc(yyssize+YYALLOC)
					|| !yyv.recalloc(yyssize+YYALLOC) ) {
			#else
				yys = (short *)realloc( (void *)yys,
									(yyssize+YYALLOC) * sizeof(short));
				yyv = (YYSTYPE *) realloc((void *) yyv,
									(yyssize+YYALLOC) * sizeof(YYSTYPE));
				if( !yys || !yyv ) {
			#endif
				yyerror("Parser stack overflow");
				YYABORT;
			}
			yyps = yys + yyssize;
			yypv = yyv + yyssize;
			yyssize += YYALLOC;
		#else
			yyerror("Parser stack overflow");
			YYABORT;
		#endif
	}
	*yyps = yystate;	/* stack current state */
	*++yypv = yyval;	/* ... and value */

	YYPDEBUG(YYdebug_state,yystate,yychar);

	/*
	 *	Look up next action in action table.
	 */
  yyEncore:
	YYSYNC_READ;

	if (YYMAXSTATE >= sizeof yypact/sizeof yypact[0]
		&& (unsigned)yystate >= sizeof yypact/sizeof yypact[0])
		/* Simple reduce */
		if (YYMAXSTATE >= YYNRULE + sizeof yypact/sizeof yypact[0])
			yyi = (yystate - sizeof yypact/sizeof yypact[0]) & YYP2RULE;
		else
			yyi = yystate - sizeof yypact/sizeof yypact[0];
	else {
		if( *(yyp = &yyact[yypact[yystate]]) >= 0 ) {
			/* Look for a shift on yychar */
			
			YYNSYNC_READ;
			yyq = yyp;
			yyi = yychar;
			while (yyi < *yyp++);
			if (yyi == yyp[-1]) {
				yystate = ~yyq[yyq-yyp];
				yyval = yylval;		/* stack what yylex() set */
				YYSHIFT;			/* Tell user about shift */
				yyclearin;
				if (yyerrflag) {
					yyerrflag--;	/* successful shift */
					yylerr = 0;		/* no restrictions on error shifts */
				}
				goto yyStack;
			}
		}

		/*
	 	 *	Fell through - take default action
	 	 */

		if (sizeof yypact/sizeof yypact[0] > sizeof yydef/sizeof yydef[0]
			&& (unsigned)yystate >= sizeof yydef/sizeof yydef[0] )
			goto yyError;
		if ((yyi = yydef[yystate]) < 0)	 { /* default == reduce? */
											/* Search exception table */
			yyassert((unsigned)~yyi < sizeof yyex/sizeof yyex[0],
				"exception %d\n", yystate);
			yyp = &yyex[~yyi];

			YYNSYNC_READ;

			while( (yyi = *yyp) >= 0 && yyi != yychar)
				yyp += 2;
			yyi = yyp[1];
			yyassert(yyi >= 0,"Ex table not reduce %d\n", yyi);
		}
	}

	#ifdef YYLR2
	  yyReduce:	/* reduce yyi */
	#endif
	yyassert((unsigned)yyi < YYNRULE, "reduce %d\n", yyi);
	#ifdef YYL1NA
		if ((unsigned)yyi >= sizeof yyrlen / sizeof yyrlen[0]) {
			/* 1-item rule with no action; skip stack diddling, just goto */
			YYPDEBUG(YYdebug_reduce,yyps[-1],yyi);
			yyp = yyq = &yygo[yypgo[yyi]];
			yyi = yyps[-1];
			while (yyi < *++yyp) /* nothing */;
			yystate = *yyps = ~(yyi == *yyp? yyq[yyq-yyp]: *yyq);
			YYPDEBUG(YYdebug_state,yystate,yychar);
			goto yyEncore;
		}
	#endif
	yyj = yyrlen[yyi];
	YYPDEBUG(YYdebug_reduce,yyps[-yyj],yyi);
	yyps -= yyj;		/* pop stacks */
	yypvt = yypv;		/* save top */
	yypv -= yyj;
	yyval = yypv[1];	/* default action $$ = $1 */
	switch (yyi) {		/* perform semantic action */
#ifdef __BORLANDC__
	#pragma warn .sig	/* Default complain about long->int conversions */
	#pragma warn .ccc	/* Default complain about constant conditions */
	#pragma warn .rch	/* Default complain about unreachable code */
#endif

YYa2 {	/* declaracion: tipo variables ';' */
#line 54 "C:\\GRAMAT.y"
 agregarEstructura("Declaración");
} break;

YYa3 {	/* declaracion: tipo variables error */
#line 58
informarError("Se esperaba un ';' en la declaración"); 
} break;

YYa4 {	/* declaracion: tipo error */
#line 59
informarError("Falta identificador"); 
} break;

YYa5 {	/* arreglo_int: INTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' '{' inics_int '}' ';' */
#line 62
 agregarEstructura("Declaración de arreglo de enteros con inicialización");
} break;

YYa6 {	/* arreglo_int: INTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' ';' */
#line 63
 agregarEstructura("Declaración de arreglo de enteros");
} break;

YYa7 {	/* arreglo_int: INTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' ';' ANOTACION */
#line 64
 agregarEstructura("Declaración de arreglo de enteros con anotación");
} break;

YYa8 {	/* arreglo_int: INTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' '{' inics_int '}' ';' ANOTACION */
#line 65
 agregarEstructura("Declaración de arreglo de enteros con inicialización y anotación");
} break;

YYa9 {	/* arreglo_ulong: ULONGINTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' '{' inics_ulong '}' ';' */
#line 68
 agregarEstructura("Declaración de arreglo de enteros largos sin signo con inicialización");
} break;

YYa10 {	/* arreglo_ulong: ULONGINTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' ';' */
#line 69
 agregarEstructura("Declaración de arreglo de enteros largos sin signo");
} break;

YYa11 {	/* arreglo_ulong: ULONGINTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' ';' ANOTACION */
#line 70
 agregarEstructura("Declaración de arreglo de enteros largos sin signo con anotación");
} break;

YYa12 {	/* arreglo_ulong: ULONGINTG MATRIX ID '[' INTEGER ']' '[' INTEGER ']' '{' inics_ulong '}' ';' ANOTACION */
#line 71
 agregarEstructura("Declaración de arreglo de enteros largos sin signo con inicialización y anotación");
} break;

YYa13 {	/* conversion: ALLOW INTEGER TO ULONGINT */
#line 91
agregarEstructura("Conversión implícita");
} break;

YYa14 {	/* conversion: ALLOW ULONGINT TO INTEGER */
#line 92
agregarEstructura("Conversión implícita");
} break;

YYa15 {	/* variables: variables ',' error */
#line 101
informarError("Falta identificador despues de ,"); 
} break;

YYa16 {	/* iteracion: WHILE '(' condicion ')' */
#line 107
agregarEstructura("Sentencia WHILE");
} break;

YYa17 {	/* iteracion: WHILE '(' condicion ')' */
#line 108
agregarEstructura("Sentencia WHILE");
} break;

YYa18 {	/* else: ELSE */
#line 111
 agregarEstructura("Sentencia ELSE");
} break;

YYa19 {	/* else: ELSE */
#line 112
 agregarEstructura("Sentencia ELSE");
} break;

YYa20 {	/* seleccion: IF '(' condicion ')' */
#line 116
 agregarEstructura("Sentencia IF");
} break;

YYa21 {	/* seleccion: IF '(' condicion ')' */
#line 117
 agregarEstructura("Sentencia IF");
} break;

YYa22 {	/* condicion: expresion MAYORIGUAL expresion */
#line 121
 agregarEstructura("Condición '>='"); 
} break;

YYa23 {	/* condicion: expresion MENORIGUAL expresion */
#line 122
 agregarEstructura("Condición '<='"); 
} break;

YYa24 {	/* condicion: expresion IGUAL expresion */
#line 123
 agregarEstructura("Condición '='"); 
} break;

YYa25 {	/* condicion: expresion DISTINTO expresion */
#line 124
 agregarEstructura("Condición '<>'"); 
} break;

YYa26 {	/* condicion: expresion '>' expresion */
#line 125
 agregarEstructura("Condición '>'"); 
} break;

YYa27 {	/* condicion: expresion '<' expresion */
#line 126
 agregarEstructura("Condición '<'"); 
} break;

YYa28 {	/* condicion: expresion error */
#line 127
 informarError("Se esperaba una condición válida"); 
} break;

YYa29 {	/* expresion: expresion '+' termino */
#line 130
 yyval = yypvt[-2] + yypvt[0]; 
} break;

YYa30 {	/* expresion: expresion '-' termino */
#line 131
 yyval = yypvt[-2] - yypvt[0]; 
} break;

YYa31 {	/* expresion: termino */
#line 132
yyval = yypvt[0];
} break;

YYa32 {	/* termino: termino '*' factor */
#line 135
 yyval = yypvt[-2] * yypvt[0]; 
} break;

YYa33 {	/* termino: termino '/' factor */
#line 136
 yyval = yypvt[-2] / yypvt[0]; 
} break;

YYa34 {	/* termino: factor */
#line 137
yyval = yypvt[0];
} break;

YYa35 {	/* factor: ID */
#line 140
yyval = yypvt[0];
} break;

YYa36 {	/* factor: ID DECREMENTO */
#line 141
yyval = yypvt[-1];
} break;

YYa37 {	/* factor: ULONGINT */
#line 142
 double valor = StrToFloat(tablaSimbolos[yypvt[0]]);
					 if(valor < 0 || valor > 4294967295){
						informarError("Constante Entero Largo sin signo '"+tablaSimbolos[yypvt[0]]+"' fuera de rango");
						AnsiString buffer = tablaSimbolos[yypvt[0]];
						BajaTablaSimbolos(&buffer,'E');
					}
				
} break;

YYa38 {	/* factor: INTEGER */
#line 149
 	double valor = StrToFloat(tablaSimbolos[yypvt[0]]);
					if(valor < -32768 || valor > 32767){
						informarError("Constante entera  '"+tablaSimbolos[yypvt[0]]+"' fuera de rango");
						AnsiString buffer = tablaSimbolos[yypvt[0]];
						BajaTablaSimbolos(&buffer,'E');
					}		
				
} break;

YYa39 {	/* asignacion: ID ASIGNACION expresion ';' */
#line 159
 agregarEstructura("Asignación al identificador '"+tablaSimbolos[yypvt[-3]]+"'"); 
} break;

YYa40 {	/* asignacion: ID '[' expresion ']' '[' expresion ']' ASIGNACION expresion ';' */
#line 160
 agregarEstructura("Asignación al arreglo '"+tablaSimbolos[yypvt[-9]]+"'"); 
} break;

YYa41 {	/* asignacion: ID ASIGNACION expresion error */
#line 161
 yyval = yypvt[0]; informarError("Se esperaba un ';' despues de la asignación"); 
} break;

YYa42 {	/* asignacion: ID ASIGNACION error */
#line 162
 informarError("Se esperaba una expresión después de la asignación"); 
} break;

YYa43 {	/* asignacion: ID error */
#line 163
 informarError("Existe un error en la asignacion"); 
} break;

YYa44 {	/* emision: PRINT '(' CARACTER ')' ';' */
#line 166
 agregarEstructura("Emisión de mensaje por pantalla"); 
} break;

#line 363 "C:\\Program Files\\Thinkage\\WinYay\\\\yyparse.c"
#ifdef __BORLANDC__
	#pragma warn -sig	/* Don't complain about long->int conversions */
	#pragma warn -ccc	/* Don't complain about constant conditions */
	#pragma warn -rch	/* Don't complain about unreachable code */
#endif

	YYaACCEPT
		YYACCEPT;
	YYaERROR
		yystate = *yyps;
		goto yyError;
	#ifdef YYLR2
		YYaLR2
			YYNSYNC_READ;
			yyj = 0;
			while( yylr2[yyj] >= 0 ) {
				if( yylr2[yyj] == yystate && yylr2[yyj+1] == yychar
					&& yylook(yys+1,yyps,yystate,yychar,yy2lex(),yylr2[yyj+2]))
						break;
				yyj += 3;
			}
			if( yylr2[yyj] < 0 )
				goto yyError;
			if( yylr2[yyj+2] < 0 ) {
				yystate = ~ yylr2[yyj+2];
				goto yyStack;
			}
			yyi = yylr2[yyj+2];
			goto yyReduce;
	#endif
	}

	/*
	 *	Look up next state in goto table.
	 */

	yyp = yyq = &yygo[yypgo[yyi]];
	yyi = *yyps;
	while (yyi < *++yyp) /* nothing */;
	yystate = ~(yyi == *yyp? yyq[yyq-yyp]: *yyq);
	goto yyStack;

  yyError:

	switch (yyerrflag) {
		case YYE_NONE:		/* new error detected by parser */
			/* Look for shift on $catch in current state */
			if ((size_t)*yyps < sizeof yypact/sizeof yypact[0]) {
				yyp = &yyact[yypact[*yyps]];
				yyq = yyp;
				do
					;
				while (YYtCATCH < *yyp++);
				if (YYtCATCH == yyp[-1]) {
					yystate = ~yyq[yyq-yyp];
					goto yyStack;
				}
			}
			yynerrs++;
			yyi = yychar;
			YYSERROR("Syntax error");
			if (yyi != yychar) {
				/* user has changed the current token */
				/* try again */
				yynerrs--;	/* assume not really an error */
				YYPDEBUG(YYdebug_char,yyi,yychar);
				goto yyEncore;
			}

		default:		/* partially recovered, or YYERROR entry */
	yyERROR:
			yyerrflag = YYE_SHIFT(0);
			
			/*
			 *	Pop states, looking for a
			 *	shift on `error'.
			 */
			yypopto = YYtERROR;
		yyPopStack:			/* Come here for user YYPOP(tok) */
			for ( ; yyps > yys; yyps--, yypv--) {
				#ifdef _TS_THINKAGE
					#pragma used yyPopStack
				#endif
				if ((size_t)*yyps >= sizeof yypact/sizeof yypact[0])
					continue;
				yyp = &yyact[yypact[*yyps]];
				yyq = yyp;
				do
					;
				while (yypopto < *yyp++);
				if (yypopto == yyp[-1] && yylerr != ~yyq[yyq-yyp] ) {
					yystate = ~yyq[yyq-yyp];
					if (yypopto == YYtERROR)
						yylerr = yystate;
					goto yyStack;
				}
				
				/* no shift in this state */
				if( yyps > yys+1)
					YYPDEBUG(YYdebug_error,yyps[0],yyps[-1]);
				/* pop stacks; try again */
			}
			/* no shift on error - abort */
			break;

		case YYE_SHIFT(0):
			/*
			 *	Erroneous token after
			 *	an error - discard it.
			 */
			if (yychar == YYtEND)  /* but not EOF */
				break;
			YYPDEBUG(YYdebug_discard, yystate, yychar);
			yyclearin;
			goto yyEncore;	/* try again in same state */
	}
	YYABORT;

	#ifdef YYALLOC
	  yyReturn:
		yyval = yysave_val;
		yypvt = yysave_pvt;
		yylval = yysave_lval;
		yychar = yysave_char;
		yyerrflag = yysave_errflag;
		yynerrs = yysave_nerrs;
		#ifdef YYCPLUSPLUS
			/* the arrays will be destroyed automatically */
		#else
			free((char *)yys);
			free((char *)yyv);
		#endif
		return(yyretval);
	#endif
}

	int
yygtest( yystate, yyrule )
	int yystate;
	int yyrule;
{
	const short *yyp, *yyq;

	yyp = &yygo[yypgo[yyrule]];
	yyq = yyp++;
	do
		;
	while (yystate < *yyp++);
	yystate = ~(yystate == *--yyp? yyq[yyq-yyp]: *yyq);

	if( (unsigned)yystate >= sizeof yypact / sizeof yypact[0] )
		/*
		 * New state is a simple state.
		 */
		yyrule = (yystate - sizeof yypact/sizeof yypact[0]) & YYP2RULE;
	else if( yyact[yypact[yystate]] >= 0 )
		/*
		 * There are shifts from the new state.
		 */
		return 1;
	else if( (unsigned)yystate > sizeof yydef / sizeof yydef[0] )
		/*
		 * The state has no shifts, just an error
		 */
		return 0;
	else if( yydef[yystate] >= 0 )
		/*
		 * The new state has no shifts, one reduce. This is a simple
		 * state that had the misfortune to be not the first simple state
		 * found for a given rule.
		 */
		yyrule = yydef[yystate];
	else if( yyex[~yydef[yystate]] >= 0 )
		/*
		 * Several reduces possible, not all can be the error rule
		 */
		return 1;
	else
		/*
		 * This shouldn't really happen, if there is just a default in
		 * yyex, it should have been placed in yydef.
		 * Note -yydef[] == 1+~yydef[]
		 */
		yyrule = yyex[-yydef[yystate]];
	return !(yyrule == YYrERROR);
}


#ifdef YYLR2

yylook(s,rsp,state,c1,c2,i)
	short *s;							/* stack				*/
	short *rsp;							/* real top of stack	*/
	int state;							/* current state		*/
	int c1;								/* current char			*/
	int c2;								/* next char			*/
	int i;								/* action S < 0, R >= 0	*/
{
	int j;
	short *p,*q;
	short *sb,*st;
	#ifdef YYDEBUG
		if( yydebug ) {
			fprintf(YYfile,"LR2 state %4d (%4d) char %8s (%3d)",
				yygsmap(state),state,yyptok(c1),c1);
			fprintf(YYfile, " lookahead %8s (%3d)", yyptok(c2),c2);
			if( i > 0 ) {
				fprintf(YYfile, "reduce    ");
				(void)yyprule(i);
			}
			else
				fprintf(YYfile, "shift   %4d (%4d)\n", yygsmap(i), i);
		}
	#endif
	st = sb = rsp+1;
	if( i >= 0 ) goto reduce;
  shift:
	state = ~i;
	c1 = c2;
	if( c1 < 0 ) return 1;
	c2 = -1;

  stack:
  	if( ++st >= &s[yyssize] ) {
		yyerror("Parser Stack Overflow");
		return 0;
	}
	*st = state;
	if( (unsigned)state >= sizeof yypact/sizeof yypact[0] )
		i = (state - sizeof yypact/sizeof yypact[0]) & YYP2RULE;
	else {
		p = &yyact[yypact[state]];
		q = p;
		i = c1;
		while( i < *p++ );
		if( i == p[-1] ) {
			state = ~q[q-p];
			c1 = c2;
			if( c1 < 0 ) return 1;
			c2 = -1;
			goto stack;
		}
		if( (unsigned)state >= sizeof yydef/sizeof yydef[0] )
			return 0
		if( (i = yydef[state]) < 0 ) {
			p = &yyex[~i];
			while( (i = *p) >= 0 && i != c1)
				p += 2;
			i = p[1];
		}
	}
  reduce:
	#ifdef YYL1NA
		j = (i >= sizeof yyrlen / sizeof yyrlen[0]) ? 1 : yyrlen[i];
	#else
		j = yyrlen[i];
	#endif
	if( st-sb >= j )
		st -= j;
	else {
		rsp -= j+st-sb;
		st = sb;
	}
	switch( i ) {
	  YYaERROR
		return 0;
	  YYaACCEPT
		return 1;
	  YYaLR2
		j = 0;
		while( yylr2[j] >= 0 ) {
			if( yylr2[j] == state && yylr2[j+1] == c1 )
				if( (i = yylr2[j+2]) < 0 )
					goto shift;
				else
					goto reduce;
		}
		return 0;
	}
	p = &yygo[yypgo[i]];
	q = p++;
	i = st==sb ? *rsp : *st;
	while( i < *p++ );
	state = ~( i == *--p? q[q-p]: *q);
	goto stack;
}
#endif
#ifdef YYDEBUG
 const char * const yystoken[] = {	"error",
	"$catch",
	"IF",
	"ENDIF",
	"PRINT",
	"INTEGER",
	"ULONGINT",
	"INTG",
	"ULONGINTG",
	"MATRIX",
	"WHILE",
	"ELSE",
	"MAYORIGUAL",
	"MENORIGUAL",
	"IGUAL",
	"DISTINTO",
	"ASIGNACION",
	"CARACTER",
	"ID",
	"DECREMENTO",
	"ALLOW",
	"TO",
	"ANOTACION",
	0
};
 const char * const yysvar[] = {
	"$accept",
	"$error",
	"main",
	"declaraciones",
	"sentencias",
	"sent",
	"iteracion",
	"seleccion",
	"asignacion",
	"emision",
	"declaracion",
	"tipo",
	"variables",
	"conversion",
	"arreglo_int",
	"arreglo_ulong",
	"inics_int",
	"inics_ulong",
	"integers",
	"ulongs",
	"var",
	"condicion",
	"$41",
	"$43",
	"else",
	"$45",
	"$47",
	"$50",
	"$52",
	"expresion",
	"termino",
	"factor",
	0
};
 const short yyrmap[] = {
	   0,    1,   11,   15,   16,   17,   18,   19,   20,   21, 
	  22,   23,   24,   33,   34,   39,   41,   43,   45,   47, 
	  50,   52,   55,   56,   57,   58,   59,   60,   61,   62, 
	  63,   64,   65,   66,   67,   68,   69,   70,   71,   73, 
	  74,   75,   76,   77,   78,    2,    3,    9,   12,   25, 
	  27,   29,   31,   37,   42,   44,   46,   48,   49,   51, 
	  53,   54,   72,    4,    5,    6,    7,    8,   10,   13, 
	  14,   26,   28,   30,   32,   35,   36,   38,   40
};
 const short yysmap[] = {
	   2,    4,    5,   60,   62,   88,   89,   97,   98,   99, 
	 100,  101,  102,  103,  104,  113,  122,  125,  127,  134, 
	 138,  142,  160,  161,  163,  164,  158,  157,  155,  154, 
	 153,  152,  151,  150,  149,  147,  145,  143,  139,  133, 
	 132,  131,  130,  129,  128,  126,  124,  123,  121,  120, 
	 119,  118,  117,  116,  114,  112,  111,  110,  109,  108, 
	 107,  106,  105,   96,   93,   91,   90,   87,   86,   85, 
	  84,   83,   82,   78,   77,   76,   75,   74,   72,   71, 
	  70,   69,   68,   67,   66,   65,   63,   57,   56,   55, 
	  52,   51,   49,   48,   46,   43,   42,   39,   33,   32, 
	  31,   30,   27,   26,   25,   24,   23,   22,   20,   15, 
	  14,   13,   12,   11,    9,    8,    3,    1,    0
};
 const short yysrmap[] = {
	 118,  117,    0,  116,    1,    2,  189,  188,  115,  114, 
	 187,  113,  112,  111,  110,  109,  167,  197,  196,  123, 
	 108,  166,  107,  106,  105,  104,  103,  102,  122,  121, 
	 101,  100,   99,   98,  186,  185,  184,  183,  182,   97, 
	 133,  132,   96,   95,  134,  172,   94,  162,   93,   92, 
	 180,   91,   90,  165,  164,   89,   88,   87,  157,  156, 
	   3,  153,    4,   86,  161,   85,   84,   83,   82,   81, 
	  80,   79,   78,  155,   77,   76,   75,   74,   73,  160, 
	 158,  147,   72,   71,   70,   69,   68,   67,    5,    6, 
	  66,   65,  163,   64,  152,  151,   63,    7,    8,    9, 
	  10,   11,   12,   13,   14,   62,   61,   60,   59,   58, 
	  57,   56,   55,   15,   54,  174,   53,   52,   51,   50, 
	  49,   48,   16,   47,   46,   17,   45,   18,   44,   43, 
	  42,   41,   40,   39,   19,  173,  130,  193,   20,   38, 
	 126,  191,   21,   37,  181,   36,  179,   35,  175,   34, 
	  33,   32,   31,   30,   29,   28,  159,   27,   26,  171, 
	  22,   23,  169,   24,   25,  176,  178,  131,  127
};
 const short yybrule[] = {
	/*   0 rule   0 */   0, /* : */  -2,   0,
	/*   3 rule   1 */  -1, /* : */  -1,
	/*   5 rule   2 */  -2, /* : */ 274,  -3, 123,  -4, 125,
	/*  11 rule   3 */  -4, /* : */  -4,  -5,
	/*  14 rule   4 */  -4, /* : */  -5,
	/*  16 rule   5 */  -5, /* : */  -6,
	/*  18 rule   6 */  -5, /* : */  -7,
	/*  20 rule   7 */  -5, /* : */  -8,
	/*  22 rule   8 */  -5, /* : */  -9,
	/*  24 rule   9 */  -3, /* : */  -3, -10,
	/*  27 rule  10 */  -3, /* : */ -10,
	/*  29 rule  11 */ -10, /* : */ -11, -12,  59,
	/*  33 rule  12 */ -10, /* : */ -13,  59,
	/*  36 rule  13 */ -10, /* : */ -14,
	/*  38 rule  14 */ -10, /* : */ -15,
	/*  40 rule  15 */ -10, /* : */ -11, -12, 256,
	/*  44 rule  16 */ -10, /* : */ -11, 256,
	/*  47 rule  17 */ -14, /* : */ 263, 265, 274,  91, 261,  93,  91, 261,  93, 123, -16, 125,  59,
	/*  61 rule  18 */ -14, /* : */ 263, 265, 274,  91, 261,  93,  91, 261,  93,  59,
	/*  72 rule  19 */ -14, /* : */ 263, 265, 274,  91, 261,  93,  91, 261,  93,  59, 278,
	/*  84 rule  20 */ -14, /* : */ 263, 265, 274,  91, 261,  93,  91, 261,  93, 123, -16, 125,  59, 278,
	/*  99 rule  21 */ -15, /* : */ 264, 265, 274,  91, 261,  93,  91, 261,  93, 123, -17, 125,  59,
	/* 113 rule  22 */ -15, /* : */ 264, 265, 274,  91, 261,  93,  91, 261,  93,  59,
	/* 124 rule  23 */ -15, /* : */ 264, 265, 274,  91, 261,  93,  91, 261,  93,  59, 278,
	/* 136 rule  24 */ -15, /* : */ 264, 265, 274,  91, 261,  93,  91, 261,  93, 123, -17, 125,  59, 278,
	/* 151 rule  25 */ -16, /* : */ -16,  59, -18,
	/* 155 rule  26 */ -16, /* : */ -18,
	/* 157 rule  27 */ -18, /* : */ -18,  44, 261,
	/* 161 rule  28 */ -18, /* : */ 261,
	/* 163 rule  29 */ -17, /* : */ -17,  59, -19,
	/* 167 rule  30 */ -17, /* : */ -19,
	/* 169 rule  31 */ -19, /* : */ -19,  44, 262,
	/* 173 rule  32 */ -19, /* : */ 262,
	/* 175 rule  33 */ -13, /* : */ 276, 261, 277, 262,
	/* 180 rule  34 */ -13, /* : */ 276, 262, 277, 261,
	/* 185 rule  35 */ -11, /* : */ 263,
	/* 187 rule  36 */ -11, /* : */ 264,
	/* 189 rule  37 */ -12, /* : */ -12,  44, -20,
	/* 193 rule  38 */ -12, /* : */ -20,
	/* 195 rule  39 */ -12, /* : */ -12,  44, 256,
	/* 199 rule  40 */ -20, /* : */ 274,
	/* 201 rule  41 */ -22, /* : */
	/* 202 rule  42 */  -6, /* : */ 266,  40, -21,  41, -22, 123,  -4, 125,
	/* 211 rule  43 */ -23, /* : */
	/* 212 rule  44 */  -6, /* : */ 266,  40, -21,  41, -23,  -5,
	/* 219 rule  45 */ -25, /* : */
	/* 220 rule  46 */ -24, /* : */ 267, -25,  -5,
	/* 224 rule  47 */ -26, /* : */
	/* 225 rule  48 */ -24, /* : */ 267, -26, 123,  -4, 125,
	/* 231 rule  49 */ -24, /* : */
	/* 232 rule  50 */ -27, /* : */
	/* 233 rule  51 */  -7, /* : */ 258,  40, -21,  41, -27, 123,  -4, 125, -24, 259,  59,
	/* 245 rule  52 */ -28, /* : */
	/* 246 rule  53 */  -7, /* : */ 258,  40, -21,  41, -28,  -5, -24, 259,  59,
	/* 256 rule  54 */  -7, /* : */ 258, 256,
	/* 259 rule  55 */ -21, /* : */ -29, 268, -29,
	/* 263 rule  56 */ -21, /* : */ -29, 269, -29,
	/* 267 rule  57 */ -21, /* : */ -29, 270, -29,
	/* 271 rule  58 */ -21, /* : */ -29, 271, -29,
	/* 275 rule  59 */ -21, /* : */ -29,  62, -29,
	/* 279 rule  60 */ -21, /* : */ -29,  60, -29,
	/* 283 rule  61 */ -21, /* : */ -29, 256,
	/* 286 rule  62 */ -29, /* : */ -29,  43, -30,
	/* 290 rule  63 */ -29, /* : */ -29,  45, -30,
	/* 294 rule  64 */ -29, /* : */ -30,
	/* 296 rule  65 */ -30, /* : */ -30,  42, -31,
	/* 300 rule  66 */ -30, /* : */ -30,  47, -31,
	/* 304 rule  67 */ -30, /* : */ -31,
	/* 306 rule  68 */ -31, /* : */ 274,
	/* 308 rule  69 */ -31, /* : */ 274, 275,
	/* 311 rule  70 */ -31, /* : */ 262,
	/* 313 rule  71 */ -31, /* : */ 261,
	/* 315 rule  72 */ -31, /* : */ 274,  91, -29,  93,  91, -29,  93,
	/* 323 rule  73 */  -8, /* : */ 274, 272, -29,  59,
	/* 328 rule  74 */  -8, /* : */ 274,  91, -29,  93,  91, -29,  93, 272, -29,  59,
	/* 339 rule  75 */  -8, /* : */ 274, 272, -29, 256,
	/* 344 rule  76 */  -8, /* : */ 274, 272, 256,
	/* 348 rule  77 */  -8, /* : */ 274, 256,
	/* 351 rule  78 */  -9, /* : */ 260,  40, 273,  41,  59,
};
 const short yyrules[] = {
	   0,    3,    5,   11,   14,   16,   18,   20,   22,   24, 
	  27,   29,   33,   36,   38,   40,   44,   47,   61,   72, 
	  84,   99,  113,  124,  136,  151,  155,  157,  161,  163, 
	 167,  169,  173,  175,  180,  185,  187,  189,  193,  195, 
	 199,  201,  202,  211,  212,  219,  220,  224,  225,  231, 
	 232,  233,  245,  246,  256,  259,  263,  267,  271,  275, 
	 279,  283,  286,  290,  294,  296,  300,  304,  306,  308, 
	 311,  313,  315,  323,  328,  339,  344,  348,  351,  357
};
const int yyntoken = 38, yynvar = 32;
#endif
		
#line 652 "C:\\Program Files\\Thinkage\\WinYay\\\\yyparse.c"
#ifdef YYDEBUG
	
	/*
	 *	Print a token legibly.
	 *	This won't work if you roll your own token numbers,
	 *	but I've found it useful.
	 */

	const char *
yyptok(int i) {
	static char	buf[15];
	if ( i >= (int)(YYtERROR+sizeof(yystoken)/sizeof(yystoken[0])) )
		sprintf(buf, "Token %d", i);
	else if (i >= YYtERROR)
		return yystoken[i-YYtERROR];
	else if (  i <= -(int)(sizeof(yysvar)/sizeof(yysvar[0])) )
		sprintf(buf, "Var %d", -i);
	else if (i < 0)
		return yysvar[-i];
	else if (i == YYtEND)
		return "$end";
	else if (i < ' ' || i == 0177)
		sprintf(buf, "'^%c'", i^'@');
	else
		sprintf(buf, "'%c'", i);
	return buf;
}

	/*
	 * Return special rule action name, given user rule number
	 */
	static const char *
yysrule(int r) {
	if( r == 1 )
		return "accept";
	else if( r == 0 )
		return "error";
	else if( (unsigned)r <= sizeof(yyrules)/sizeof(yyrules[0]) )
		return NULL;
	#ifdef YYLR2
		else if( r == sizeof(yyrules)/sizeof(yyrules[0]) )
			return "lr2";
	#endif
	return "invalid rule";
}
	
	/*
	 * Print a rule out, given either (a) the internal rule number, or
	 * (b) the complement of the user rule number. In either case, it returns
	 * -1 if the rule number is illegal, or internal_rno otherwise.
	 */
	int
yyprule(int rule) {
	unsigned m, end;
	if (rule < 0) {
		for( m = 0 ; m < sizeof yyrmap/sizeof yyrmap[0]; m++ )
			if( yyrmap[m] == ~rule ) {
				rule = m;
				break;
			}
		if (rule < 0) {
			fprintf(YYfile,"%d: Valid rules are 0 to %d", ~rule, YYNRULE-1);
			return -1;
		}
	}
	else
		if( (unsigned)rule >= sizeof(yyrmap)/sizeof(yyrmap[0])) {
			fprintf(YYfile,"%d: Valid rules are 0 to %d", rule, YYNRULE-1);
			return -1;
		}
	m = yyrmap[rule];
	fprintf(YYfile,"%4d (%4d)",m,rule);
	if( yysrule(m) ) {
		fprintf(YYfile," $%s\n", yysrule(m));
		return rule;
	}
	end = yyrules[m+1];
	m = yyrules[m];
	fprintf(YYfile," %s :", yyptok(yybrule[m]));
	while( ++m < end )
		fprintf(YYfile," %s", yyptok(yybrule[m]));
	fprintf(YYfile,"\n");
	return rule;
}

	int
yygsmap(unsigned state) {
	unsigned s;

	if (state < sizeof yysmap/sizeof yysmap[0])
		return yysmap[state];
	for (s = 0; s < sizeof yysrmap/sizeof yysrmap[0]; s++ )
		if (yysrmap[s] == state)
			return s;
	return -1;
}

	int
yypstate(int state) {
	int i, s, r, m;
	const short *p,*q;
	int dstate;

	if( state < 0 ) {
		dstate = ~state;
		if (dstate >= sizeof yysrmap/sizeof yysrmap[0]) {
			fprintf(YYfile,"%d: Valid users states are between 0 and %d",
					 dstate, sizeof yysrmap/sizeof yysrmap[0]);
			return 0;
		}
		state = yysrmap[dstate];
	}
	else {
		dstate = yygsmap(state);
		if (dstate < 0) {
			fprintf(YYfile,"%d: Invalid internal state number", state);
			return 0;
		}
	}

	fprintf(YYfile, "State %4d (%4d):\n", dstate, state);
	if( (unsigned)state >= sizeof yypact/sizeof yypact[0] ) {
		i = (state - sizeof yypact/sizeof yypact[0]) & YYP2RULE;
		m = yyrmap[i];
		if( yysrule(m) )
			fprintf(YYfile,"    %s\n", yysrule(m));
		else
			fprintf(YYfile,"    reduce %3d (%3d)\n", m, i);
	}
	else {
		if( *(p = &yyact[yypact[state]]) >= 0 )
			for( q = p; *p > 0; p++ ) {
				s = ~q[q-p-1];
				fprintf(YYfile,"    shift %4d (%4d) on %s\n",
						yygsmap(s), s, yyptok(*p));
			}
		if( (unsigned)state >= sizeof yydef/sizeof yydef[0] )
			fprintf(YYfile,"    error\n");
		else {
			if( (r = yydef[state]) < 0 ) {
				for( p = &yyex[~r]; *p >= 0; p+=2 ) {
					r = p[1];
					m = yyrmap[r];
					if( yysrule(m) )
						fprintf(YYfile,"    %-14s on %s\n",yysrule(r),
							 yyptok(p[0]));
					else
						fprintf(YYfile,"    reduce %3d (%3d) on %s\n",
							 m, r, yyptok(p[0]));
				}
				r = p[1];
			}
			m = yyrmap[r];
			if( yysrule(m) )
				fprintf(YYfile,"    %s\n",yysrule(m));
			else
				fprintf(YYfile,"    reduce %3d (%3d)\n", m, r);
		}
	}
	return 1;
}

	/*
	 * Display the states that have goto's on the var defined by the given
	 * rule (rule < 0 => user rule number)
	 */
	int
yypgoto(int rule) {
	const short *p,*q;
	fprintf(YYfile,"rule ");
	rule = yyprule(rule);
	if( rule < 0 )
		return 0;
	q = &yygo[yypgo[rule]];
	for( p = q+1; *p >= 0; p++ )
		fprintf(YYfile,"    goto %4d (%4d) if state %4d (%4d)\n",
				yygsmap(~q[q-p]), ~q[q-p], yygsmap(*p), *p);
	fprintf(YYfile,"    goto %4d (%4d) otherwise\n", yygsmap(~*q),~*q);
	return 1;
}

	void
yypdebug(int what, int i, int j) {
	switch(what) {
	  case YYdebug_state:		/* "i" is state, "j" is lookahead char		*/
		if (yydebug > 0)
			fprintf(YYfile,"state   %4d (%4d)\n", yygsmap(i), i);
		break;
	  case YYdebug_read:		/* "i" is state, "j" is char read 			*/
		fprintf(YYfile,"read         (%4d) %s\n", j, yyptok(j));
		break;
	  case YYdebug_reduce:		/* "i" is new state, "j" is rule reduced	*/
		fprintf(YYfile,"reduce  ");
		(void)yyprule(j);
		if( yydebug > 0 )
			fprintf(YYfile,"pops to %4d (%4d)\n", yygsmap(i), i);
		break;
	  case YYdebug_select:		/* "i" is newly selected rule				*/
		fprintf(YYfile,"select instead ");
		(void)yyprule(i);
		break;
	  case YYdebug_char:		/* "i" is old char, "j" is new char			*/
		fprintf(YYfile,"yychar changed to %8s (%3d)\n", yyptok(j), j);
		break;
	  case YYdebug_error:		/* "i" is state, "j" is new state			*/
		fprintf(YYfile,"Error recovery pops state %4d (%4d),"
				 " uncovers %4d (%4d)\n", yygsmap(i), i, yygsmap(j), j);
		break;
	  case YYdebug_discard:		/* "i" is state, "j" is char discarded		*/
		fprintf(YYfile,"Error recovery discards %8s (%3d)\n", yyptok(j),j);
	}
}
#endif
