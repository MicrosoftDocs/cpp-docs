---
description: "Learn more about: Overview of Member Functions"
title: "Overview of Member Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["this pointer, and nonstatic member functions", "nonstatic member functions [C++]", "inline functions [C++], treating member functions as", "member functions [C++], definition in class declaration"]
ms.assetid: 9f77a438-500e-40bb-a6c6-544678f3f4c8
---
# Overview of Member Functions

Member functions are either static or nonstatic. The behavior of static member functions differs from other member functions because static member functions have no implicit **`this`** argument. Nonstatic member functions have a **`this`** pointer. Member functions, whether static or nonstatic, can be defined either in or outside the class declaration.

If a member function is defined inside a class declaration, it is treated as an inline function, and there is no need to qualify the function name with its class name. Although functions defined inside class declarations are already treated as inline functions, you can use the **`inline`** keyword to document code.

An example of declaring a function within a class declaration follows:

```cpp
// overview_of_member_functions1.cpp
class Account
{
public:
    // Declare the member function Deposit within the declaration
    //  of class Account.
    double Deposit( double HowMuch )
    {
        balance += HowMuch;
        return balance;
    }
private:
    double balance;
};

int main()
{
}
```

If a member function's definition is outside the class declaration, it is treated as an inline function only if it is explicitly declared as **`inline`**. In addition, the function name in the definition must be qualified with its class name using the scope-resolution operator (`::`).

The following example is identical to the previous declaration of class `Account`, except that the `Deposit` function is defined outside the class declaration:

```cpp
// overview_of_member_functions2.cpp
class Account
{
public:
    // Declare the member function Deposit but do not define it.
    double Deposit( double HowMuch );
private:
    double balance;
};

inline double Account::Deposit( double HowMuch )
{
    balance += HowMuch;
    return balance;
}

int main()
{
}
```

> [!NOTE]
> Although member functions can be defined either inside a class declaration or separately, no member functions can be added to a class after the class is defined.

Classes containing member functions can have many declarations, but the member functions themselves must have only one definition in a program. Multiple definitions cause an error message at link time. If a class contains inline function definitions, the function definitions must be identical to observe this "one definition" rule.
