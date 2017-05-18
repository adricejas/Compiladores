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
