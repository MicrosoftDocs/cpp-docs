---
description: "Learn more about: Partial Ordering of Function Templates (C++)"
title: "Partial Ordering of Function Templates (C++)"
ms.date: "07/30/2019"
helpviewer_keywords: ["partial ordering of function templates"]
ms.assetid: 0c17347d-0e80-47ad-b5ac-046462d9dc73
---
# Partial Ordering of Function Templates (C++)

Multiple function templates that match the argument list of a function call can be available. C++ defines a partial ordering of function templates to specify which function should be called. The ordering is partial because there can be some templates that are considered equally specialized.

The compiler chooses the most specialized template function available from the possible matches. For example, if a function template takes a type `T` and another function template that takes `T*` is available, the `T*` version is said to be more specialized. It's preferred over the generic `T` version whenever the argument is a pointer type, even though both would be allowable matches.

Use the following process to determine if one function template candidate is more specialized:

1. Consider two function templates, T1 and T2.

1. Replace the parameters in T1 with a hypothetical unique type X.

1. With the parameter list in T1, see if T2 is a valid template for that parameter list. Ignore any implicit conversions.

1. Repeat the same process with T1 and T2 reversed.

1. If one template is a valid template argument list for the other template, but the converse isn't true, then that template is considered to be less specialized than the other template. If by using the previous step, both templates form valid arguments for each other, then they're considered to be equally specialized, and an ambiguous call results when you attempt to use them.

1. Using these rules:

   1. A template specialization for a specific type is more specialized than one taking a generic type argument.

   1. A template taking only `T*` is more specialized than one taking only `T`, because a hypothetical type `X*` is a valid argument for a `T` template argument, but `X` is not a valid argument for a `T*` template argument.

   1. `const T` is more specialized than `T`, because `const X` is a valid argument for a `T` template argument, but `X` is not a valid argument for a `const T` template argument.

   1. `const T*` is more specialized than `T*`, because `const X*` is a valid argument for a `T*` template argument, but `X*` is not a valid argument for a `const T*` template argument.

## Example

The following sample works as specified in the standard:

```cpp
// partial_ordering_of_function_templates.cpp
// compile with: /EHsc
#include <iostream>

template <class T> void f(T) {
   printf_s("Less specialized function called\n");
}

template <class T> void f(T*) {
   printf_s("More specialized function called\n");
}

template <class T> void f(const T*) {
   printf_s("Even more specialized function for const T*\n");
}

int main() {
   int i =0;
   const int j = 0;
   int *pi = &i;
   const int *cpi = &j;

   f(i);   // Calls less specialized function.
   f(pi);  // Calls more specialized function.
   f(cpi); // Calls even more specialized function.
   // Without partial ordering, these calls would be ambiguous.
}
```

### Output

```Output
Less specialized function called
More specialized function called
Even more specialized function for const T*
```

## See also

[Function Templates](../cpp/function-templates.md)
