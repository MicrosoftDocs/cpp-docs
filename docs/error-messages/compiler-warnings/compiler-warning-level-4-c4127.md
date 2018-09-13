---
title: "Compiler Warning (level 4) C4127 | Microsoft Docs"
ms.custom: ""
ms.date: "09/13/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4127"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4127"]
ms.assetid: f59ded9e-5227-45bd-ac43-2aa861581363
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4127

> conditional expression is constant

## Remarks

The controlling expression of an `if` statement or `while` loop evaluates to a constant. Because of their common idiomatic usage, beginning in Visual Studio 2015 update 3, trivial constants such as 1 or `true` do not trigger the warning, unless they are the result of an operation in an expression.

If the controlling expression of a `while` loop is a constant because the loop exits in the middle, consider replacing the `while` loop with a `for` loop. You can omit the initialization, termination test and loop increment of a `for` loop, which causes the loop to be infinite, just like `while(1)`, and you can exit the loop from the body of the `for` statement.

## Example

The following sample shows two ways C4127 is generated, and shows how to use a for loop to avoid the warning:

```cpp
// C4127.cpp  
// compile with: /W4  
#include <stdio.h>  
int main() {  
   if (true) {}           // OK in VS2015 update 3 and later
   if (1 == 1) {}         // C4127
   while (42) { break; }  // C4127

   // OK
   for ( ; ; ) {
      printf("test\n");
      break;
   }
}
```