---
description: "Learn more about: Explicitly Defaulted and Deleted Functions"
title: "Explicitly Defaulted and Deleted Functions"
ms.date: "11/04/2016"
ms.assetid: 5a588478-fda2-4b3f-a279-db3967f5e07e
---
# Explicitly Defaulted and Deleted Functions

In C++11, defaulted and deleted functions give you explicit control over whether the special member functions are automatically generated. Deleted functions also give you simple language to prevent problematic type promotions from occurring in arguments to functions of all types—special member functions, as well as normal member functions and non-member functions—which would otherwise cause an unwanted function call.

## Benefits of explicitly defaulted and deleted functions

In C++, the compiler automatically generates the default constructor, copy constructor, copy-assignment operator, and destructor for a type if it does not declare its own. These functions are known as the *special member functions*, and they are what make simple user-defined types in C++ behave like structures do in C. That is, you can create, copy, and destroy them without any additional coding effort. C++11 brings move semantics to the language and adds the move constructor and move-assignment operator to the list of special member functions that the compiler can automatically generate.

This is convenient for simple types, but complex types often define one or more of the special member functions themselves, and this can prevent other special member functions from being automatically generated. In practice:

- If any constructor is explicitly declared, then no default constructor is automatically generated.

- If a virtual destructor is explicitly declared, then no default destructor is automatically generated.

- If a move constructor or move-assignment operator is explicitly declared, then:

  - No copy constructor is automatically generated.

  - No copy-assignment operator is automatically generated.

- If a copy constructor, copy-assignment operator, move constructor, move-assignment operator, or destructor is explicitly declared, then:

  - No move constructor is automatically generated.

  - No move-assignment operator is automatically generated.

> [!NOTE]
> Additionally, the C++11 standard specifies the following additional rules:
>
> - If a copy constructor or destructor is explicitly declared, then automatic generation of the copy-assignment operator is deprecated.
> - If a copy-assignment operator or destructor is explicitly declared, then automatic generation of the copy constructor is deprecated.
>
> In both cases, Visual Studio continues to automatically generate the necessary functions implicitly, and does not emit a warning.

The consequences of these rules can also leak into object hierarchies. For example, if for any reason a base class fails to have a default constructor that's callable from a deriving class—that is, a **`public`** or **`protected`** constructor that takes no parameters—then a class that derives from it cannot automatically generate its own default constructor.

These rules can complicate the implementation of what should be straight-forward, user-defined types and common C++ idioms—for example, making a user-defined type non-copyable by declaring the copy constructor and copy-assignment operator privately and not defining them.

```cpp
struct noncopyable
{
  noncopyable() {};

private:
  noncopyable(const noncopyable&);
  noncopyable& operator=(const noncopyable&);
};
```

Before C++11, this code snippet was the idiomatic form of non-copyable types. However, it has several problems:

- The copy constructor has to be declared privately to hide it, but because it's declared at all, automatic generation of the default constructor is prevented. You have to explicitly define the default constructor if you want one, even if it does nothing.

- Even if the explicitly-defined default constructor does nothing, it's considered non-trivial by the compiler. It's less efficient than an automatically generated default constructor and prevents `noncopyable` from being a true POD type.

- Even though the copy constructor and copy-assignment operator are hidden from outside code, the member functions and friends of `noncopyable` can still see and call them. If they are declared but not defined, calling them causes a linker error.

- Although this is a commonly accepted idiom, the intent is not clear unless you understand all of the rules for automatic generation of the special member functions.

In C++11, the non-copyable idiom can be implemented in a way that is more straightforward.

```cpp
struct noncopyable
{
  noncopyable() =default;
  noncopyable(const noncopyable&) =delete;
  noncopyable& operator=(const noncopyable&) =delete;
};
```

Notice how the problems with the pre-C++11 idiom are resolved:

- Generation of the default constructor is still prevented by declaring the copy constructor, but you can bring it back by explicitly defaulting it.

- Explicitly defaulted special member functions are still considered trivial, so there is no performance penalty, and `noncopyable` is not prevented from being a true POD type.

- The copy constructor and copy-assignment operator are public but deleted. It is a compile-time error to define or call a deleted function.

- The intent is clear to anyone who understands `=default` and `=delete`. You don't have to understand the rules for automatic generation of special member functions.

Similar idioms exist for making user-defined types that are non-movable, that can only be dynamically allocated, or that cannot be dynamically allocated. Each of these idioms have pre-C++11 implementations that suffer similar problems, and that are similarly resolved in C++11 by implementing them in terms of defaulted and deleted special member functions.

## Explicitly defaulted functions

You can default any of the special member functions—to explicitly state that the special member function uses the default implementation, to define the special member function with a non-public access qualifier, or to reinstate a special member function whose automatic generation was prevented by other circumstances.

You default a special member function by declaring it as in this example:

```cpp
struct widget
{
  widget()=default;

  inline widget& operator=(const widget&);
};

inline widget& widget::operator=(const widget&) =default;
```

Notice that you can default a special member function outside the body of a class as long as it's inlinable.

Because of the performance benefits of trivial special member functions, we recommend that you prefer automatically generated special member functions over empty function bodies when you want the default behavior. You can do this either by explicitly defaulting the special member function, or by not declaring it (and also not declaring other special member functions that would prevent it from being automatically generated.)

## Deleted functions

You can delete special member functions as well as normal member functions and non-member functions to prevent them from being defined or called. Deleting of special member functions provides a cleaner way of preventing the compiler from generating special member functions that you don't want. The function must be deleted as it is declared; it cannot be deleted afterwards in the way that a function can be declared and then later defaulted.

```cpp
struct widget
{
  // deleted operator new prevents widget from being dynamically allocated.
  void* operator new(std::size_t) = delete;
};
```

Deleting of normal member function or non-member functions prevents problematic type promotions from causing an unintended function to be called. This works because deleted functions still participate in overload resolution and provide a better match than the function that could be called after the types are promoted. The function call resolves to the more-specific—but deleted—function and causes a compiler error.

```cpp
// deleted overload prevents call through type promotion of float to double from succeeding.
void call_with_true_double_only(float) =delete;
void call_with_true_double_only(double param) { return; }
```

Notice in the preceding sample that calling `call_with_true_double_only` by using a **`float`** argument would cause a compiler error, but calling `call_with_true_double_only` by using an **`int`** argument would not; in the **`int`** case, the argument will be promoted from **`int`** to **`double`** and successfully call the **`double`** version of the function, even though that might not be what's intended. To ensure that any call to this function by using a non-double argument causes a compiler error, you can declare a template version of the function that's deleted.

```cpp
template < typename T >
void call_with_true_double_only(T) =delete; //prevent call through type promotion of any T to double from succeeding.

void call_with_true_double_only(double param) { return; } // also define for const double, double&, etc. as needed.
```
