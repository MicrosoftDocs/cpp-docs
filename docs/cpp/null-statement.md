---
description: "Learn more about: Null Statement"
title: "Null Statement"
ms.date: "11/04/2016"
helpviewer_keywords: ["expressions [C++], null", "null statement", "null values, expressions"]
ms.assetid: 606f5953-55f0-40c8-ae03-3ee3a819b851
---
# Null Statement

The "null statement" is an expression statement with the *expression* missing. It is useful when the syntax of the language calls for a statement but no expression evaluation. It consists of a semicolon.

Null statements are commonly used as placeholders in iteration statements or as statements on which to place labels at the end of compound statements or functions.

The following code fragment shows how to copy one string to another and incorporates the null statement:

```cpp
// null_statement.cpp
char *myStrCpy( char *Dest, const char *Source )
{
    char *DestStart = Dest;

    // Assign value pointed to by Source to
    // Dest until the end-of-string 0 is
    // encountered.
    while( *Dest++ = *Source++ )
        ;   // Null statement.

    return DestStart;
}

int main()
{
}
```

## See also

[Expression Statement](../cpp/expression-statement.md)
