---
description: "Learn more about: Compiler Warning (level 1) C4715"
title: "Compiler Warning (level 1) C4715"
ms.date: "11/04/2016"
f1_keywords: ["C4715"]
helpviewer_keywords: ["C4715"]
ms.assetid: 1c819bf7-0d8b-4f5e-b338-9cc292870439
---
# Compiler Warning (level 1) C4715

'function' : not all control paths return a value

The specified function can potentially not return a value.

## Example

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
