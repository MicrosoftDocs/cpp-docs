---
description: "Learn more about: Compiler Error C2268"
title: "Compiler Error C2268"
ms.date: "11/04/2016"
f1_keywords: ["C2268"]
helpviewer_keywords: ["C2268"]
ms.assetid: 0ed055c9-3c6f-4df2-a5b6-85cf0e01a249
---
# Compiler Error C2268

'function' is a compiler predefined library helper. Library helpers are not supported with /GL; compile object file 'file' without /GL.

A function defined in your source code has the same name as an internal compiler function. Compile the module containing the function without [/GL](../../build/reference/gl-whole-program-optimization.md).

The following sample generates C2268:

```c
// C2268.c
// compile with: /c
// processor: x86
extern int SHFusionLoadLibrary(int lpLibFileName);

int __cdecl _except_handler3(void) {
   return SHFusionLoadLibrary(0);
}

extern int main(void);

void* mainCRTStartup(void* p) {
   p = main;
   return p;
}
```

and then:

```c
// C2268b.c
// compile with: C2268.c /EHsc /GL /Ob0 /O2 /Fa /GS- /link /nodefaultlib
// processor: x86
extern int SHFusionLoadLibrary(int lpLibFileName);

extern int __cdecl _except_handler3(void);
extern void mainCRTStartup(void*);
int g = 2;

#define ENTERCONTEXT(fail) \
   int ulCookie = 0;\
   if (!SHActivateContext(&ulCookie)) \
      return fail;\
   __try {

#define LEAVECONTEXT \
    } __finally {SHDeactivateContext(ulCookie);}

int SHActivateContext(int* a) {
    return *a == g || !*a ||_except_handler3();
}

void SHDeactivateContext(int a) {
    g = a;
}

int SHFusionLoadLibrary(int lpLibFileName) {   // C2268
    ENTERCONTEXT(0)
    g = lpLibFileName;
    LEAVECONTEXT

    return lpLibFileName;
}

int main(void) {
    g = SHFusionLoadLibrary(10);
    return 0;
}
```
