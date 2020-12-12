---
description: "Learn more about: Namespaces (C++)"
title: "Namespaces (C++)"
ms.date: "08/30/2017"
f1_keywords: ["namespace_CPP", "using_CPP"]
helpviewer_keywords: ["namespaces [C++]"]
ms.assetid: d1a5a9ab-1cad-47e6-a82d-385bb77f4188
---
# Namespaces (C++)

A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries. All identifiers at namespace scope are visible to one another without qualification. Identifiers outside the namespace can access the members by using the fully qualified name for each identifier, for example `std::vector<std::string> vec;`, or else by a [using Declaration](../cpp/using-declaration.md) for a single identifier (`using std::string`), or a [using Directive](../cpp/namespaces-cpp.md#using_directives) for all the identifiers in the namespace (`using namespace std;`). Code in header files should always use the fully qualified namespace name.

The following example shows a namespace declaration and three ways that code outside the namespace can accesses their members.

```cpp
namespace ContosoData
{
    class ObjectManager
    {
    public:
        void DoSomething() {}
    };
    void Func(ObjectManager) {}
}
```

Use the fully qualified name:

```cpp
ContosoData::ObjectManager mgr;
mgr.DoSomething();
ContosoData::Func(mgr);
```

Use a using declaration to bring one identifier into scope:

```cpp
using ContosoData::ObjectManager;
ObjectManager mgr;
mgr.DoSomething();
```

Use a using directive to bring everything in the namespace into scope:

```cpp
using namespace ContosoData;

ObjectManager mgr;
mgr.DoSomething();
Func(mgr);
```

## <a id="using_directives"></a> using directives

The **`using`** directive allows all the names in a **`namespace`** to be used without the *namespace-name* as an explicit qualifier. Use a using directive in an implementation file (i.e. *.cpp) if you are using several different identifiers in a namespace; if you are just using one or two identifiers, then consider a using declaration to only bring those identifiers into scope and not all the identifiers in the namespace. If a local variable has the same name as a namespace variable, the namespace variable is hidden. It is an error to have a namespace variable with the same name as a global variable.

> [!NOTE]
> A using directive can be placed at the top of a .cpp file (at file scope), or inside a class or function definition.
>
> In general, avoid putting using directives in header files (*.h) because any file that includes that header will bring everything in the namespace into scope, which can cause name hiding and name collision problems that are very difficult to debug. Always use fully qualified names in a header file. If those names get too long, you can use a namespace alias to shorten them. (See below.)

## Declaring namespaces and namespace members

Typically, you declare a namespace in a header file. If your function implementations are in a separate file, then qualify the function names, as in this example.

```cpp
//contosoData.h
#pragma once
namespace ContosoDataServer
{
    void Foo();
    int Bar();
}
```

Function implementations in contosodata.cpp should use the fully qualified name, even if you place a **`using`** directive at the top of the file:

```cpp
#include "contosodata.h"
using namespace ContosoDataServer;

void ContosoDataServer::Foo() // use fully-qualified name here
{
   // no qualification needed for Bar()
   Bar();
}

int ContosoDataServer::Bar(){return 0;}
```

A namespace can be declared in multiple blocks in a single file, and in multiple files. The compiler joins the parts together during preprocessing and the resulting namespace contains all the members declared in all the parts. An example of this is the std namespace which is declared in each of the header files in the standard library.

Members of a named namespace can be defined outside the namespace in which they are declared by explicit qualification of the name being defined. However, the definition must appear after the point of declaration in a namespace that encloses the declaration's namespace. For example:

```cpp
// defining_namespace_members.cpp
// C2039 expected
namespace V {
    void f();
}

void V::f() { }        // ok
void V::g() { }        // C2039, g() is not yet a member of V

namespace V {
    void g();
}
```

This error can occur when namespace members are declared across multiple header files, and you have not included those headers in the correct order.

## The global namespace

If an identifier is not declared in an explicit namespace, it is part of the implicit global namespace. In general, try to avoid making declarations at global scope when possible, except for the entry point [main Function](../c-language/main-function-and-program-execution.md), which is required to be in the global namespace. To explicitly qualify a global identifier, use the scope resolution operator with no name, as in `::SomeFunction(x);`. This will differentiate the identifier from anything with the same name in any other namespace, and it will also help to make your code easier for others to understand.

## The std namespace

All C++ standard library types and functions are declared in the `std` namespace or namespaces nested inside `std`.

## Nested namespaces

Namespaces may be nested. An ordinary nested namespace has unqualified access to its parent's members, but the parent members do not have unqualified access to the nested namespace (unless it is declared as inline), as shown in the following example:

```cpp
namespace ContosoDataServer
{
    void Foo();

    namespace Details
    {
        int CountImpl;
        void Ban() { return Foo(); }
    }

    int Bar(){...};
    int Baz(int i) { return Details::CountImpl; }
}
```

Ordinary nested namespaces can be used to encapsulate internal implementation details that are not part of the public interface of the parent namespace.

## Inline namespaces (C++ 11)

In contrast to an ordinary nested namespace, members of an inline namespace are treated as members of the parent namespace. This characteristic enables argument dependent lookup on overloaded functions to work on functions that have overloads in a parent and a nested inline namespace. It also enables you to declare a specialization in a parent namespace for a template that is declared in the inline namespace. The following example shows how external code binds to the inline namespace by default:

```cpp
//Header.h
#include <string>

namespace Test
{
    namespace old_ns
    {
        std::string Func() { return std::string("Hello from old"); }
    }

    inline namespace new_ns
    {
        std::string Func() { return std::string("Hello from new"); }
    }
}

#include "header.h"
#include <string>
#include <iostream>

int main()
{
    using namespace Test;
    using namespace std;

    string s = Func();
    std::cout << s << std::endl; // "Hello from new"
    return 0;
}
```

The following example shows how you can declare a specialization in a parent of a template that is declared in an inline namespace:

```cpp
namespace Parent
{
    inline namespace new_ns
    {
         template <typename T>
         struct C
         {
             T member;
         };
    }
     template<>
     class C<int> {};
}
```

You can use inline namespaces as a versioning mechanism to manage changes to the public interface of a library. For example, you can create a single parent namespace, and encapsulate each version of the interface in its own namespace nested inside the parent. The namespace that holds the most recent or preferred version is qualified as inline, and is therefore exposed as if it were a direct member of the parent namespace. Client code that invokes the Parent::Class will automatically bind to the new code. Clients that prefer to use the older version can still access it by using the fully qualified path to the nested namespace that has that code.

The inline keyword must be applied to the first declaration of the namespace in a compilation unit.

The following example shows two versions of an interface, each in a nested namespace. The `v_20` namespace has some modification from the `v_10` interface and is marked as inline. Client code that uses the new library and calls `Contoso::Funcs::Add` will invoke the v_20 version. Code that attempts to call `Contoso::Funcs::Divide` will now get a compile time error. If they really need that function, they can still access the `v_10` version by explicitly calling `Contoso::v_10::Funcs::Divide`.

```cpp
namespace Contoso
{
    namespace v_10
    {
        template <typename T>
        class Funcs
        {
        public:
            Funcs(void);
            T Add(T a, T b);
            T Subtract(T a, T b);
            T Multiply(T a, T b);
            T Divide(T a, T b);
        };
    }

    inline namespace v_20
    {
        template <typename T>
        class Funcs
        {
        public:
            Funcs(void);
            T Add(T a, T b);
            T Subtract(T a, T b);
            T Multiply(T a, T b);
            std::vector<double> Log(double);
            T Accumulate(std::vector<T> nums);
      };
    }
}
```

## <a id="namespace_aliases"></a> Namespace aliases

Namespace names need to be unique, which means that often they should not be too short. If the length of a name makes code difficult to read, or is tedious to type in a header file where using directives can't be used, then you can make a namespace alias which serves as an abbreviation for the actual name. For example:

```cpp
namespace a_very_long_namespace_name { class Foo {}; }
namespace AVLNN = a_very_long_namespace_name;
void Bar(AVLNN::Foo foo){ }
```

## anonymous or unnamed namespaces

You can create an explicit namespace but not give it a name:

```cpp
namespace
{
    int MyFunc(){}
}
```

This is called an unnamed or anonymous namespace and it is useful when you want to make variable declarations invisible to code in other files (i.e. give them internal linkage) without having to create a named namespace. All code in the same file can see the identifiers in an unnamed namespace but the identifiers, along with the namespace itself, are not visible outside that file—or more precisely outside the translation unit.

## See also

[Declarations and Definitions](declarations-and-definitions-cpp.md)
