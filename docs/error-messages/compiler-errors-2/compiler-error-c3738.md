---
title: "Compiler Error C3738"
description: "Learn more about: Compiler Error C3738"
ms.date: 11/04/2016
f1_keywords: ["C3738"]
helpviewer_keywords: ["C3738"]
---
# Compiler Error C3738

> 'calling_convention': the calling convention of the explicit instantiation must match that of the template being instantiated

## Remarks

It is recommended that you do not specify a calling convention on an explicit instantiation. If you must, though, the calling conventions must match.

## Example

The following example generates C3738.

```cpp
// C3738.cpp
// compile with: /clr
// processor: x86
#include <stdio.h>
template< class T >
void f ( T arg ) {   // by default calling convention is __cdecl
   printf ( "f: %s\n", __FUNCSIG__ );
}

template
void __stdcall f< int > ( int arg );   // C3738
// try the following line instead
// void f< int > ( int arg );

int main () {
   f(1);
   f< int > ( 1 );
}
```
