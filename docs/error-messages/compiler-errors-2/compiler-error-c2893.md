---
description: "Learn more about: Compiler Error C2893"
title: "Compiler Error C2893"
ms.date: "11/04/2016"
f1_keywords: ["C2893"]
helpviewer_keywords: ["C2893"]
ms.assetid: ec0cbe43-005d-45da-8742-aaeb9b81d28e
---
# Compiler Error C2893

Failed to specialize function template 'template name'

The compiler failed to specialize a function template. There can be many causes for this error.

In general, the way to resolve a C2893 error is to review the function's signature and make sure you can instantiate every type.

## Example

C2893 occurs because `f`'s template parameter `T` is deduced to be `std::map<int,int>`, but `std::map<int,int>` has no member `data_type` (`T::data_type` can not be instantiated with `T = std::map<int,int>`.). The following sample generates C2893.

```cpp
// C2893.cpp
// compile with: /c /EHsc
#include<map>
using namespace std;
class MyClass {};

template<class T>
inline typename T::data_type
// try the following line instead
// inline typename  T::mapped_type
f(T const& p1, MyClass const& p2);

template<class T>
void bar(T const& p1) {
    MyClass r;
    f(p1,r);   // C2893
}

int main() {
   map<int,int> m;
   bar(m);
}
```
