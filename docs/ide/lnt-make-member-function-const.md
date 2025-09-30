---
title: lnt-make-member-function-const
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-make-member-function-const."
ms.date: 09/28/2023
f1_keywords: ["lnt-make-member-function-const"]
helpviewer_keywords: ["lnt-make-member-function-const"]
monikerRange: ">=msvc-170"
---
# `lnt-make-member-function-const`

When a member function doesn't modify the object's state, annotate it with the `const` keyword. This guidance comes from [Con.2: By default, make member functions `const`](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#con2-by-default-make-member-functions-const) in the C++ Core Guidelines.

## Example

The linter flags the following code twice because `getValue()` and `getRadius()` don't modify the object's state:

```cpp
class MyClass
{ 
public: 

  int getValue() { return value; }  // Flagged: 'getValue' doesn't modify the object's state. 
  void setValue(int newValue) { value = newValue; }  // OK: 'setValue' modifies the object's state.   

private: 

  int value = 42; 
}; 

double getRadius()
{   // Flagged: 'getRadius' doesn't modify the object's state. 
    return radius; 
} 
```

## How to fix the issue

Mark member functions `const` when they don't modify the object's state. This lets readers of the code and the compiler know that the function is safe to call on a `const` object.

In the following example, `const` has been added to `getValue()` and `getRadius()`:

```cpp
class MyClass
{ 
public: 

  int getValue() const { return value; }  // Added const 
  void setValue(int newValue) { value = newValue; }  // OK: 'setValue' modifies the object's state.   

private: 

  int value = 42; 

}; 

double getRadius() const // added const
{   // 'getRadius' doesn't modify the object's state. 
    return radius; 
}  
```

The editor can make this change for you. Place the cursor on the flagged symbol and choose **Show potential fixes** and then **Make member const**:

:::image type="complex" source="media/lnt-make-member-function-const.png" alt-text="Screenshot of the editor suggesting to make member const." :::
The cursor is on the line int getValue() and **Show potential fixes** appeared and was chosen. Now **Make member const** is visible and it shows the get value function with const added to it. You can now choose **Make member const** to make the change.
:::image-end:::

Make this change for all flagged member functions.

## Remarks

Introduced in Visual Studio 2022 17.8, this check focuses on `const` usage for member functions in C++ code. The C++ Core Guidelines recommends marking member functions as `const` when they don't modify the object's state.

The current implementation of this check allows you to add `const` to member functions after their declaration. It's a good practice to declare member functions as `const` from the beginning if they don't modify the object's state.

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)
