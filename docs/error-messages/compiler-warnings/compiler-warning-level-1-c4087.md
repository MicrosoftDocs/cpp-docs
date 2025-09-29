---
title: "Compiler Warning (level 1) C4087"
description: "Learn more about: Compiler Warning (level 1) C4087"
ms.date: 11/04/2016
f1_keywords: ["C4087"]
helpviewer_keywords: ["C4087"]
---
# Compiler Warning (level 1) C4087

> 'function' : declared with 'void' parameter list

## Remarks

The function declaration has no formal parameters, but the function call has actual parameters. Extra parameters are passed according to the calling convention of the function.

This warning is for the C compiler.

## Example

The following example generates C4087:

```c
// C4087.c
// compile with: /W1
int f1( void ) {
}

int main() {
   f1( 10 );   // C4087
}
```
