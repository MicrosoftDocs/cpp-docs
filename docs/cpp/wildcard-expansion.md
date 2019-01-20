---
title: "Wildcard Expansion"
ms.date: "11/04/2016"
f1_keywords: ["_setargv"]
helpviewer_keywords: ["asterisk wildcard", "_setargv function", "command line [C++], processing arguments", "command line [C++], wildcards", "command-line wildcards", "question mark, wildcard"]
ms.assetid: 1a543398-607b-4404-93d1-45d290bde638
---
# Wildcard Expansion

## Microsoft Specific

You can use wildcards — the question mark (?) and asterisk (*) — to specify filename and path arguments on the command-line.

Command-line arguments are handled by a routine called `_setargv` (or `_wsetargv` in the wide-character environment), which by default does not expand wildcards into separate strings in the `argv` string array. For more information on enabling wildcard expansion, refer to [Expanding Wildcard Arguments](../c-language/expanding-wildcard-arguments.md).

**END Microsoft Specific**

## See also

- [main: Program Startup](../cpp/main-program-startup.md)
