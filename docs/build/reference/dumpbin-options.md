---
title: "DUMPBIN options"
description: "Reference guide to the Microsoft DUMPBIN utility command-line options."
ms.date: "02/09/2020"
helpviewer_keywords: ["DUMPBIN program, options"]
ms.assetid: 563b696e-7599-4480-94b9-014776289ec8
---
# DUMPBIN options

An option consists of an *option specifier*, which is either a dash (`-`) or a forward slash (`/`), followed by the name of the option. Option names can't be abbreviated. Some options take arguments, specified after a colon (`:`). No spaces or tabs are allowed within an option specification. Use one or more spaces or tabs to separate option specifications on the command line. Option names and their keyword or file name arguments aren't case-sensitive. Most options apply to all binary files, but a few apply only to certain types of files. By default, DUMPBIN sends information to standard output. Use the [/OUT](out-dumpbin.md) option to send output to a file.

## Options list

DUMPBIN has the following options:

- [/ALL](all.md)

- [/ARCHIVEMEMBERS](archivemembers.md)

- [/CLRHEADER](clrheader.md)

- [/DEPENDENTS](dependents.md)

- [/DIRECTIVES](directives.md)

- [/DISASM\[:{BYTES\|NOBYTES}\]](disasm.md)

- [/ERRORREPORT:{NONE|PROMPT|QUEUE|SEND}](errorreport-dumpbin-exe.md) (Deprecated)

- [/EXPORTS](dash-exports.md)

- [/FPO](fpo.md)

- [/HEADERS](headers.md)

- [/IMPORTS\[:filename\]](imports-dumpbin.md)

- [/LINENUMBERS](linenumbers.md)

- [/LINKERMEMBER\[:{1|2}\]](linkermember.md)

- [/LOADCONFIG](loadconfig.md)

- [/NOPDB](nopdb.md)

- [/OUT:filename](out-dumpbin.md)

- [/PDATA](pdata.md)

- [/PDBPATH\[:VERBOSE\]](pdbpath.md)

- [/RANGEE:vaMin\[,vaMax\]](range.md)

- [/RAWDATA\[:{NONE\|1\|2\|4\|8}\[,#\]\]](rawdata.md)

- [/RELOCATIONS](relocations.md)

- [/SECTION:name](section-dumpbin.md)

- [/SUMMARY](summary.md)

- [/SYMBOLS](symbols.md)

- [/TLS](tls.md)

To list the options supported by DUMPBIN on the command line, use the **/?** option.

## See also

[Additional MSVC build tools](c-cpp-build-tools.md)\
[DUMPBIN command line](dumpbin-command-line.md)\
[DUMPBIN reference](dumpbin-reference.md)
