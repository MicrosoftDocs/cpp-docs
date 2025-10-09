---
title: "Compiler Warning (Level 1) C4743"
description: "Learn more about: Compiler Warning (Level 1) C4743"
ms.date: 06/16/2022
f1_keywords: ["C4743"]
helpviewer_keywords: ["C4743"]
---
# Compiler Warning (Level 1) C4743

> '*type*' has different size in '*file1*' and '*file2*': *size_1* and *size_2* bytes

## Remarks

An external variable referenced or defined in two files has different types in those files, and the compiler determined that the size of the variable in *file1* differs from the size of the variable in *file2*.

There's an important case when this warning can be emitted for C++. If you declare class types with the same name in two different files, if those declarations contain virtual functions, and if the declarations aren't the same, then the compiler can emit warning C4744 for the virtual function tables. The warning occurs because there are two different-sized virtual function tables for the same type, and the linker must choose one of them to incorporate into the executable.  It's possible that it can result in your program calling the wrong virtual function.

To resolve this warning, either use the same type definition or use different names for the types or variables.

## Example

The following example generates C4743. To compile it, place both files in the same folder, then run this command in a developer command prompt:  

```cmd
cl /EHsc /W1 /GL /O2 C4743a.cpp C4743b.cpp
```

Source file *`C4743a.cpp`*:

```cpp
// C4743a.cpp
class C {
public:
    virtual void f1(void);
    virtual void f2(void);
    virtual void f3(void);
};

void C::f1(void) {}
void C::f2(void) {}
void C::f3(void) {}
C q;
```

Source file *`C4743b.cpp`*:

```cpp
// C4743b.cpp
class C {
public:
    virtual void f1(void);
    virtual void f2(void);
    virtual void f3(void);
    virtual void f4(void);
    virtual void f5(void);
};

void C::f4(void) {}
void C::f5(void) {}
C x;

int main() {}
```

To resolve this issue, rename one of the `C` classes.
