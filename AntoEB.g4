grammar AntoEB;

// Parser Rules
program: (statement)* EOF;
statement
       : expr NEWLINE              #exprStat
       | RETURN expr NEWLINE       #returnStat
       | PRINT expr NEWLINE        #printStat
       | ID '=' expr               #assign
       | ifElseStruct              #ifElseStat
	| NEWLINE                   # blank
       ;
comp   :   COMP expr expr ((AND|OR) COMP expr expr)*    #NpComp
       ;
expr   :   OPL=(MUL|DIV) expr expr #NpMulDiv
       |   OPH=(ADD|SUB) expr expr #NpAddSub
       |   ID                      # Id
       |   NUMBER                  # Number
       ;

if      : IF comp LBRAC statement+ RBRAC NEWLINE?;
ifelse  : ELSE IF comp LBRAC statement+ RBRAC NEWLINE?;
else    : ELSE LBRAC statement+ RBRAC NEWLINE?;
ifElseStruct  : if (ifelse)* (else)?;

// ================================================

// Lexer Rules
LBRAC  : '{';
RBRAC  : '}';
LPAREN :   '(';
RPAREN :   ')';


MUL: '*' ;
DIV: '/' ;
ADD: '+' ;
SUB: '-' ;

DDOT   : ':';
COMP   :   '<' | '>';
AND    : '&&';
OR     : '||';
INB    : '..';
EQ     : '=';
COMMA  : ',';

IF     : 'if';
ELSE   : 'else';
RETURN : 'return';
PRINT  : 'print';
NEWLINE: '\r'? '\n';

NUMBER : [+-]?([0-9]*[.])?[0-9]+ ;
ID     : [a-zA-Z_][a-zA-Z0-9]*;
WS     : [ \t\r\n\f]+ -> skip ;

