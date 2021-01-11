---
description: "Learn more about: Function Template Instantiation"
title: "Function Template Instantiation"
ms.date: "11/04/2016"
helpviewer_keywords: ["templates, instantiation", "function templates, instantiation", "instantiation, function templates"]
ms.assetid: f22a07c7-3ad1-465a-84f5-8737e274bd47
---
# Function Template Instantiation

When a function template is first called for each type, the compiler creates an instantiation. Each instantiation is a version of the templated function specialized for the type. This instantiation will be called every time the function is used for the type. If you have several identical instantiations, even in different modules, only one copy of the instantiation will end up in the executable file.

Conversion of function arguments is allowed in function templates for any argument and parameter pair where the parameter does not depend on a template argument.

Function templates can be explicitly instantiated by declaring the template with a particular type as an argument. For example, the following code is allowed:

```cpp
// function_template_instantiation.cpp
template<class T> void f(T) { }

// Instantiate f with the explicitly specified template.
// argument 'int'
//
template void f<int> (int);

// Instantiate f with the deduced template argument 'char'.
template void f(char);
int main()
{
}
```

## See also

[Function Templates](../cpp/function-templates.md)
