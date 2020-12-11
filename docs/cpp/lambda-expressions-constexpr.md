---
description: "Learn more about: constexpr lambda expressions in C++"
title: "constexpr lambda expressions in C++"
ms.date: "04/08/2019"
helpviewer_keywords: ["lambda expressions [C++], constexpr"]
ms.assetid: b56346cd-fbff-475f-aeaa-ed2010c6d6f7
---
# constexpr lambda expressions in C++

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): A lambda expression may be declared as **`constexpr`** or used in a constant expression when the initialization of each data member that it captures or introduces is allowed within a constant expression.

```cpp
    int y = 32;
    auto answer = [y]() constexpr
    {
        int x = 10;
        return y + x;
    };

    constexpr int Increment(int n)
    {
        return [n] { return n + 1; }();
    }
```

A lambda is implicitly **`constexpr`** if its result satisfies the requirements of a **`constexpr`** function:

```cpp
    auto answer = [](int n)
    {
        return 32 + n;
    };

    constexpr int response = answer(10);
```

If a lambda is implicitly or explicitly **`constexpr`**, and you convert it to a function pointer, the resulting function is also **`constexpr`**:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Function Objects in the C++ Standard Library](../standard-library/function-objects-in-the-stl.md)<br/>
[Function Call](../cpp/function-call-cpp.md)<br/>
[for_each](../standard-library/algorithm-functions.md#for_each)
