---
description: "Learn more about: Best practices and examples (SAL)"
title: Best practices and examples (SAL)
ms.date: 03/30/2023
ms.topic: "conceptual"
---
# Best practices and examples (SAL)

Here are some ways to get the most out of the Source Code Annotation Language (SAL) and avoid some common problems.

## `_In_`

If the function is supposed to write to the element, use `_Inout_` instead of `_In_`. This is relevant in cases of automated conversion from older macros to SAL. Prior to SAL, many programmers used macros as comments—macros that were named `IN`, `OUT`, `IN_OUT`, or variants of these names. Although we recommend that you convert these macros to SAL, we also urge you to be careful when you convert them because the code might have changed since the original prototype was written and the old macro might no longer reflect what the code does. Be especially careful about the `OPTIONAL` comment macro because it's frequently placed incorrectly—for example, on the wrong side of a comma.

```cpp
#include <sal.h>

// Incorrect
void Func1(_In_ int *p1)
{
    if (p1 == NULL)
        return;

    *p1 = 1;
}

// Correct
// _Out_opt_ because the function tolerates NULL as a valid argument, i.e.
// no error is returned. If the function didn't check p1 for NULL, then
// _Out_ would be the better choice
void Func2(_Out_opt_ PCHAR p1)
{
    if (p1 == NULL)
        return;

    *p1 = 1;
}
```

## `_opt_`

If the caller isn't allowed to pass in a null pointer, use `_In_` or `_Out_` instead of `_In_opt_` or `_Out_opt_`. This applies even to a function that checks its parameters and returns an error if it's `NULL` when it shouldn't be. Although having a function check its parameter for unexpected `NULL` and return gracefully is a good defensive coding practice, it doesn't mean that the parameter annotation can be of an optional type (`_*Xxx*_opt_`).

```cpp
#include <sal.h>

// Incorrect
void Func1(_Out_opt_ int *p1)
{
    *p = 1;
}

// Correct
void Func2(_Out_ int *p1)
{
    *p = 1;
}
```

## `_Pre_defensive_` and `_Post_defensive_`

If a function appears at a trust boundary, we recommend that you use the `_Pre_defensive_` annotation.  The "defensive" modifier modifies certain annotations to indicate that, at the point of call, the interface should be checked strictly, but in the implementation body it should assume that incorrect parameters might be passed. In that case, `_In_ _Pre_defensive_` is preferred at a trust boundary to indicate that although a caller gets an error if it attempts to pass `NULL`, the function body is analyzed as if the parameter might be `NULL`, and any attempts to dereference the pointer without first checking it for `NULL` are flagged.  A `_Post_defensive_` annotation is also available, for use in callbacks where the trusted party is assumed to be the caller and the untrusted code is the called code.

## `_Out_writes_`

The following example demonstrates a common misuse of `_Out_writes_`.

```cpp
#include <sal.h>

// Incorrect
void Func1(_Out_writes_(size) CHAR *pb,
    DWORD size
);
```

The annotation `_Out_writes_` signifies that you have a buffer. It has `cb` bytes allocated, with the first byte initialized on exit. This annotation isn't strictly wrong and it's helpful to express the allocated size. However, it doesn't tell how many elements the function initializes.

The next example shows three correct ways to fully specify the exact size of the initialized portion of the buffer.

```cpp
#include <sal.h>

// Correct
void Func1(_Out_writes_to_(size, *pCount) CHAR *pb,
    DWORD size,
    PDWORD pCount
);

void Func2(_Out_writes_all_(size) CHAR *pb,
    DWORD size
);

void Func3(_Out_writes_(size) PSTR pb,
    DWORD size
);
```

## `_Out_ PSTR`

The use of `_Out_ PSTR` is almost always wrong. This combination is interpreted as having an output parameter that points to a character buffer and the buffer is null-terminated.

```cpp
#include <sal.h>

// Incorrect
void Func1(_Out_ PSTR pFileName, size_t n);

// Correct
void Func2(_Out_writes_(n) PSTR wszFileName, size_t n);
```

An annotation like `_In_ PCSTR` is common and useful. It points to an input string that has null termination because the precondition of `_In_` allows the recognition of a null-terminated string.

## `_In_ WCHAR* p`

`_In_ WCHAR* p` says that there's an input pointer `p` that points to one character. However, in most cases, this is probably not the specification that is intended. Instead, what is probably intended is the specification of a null-terminated array; to do that, use `_In_ PWSTR`.

```cpp
#include <sal.h>

// Incorrect
void Func1(_In_ WCHAR* wszFileName);

// Correct
void Func2(_In_ PWSTR wszFileName);
```

