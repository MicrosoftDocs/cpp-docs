---
title: "Compiler Error C2198"
description: "Learn more about: Compiler Error C2198"
ms.date: 11/04/2016
f1_keywords: ["C2198"]
helpviewer_keywords: ["C2198"]
---
# Compiler Error C2198

> 'function' : too few arguments for call

## Remarks

The compiler found too few parameters for a call to the function, or an incorrect function declaration.

## Example

The following example generates C2198:

```c
// C2198.c
// compile with: /c
void func( int, int );
int main() {
   func( 1 );   // C2198 only one actual parameter
   func( 1, 1 );   // OK
}
```
