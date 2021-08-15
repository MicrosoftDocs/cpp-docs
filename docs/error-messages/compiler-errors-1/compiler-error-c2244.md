---
description: "Learn more about: Compiler Error C2244"
title: "Compiler Error C2244"
ms.date: "11/04/2016"
f1_keywords: ["C2244"]
helpviewer_keywords: ["C2244"]
ms.assetid: d9911c12-ceb5-4f93-ac47-b44a485215c2
---
# Compiler Error C2244

'identifier' : unable to match function definition to an existing declaration

An unusual use of the unary + operator was used in front of a function call that did not have parenthesis.

This error only occurs in C++ projects.

The following sample generates C2244:

```cpp
// C2244.cpp
int func(char) {
   return 0;
}

int func(int) {
   return 0;
}

int main() {
   +func;   // C2244
}
```

C2244 can also occur when an incorrect function signature is used for a member function of a class template.

```cpp
// C2244b.cpp
// compile with: /c
template<class T>
class XYZ {
   void func(T t);
};

template<class T>
void XYZ<T>::func(int i) {}   // C2244 wrong function signature
// try the following line instead
// void XYZ<T>::func(T t) {}
```

C2244 can also occur when an incorrect function signature is used for a member function template.

```cpp
// C2244c.cpp
// compile with: /c
class ABC {
   template<class T>
   void func(int i, T t);
};

template<class T>
void ABC::func(int i) {}   // C2244 wrong signature
// try the following line instead
// void ABC::func(int i, T t) {}
```

You cannot partially specialize a function template.

```cpp
// C2244d.cpp
template<class T, class U>
class QRS {
   void func(T t, U u);
};

template<class T>
void QRS<T,int>::func(T t, int u) {}   // C2244
```
