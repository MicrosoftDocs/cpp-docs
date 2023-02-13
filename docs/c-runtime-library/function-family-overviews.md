---
title: "Function family overview"
description: "An overview of Microsoft C runtime functions by family."
ms.date: "10/05/2020"
ms.assetid: b05a2755-9d11-4ea9-ab97-d00a4e872e16
---
# Function family overview

This section lists C runtime library routines by function family.

## CRT library routine families

[`_exec`, `_wexec`](exec-wexec-functions.md)\
Functions to load and execute a new process.

[Filename search functions](filename-search-functions.md)\
Functions to search for specified file names, and to close searches.

[Format specification syntax for `printf` and `wprintf`](format-specification-syntax-printf-and-wprintf-functions.md)\
Describes the format string and arguments for `printf` and `wprintf`.

[Format specification field characters: `scanf` and `wscanf`](format-specification-fields-scanf-and-wscanf-functions.md)\
Describes the format specification fields for parsing an input stream for the entire `scanf` family of functions.

[`is`, `isw` functions](is-isw-routines.md)\
Functions for testing characters for things like whether they're uppercase, ASCII, numeric, punctuation, and so on.

[`_ismbb` functions](ismbb-routines.md)\
Functions for testing an integer value for whether it represents an alpha character, blank character, a print character, and so on.

[`_ismbc` functions](ismbc-routines.md)\
Functions for testing a multibyte character for whether it represents an alpha character, blank character, a print character, and so on.

[operator `delete` (CRT)](delete-operator-crt.md)\
Beginning in Visual Studio 2013, the Universal C Runtime (UCRT) no longer supports the C++-specific operator delete function. It's now part of the C++ Standard Library.

[operator `new` (CRT)](new-operator-crt.md)\
Beginning in Visual Studio 2013, the Universal C Runtime (UCRT) no longer supports the C++-specific operator new function. It's now part of the C++ Standard Library.

[`printf` positional parameter functions](printf-p-positional-parameters.md)\
Positional parameters specify by number the argument to substitute into a field in a format string.

[`scanf` type field characters](scanf-type-field-characters.md)\
The type character determines whether the associated argument is interpreted as a character, string, or number for any of the `scanf` family of functions, including the secure versions, such as `scanf_s`.

[`scanf` width specification](scanf-width-specification.md)\
The width field is a positive decimal integer that controls the maximum number of characters to be read for that field. Applies to any of the `scanf` family of functions, including the secure versions, such as `scanf_s`.

[_spawn, _wspawn functions](spawn-wspawn-functions.md)\
Functions to create and execute a new process.

[`strcoll` functions](strcoll-functions.md)\
The `strcoll` and `wcscoll` functions compare two strings according to the `LC_COLLATE` category setting of the locale code page.

[String to numeric value functions](string-to-numeric-value-functions.md)\
The `strtod` family of functions convert a null-terminated string to a numeric value.

[`vprintf` functions](vprintf-functions.md)\
The `vprintf` functions take a pointer to an argument list, format it, and write the result to the specified destination. The functions differ in several ways: the parameter validation performed; whether they take wide or single-byte character strings; the output destination; and support for specifying the order in which parameters are used in the format string.

## See also

[C Runtime library reference](c-run-time-library-reference.md)
