---
description: "Learn more about: Compiler Error C3066"
title: "Compiler Error C3066"
ms.date: "03/28/2017"
f1_keywords: ["C3066"]
helpviewer_keywords: ["C3066"]
ms.assetid: 226f6de5-c4c5-41e2-b31a-2e30a37fbbeb
---
# Compiler Error C3066

there are multiple ways that an object of this type can be called with these arguments

The compiler detected an ambiguous function call involving surrogates.

The following sample generates C3066:

```cpp
// C3066.cpp
template <class T, class U> void func(T*, U*){}

typedef void (*PF)(const int*, const char*);
typedef void (*PF1)(const int*, volatile char*);

struct A {
   operator PF() const {
      return func;
   }

   operator PF1() {
      return func;
   }

   operator PF1() const  {
      return func;
   }

};

int main() {
   A a;
   int i;
   char c;

   a(&i, &c);   // C3066
   a(&i, (const char *) &c);   // OK
}
```

## Copy-list-initialization

In Visual Studio 2015, the compiler erroneously treated copy-list-initialization in the same way as regular copy-initialization; it considered only converting constructors for overload resolution. In the following example, Visual Studio 2015 chooses MyInt(23) but Visual Studio 2017 correctly raises the error.

```
// From http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_closed.html#1228
struct MyList {
       explicit MyStore(int initialCapacity);
};

struct MyInt {
       MyInt(int i);
};

struct Printer {
       void operator()(MyStore const& s);
       void operator()(MyInt const& i);
};

void f() {
       Printer p;
       p({ 23 }); // C3066: there are multiple ways that an object of this type can be called with these arguments
}
```
