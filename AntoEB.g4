grammar AntoEB;

// Parser Rules
program: (statement)* EOF;
statement : expr NEWLINE
       | RETURN expr NEWLINE
       | PRINT expr NEWLINE
       | ID '=' expr 
       | ifElseStat
       ;
fCall  :   ID LPAREN expr? (COMMA expr)* RPAREN
       ;
comp   :   COMP expr expr
             ((AND|OR) COMP expr expr)*
       ;
expr   :   OPL=(ADD|SUB) expr expr
       |   OPH=(MUL|DIV) expr expr
       |   ID
       |   NUMBER
       |   fCall
       ;

ifStat      : IF comp LBRAC statement+ RBRAC NEWLINE?;
ifelseStat  : ELSE IF comp LBRAC statement+ RBRAC NEWLINE?;
elseStat    : ELSE LBRAC statement+ RBRAC NEWLINE?;
ifElseStat  : ifStat (ifelseStat)* (elseStat)?;

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



