---
description: "Learn more about: Mutable Data Members (C++)"
title: "Mutable Data Members (C++)"
ms.date: "03/14/2024"
f1_keywords: ["mutable_cpp"]
helpviewer_keywords: ["mutable keyword [C++]"]
---
# Mutable Data Members (C++)

This keyword can only be applied to non-static, non-const, and non-reference data members of a class. If a data member is declared **`mutable`**, then it is legal to assign a value to this data member from a **`const`** member function.

## Syntax

```
mutable member-variable-declaration;
```

## Remarks

For example, the following code will compile without error because `m_accessCount` has been declared to be **`mutable`**, and therefore can be modified by `GetFlag` even though `GetFlag` is a const member function.

```cpp
// mutable.cpp
class X
{
public:
    bool GetFlag() const
    {
        m_accessCount++;
        return m_flag;
    }
private:
    bool m_flag;
    mutable int m_accessCount;
};
```

## See also

[Keywords](../cpp/keywords-cpp.md)
