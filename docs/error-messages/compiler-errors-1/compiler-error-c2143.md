---
description: "Learn more about: Compiler Error C2143"
title: "Compiler Error C2143"
ms.date: "11/04/2016"
f1_keywords: ["C2143"]
helpviewer_keywords: ["C2143"]
ms.assetid: 1d8d1456-e031-4965-9240-09a6e33ba81c
---
# Compiler Error C2143

syntax error : missing 'token1' before 'token2'

The compiler expected a specific token (that is, a language element other than white space) and found another token instead.

Check the [C++ Language Reference](../../cpp/cpp-language-reference.md) to determine where code is syntactically incorrect. Because the compiler may report this error after it encounters the line that causes the problem, check several lines of code that precede the error.

C2143 can occur in different situations.

It can occur when an operator that can qualify a name (`::`, `->`, and `.`) must be followed by the keyword **`template`**, as in this example:

```cpp
class MyClass
{
    template<class Ty, typename PropTy>
    struct PutFuncType : public Ty::PutFuncType<Ty, PropTy> // error C2143
    {
    };
};
```

By default, C++ assumes that `Ty::PutFuncType` isn't a template; therefore, the following `<` is interpreted as a less-than sign.  You must tell the compiler explicitly that `PutFuncType` is a template so that it can correctly parse the angle bracket. To correct this error, use the **`template`** keyword on the dependent type's name, as shown here:

```cpp
class MyClass
{
    template<class Ty, typename PropTy>
    struct PutFuncType : public Ty::template PutFuncType<Ty, PropTy> // correct
    {
    };
};
```

C2143 can occur when **/clr** is used and a **`using`** directive has a syntax error:

```cpp
// C2143a.cpp
// compile with: /clr /c
using namespace System.Reflection;   // C2143
using namespace System::Reflection;
```

It can also occur when you are trying to compile a source code file by using CLR syntax without also using **/clr**:

```cpp
// C2143b.cpp
ref struct A {   // C2143 error compile with /clr
   void Test() {}
};

int main() {
   A a;
   a.Test();
}
```

The first non-whitespace character that follows an **`if`** statement must be a left parenthesis. The compiler cannot translate anything else:

```cpp
// C2143c.cpp
int main() {
   int j = 0;

   // OK
   if (j < 25)
      ;

   if (j < 25)   // C2143
}
```

C2143 can occur when a closing brace, parenthesis, or semicolon is missing on the line where the error is detected or on one of the lines just above:

```cpp
// C2143d.cpp
// compile with: /c
class X {
   int member1;
   int member2   // C2143
} x;
```

Or when there's an invalid tag in a class declaration:

```cpp
// C2143e.cpp
class X {
   int member;
} x;

class + {};   // C2143 + is an invalid tag name
class ValidName {};   // OK
```

Or when a label is not attached to a statement. If you must place a label by itself, for example, at the end of a compound statement, attach it to a null statement:

```cpp
// C2143f.cpp
// compile with: /c
void func1() {
   // OK
   end1:
      ;

   end2:   // C2143
}
```

The error can occur when an unqualified call is made to a type in the C++ Standard Library:

```cpp
// C2143g.cpp
// compile with: /EHsc /c
#include <vector>
static vector<char> bad;   // C2143
static std::vector<char> good;   // OK
```

Or there is a missing **`typename`** keyword:

```cpp
// C2143h.cpp
template <typename T>
struct X {
   struct Y {
      int i;
   };
   Y memFunc();
};
template <typename T>
X<T>::Y X<T>::memFunc() {   // C2143
// try the following line instead
// typename X<T>::Y X<T>::memFunc() {
   return Y();
}
```

Or if you try to define an explicit instantiation:

```cpp
// C2143i.cpp
// compile with: /EHsc /c
// template definition
template <class T>
void PrintType(T i, T j) {}

template void PrintType(float i, float j){}   // C2143
template void PrintType(float i, float j);   // OK
```

In a C program, variables must be declared at the beginning of the function, and they cannot be declared after the function executes non-declaration instructions.

```C
// C2143j.c
int main()
{
    int i = 0;
    i++;
    int j = 0; // C2143
}
```
