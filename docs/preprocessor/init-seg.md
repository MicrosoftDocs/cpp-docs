---
description: "Learn more about: init_seg pragma"
title: "init_seg pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.init_seg", "init_seg_CPP"]
helpviewer_keywords: ["pragmas, init_seg", "init_seg pragma", "data segment initializing [C++]"]
ms.assetid: 40a5898a-5c85-4aa9-8d73-3d967eb13610
---
# init_seg pragma

**C++ Specific**

Specifies a keyword or code section that affects the order in which startup code is executed.

## Syntax

> **#pragma init_seg(** { **compiler** | **lib** | **user** | "*section-name*" [ **,** *func-name* ] } **)**

## Remarks

The terms *segment* and *section* have the same meaning in this article.

Because code is sometimes required to initialize global static objects, you must specify when to construct the objects. In particular, it's important to use the **init_seg** pragma in dynamic-link libraries (DLLs), or in libraries that require initialization.

The options to the **init_seg** pragma are:

**compiler**\
Reserved for Microsoft C run-time library initialization. Objects in this group are constructed first.

**lib**\
Available for third-party class-library vendors' initializations. Objects in this group are constructed after the ones marked as **compiler**, but before any others.

**user**\
Available to any user. Objects in this group are constructed last.

*section-name*\
Allows explicit specification of the initialization section. Objects in a user-specified *section-name* aren't implicitly constructed. However, their addresses are placed in the section named by *section-name*.

The *section-name* you give will contain pointers to helper functions that will construct the global objects declared after the pragma in that module.

For a list of names you shouldn't use when creating a section, see [/SECTION](../build/reference/section-specify-section-attributes.md).

*func-name*\
Specifies a function to be called in place of `atexit` when the program exits. This helper function also calls [atexit](../c-runtime-library/reference/atexit.md) with a pointer to the destructor for the global object. If you specify a function identifier in the pragma of the form,

```cpp
int __cdecl myexit (void (__cdecl *pf)(void))
```

then your function will be called instead of the C run-time library's `atexit`. It allows you to build a list of the destructors to call when you're ready to destroy the objects.

If you need to defer initialization (for example, in a DLL) you may choose to specify the section name explicitly. Your code must then call the constructors for each static object.

There are no quotes around the identifier for the `atexit` replacement.

Your objects will still be placed in the sections defined by the other `XXX_seg` pragmas.

The objects that are declared in the module aren't automatically initialized by the C run-time. Your code has to do the initialization.

By default, `init_seg` sections are read only. If the section name is `.CRT`, the compiler silently changes the attribute to read only, even if it's marked as read, write.

You can't specify **init_seg** more than once in a translation unit.

Even if your object doesn't have a user-defined constructor, one explicitly defined in code, the compiler may generate one for you. For example, it may create one to bind v-table pointers. When needed, your code calls the compiler-generated constructor.

## Example

```cpp
// pragma_directive_init_seg.cpp
#include <stdio.h>
#pragma warning(disable : 4075)

typedef void (__cdecl *PF)(void);
int cxpf = 0;   // number of destructors we need to call
PF pfx[200];    // pointers to destructors.

int myexit (PF pf) {
   pfx[cxpf++] = pf;
   return 0;
}

struct A {
   A() { puts("A()"); }
   ~A() { puts("~A()"); }
};

// ctor & dtor called by CRT startup code
// because this is before the pragma init_seg
A aaaa;

// The order here is important.
// Section names must be 8 characters or less.
// The sections with the same name before the $
// are merged into one section. The order that
// they are merged is determined by sorting
// the characters after the $.
// InitSegStart and InitSegEnd are used to set
// boundaries so we can find the real functions
// that we need to call for initialization.

#pragma section(".mine$a", read)
__declspec(allocate(".mine$a")) const PF InitSegStart = (PF)1;

#pragma section(".mine$z",read)
__declspec(allocate(".mine$z")) const PF InitSegEnd = (PF)1;

// The comparison for 0 is important.
// For now, each section is 256 bytes. When they
// are merged, they are padded with zeros. You
// can't depend on the section being 256 bytes, but
// you can depend on it being padded with zeros.

void InitializeObjects () {
   const PF *x = &InitSegStart;
   for (++x ; x < &InitSegEnd ; ++x)
      if (*x) (*x)();
}

void DestroyObjects () {
   while (cxpf>0) {
      --cxpf;
      (pfx[cxpf])();
   }
}

// by default, goes into a read only section
#pragma init_seg(".mine$m", myexit)

A bbbb;
A cccc;

int main () {
   InitializeObjects();
   DestroyObjects();
}
```

```Output
A()
A()
A()
~A()
~A()
~A()
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
