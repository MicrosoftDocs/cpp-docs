---
description: "Learn more about: Trigraphs"
title: "Trigraphs"
ms.date: "11/04/2016"
helpviewer_keywords: ["??) trigraph", "??- trigraph", "question mark, in trigraphs", "??= trigraph", "?? trigraph", "??< trigraph", "??/ trigraph", "trigraphs", "? symbol, trigraph", "??> trigraph", "??! trigraph", "??' trigraph"]
ms.assetid: 617f76ec-b8e8-4cfe-916c-4bc32cbd9aeb
---
# Trigraphs

The source character set of C source programs is contained within the 7-bit ASCII character set but is a superset of the ISO 646-1983 Invariant Code Set. Trigraph sequences allow C programs to be written using only the ISO (International Standards Organization) Invariant Code Set. Trigraphs are sequences of three characters (introduced by two consecutive question marks) that the compiler replaces with their corresponding punctuation characters. You can use trigraphs in C source files with a character set that does not contain convenient graphic representations for some punctuation characters.

C++17 removes trigraphs from the language. Implementations may continue to support trigraphs as part of the  implementation-defined mapping from the physical source file to the *basic source character set*, though the standard encourages implementations not to do so. Through C++14, trigraphs are supported as in C.

Visual C++  continues to support trigraph substitution, but it's disabled by default. For information on how to enable trigraph substitution, see [`/Zc:trigraphs` (Trigraphs Substitution)](../build/reference/zc-trigraphs-trigraphs-substitution.md).

The following table shows the nine trigraph sequences. All occurrences in a source file of the punctuation characters in the first column are replaced with the corresponding character in the second column.

### Trigraph Sequences

| Trigraph | Punctuation Character |
|----------|-----------------------|
| `??=` | `#` |
| `??(` | `[` |
| `??/` | `\` |
| `??)` | `]` |
| `??'` | `^` |
| `??<` | `{` |
| `??!` | `|` |
| `??>` | `}` |
| `??-` | `~` |

A trigraph is always treated as a single source character. The translation of trigraphs takes place in the first [translation phase](../preprocessor/phases-of-translation.md), before the recognition of escape characters in string literals and character constants. Only the nine trigraphs shown in the above table are recognized. All other character sequences are left untranslated.

The character escape sequence, **`\?`**, prevents the misinterpretation of trigraph-like character sequences. (For information about escape sequences, see [Escape Sequences](../c-language/escape-sequences.md).) For example, if you attempt to print the string `What??!` with this `printf` statement

```C
printf( "What??!\n" );
```

the string printed is `What|` because `??!` is a trigraph sequence that is replaced with the `|` character. Write the statement as follows to correctly print the string:

```C
printf( "What?\?!\n" );
```

In this `printf` statement, a backslash escape character in front of the second question mark prevents the misinterpretation of `??!` as a trigraph.

## See also

[`/Zc:trigraphs` (Trigraphs Substitution)](../build/reference/zc-trigraphs-trigraphs-substitution.md)<br/>
[C Identifiers](../c-language/c-identifiers.md)
