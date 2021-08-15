---
description: "Learn more about: Identifiers (C++)"
title: "Identifiers (C++)"
ms.date: "05/07/2019"
helpviewer_keywords: ["decorated names", "decorated names, about decorated names", "identifiers, C++", "white space, in C++ identifiers", "identifiers [C++]"]
ms.assetid: 03a0dfb1-4530-4cdf-8295-5ea4dca4c1b8
---
# Identifiers (C++)

An identifier is a sequence of characters used to denote one of the following:

- Object or variable name

- Class, structure, or union name

- Enumerated type name

- Member of a class, structure, union, or enumeration

- Function or class-member function

- typedef name

- Label name

- Macro name

- Macro parameter

The following characters are allowed as any character of an identifier:

```
_ a b c d e f g h i j k l m
n o p q r s t u v w x y z
A B C D E F G H I J K L M
N O P Q R S T U V W X Y Z
```

Certain ranges of universal character names are also allowed in an identifier.  A universal character name in an identifier cannot designate a control character or a character in the basic source character set. For more information, see [Character Sets](../cpp/character-sets.md). These Unicode code point number ranges are allowed as universal character names for any character in an identifier:

- 00A8, 00AA, 00AD, 00AF, 00B2-00B5, 00B7-00BA, 00BC-00BE, 00C0-00D6, 00D8-00F6, 00F8-00FF, 0100-02FF, 0370-167F, 1681-180D, 180F-1DBF, 1E00-1FFF, 200B-200D, 202A-202E, 203F-2040, 2054, 2060-206F, 2070-20CF, 2100-218F, 2460-24FF, 2776-2793, 2C00-2DFF, 2E80-2FFF, 3004-3007, 3021-302F, 3031-303F, 3040-D7FF, F900-FD3D, FD40-FDCF, FDF0-FE1F, FE30-FE44, FE47-FFFD, 10000-1FFFD, 20000-2FFFD, 30000-3FFFD, 40000-4FFFD, 50000-5FFFD, 60000-6FFFD, 70000-7FFFD, 80000-8FFFD, 90000-9FFFD, A0000-AFFFD, B0000-BFFFD, C0000-CFFFD, D0000-DFFFD, E0000-EFFFD

The following characters are allowed as any character in an identifier except the first:

```
0 1 2 3 4 5 6 7 8 9
```

These  Unicode code point number ranges are also allowed as universal character names for any character in an identifier except the first:

- 0300-036F, 1DC0-1DFF, 20D0-20FF, FE20-FE2F

**Microsoft Specific**

Only the first 2048 characters of Microsoft C++ identifiers are significant. Names for user-defined types are "decorated" by the compiler to preserve type information. The resultant name, including the type information, cannot be longer than 2048 characters. (See [Decorated Names](../build/reference/decorated-names.md) for more information.) Factors that can influence the length of a decorated identifier are:

- Whether the identifier denotes an object of user-defined type or a type derived from a user-defined type.

- Whether the identifier denotes a function or a type derived from a function.

- The number of arguments to a function.

The dollar sign `$` is a valid identifier character in the Microsoft C++ compiler (MSVC). MSVC also allows you to use the actual characters represented by the allowed ranges of universal character names in identifiers. To use these characters, you must save the file by using a file encoding codepage that includes them.  This example shows how both extended characters and universal character names can be used interchangeably in your code.

```cpp
// extended_identifier.cpp
// In Visual Studio, use File, Advanced Save Options to set
// the file encoding to Unicode codepage 1200
struct テスト         // Japanese 'test'
{
    void トスト() {}  // Japanese 'toast'
};

int main() {
    テスト \u30D1\u30F3;  // Japanese パン 'bread' in UCN form
    パン.トスト();        // compiler recognizes UCN or literal form
}
```

The range of characters allowed in an identifier is less restrictive when compiling C++/CLI code. Identifiers in code compiled by using /clr should follow  [Standard ECMA-335: Common Language Infrastructure (CLI)](https://www.ecma-international.org/publications/standards/Ecma-335.htm).

**END Microsoft Specific**

The first character of an identifier must be an alphabetic character, either uppercase or lowercase, or an underscore ( **_** ). Because C++ identifiers are case sensitive, `fileName` is different from `FileName`.

Identifiers cannot be exactly the same spelling and case as keywords. Identifiers that contain keywords are legal. For example, `Pint` is a legal identifier, even though it contains **`int`**, which is a keyword.

Use of two sequential underscore characters ( **__** ) in an identifier, or a single leading underscore followed by a capital letter, is reserved for C++ implementations in all scopes. You should avoid using one leading underscore followed by a lowercase letter for names with file scope because of possible conflicts with current or future reserved identifiers.

## See also

[Lexical Conventions](../cpp/lexical-conventions.md)
