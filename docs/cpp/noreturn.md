---
description: "Learn more about: noreturn"
title: "noreturn"
ms.date: "11/04/2016"
f1_keywords: ["noreturn_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], noreturn", "noreturn __declspec keyword"]
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
---
# noreturn

**Microsoft Specific**

The **`__declspec`** attribute tells the compiler that a function does not return. The compiler then knows that the code following a call to a **`__declspec(noreturn)`** function is unreachable.

If the compiler finds a function with a control path that does not return a value, it generates a warning (C4715) or error message (C2202). If the control path cannot be reached due to a function that never returns, use **`__declspec(noreturn)`** to prevent this warning or error.

> [!NOTE]
> Adding **`__declspec(noreturn)`** to a function that is expected to return can result in undefined behavior.

## Example

In the following example, when the argument for `isZeroOrPositive` is negative, `fatal` is called. There isn't a return statement in that control path, which results in warning C4715 that not all control paths return a value. Declaring `fatal` as **`__declspec(noreturn)`** mitigates that warning, which is desirable because there is no point in it since `fatal()` terminates the program.

```cpp
// noreturn2.cpp
#include <exception>

__declspec(noreturn) void fatal()
{
   std::terminate();
}

int isZeroOrPositive(int val)
{
   if (val == 0)
   {
      return 0;
   }
   else if (val > 0)
   {
      return 1;
   }
   // this function terminates if val is negative
   fatal();
}

int main()
{
   isZeroOrPositive(123);
}
```

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)\
[Keywords](../cpp/keywords-cpp.md)
