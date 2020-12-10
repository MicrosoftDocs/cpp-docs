---
description: "Learn more about: Compiler Warning (level 4) C4210"
title: "Compiler Warning (level 4) C4210"
ms.date: "11/04/2016"
f1_keywords: ["C4210"]
helpviewer_keywords: ["C4210"]
ms.assetid: f8600adf-dfe2-4022-a37a-3d4997641dfd
---
# Compiler Warning (level 4) C4210

nonstandard extension used : function given file scope

With the default Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)), function declarations have file scope.

```c
// C4210.c
// compile with: /W4 /c
void func1()
{
   extern int func2( double );   // C4210 expected
}

int main()
{
   func2( 4 );   //  /Ze passes 4 as type double
}                //  /Za passes 4 as type int
```

This extension can prevent your code from being portable to other compilers.
