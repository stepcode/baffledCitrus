baffledCitrus
=============

A cross-platform (Linux/OSX/Windows/etc) lexer/parser replacement for lex/flex and yacc/bison

* [Lemon](lemon/README): an LALR(1) parser generator from SQLite
* [re2c](re2c/README.in): a tool for writing very fast and very flexible scanners
* [Perplex](perplex/README.txt): a simple tool to simplify the creation of scanners using re2c


This combination is used in BRL-CAD as a replacement for flex and bison.

The build system is CMake; at the moment, it won't work without macros defined in the BRL-CAD sources.
