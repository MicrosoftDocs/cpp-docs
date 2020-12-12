---
description: "Learn more about: Explicit Overrides (C++)"
title: "Explicit Overrides (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["virtual functions [C++], explicit overrides", "overriding, functions", "derived classes [C++], virtual functions", "explicit virtual function overrides", "explicit override of virtual function"]
ms.assetid: ee583234-5cda-4e90-b55e-3f9fbf079ced
---
# Explicit Overrides (C++)

**Microsoft Specific**

If the same virtual function is declared in two or more [interfaces](../cpp/interface.md) and if a class is derived from these interfaces, you can explicitly override each virtual function.

For information on explicit overrides in managed code using C++/CLI, see [Explicit Overrides](../extensions/explicit-overrides-cpp-component-extensions.md).

**END Microsoft Specific**

## Example

The following code example illustrates how to use explicit overrides:

```cpp
// deriv_ExplicitOverrides.cpp
// compile with: /GR
extern "C" int printf_s(const char *, ...);

__interface IMyInt1 {
   void mf1();
   void mf1(int);
   void mf2();
   void mf2(int);
};

__interface IMyInt2 {
   void mf1();
   void mf1(int);
   void mf2();
   void mf2(int);
};

class CMyClass : public IMyInt1, public IMyInt2 {
public:
   void IMyInt1::mf1() {
      printf_s("In CMyClass::IMyInt1::mf1()\n");
   }

   void IMyInt1::mf1(int) {
      printf_s("In CMyClass::IMyInt1::mf1(int)\n");
   }

   void IMyInt1::mf2();
   void IMyInt1::mf2(int);

   void IMyInt2::mf1() {
      printf_s("In CMyClass::IMyInt2::mf1()\n");
   }

   void IMyInt2::mf1(int) {
         printf_s("In CMyClass::IMyInt2::mf1(int)\n");
   }

   void IMyInt2::mf2();
   void IMyInt2::mf2(int);
};

void CMyClass::IMyInt1::mf2() {
   printf_s("In CMyClass::IMyInt1::mf2()\n");
}

void CMyClass::IMyInt1::mf2(int) {
   printf_s("In CMyClass::IMyInt1::mf2(int)\n");
}

void CMyClass::IMyInt2::mf2() {
   printf_s("In CMyClass::IMyInt2::mf2()\n");
}

void CMyClass::IMyInt2::mf2(int) {
   printf_s("In CMyClass::IMyInt2::mf2(int)\n");
}

int main() {
   IMyInt1 *pIMyInt1 = new CMyClass();
   IMyInt2 *pIMyInt2 = dynamic_cast<IMyInt2 *>(pIMyInt1);

   pIMyInt1->mf1();
   pIMyInt1->mf1(1);
   pIMyInt1->mf2();
   pIMyInt1->mf2(2);
   pIMyInt2->mf1();
   pIMyInt2->mf1(3);
   pIMyInt2->mf2();
   pIMyInt2->mf2(4);

   // Cast to a CMyClass pointer so that the destructor gets called
      CMyClass *p = dynamic_cast<CMyClass *>(pIMyInt1);
      delete p;
}
```

```Output
In CMyClass::IMyInt1::mf1()
In CMyClass::IMyInt1::mf1(int)
In CMyClass::IMyInt1::mf2()
In CMyClass::IMyInt1::mf2(int)
In CMyClass::IMyInt2::mf1()
In CMyClass::IMyInt2::mf1(int)
In CMyClass::IMyInt2::mf2()
In CMyClass::IMyInt2::mf2(int)
```

## See also

[Inheritance](../cpp/inheritance-cpp.md)
