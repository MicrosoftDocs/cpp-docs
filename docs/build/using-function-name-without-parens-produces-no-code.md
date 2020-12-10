---
description: "Learn more about: Using Function Name Without () Produces No Code"
title: "Using Function Name Without () Produces No Code"
ms.date: "11/04/2016"
helpviewer_keywords: ["functions [C++], without parentheses"]
ms.assetid: edf4a177-a160-44aa-8436-e077b5b27809
---
# Using Function Name Without () Produces No Code

When a function name declared in your program is used without parentheses, the compiler does not produce code. This occurs regardless of whether or not the function takes parameters because the compiler calculates the function address; however, because the function call operator "()" is not present, no call is made. This result is similar to the following:

```
// compile with /Wall to generate a warning
int a;
a;      // no code generated here either
```

In Visual C++, even using warning level 4 generates no diagnostic output. No warning is issued; no code is produced.

The sample code below compiles (with a warning) and links correctly without errors but produces no code in reference to `funcn( )`. For this to work correctly, add the function call operator "()".

```
#include <stdio.h>
void funcn();

int main() {
   funcn;      /* missing function call operator;
                  call will fail.  Use funcn() */
   }

void funcn() {
   printf("\nHello World\n");
}
```

## See also

[Optimizing Your Code](optimizing-your-code.md)
