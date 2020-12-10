---
description: "Learn more about: Ellipsis and Variadic Templates"
title: "Ellipsis and Variadic Templates"
ms.date: "11/04/2016"
ms.assetid: f20967d9-c967-4fd2-b902-2bb1d5ed87e3
---
# Ellipsis and Variadic Templates

This article shows how to use the ellipsis (`...`) with C++ variadic templates. The ellipsis has had many uses in C and C++. These include variable argument lists for functions. The `printf()` function from the C Runtime Library is one of the most well-known examples.

A *variadic template* is a class or function template that supports an arbitrary number of arguments. This mechanism is especially useful to C++ library developers because you can apply it to both class templates and function templates, and thereby provide a wide range of type-safe and non-trivial functionality and flexibility.

## Syntax

An ellipsis is used in two ways by variadic templates. To the left of the parameter name, it signifies a *parameter pack*, and to the right of the parameter name, it expands the parameter packs into separate names.

Here's a basic example of *variadic template class* definition syntax:

```cpp
template<typename... Arguments> class classname;
```

For both parameter packs and expansions, you can add whitespace around the ellipsis, based on your preference, as shown in these examples:

```cpp
template<typename ...Arguments> class classname;
```

Or this:

```cpp
template<typename ... Arguments> class classname;
```

Notice that this article uses the convention that's shown in the first example (the ellipsis is attached to **`typename`**).

In the preceding examples, *Arguments* is a parameter pack. The class `classname` can accept a variable number of arguments, as in these examples:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
vtclass<long, std::vector<int>, std::string> vtinstance4;
```

By using a variadic template class definition, you can also require at least one parameter:

```cpp
template <typename First, typename... Rest> class classname;
```

Here's a basic example of *variadic template function* syntax:

```cpp
template <typename... Arguments> returntype functionname(Arguments... args);
```

The *Arguments* parameter pack is then expanded for use, as shown in the next section, **Understanding variadic templates**.

Other forms of variadic template function syntax are possible—including, but not limited to, these examples:

```cpp
template <typename... Arguments> returntype functionname(Arguments&... args);
template <typename... Arguments> returntype functionname(Arguments&&... args);
template <typename... Arguments> returntype functionname(Arguments*... args);
```

Specifiers like **`const`** are also allowed:

```cpp
template <typename... Arguments> returntype functionname(const Arguments&... args);
```

As with variadic template class definitions, you can make functions that require at least one parameter:

```cpp
template <typename First, typename... Rest> returntype functionname(const First& first, const Rest&... args);
```

Variadic templates use the `sizeof...()` operator (unrelated to the older `sizeof()` operator):

```cpp
template<typename... Arguments>
void tfunc(const Arguments&... args)
{
    constexpr auto numargs{ sizeof...(Arguments) };

    X xobj[numargs]; // array of some previously defined type X

    helper_func(xobj, args...);
}
```

## More about ellipsis placement

Previously, this article described ellipsis placement that defines parameter packs and expansions as "to the left of the parameter name, it signifies a parameter pack, and to the right of the parameter name, it expands the parameter packs into separate names". This is technically true but can be confusing in translation to code. Consider:

- In a template-parameter-list (`template <parameter-list>`), `typename...` introduces a template parameter pack.

- In a parameter-declaration-clause (`func(parameter-list)`), a "top-level" ellipsis introduces a function parameter pack, and the ellipsis positioning is important:

    ```cpp
    // v1 is NOT a function parameter pack:
    template <typename... Types> void func1(std::vector<Types...> v1);

    // v2 IS a function parameter pack:
    template <typename... Types> void func2(std::vector<Types>... v2);
    ```

- Where the ellipsis appears immediately after a parameter name, you have a parameter pack expansion.

## Example

A good way to illustrate the variadic template function mechanism is to use it in a re-write of some of the functionality of `printf`:

```cpp
#include <iostream>

using namespace std;

void print() {
    cout << endl;
}

template <typename T> void print(const T& t) {
    cout << t << endl;
}

template <typename First, typename... Rest> void print(const First& first, const Rest&... rest) {
    cout << first << ", ";
    print(rest...); // recursive call using pack expansion syntax
}

int main()
{
    print(); // calls first overload, outputting only a newline
    print(1); // calls second overload

    // these call the third overload, the variadic template,
    // which uses recursion as needed.
    print(10, 20);
    print(100, 200, 300);
    print("first", 2, "third", 3.14159);
}
```

## Output

```Output
1
10, 20
100, 200, 300
first, 2, third, 3.14159
```

> [!NOTE]
> Most implementations that incorporate variadic template functions use recursion of some form, but it's slightly different from traditional recursion.  Traditional recursion involves a function calling itself by using the same signature. (It may be overloaded or templated, but the same signature is chosen each time.) Variadic recursion involves calling a variadic function template by using differing (almost always decreasing) numbers of arguments, and thereby stamping out a different signature every time. A "base case" is still required, but the nature of the recursion is different.
