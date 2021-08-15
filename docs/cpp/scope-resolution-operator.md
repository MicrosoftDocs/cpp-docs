---
title: "Scope resolution operator: `::`"
description: "Learn how the scope resolution operator `::` works in Standard C++."
ms.date: 12/06/2020
f1_keywords: ["::"]
helpviewer_keywords: ["scope, scope resolution operator", "operators [C++], scope resolution", "scope resolution operator", ":: operator"]
---
# Scope resolution operator: `::`

The scope resolution operator **`::`** is used to identify and disambiguate identifiers used in different scopes. For more information about scope, see [Scope](../cpp/scope-visual-cpp.md).

## Syntax

> *`qualified-id`*:\
> &emsp;*`nested-name-specifier`* **`template`**<sub>opt</sub> *`unqualified-id`*

> *`nested-name-specifier`*:\
> &emsp;**`::`**\
> &emsp;*`type-name`* **`::`**\
> &emsp;*`namespace-name`* **`::`**\
> &emsp;*`decltype-specifier`* **`::`**\
> &emsp;*`nested-name-specifier`* *`identifier`* **`::`**\
> &emsp;*`nested-name-specifier`* **`template`**<sub>opt</sub> *`simple-template-id`* **`::`**

> *`unqualified-id`*:\
> &emsp;*`identifier`*\
> &emsp;*`operator-function-id`*\
> &emsp;*`conversion-function-id`*\
> &emsp;*`literal-operator-id`*\
> &emsp;**`~`** *`type-name`*\
> &emsp;**`~`** *`decltype-specifier`*\
> &emsp;*`template-id`*

## Remarks

The `identifier` can be a variable, a function, or an enumeration value.

## Use `::` for classes and namespaces

The following example shows how the scope resolution operator is used with namespaces and classes:

```cpp
namespace NamespaceA{
    int x;
    class ClassA {
    public:
        int x;
    };
}

int main() {

    // A namespace name used to disambiguate
    NamespaceA::x = 1;

    // A class name used to disambiguate
    NamespaceA::ClassA a1;
    a1.x = 2;
}
```

A scope resolution operator without a scope qualifier refers to the global namespace.

```cpp
namespace NamespaceA{
    int x;
}

int x;

int main() {
    int x;

    // the x in main()
    x = 0;
    // The x in the global namespace
    ::x = 1;

    // The x in the A namespace
    NamespaceA::x = 2;
}
```

You can use the scope resolution operator to identify a member of a **`namespace`**, or to identify a namespace that nominates the member’s namespace in a **`using`** directive. In the example below, you can use `NamespaceC` to qualify `ClassB`, even though `ClassB` was declared in namespace `NamespaceB`, because `NamespaceB` was nominated in `NamespaceC` by a **`using`** directive.

```cpp
namespace NamespaceB {
    class ClassB {
    public:
        int x;
    };
}

namespace NamespaceC{
    using namespace NamespaceB;
}

int main() {
    NamespaceB::ClassB b_b;
    NamespaceC::ClassB c_b;

    b_b.x = 3;
    c_b.x = 4;
}
```

You can use chains of scope resolution operators. In the following example, `NamespaceD::NamespaceD1` identifies the nested namespace `NamespaceD1`, and `NamespaceE::ClassE::ClassE1` identifies the nested class `ClassE1`.

```cpp
namespace NamespaceD{
    namespace NamespaceD1{
        int x;
    }
}

namespace NamespaceE{
    class ClassE{
    public:
        class ClassE1{
        public:
            int x;
        };
    };
}

int main() {
    NamespaceD:: NamespaceD1::x = 6;
    NamespaceE::ClassE::ClassE1 e1;
    e1.x = 7  ;
}
```

## Use `::` for static members

You must use the scope resolution operator to call static members of classes.

```cpp
class ClassG {
public:
    static int get_x() { return x;}
    static int x;
};

int ClassG::x = 6;

int main() {

    int gx1 = ClassG::x;
    int gx2 = ClassG::get_x();
}
```

## Use `::` for scoped enumerations

The scoped resolution operator is also used with the values of a scoped enumeration [Enumeration declarations](../cpp/enumerations-cpp.md), as in the following example:

```cpp
enum class EnumA{
    First,
    Second,
    Third
};

int main() {
    EnumA enum_value = EnumA::First;
}
```

## See also

[C++ built-in operators, precedence, and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Namespaces](../cpp/namespaces-cpp.md)
