---
description: "Learn more about: Function Templates"
title: "Function Templates"
ms.date: "07/15/2019"
helpviewer_keywords: ["function templates", "templates, function", "function templates, about function templates"]
ms.assetid: 59b56a4b-0689-4161-9c07-25021562e2a7
---
# Function Templates

Class templates define a family of related classes that are based on the type arguments passed to the class upon instantiation. Function templates are similar to class templates but define a family of functions. With function templates, you can specify a set of functions that are based on the same code but act on different types or classes. The following function template swaps two items:

```cpp
// function_templates1.cpp
template< class T > void MySwap( T& a, T& b ) {
   T c(a);
   a = b;
   b = c;
}
int main() {
}
```

This code defines a family of functions that swap the values of the arguments. From this template, you can generate functions that will swap **`int`** and **`long`** types and also user-defined types. `MySwap` will even swap classes if the class's copy constructor and assignment operator are properly defined.

In addition, the function template will prevent you from swapping objects of different types, because the compiler knows the types of the *a* and *b* parameters at compile time.

Although this function could be performed by a nontemplated function, using void pointers, the template version is typesafe. Consider the following calls:

```cpp
int j = 10;
int k = 18;
CString Hello = "Hello, Windows!";
MySwap( j, k );          //OK
MySwap( j, Hello );      //error
```

The second `MySwap` call triggers a compile-time error, because the compiler cannot generate a `MySwap` function with parameters of different types. If void pointers were used, both function calls would compile correctly, but the function would not work properly at run time.

Explicit specification of the template arguments for a function template is allowed. For example:

```cpp
// function_templates2.cpp
template<class T> void f(T) {}
int main(int j) {
   f<char>(j);   // Generate the specialization f(char).
   // If not explicitly specified, f(int) would be deduced.
}
```

When the template argument is explicitly specified, normal implicit conversions are done to convert the function argument to the type of the corresponding function template parameters. In the above example, the compiler will convert `j` to type **`char`**.

## See also

[Templates](../cpp/templates-cpp.md)<br/>
[Function Template Instantiation](../cpp/function-template-instantiation.md)<br/>
[Explicit Instantiation](../cpp/explicit-instantiation.md)<br/>
[Explicit Specialization of Function Templates](../cpp/explicit-specialization-of-function-templates.md)
