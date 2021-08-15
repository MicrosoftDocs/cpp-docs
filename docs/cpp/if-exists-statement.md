---
description: "Learn more about: __if_exists Statement"
title: "__if_exists Statement"
ms.date: "11/04/2016"
f1_keywords: ["__if_exists_cpp"]
helpviewer_keywords: ["identifiers, testing for existence", "symbols, testing for existence", "__if_exists keyword [C++]"]
ms.assetid: d3eb34b6-f3a9-4063-a286-b62a28c0c7fa
---
# __if_exists Statement

The **`__if_exists`** statement tests whether the specified identifier exists. If the identifier exists, the specified statement block is executed.

## Syntax

```
__if_exists ( identifier ) {
statements
};
```

#### Parameters

*identifier*\
The identifier whose existence you want to test.

*statements*\
One or more statements to execute if *identifier* exists.

## Remarks

> [!CAUTION]
> To achieve the most reliable results, use the **`__if_exists`** statement under the following constraints.

- Apply the **`__if_exists`** statement to only simple types, not templates.

- Apply the **`__if_exists`** statement to identifiers both inside or outside a class. Do not apply the **`__if_exists`** statement to local variables.

- Use the **`__if_exists`** statement only in the body of a function. Outside of the body of a function, the **`__if_exists`** statement can test only fully defined types.

- When you test for overloaded functions, you cannot test for a specific form of the overload.

The complement to the **`__if_exists`** statement is the [__if_not_exists](../cpp/if-not-exists-statement.md) statement.

## Example

Notice that this example uses templates, which is not advised.

```cpp
// the__if_exists_statement.cpp
// compile with: /EHsc
#include <iostream>

template<typename T>
class X : public T {
public:
   void Dump() {
      std::cout << "In X<T>::Dump()" << std::endl;

      __if_exists(T::Dump) {
         T::Dump();
      }

      __if_not_exists(T::Dump) {
         std::cout << "T::Dump does not exist" << std::endl;
      }
   }
};

class A {
public:
   void Dump() {
      std::cout << "In A::Dump()" << std::endl;
   }
};

class B {};

bool g_bFlag = true;

class C {
public:
   void f(int);
   void f(double);
};

int main() {
   X<A> x1;
   X<B> x2;

   x1.Dump();
   x2.Dump();

   __if_exists(::g_bFlag) {
      std::cout << "g_bFlag = " << g_bFlag << std::endl;
   }

   __if_exists(C::f) {
      std::cout << "C::f exists" << std::endl;
   }

   return 0;
}
```

## Output

```Output
In X<T>::Dump()
In A::Dump()
In X<T>::Dump()
T::Dump does not exist
g_bFlag = 1
C::f exists
```

## See also

[Selection Statements](../cpp/selection-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[__if_not_exists Statement](../cpp/if-not-exists-statement.md)
