---
title: "Compiler Warning (level 1) C4715"
description: "Learn more about: Compiler Warning (level 1) C4715"
ms.date: 11/04/2016
f1_keywords: ["C4715"]
helpviewer_keywords: ["C4715"]
---
# Compiler Warning (level 1) C4715

> 'function' : not all control paths return a value

## Remarks

The specified function can potentially not return a value.

## Example

The following example generates C4715:

```cpp
// C4715a.cpp
// compile with: /W1 /LD
int func1( int i )
{
   if( i )
   return 3;  // C4715 warning, nothing returned if i == 0
}
```

To prevent this warning, modify the code so that all paths assign a return value to the function:

```cpp
// C4715b.cpp
// compile with: /LD
int func1( int i )
{
   if( i ) return 3;
   else return 0;     // OK, always returns a value
}
```

It is possible that your code may contain a call to a function that never returns, as in the following example:

```cpp
// C4715c.cpp
// compile with: /W1 /LD
void fatal()
{
}
int glue()
{
   if(0)
      return 1;
   else if(0)
      return 0;
   else
      fatal();   // C4715
}
```

This code also generates a warning, because the compiler does not know that `fatal` never returns. To prevent this code from generating an error message, declare `fatal` using [__declspec(noreturn)](../../cpp/noreturn.md).
