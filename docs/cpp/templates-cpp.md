---
description: "Learn more about: Templates (C++)"
title: "Templates (C++)"
ms.date: "12/27/2019"
f1_keywords: ["template_cpp"]
helpviewer_keywords: ["templates, C++", "templates [C++]"]
ms.assetid: 90fcc14a-2092-47af-9d2e-dba26d25b872
---
# Templates (C++)

Templates are the basis for generic programming in C++. As a strongly-typed language, C++ requires all variables to have a specific type, either explicitly declared by the programmer or deduced by the compiler. However, many data structures and algorithms look the same no matter what type they are operating on. Templates enable you to define the operations of a class or function, and let the user specify what concrete types those operations should work on.

## Defining and using templates

A template is a construct that generates an ordinary type or function at compile time based on arguments the user supplies for the template parameters. For example, you can define a function template like this:

```cpp
template <typename T>
T minimum(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

The above code describes a template for a generic function with a single type parameter *T*, whose return value and call parameters (lhs and rhs) are all of this type. You can name a type parameter anything you like, but by convention single upper case letters are most commonly used. *T* is a template parameter; the **`typename`** keyword says that this parameter is a placeholder for a type. When the function is called, the compiler will replace every instance of `T` with the concrete type argument that is either specified by the user or deduced by the compiler. The process in which the compiler generates a class or function from a template is referred to as  *template instantiation*; `minimum<int>` is an instantiation of the template `minimum<T>`.

Elsewhere, a user can declare an instance of the template  that is specialized for int. Assume that get_a() and get_b() are functions that return an int:

```cpp
int a = get_a();
int b = get_b();
int i = minimum<int>(a, b);
```

However, because this is a function template and the compiler can deduce the type of `T` from the arguments *a* and *b*, you can call it just like an ordinary function:

```cpp
int i = minimum(a, b);
```

When the compiler encounters that last statement, it generates a new function in which every occurrence of *T* in the template is replaced with **`int`**:

```cpp
int minimum(const int& lhs, const int& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

The rules for how the compiler performs type deduction in function templates are based on the rules for ordinary functions. For more information, see [Overload Resolution of Function Template Calls](../cpp/overload-resolution-of-function-template-calls.md).

## <a id="type_parameters"></a> Type parameters

In the `minimum` template above, note that the type parameter *T* is not qualified in any way until it is used in the function call parameters, where the const and reference qualifiers are added.

There is no practical limit to the number of type parameters. Separate multiple parameters by commas:

```cpp
template <typename T, typename U, typename V> class Foo{};
```

The keyword **`class`** is equivalent to **`typename`** in this context. You can express the previous example as:

```cpp
template <class T, class U, class V> class Foo{};
```

You can use the ellipsis operator (...) to define a template that takes an arbitrary number of zero or more type parameters:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
```

Any built-in or user-defined type can be used as a type argument. For example, you can use [std::vector](../standard-library/vector-class.md) in the Standard Library to store variables of type **`int`**, **`double`**, [std::string](../standard-library/basic-string-class.md), `MyClass`, **`const`** `MyClass`*, `MyClass&`, and so on. The primary restriction when using templates is that a type argument must support any operations that are applied to the type parameters. For example, if we call `minimum` using `MyClass` as in this example:

```cpp
class MyClass
{
public:
    int num;
    std::wstring description;
};

int main()
{
    MyClass mc1 {1, L"hello"};
    MyClass mc2 {2, L"goodbye"};
    auto result = minimum(mc1, mc2); // Error! C2678
}
```

A compiler error will be generated because `MyClass` does not provide an overload for the **<** operator.

There is no inherent requirement that the type arguments for any particular template all belong to the same object hierarchy, although you can define a template that enforces such a restriction. You can combine object-oriented techniques with templates; for example, you can store a Derived* in a vector\<Base\*>.    Note that the arguments must be pointers

```cpp
vector<MyClass*> vec;
   MyDerived d(3, L"back again", time(0));
   vec.push_back(&d);

   // or more realistically:
   vector<shared_ptr<MyClass>> vec2;
   vec2.push_back(make_shared<MyDerived>());
```

The basic requirements that `std::vector` and other standard library containers impose on elements of `T` is that `T` be copy-assignable and copy-constructible.

## Non-type parameters

Unlike generic types in other languages such as C# and Java, C++ templates support *non-type parameters*, also called value parameters. For example, you can provide a constant integral value to specify the length of an array, as with this example that is similar to the [std::array](../standard-library/array-class-stl.md) class in the Standard Library:

```cpp
template<typename T, size_t L>
class MyArray
{
    T arr[L];
public:
    MyArray() { ... }
};
```

Note the syntax in the template declaration. The `size_t` value is passed in as a template argument at compile time and must be **`const`** or a **`constexpr`** expression. You use it like this:

```cpp
MyArray<MyClass*, 10> arr;
```

Other kinds of values including pointers and references can be passed in as non-type parameters. For example, you can pass in a pointer to a function or function object to customize some operation inside the template code.

### Type deduction for non-type template parameters

In Visual Studio 2017 and later, in **/std:c++17** mode the compiler deduces the type of a non-type template argument that is declared with **`auto`**:

```cpp
template <auto x> constexpr auto constant = x;

auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
auto v2 = constant<true>;   // v2 == true, decltype(v2) is bool
auto v3 = constant<'a'>;    // v3 == 'a', decltype(v3) is char
```

## <a id="template_parameters"></a> Templates as template parameters

A template can be a template parameter. In this example, MyClass2 has two template parameters: a typename parameter *T* and a template parameter *Arr*:

```cpp
template<typename T, template<typename U, int I> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
    U u; //Error. U not in scope
};
```

Because the *Arr* parameter itself has no body, its parameter names are not needed. In fact, it is an error to refer to *Arr*'s typename or class parameter names from within the body of `MyClass2`. For this reason,  *Arr*'s type parameter names can be omitted, as shown in this example:

```cpp
template<typename T, template<typename, int> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
};
```

## Default template arguments

Class and function templates can have default arguments. When a template has a default argument you can leave it unspecified when you use it. For example, the std::vector template has a default argument for the allocator:

```cpp
template <class T, class Allocator = allocator<T>> class vector;
```

In most cases the default std::allocator class is acceptable, so you use a vector like this:

```cpp
vector<int> myInts;
```

But if necessary you can specify a custom allocator like this:

```cpp
vector<int, MyAllocator> ints;
```

For multiple template arguments, all arguments after the first default argument must have default arguments.

When using a template whose parameters are all defaulted, use empty angle brackets:

```cpp
template<typename A = int, typename B = double>
class Bar
{
    //...
};
...
int main()
{
    Bar<> bar; // use all default type arguments
}
```

## Template specialization

In some cases, it isn’t possible or desirable for a template to define exactly the same code for any type. For example, you might wish to define a code path to be executed only if the type argument is a pointer, or a std::wstring, or a type derived from a particular base class.  In such cases you can define a *specialization* of the template for that particular type. When a user instantiates the template with that type, the compiler uses the specialization to generate the class, and for all other types, the compiler chooses the more general template. Specializations in which all parameters are specialized are *complete specializations*. If only some of the parameters are specialized, it is called a *partial specialization*.

```cpp
template <typename K, typename V>
class MyMap{/*...*/};

// partial specialization for string keys
template<typename V>
class MyMap<string, V> {/*...*/};
...
MyMap<int, MyClass> classes; // uses original template
MyMap<string, MyClass> classes2; // uses the partial specialization
```

A template can have any number of specializations as long as each specialized type parameter is unique. Only class templates may be partially specialized. All complete and partial specializations of a template must be declared in the same namespace as the original template.

For more information, see [Template Specialization](../cpp/template-specialization-cpp.md).
