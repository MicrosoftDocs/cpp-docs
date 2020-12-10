---
description: "Learn more about: noinline"
title: "noinline"
ms.date: "11/04/2016"
f1_keywords: ["noinline_cpp"]
helpviewer_keywords: ["noinline __declspec keyword", "__declspec keyword [C++], noinline"]
ms.assetid: f259d55b-dec7-4bde-8cf9-14521e4fdc42
---
# noinline

**Microsoft Specific**

**`__declspec(noinline)`** tells the compiler to never inline a particular member function (function in a class).

It may be worthwhile to not inline a function if it is small and not critical to the performance of your code. That is, if the function is small and not likely to be called often, such as a function that handles an error condition.

Keep in mind that if a function is marked **`noinline`**, the calling function will be smaller and thus, itself a candidate for compiler inlining.

```cpp
class X {
   __declspec(noinline) int mbrfunc() {
      return 0;
   }   // will not inline
};
```

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[inline, __inline, \__forceinline](inline-functions-cpp.md)
