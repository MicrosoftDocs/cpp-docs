---
description: "Learn more about: Compiler Warning (level 4) C4062"
title: "Compiler Warning (level 4) C4062"
ms.date: "04/05/2019"
f1_keywords: ["C4062"]
helpviewer_keywords: ["C4062"]
ms.assetid: 36d1c6ae-c917-4b08-bf30-2eb49ee94169
---
# Compiler Warning (level 4) C4062

> enumerator '*identifier*' in switch of enum '*enumeration*' is not handled

The enumerator *identifier* has no associated `case` handler in a **`switch`** statement, and there's no **`default`** label that can catch it. The missing case may be an oversight, and is a potential error in your code. For a related warning on unused enumerators in **`switch`** statements that have a **`default`** case, see [C4061](compiler-warning-level-4-c4061.md).

This warning is off by default. For more information about how to enable warnings that are off by default, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following sample generates C4062, and shows how to fix it:

```cpp
// C4062.cpp
// compile with: /EHsc /W4
#pragma warning(default : 4062)
enum E { a, b, c };
void func ( E e ) {
   switch(e) {
      case a:
      case b:
   // case c:  // to fix, uncomment this line
      break;   // no default label
   }   // C4062, enumerator 'c' not handled
}

int main() {
}
```

## See also

[Compiler Warning (level 4) C4061](compiler-warning-level-4-c4061.md)
