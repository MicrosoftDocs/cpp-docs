---
description: "Learn more about: Overload resolution of function template calls"
title: "Overload resolution of function template calls"
ms.date: 09/27/2022
helpviewer_keywords: ["function templates overload resolution"]
ms.assetid: a2918748-2cbb-4fc6-a176-e256f120bee4
---
# Overload resolution of function template calls

A function template can overload non-template functions of the same name. In this scenario, the compiler first attempts to resolve a function call by using template argument deduction to instantiate the function template with a unique specialization. If template argument deduction fails, then the compiler considers both instantiated function template overloads and non-template function overloads to resolve the call. These other overloads are known as the *candidate set*. If template argument deduction succeeds, then the generated function is compared with the other functions in the candidate set to determine the best match, following the rules for overload resolution. For more information, see [Function overloading](function-overloading.md).

## Example: Choose a non-template function

If a non-template function is an equally good match to a function template, the non-template function is chosen (unless the template arguments were explicitly specified), as in the call `f(1, 1)` in the following example.

```cpp
// template_name_resolution9.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

void f(int, int) { cout << "f(int, int)" << endl; }
void f(char, char) { cout << "f(char, char)" << endl; }

template <class T1, class T2>
void f(T1, T2)
{
   cout << "void f(T1, T2)" << endl;
};

int main()
{
   f(1, 1);   // Equally good match; choose the non-template function.
   f('a', 1); // Chooses the function template.
   f<int, int>(2, 2);  // Template arguments explicitly specified.
}
```

```Output
f(int, int)
void f(T1, T2)
void f(T1, T2)
```

## Example: Exact match function template preferred

The next example illustrates that the exactly matching function template is preferred if the non-template function requires a conversion.

```cpp
// template_name_resolution10.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

void f(int, int) { cout << "f(int, int)" << endl; }

template <class T1, class T2>
void f(T1, T2)
{
   cout << "void f(T1, T2)" << endl;
};

int main()
{
   long l = 0;
   int i = 0;
   // Call the function template f(long, int) because f(int, int)
   // would require a conversion from long to int.
   f(l, i);
}
```

```Output
void f(T1, T2)
```

## See also

[Name resolution](templates-and-name-resolution.md)\
[`typename`](typename.md)
