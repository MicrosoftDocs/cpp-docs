---
description: "Learn more about: __fastcall"
title: "__fastcall"
ms.date: "12/17/2018" 
f1_keywords: ["__fastcall_cpp", "__fastcall", "_fastcall"]
helpviewer_keywords: ["__fastcall keyword [C++]"]
ms.assetid: bb5b9c8a-dfad-450c-9119-0ac2bc59544f
---
# __fastcall

**Microsoft Specific**

The **`__fastcall`** calling convention specifies that arguments to functions are to be passed in registers, when possible. This calling convention only applies to the x86 architecture. The following list shows the implementation of this calling convention.

|Element|Implementation|
|-------------|--------------------|
|Argument-passing order|The first two DWORD or smaller arguments that are found in the argument list from left to right are passed in ECX and EDX registers; all other arguments are passed on the stack from right to left.|
|Stack-maintenance responsibility|Called function pops the arguments from the stack.|
|Name-decoration convention|At sign (\@) is prefixed to names; an at sign followed by the number of bytes (in decimal) in the parameter list is suffixed to names.|
|Case-translation convention|No case translation performed.|

> [!NOTE]
> Future compiler versions may use different registers to store parameters.

Using the [/Gr](../build/reference/gd-gr-gv-gz-calling-convention.md) compiler option causes each function in the module to compile as **`__fastcall`** unless the function is declared by using a conflicting attribute, or the name of the function is `main`.

The **`__fastcall`** keyword is accepted and ignored by the compilers that target ARM and x64 architectures; on an x64 chip, by convention, the first four arguments are passed in registers when possible, and additional arguments are passed on the stack. For more information, see [x64 Calling Convention](../build/x64-calling-convention.md). On an ARM chip, up to four integer arguments and eight floating-point arguments may be passed in registers, and additional arguments are passed on the stack.

For non-static class functions, if the function is defined out-of-line, the calling convention modifier does not have to be specified on the out-of-line definition. That is, for class non-static member methods, the calling convention specified during declaration is assumed at the point of definition. Given this class definition:

```cpp
struct CMyClass {
   void __fastcall mymethod();
};
```

this:

```cpp
void CMyClass::mymethod() { return; }
```

is equivalent to this:

```cpp
void __fastcall CMyClass::mymethod() { return; }
```

For compatibility with previous versions, **_fastcall** is a synonym for **`__fastcall`** unless compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

## Example

In the following example, the function `DeleteAggrWrapper` is passed arguments in registers:

```cpp
// Example of the __fastcall keyword
#define FASTCALL    __fastcall

void FASTCALL DeleteAggrWrapper(void* pWrapper);
// Example of the __ fastcall keyword on function pointer
typedef BOOL (__fastcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);
```

**END Microsoft Specific**

## See also

[Argument Passing and Naming Conventions](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
