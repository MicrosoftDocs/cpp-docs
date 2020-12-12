---
description: "Learn more about: Compiler Warning (Level 1) C4743"
title: "Compiler Warning (Level 1) C4743"
ms.date: "05/13/2019"
f1_keywords: ["C4743"]
helpviewer_keywords: ["C4743"]
ms.assetid: 2ee76ea3-77f3-4c2f-9a57-0751823c89fd
---
# Compiler Warning (Level 1) C4743

'*type*' has different size in '*file1*' and '*file2*': *number* and *number* bytes

An external variable referenced or defined in two files has different types in those files, and the compiler determined that the size of the variable in *file1* differs from the size of the variable in *file2*.

## Remarks

There is an important case when this warning can be emitted for C++. If you declare the same types with the same name in two different files, if those declarations contain virtual functions, and if the declarations are not the same, then the compiler can emit warning C4744 for the virtual function tables. The warning occurs because there are two different-sized virtual function tables for the same type, and linker must choose one of them to incorporate into the executable.  It is possible that it can result in your program calling the wrong virtual function.

To resolve this warning, either use the same type definition or use different names for the types or variables.

## Example

The following sample generates C4743. To compile it, place both files in the same folder, then run  

```cmd
cl /EHsc /W1 /GL /O2 C4743a.cpp C4743b.cpp
```

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
