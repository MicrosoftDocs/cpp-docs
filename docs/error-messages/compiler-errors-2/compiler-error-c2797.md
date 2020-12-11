---
description: "Learn more about: Compiler Error C2797"
title: "Compiler Error C2797"
ms.date: "11/04/2016"
f1_keywords: ["C2797"]
helpviewer_keywords: ["C2797"]
ms.assetid: 9fb26d35-eb5c-46fc-9ff5-756fba5bdaff
---
# Compiler Error C2797

(Obsolete) List initialization inside member initializer list or non-static data member initializer is not implemented.

This warning is obsolete in Visual Studio 2015. In Visual Studio 2013 and earlier versions, the Microsoft C++ compiler does not implement list initialization inside either a member initializer list or a non-static data member initializer. Before Visual Studio 2013 Update 3, this was silently converted to a function call, which could lead to bad code generation. Visual Studio 2013 Update 3 reports this as an error.

This example generates C2797:

```
#include <vector>
struct S {
    S() : v1{1} {} // C2797, VS2013 RTM incorrectly calls 'vector(size_type)'

    std::vector<int> v1;
    std::vector<int> v2{1, 2}; // C2797, VS2013 RTM incorrectly calls 'vector(size_type, const int &)'
};
```

This example also generates C2797:

```
struct S1 {
    int i;
};

struct S2 {
    S2() : s1{0} {} // C2797, VS2013 RTM interprets as S2() : s1(0) {} causing C2664
    S1 s1;
    S1 s2{0}; // C2797, VS2013 RTM interprets as S1 s2 = S1(0); causing C2664
};
```

To fix this issue, you can use explicit construction of inner lists. For example:

```
#include <vector>
typedef std::vector<int> Vector;
struct S {
    S() : v1(Vector{1}) {}

    Vector v1;
    Vector v2 = Vector{1, 2};
};
```

If you do not require list initialization:

```
struct S {
    S() : s1("") {}

    std::string s1;
    std::string s2 = std::string("");
};
```

(The compiler in Visual Studio 2013 does this implicitly prior to Visual Studio 2013 Update 3.)
