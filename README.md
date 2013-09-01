baffledCitrus
=============

A cross-platform (Linux/OSX/Windows/etc) lexer/parser generator replacement for lex/flex and yacc/bison

* [Lemon](lemon/README): an LALR(1) parser generator from SQLite
* [re2c](re2c/README.in): a tool for writing very fast and very flexible scanners
* [Perplex](perplex/README.txt): a simple tool to simplify the creation of scanners using re2c


This combination is used in BRL-CAD as a replacement for flex and bison.

#### Compiling ####
Requires: CMake >= 2.8, C/C++ compiler (MSVC, GCC, Clang, etc)

On Windows, use CMake-GUI. On other OSes, use CMake-GUI or type the following:
```sh
cd baffledCitrus
mkdir build
cd build
cmake ..
make
```

-----------------------

#### Other Code Generators ####
* [Comparison of parser generators](http://en.wikipedia.org/wiki/Comparison_of_parser_generators) on Wikipedia
* [Ragel State Machine Compiler](http://www.complang.org/ragel/)
* [flex](http://flex.sourceforge.net/)
* [bison](http://www.gnu.org/software/bison/)


#### Syntax checkers ####
* [bnfparser2](http://www.anfdata.cz/bnfparser2/) BNF/EBNF/ABNF syntax verification utility
* [BNF Syntax Checker](http://www.icosaedro.it/bnf_chk/)

