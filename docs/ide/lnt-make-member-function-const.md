---
title: make-member-function-const
description: "Reference for Visual Studio C++ IntelliSense Linter check make-member-function-const."
ms.date: 09/27/2023
f1_keywords: ["make-member-function-const"]
helpviewer_keywords: ["make-member-function-const"]
monikerRange: ">=msvc-170"
---
# `make-member-function-const`

When member functions don’t modify the object's state, annotate them with the `const` keyword. This guidance comes from the [C++ Core Guideline Con.2](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#con2-by-default-make-member-functions-const).

## Example

```cpp
class MyClass
{ 
public: 

  int getValue() { return value; }  // Flagged: ‘getValue’ doesn't modify the object's state. 
  void setValue(int newValue) { value = newValue; }  // OK: ‘setValue’ modifies the object's state.   

private: 

  int value = 42; 
}; 

double getRadius()
{   // Flagged: ‘getRadius’ doesn't modify the object's state. 
    return radius; 
} 
```

## How to fix the issue

The solution proposed by the linter is to mark member functions `const` when they don't modify the object's state. This let's both developers and the compiler know that the function is safe to call on a `const` object.

In the following example, `const` has been added to `getValue()` and `getRadius()`:

```cpp
class MyClass
{ 
public: 

  int getValue() const { return value; }  // Added const 
  void setValue(int newValue) { value = newValue; }  // OK: ‘setValue’ modifies the object's state.   

private: 

  int value = 42; 

}; 

double getRadius() const // added const
{   // ‘getRadius’ doesn't modify the object's state. 
    return radius; 
}  
```

The editor can make this change for you. Place the cursor on the flagged symbol and choose **Show potential fixes** and then **Make member const**:

:::image type="complex" source="media/make-member-function-const.png" alt-text="Screenshot of the editor suggesting to make member const." :::
The cursor is on the line int getValue() and **Show potential fixes** appeared and was chosen. Now **Make member const** is visible and it shows the get value function with const added to it. You can now choose **Make member const** to make the change.
:::image-end:::

Make this change for all flagged member functions.

## Remarks

This check focuses on `const` usage for member functions in C++ code. The C++ Core Guidelines recommends marking member functions as `const` when they don't modify the object's state.

The current implementation of this check allows you to add `const` to member functions after their declaration. It's a good practice to declare member functions as `const` from the beginning if they don't modify the object's state.

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)