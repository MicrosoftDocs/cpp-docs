---
description: "Learn more about: Compiler Warning (level 1) C4503"
title: "Compiler Warning (level 1) C4503"
ms.date: "05/14/2018"
f1_keywords: ["C4503"]
helpviewer_keywords: ["C4503"]
ms.assetid: 7c5a98ae-5b6d-41d8-b881-12d3ffd5e392
---
# Compiler Warning (level 1) C4503

> '*identifier*' : decorated name length exceeded, name was truncated

## Remarks

This compiler warning is obsolete and is not generated in Visual Studio 2017 and later compilers.

The decorated name was longer than the compiler limit (4096), and was truncated. To avoid this warning and the truncation, reduce the number of arguments or the name lengths of identifiers used. Decorated names that are longer than the compiler limit have a hash applied and are not in danger of a name collision.

When using an older version of Visual Studio, this warning can be issued when your code contains templates specialized on templates repeatedly. For example, a map of maps (from the C++ Standard Library). In this situation, you can make your typedefs a type (a **`struct`**, for example) that contains the map.

You might, however, decide to not restructure your code.  It is possible to ship an application that generates C4503, but if you get link time errors on a truncated symbol, it can be more difficult to determine the type of the symbol in the error. Debugging may also be more difficult; the debugger may have difficultly mapping the symbol name to the type name. The correctness of the program, however, is unaffected by the truncated name.

## Example

The following sample generates C4503 in compilers before Visual Studio 2017:

```cpp
// C4503.cpp
// compile with: /W1 /EHsc /c
// C4503 expected
#include <string>
#include <map>

class Field{};

typedef std::map<std::string, Field> Screen;
typedef std::map<std::string, Screen> WebApp;
typedef std::map<std::string, WebApp> WebAppTest;
typedef std::map<std::string, WebAppTest> Hello;
Hello MyWAT;
```

This sample shows one way to rewrite your code to resolve C4503:

```cpp
// C4503b.cpp
// compile with: /W1 /EHsc /c
#include <string>
#include <map>

class Field{};

struct Screen2 {
   std::map<std::string, Field> Element;
};

struct WebApp2 {
   std::map<std::string, Screen2> Element;
};

struct WebAppTest2 {
   std::map<std::string, WebApp2> Element;
};

struct Hello2 {
   std::map<std::string, WebAppTest2> Element;
};

Hello2 MyWAT2;
```
