---
description: "Learn more about: enable_if Class"
title: "enable_if Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::enable_if"]
helpviewer_keywords: ["enable_if class", "enable_if"]
ms.assetid: c6b8d41c-a18f-4e30-a39e-b3aa0e8fd926
---
# enable_if Class

Conditionally makes an instance of a type for SFINAE overload resolution. The nested typedef `enable_if<Condition,Type>::type` exists—and is a synonym for `Type`—if and only if `Condition` is **`true`**.

## Syntax

```cpp
template <bool B, class T = void>
struct enable_if;
```

### Parameters

*B*\
The value that determines the existence of the resulting type.

*T*\
The type to instantiate if *B* is true.

## Remarks

If *B* is true, `enable_if<B, T>` has a nested typedef named "type" that's a synonym for *T*.

If *B* is false, `enable_if<B, T>` doesn't have a nested typedef named "type".

This alias template is provided:

```cpp
template <bool B, class T = void>
using enable_if_t = typename enable_if<B,T>::type;
```

In C++, substitution failure of template parameters is not an error in itself—this is referred to as *SFINAE* (substitution failure is not an error). Typically, `enable_if` is used to remove candidates from overload resolution—that is, it culls the overload set—so that one definition can be rejected in favor of another. This conforms to SFINAE behavior. For more information about SFINAE, see [Substitution failure is not an error](https://go.microsoft.com/fwlink/p/?linkid=394798) on Wikipedia.

Here are four example scenarios:

- Scenario 1: Wrapping the return type of a function:

```cpp
    template <your_stuff>
typename enable_if<your_condition, your_return_type>::type
    yourfunction(args) {// ...
}
// The alias template makes it more concise:
    template <your_stuff>
enable_if_t<your_condition, your_return_type>
yourfunction(args) {// ...
}
```

- Scenario 2: Adding a function parameter that has a default argument:

```cpp
    template <your_stuff>
your_return_type_if_present
    yourfunction(args, enable_if_t<your condition, FOO> = BAR) {// ...
}
```

- Scenario 3: Adding a template parameter that has a default argument:

```cpp
    template <your_stuff, typename Dummy = enable_if_t<your_condition>>
rest_of_function_declaration_goes_here
```

- Scenario 4: If your function has a non-templated argument, you can wrap its type:

```cpp
    template <typename T>
void your_function(const T& t,
    enable_if_t<is_something<T>::value, const string&>
s) {// ...
}
```

Scenario 1 doesn't work with constructors and conversion operators because they don't have return types.

Scenario 2 leaves the parameter unnamed. You could say `::type Dummy = BAR`, but the name `Dummy` is irrelevant, and giving it a name is likely to trigger an "unreferenced parameter" warning. You have to choose a `FOO` function parameter type and `BAR` default argument.  You could say **`int`** and `0`, but then users of your code could accidentally pass to the function an extra integer that would be ignored. Instead, we recommend that you use `void **` and either `0` or **`nullptr`** because almost nothing is convertible to `void **`:

```cpp
template <your_stuff>
your_return_type_if_present
yourfunction(args, typename enable_if<your_condition, void **>::type = nullptr) {// ...
}
```

Scenario 2 also works for ordinary constructors.  However, it doesn't work for conversion operators because they can't take extra parameters.  It also doesn't work for [variadic](../cpp/ellipses-and-variadic-templates.md) constructors because adding extra parameters makes the function parameter pack a non-deduced context and thereby defeats the purpose of `enable_if`.

Scenario 3 uses the name `Dummy`, but it's optional. Just " `typename = typename`" would work, but if you think that looks weird, you can use a "dummy" name—just don't use one that might also be used in the function definition. If you don't give a type to `enable_if`, it defaults to void, and that's perfectly reasonable because you don't care what `Dummy` is. This works for everything, including conversion operators and [variadic](../cpp/ellipses-and-variadic-templates.md) constructors.

Scenario 4 works in constructors that don't have return types, and thereby solves the wrapping limitation of Scenario 1.  However, Scenario 4 is limited to non-templated function arguments, which aren't always available.  (Using Scenario 4 on a templated function argument prevents template argument deduction from working on it.)

`enable_if` is powerful, but also dangerous if it's misused.  Because its purpose is to make candidates vanish before overload resolution, when it's misused, its effects can be very confusing.  Here are some recommendations:

- Do not use `enable_if` to select between implementations at compile-time. Don't ever write one `enable_if` for `CONDITION` and another for `!CONDITION`.  Instead, use a *tag dispatch* pattern—for example, an algorithm that selects implementations depending on the strengths of the iterators they're given.

- Do not use `enable_if` to enforce requirements.  If you want to validate template parameters, and if the validation fails, cause an error instead of selecting another implementation, use [static_assert](../cpp/static-assert.md).

- Use `enable_if` when you have an overload set that makes otherwise good code ambiguous.  Most often, this occurs in implicitly converting constructors.

## Example

This example explains how the C++ Standard Library template function [std::make_pair()](../standard-library/utility-functions.md#make_pair) takes advantage of `enable_if`.

```cpp
void func(const pair<int, int>&);

void func(const pair<string, string>&);

func(make_pair("foo", "bar"));
```

In this example, `make_pair("foo", "bar")` returns `pair<const char *, const char *>`. Overload resolution has to determine which `func()` you want. `pair<A, B>` has an implicitly converting constructor from `pair<X, Y>`.  This isn't new—it was in C++98. However, in C++98/03, the implicitly converting constructor's signature always exists, even if it's `pair<int, int>(const pair<const char *, const char *>&)`.  Overload resolution doesn't care that an attempt to instantiate that constructor explodes horribly because `const char *` isn't implicitly convertible to **`int`**; it's only looking at signatures, before function definitions are instantiated.  Therefore, the example code is ambiguous, because signatures exist to convert `pair<const char *, const char *>` to both `pair<int, int>` and `pair<string, string>`.

C++11 solved this ambiguity by using `enable_if` to make sure `pair<A, B>(const pair<X, Y>&)` exists **only** when `const X&` is implicitly convertible to `A` and `const Y&` is implicitly convertible to `B`.  This allows overload resolution to determine that `pair<const char *, const char *>` is not convertible to `pair<int, int>` and that the overload that takes `pair<string, string>` is viable.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
