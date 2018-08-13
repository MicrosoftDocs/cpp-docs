---
title: "Partial Ordering of Function Templates (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["partial ordering of function templates"]
ms.assetid: 0c17347d-0e80-47ad-b5ac-046462d9dc73
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---

# Partial Ordering of Function Templates (C++)

Multiple function templates that match the argument list of a function call can be available. C++ defines a partial ordering of function templates to specify which function should be called. The ordering is partial because there can be some templates that are considered equally specialized.

The compiler chooses the most specialized template function available from the possible matches. For example, if a function template takes a type __T__, and another function template taking __T\*__ is available, the __T\*__ version is said to be more specialized and is preferred over the generic __T__ version whenever the argument is a pointer type, even though both would be allowable matches.

Use the following process to determine if one function template candidate is more specialized:

1. Consider two function templates, T1 and T2.

2. Replace the parameters in T1 with a hypothetical unique type X.

3. With the parameter list in T1, see if T2 is a valid template for that parameter list. Ignore any implicit conversions.

4. Repeat the same process with T1 and T2 reversed.

5. If one template is a valid template argument list for the other template, but the converse is not true, then that template is considered to be less specialized than the other template. If both templates using the previous step form valid arguments for each other, then they are considered to be equally specialized, and an ambiguous call results when you attempt to use them.

6. Using these rules:

     1. A template specialization for a specific type is more specialized than one taking a generic type argument.

     2. A template taking only __T\*__ is more specialized than one taking only __T__, because a hypothetical type __X\*__ is a valid argument for a __T__ template argument, but __X__ is not a valid argument for a __T\*__ template argument.

     3. __const T__ is more specialized than __T__, because __const X__ is a valid argument for a __T__ template argument, but __X__ is not a valid argument for a __const T__ template argument.

     4. __const T\*__ is more specialized than __T\*__, because __const X\*__ is a valid argument for a __T\*__ template argument, but __X\*__ is not a valid argument for a __const T\*__ template argument.

## Example

The following sample works as specified in the standard:

```cpp
// partial_ordering_of_function_templates.cpp
// compile with: /EHsc
#include <iostream>

extern "C" int printf(const char*,...);
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