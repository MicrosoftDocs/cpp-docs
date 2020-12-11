---
description: "Learn more about: Compiler Warning (level 4) C4220"
title: "Compiler Warning (level 4) C4220"
ms.date: "11/04/2016"
f1_keywords: ["C4220"]
helpviewer_keywords: ["C4220"]
ms.assetid: aba18868-825f-4763-9af6-3296406a80e4
---
# Compiler Warning (level 4) C4220

varargs matches remaining parameters

Under the default Microsoft extensions (/Ze), a pointer to a function matches a pointer to a function with similar, but variable, arguments.

## Example

```c
// C4220.c
// compile with: /W4

int ( *pFunc1) ( int a, ... );
int ( *pFunc2) ( int a, int b);

int main()
{
   if ( pFunc1 != pFunc2 ) {};  // C4220
}
```

Such pointers do not match under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
