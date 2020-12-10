---
description: "Learn more about: Compiler Error C2707"
title: "Compiler Error C2707"
ms.date: "11/04/2016"
f1_keywords: ["C2707"]
helpviewer_keywords: ["C2707"]
ms.assetid: 3deaf45c-74da-4c9d-acc6-b82412720b74
---
# Compiler Error C2707

'identifier' : bad context for intrinsic function

Structured exception-handling intrinsics are invalid in certain contexts:

- `_exception_code()` outside an exception filter or **`__except`** block

- `_exception_info()` outside an exception filter

- `_abnormal_termination()` outside a **`__finally`** block

To resolve the error, be sure that the exception-handling intrinsics are placed in the appropriate context.

## Example

The following sample generates C2707.

```cpp
// C2707.cpp
#include <windows.h>
#include <stdio.h>

LONG MyFilter(LONG excode)
{
    return (excode == EXCEPTION_ACCESS_VIOLATION ?
        EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH);   // OK
}

LONG func(void)
{
    int x, y;
    return(GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION ?  // C2707
             EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH);

    __try
    {
        y = 0;
        x = 4 / y;
        return 0;
     }

    __except(MyFilter(GetExceptionCode()))
    {
        return(GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION ? // ok
               EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH);
    }
}

int main()
{
    __try
    {
        func();
    } __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf_s("Caught exception\n");
    }
}
```
