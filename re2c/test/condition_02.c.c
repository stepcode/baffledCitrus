/* Generated by re2c */
#line 1 "condition_02.c.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yyc0: goto yyc_0;
	case yycr1: goto yyc_r1;
	case yycr2: goto yyc_r2;
	}
/* *********************************** */
yyc_0:

#line 3 "condition_02.c.re"
	{ return NULL; }
#line 18 "<stdout>"
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy6;
	case 'b':	goto yy8;
	default:	goto yy5;
	}
yy5:
yy6:
	++YYCURSOR;
#line 4 "condition_02.c.re"
	{ return "a"; }
#line 33 "<stdout>"
yy8:
	++YYCURSOR;
#line 5 "condition_02.c.re"
	{ return "b"; }
#line 38 "<stdout>"
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy13;
	default:	goto yy12;
	}
yy12:
yy13:
	++YYCURSOR;
#line 5 "condition_02.c.re"
	{ return "b"; }
#line 52 "<stdout>"
}
#line 7 "condition_02.c.re"