Missing the proper specification of null termination is common. Use the appropriate `STR` version to replace the type, as shown in the following example.

```cpp
#include <sal.h>
#include <string.h>

// Incorrect
BOOL StrEquals1(_In_ PCHAR p1, _In_ PCHAR p2)
{
    return strcmp(p1, p2) == 0;
}

// Correct
BOOL StrEquals2(_In_ PSTR p1, _In_ PSTR p2)
{
    return strcmp(p1, p2) == 0;
}
```

## `_Out_range_`

If the parameter is a pointer and you want to express the range of the value of the element that's pointed to by the pointer, use `_Deref_out_range_` instead of `_Out_range_`. In the following example, the range of *pcbFilled is expressed, not pcbFilled.

```cpp
#include <sal.h>

// Incorrect
void Func1(
    _Out_writes_bytes_to_(cbSize, *pcbFilled) BYTE *pb,
    DWORD cbSize,
    _Out_range_(0, cbSize) DWORD *pcbFilled
);

// Correct
void Func2(
    _Out_writes_bytes_to_(cbSize, *pcbFilled) BYTE *pb,
    DWORD cbSize,
    _Deref_out_range_(0, cbSize) _Out_ DWORD *pcbFilled
);
```

`_Deref_out_range_(0, cbSize)` isn't strictly required for some tools because it can be inferred from `_Out_writes_to_(cbSize,*pcbFilled)`, but it's shown here for completeness.

## Wrong context in `_When_`

Another common mistake is to use post-state evaluation for preconditions. In the following example, `_Requires_lock_held_` is a precondition.

```cpp
#include <sal.h>

// Incorrect
_When_(return == 0, _Requires_lock_held_(p->cs))
int Func1(_In_ MyData *p, int flag);

// Correct
_When_(flag == 0, _Requires_lock_held_(p->cs))
int Func2(_In_ MyData *p, int flag);
```

The expression `return` refers to a post-state value that isn't available in pre-state.

## `TRUE` in `_Success_`

If the function succeeds when the return value is nonzero, use `return != 0` as the success condition instead of `return == TRUE`. Nonzero doesn't necessarily mean equivalence to the actual value that the compiler provides for `TRUE`. The parameter to `_Success_` is an expression, and the following expressions are evaluated as equivalent: `return != 0`, `return != false`, `return != FALSE`, and `return` with no parameters or comparisons.

```cpp
// Incorrect
_Success_(return == TRUE) _Acquires_lock_(*lpCriticalSection)
BOOL WINAPI TryEnterCriticalSection(
  _Inout_ LPCRITICAL_SECTION lpCriticalSection
);

// Correct
_Success_(return != 0) _Acquires_lock_(*lpCriticalSection)
BOOL WINAPI TryEnterCriticalSection(
  _Inout_ LPCRITICAL_SECTION lpCriticalSection
);
```

## Reference variable

For a reference variable, the previous version of SAL used the implied pointer as the annotation target and required the addition of a `__deref` to annotations that attached to a reference variable. This version uses the object itself and doesn't require `_Deref_`.

```cpp
#include <sal.h>

// Incorrect
void Func1(
    _Out_writes_bytes_all_(cbSize) BYTE *pb,
    _Deref_ _Out_range_(0, 2) _Out_ DWORD &cbSize
);

// Correct
void Func2(
    _Out_writes_bytes_all_(cbSize) BYTE *pb,
    _Out_range_(0, 2) _Out_ DWORD &cbSize
);
```

## Annotations on return values

The following example shows a common problem in return value annotations.

```cpp
#include <sal.h>

// Incorrect
_Out_opt_ void *MightReturnNullPtr1();

// Correct
_Ret_maybenull_ void *MightReturnNullPtr2();
```

In this example, `_Out_opt_` says that the pointer might be `NULL` as part of the precondition. However, preconditions can't be applied to the return value. In this case, the correct annotation is `_Ret_maybenull_`.

## See also

[Using SAL annotations to reduce C/C++ code defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)\
[Understanding SAL](../code-quality/understanding-sal.md)\
[Annotating function parameters and return values](../code-quality/annotating-function-parameters-and-return-values.md)\
[Annotating function behavior](../code-quality/annotating-function-behavior.md)\
[Annotating structs and classes](../code-quality/annotating-structs-and-classes.md)\
[Annotating locking behavior](../code-quality/annotating-locking-behavior.md)\
[Specifying when and where an annotation applies](../code-quality/specifying-when-and-where-an-annotation-applies.md)\
[Intrinsic functions](../code-quality/intrinsic-functions.md)
