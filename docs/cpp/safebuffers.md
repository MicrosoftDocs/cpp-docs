---
description: "Learn more about: safebuffers"
title: "safebuffers"
ms.date: "11/04/2016"
f1_keywords: ["safebuffers_cpp"]
helpviewer_keywords: ["__declspec keyword (C++), safebuffers", "safebuffers __declspec keyword"]
ms.assetid: 0b0dce14-4523-44d2-8070-5dd0fdabc618
---
# safebuffers

**Microsoft Specific**

Tells the compiler not to insert buffer overrun security checks for a function.

## Syntax

```
__declspec( safebuffers )
```

## Remarks

The **/GS** compiler option causes the compiler to test for buffer overruns by inserting security checks on the stack. The types of data structures that are eligible for security checks are described in [/GS (Buffer Security Check)](../build/reference/gs-buffer-security-check.md). For more information about buffer overrun detection, see [Security Features in MSVC](https://devblogs.microsoft.com/cppblog/security-features-in-microsoft-visual-c/).

An expert manual code review or external analysis might determine that a function is safe from a buffer overrun. In that case, you can suppress security checks for a function by applying the **`__declspec(safebuffers)`** keyword to the function declaration.

> [!CAUTION]
> Buffer security checks provide important security protection and have a negligible affect on performance. Therefore, we recommend that you do not suppress them, except in the rare case where the performance of a function is a critical concern and the function is known to be safe.

## Inline Functions

A *primary function* can use an [inlining](inline-functions-cpp.md) keyword to insert a copy of a *secondary function*. If the **`__declspec(safebuffers)`** keyword is applied to a function, buffer overrun detection is suppressed for that function. However, inlining affects the **`__declspec(safebuffers)`** keyword in the following ways.

Suppose the **/GS** compiler option is specified for both functions, but the primary function specifies the **`__declspec(safebuffers)`** keyword. The data structures in the secondary function make it eligible for security checks, and the function does not suppress those checks. In this case:

- Specify the [__forceinline](inline-functions-cpp.md) keyword on the secondary function to force the compiler to inline that function regardless of compiler optimizations.

- Because the secondary function is eligible for security checks, security checks are also applied to the primary function even though it specifies the **`__declspec(safebuffers)`** keyword.

## Example

The following code shows how to use the **`__declspec(safebuffers)`** keyword.

```cpp
// compile with: /c /GS
typedef struct {
    int x[20];
} BUFFER;
static int checkBuffers() {
    BUFFER cb;
    // Use the buffer...
    return 0;
};
static __declspec(safebuffers)
    int noCheckBuffers() {
    BUFFER ncb;
    // Use the buffer...
    return 0;
}
int wmain() {
    checkBuffers();
    noCheckBuffers();
    return 0;
}
```

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[inline, __inline, \__forceinline](inline-functions-cpp.md)<br/>
[strict_gs_check](../preprocessor/strict-gs-check.md)
