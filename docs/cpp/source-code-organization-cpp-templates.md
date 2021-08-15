---
description: "Learn more about: Source code organization (C++ Templates)"
title: "Source code organization (C++ Templates)"
ms.date: "04/22/2019"
ms.assetid: 50569c5d-0219-4966-9bcf-a8689074ad1d
---
# Source code organization (C++ Templates)

When defining a class template, you must organize the source code in such a way that the member definitions are visible to the compiler when it needs them. You have the choice of using the *inclusion model* or the *explicit instantiation* model. In the inclusion model, you include the member definitions in every file that uses a template. This approach is simplest and provides maximum flexibility in terms of what concrete types can be used with your template. Its disadvantage is that it can increase compilation times. The impact can be significant if a project and/or the included files themselves are large. With the explicit instantiation approach, the template itself instantiates concrete classes or class members for specific types.  This approach can speed up compilation times, but it limits usage to only those classes that the template implementer has enabled ahead of time. In general, we recommend that you use the inclusion model unless the compilation times become a problem.

## Background

Templates are not like ordinary classes in the sense that the compiler does not generate object code for a template or any of its members. There is nothing to generate until the template is instantiated with concrete types. When the compiler encounters a template instantiation such as `MyClass<int> mc;` and no class with that signature exists yet, it generates a new class. It also attempts to generate code for any member functions that are used. If those definitions are in a file that is not #included, directly or indirectly, in the .cpp file that is being compiled, the compiler can't see them.  From the compiler's point of view, this isn't necessarily an error because the functions may be defined in another translation unit, in which case the linker will find them.  If the linker does not find that code, it raises an *unresolved external* error.

## The inclusion model

The simplest and most common way to make template definitions visible throughout a translation unit,  is to put the definitions in the header file itself.  Any .cpp file that uses the template simply has to #include the header. This is the approach used in the Standard Library.

```cpp
#ifndef MYARRAY
#define MYARRAY
#include <iostream>

template<typename T, size_t N>
class MyArray
{
    T arr[N];
public:
    // Full definitions:
    MyArray(){}
    void Print()
    {
        for (const auto v : arr)
        {
            std::cout << v << " , ";
        }
    }

    T& operator[](int i)
   {
       return arr[i];
   }
};
#endif
```

With this approach, the compiler has access to the complete template definition and can instantiate templates on-demand for any type. It is simple and relatively easy to maintain. However, the inclusion model does have a cost in terms of compilation times. This cost can be significant in large programs, especially if the template header itself #includes other headers. Every *`.cpp`* file that #includes the header will get its own copy of the function templates and all the definitions. The linker will generally be able to sort things out so that you do not end up with multiple definitions for a function, but it takes time to do this work. In smaller programs that extra compilation time is probably not significant.

## The explicit instantiation model

If the inclusion model is not viable for your project, and you know definitively the set of types that will be used to instantiate a template, then you can separate out the template code into an *`.h`* and *`.cpp`* file, and in the *`.cpp`* file explicitly instantiate the templates. This will cause object code to be generated that the compiler will see when it encounters user instantiations.

You create an explicit instantiation by using the keyword template followed by the signature of the entity you want to instantiate. This can be a type or a member. If you explicitly instantiate a type, all members are instantiated.

```cpp
template MyArray<double, 5>;
```

```cpp
//MyArray.h
#ifndef MYARRAY
#define MYARRAY

template<typename T, size_t N>
class MyArray
{
    T arr[N];
public:
    MyArray();
    void Print();
    T& operator[](int i);
};
#endif

//MyArray.cpp
#include <iostream>
#include "MyArray.h"

using namespace std;

template<typename T, size_t N>
MyArray<T,N>::MyArray(){}

template<typename T, size_t N>
void MyArray<T,N>::Print()
{
    for (const auto v : arr)
    {
        cout << v << "'";
    }
    cout << endl;
}

template MyArray<double, 5>;template MyArray<string, 5>;
```

In the previous example, the explicit instantiations are at the bottom of the .cpp file. A `MyArray` may be used only for **`double`** or `String` types.

> [!NOTE]
> In C++11 the **`export`** keyword was deprecated in the context of template definitions. In practical terms this has little impact because most compilers never supported it.
