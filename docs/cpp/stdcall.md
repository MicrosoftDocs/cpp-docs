---
description: "Learn more about: __stdcall"
title: "__stdcall"
ms.date: "10/10/2018"
f1_keywords: ["__stdcall_cpp", "__stdcall", "_stdcall"]
helpviewer_keywords: ["__stdcall keyword [C++]"]
ms.assetid: e212594b-1827-4d07-9527-7d412b300df8
---
# __stdcall

The **`__stdcall`** calling convention is used to call Win32 API functions. The callee cleans the stack, so the compiler makes `vararg` functions **`__cdecl`**. Functions that use this calling convention require a function prototype. The **`__stdcall`** modifier is Microsoft-specific.

## Syntax

> *return-type* **`__stdcall`** *function-name*[**`(`** *argument-list* **`)`**]

## Remarks

The following list shows the implementation of this calling convention.

|Element|Implementation|
|-------------|--------------------|
|Argument-passing order|Right to left.|
|Argument-passing convention|By value, unless a pointer or reference type is passed.|
|Stack-maintenance responsibility|Called function pops its own arguments from the stack.|
|Name-decoration convention|An underscore (`_`) is prefixed to the name. The name is followed by the at sign (`@`) followed by the number of bytes (in decimal) in the argument list. Therefore, the function declared as `int func( int a, double b )` is decorated as follows: `_func@12`|
|Case-translation convention|None|

The [/Gz](../build/reference/gd-gr-gv-gz-calling-convention.md) compiler option specifies **`__stdcall`** for all functions not explicitly declared with a different calling convention.

For compatibility with previous versions, **`_stdcall`** is a synonym for **`__stdcall`** unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

Functions declared using the **`__stdcall`** modifier return values the same way as functions declared using [`__cdecl`](../cpp/cdecl.md).

On ARM and x64 processors, **`__stdcall`** is accepted and ignored by the compiler; on ARM and x64 architectures, by convention, arguments are passed in registers when possible, and subsequent arguments are passed on the stack.

For non-static class functions, if the function is defined out-of-line, the calling convention modifier does not have to be specified on the out-of-line definition. That is, for class non-static member methods, the calling convention specified during declaration is assumed at the point of definition. Given this class definition,

```cpp
struct CMyClass {
   void __stdcall mymethod();
};
```

this

```cpp
void CMyClass::mymethod() { return; }
```

is equivalent to this

```cpp
void __stdcall CMyClass::mymethod() { return; }
```

## Example

In the following example, use of **`__stdcall`** results in all `WINAPI` function types being handled as a standard call:

```cpp
// Example of the __stdcall keyword
#define WINAPI __stdcall
// Example of the __stdcall keyword on function pointer
typedef BOOL (__stdcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);
```

## See also

[Argument Passing and Naming Conventions](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
