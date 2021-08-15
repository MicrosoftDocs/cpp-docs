---
description: "Learn more about: User-Defined Type Conversions (C++)"
title: "User-Defined Type Conversions (C++)"
ms.date: "11/04/2016"
f1_keywords: ["explicit_cpp"]
helpviewer_keywords: ["constructors [C++], and constants", "conversion functions [C++]", "explicit keyword [C++]", "type conversion", "constructors [C++], drawbacks", "conversion constructors", "type conversion [C++], explicit conversion", "coercion [C++]", "conversions [C++], explicit", "objects [C++], converting", "conversion functions [C++], rules for declaring", "declaring functions [C++], conversion functions", "functions [C++], conversion", "converting objects", "constructors [C++], conversion", "conversions [C++], by constructors", "data type conversion [C++], explicit"]
ms.assetid: d40e4310-a190-4e95-a34c-22c5c20aa0b9
---
# User-Defined Type Conversions (C++)

A *conversion* produces a new value of some type from a value of a different type. *Standard conversions* are built into the C++ language and support its built-in types, and you can create *user-defined conversions* to perform conversions to, from, or between user-defined types.

The standard conversions perform conversions between built-in types, between pointers or references to types related by inheritance, to and from void pointers, and to the null pointer. For more information, see [Standard Conversions](../cpp/standard-conversions.md). User-defined conversions perform conversions between user-defined types, or between user-defined types and built-in types. You can implement them as [Conversion constructors](#ConvCTOR) or as [Conversion functions](#ConvFunc).

Conversions can either be explicit—when the programmer calls for one type to be converted to another, as in a cast or direct initialization—or implicit—when the language or program calls for a different type than the one given by the programmer.

Implicit conversions are attempted when:

- An argument supplied to a function does not have the same type as the matching parameter.

- The value returned from a function does not have the same type as the function return type.

- An initializer expression does not have the same type as the object it is initializing.

- An expression that controls a conditional statement, looping construct, or switch does not have the result type that's required to control it.

- An operand supplied to an operator does not have the same type as the matching operand-parameter. For built-in operators, both operands must have the same type, and are converted to a common type that can represent both. For more information, see [Standard Conversions](standard-conversions.md). For user-defined operators, each operand must have the same type as the matching operand-parameter.

When one standard conversion can't complete an implicit conversion, the compiler can use a user-defined conversion, followed optionally by an additional standard conversion, to complete it.

When two or more user-defined conversions that perform the same conversion are available at a conversion site, the conversion is said to be ambiguous. Such ambiguities are an error because the compiler can't determine which one of the available conversions it should choose. However, it's not an error just to define multiple ways of performing the same conversion because the set of available conversions can be different at different locations in the source code—for example, depending on which header files are included in a source file. As long as only one conversion is available at the conversion site, there is no ambiguity. There are several ways that ambiguous conversions can arise, but the most common ones are:

- Multiple inheritance. The conversion is defined in more than one base class.

- Ambiguous function call. The conversion is defined as a conversion constructor of the target type and as a conversion function of the source type. For more information, see [Conversion functions](#ConvFunc).

You can usually resolve an ambiguity just by qualifying the name of the involved type more fully or by performing an explicit cast to clarify your intent.

Both conversion constructors and conversion functions obey member-access control rules, but the accessibility of the conversions is only considered if and when an unambiguous conversion can be determined. This means that a conversion can be ambiguous even if the access level of a competing conversion would prevent it from being used. For more information about member accessibility, see [Member Access Control](../cpp/member-access-control-cpp.md).

## The explicit keyword and problems with implicit conversion

By default when you create a user-defined conversion, the compiler can use it to perform implicit conversions. Sometimes this is what you want, but other times the simple rules that guide the compiler in making implicit conversions can lead it to accept code that you don't want it to.

One well-known example of an implicit conversion that can cause problems is the conversion to **`bool`**. There are many reasons that you might want to create a class type that can be used in a Boolean context—for example, so that it can be used to control an **`if`** statement or loop—but when the compiler performs a user-defined conversion to a built-in type, the compiler is allowed to apply an additional standard conversion afterwards. The intent of this additional standard conversion is to allow for things like promotion from **`short`** to **`int`**, but it also opens the door for less-obvious conversions—for example, from **`bool`** to **`int`**, which allows your class type to be used in integer contexts you never intended. This particular problem is known as the *Safe Bool Problem*. This kind of problem is where the **`explicit`** keyword can help.

The **`explicit`** keyword tells the compiler that the specified conversion can't be used to perform implicit conversions. If you wanted the syntactic convenience of implicit conversions before the **`explicit`** keyword was introduced, you had to either accept the unintended consequences that implicit conversion sometimes created or use less-convenient, named conversion functions as a workaround. Now, by using the **`explicit`** keyword, you can create convenient conversions that can only be used to perform explicit casts or direct initialization, and that won't lead to the kind of problems exemplified by the Safe Bool Problem.

The **`explicit`** keyword can be applied to conversion constructors since C++98, and to conversion functions since C++11. The following sections contain more information about how to use the **`explicit`** keyword.

## <a name="ConvCTOR"></a> Conversion constructors

Conversion constructors define conversions from user-defined or built-in types to a user-defined type. The following example demonstrates a conversion constructor that converts from the built-in type **`double`** to a user-defined type `Money`.

```cpp
#include <iostream>

class Money
{
public:
    Money() : amount{ 0.0 } {};
    Money(double _amount) : amount{ _amount } {};

    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << balance.amount << std::endl;
}

int main(int argc, char* argv[])
{
    Money payable{ 79.99 };

    display_balance(payable);
    display_balance(49.95);
    display_balance(9.99f);

    return 0;
}
```

Notice that the first call to the function `display_balance`, which takes an argument of type `Money`, doesn't require a conversion because its argument is the correct type. However, on the second call to `display_balance`, a conversion is needed because the type of the argument, a **`double`** with a value of `49.95`, is not what the function expects. The function can't use this value directly, but because there's a conversion from the type of the argument—**`double`**—to the type of the matching parameter—`Money`—a temporary value of type `Money` is constructed from the argument and used to complete the function call. In the third call to `display_balance`, notice that the argument is not a **`double`**, but is instead a **`float`** with a value of `9.99`—and yet the function call can still be completed because the compiler can perform a standard conversion—in this case, from **`float`** to **`double`**—and then perform the user-defined conversion from **`double`** to `Money` to complete the necessary conversion.

### Declaring conversion constructors

The following rules apply to declaring a conversion constructor:

- The target type of the conversion is the user-defined type that's being constructed.

- Conversion constructors typically take exactly one argument, which is of the source type. However, a conversion constructor can specify additional parameters if each additional parameter has a default value. The source type remains the type of the first parameter.

- Conversion constructors, like all constructors, do not specify a return type. Specifying a return type in the declaration is an error.

- Conversion constructors can be explicit.

### Explicit conversion constructors

By declaring a conversion constructor to be **`explicit`**, it can only be used to perform direct initialization of an object or to perform an explicit cast. This prevents functions that accept an argument of the class type from also implicitly accepting arguments of the conversion constructor's source type, and prevents the class type from being copy-initialized from a value of the source type. The following example demonstrates how to define an explicit conversion constructor, and the effect it has on what code is well-formed.

```cpp
#include <iostream>

class Money
{
public:
    Money() : amount{ 0.0 } {};
    explicit Money(double _amount) : amount{ _amount } {};

    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << balance.amount << std::endl;
}

int main(int argc, char* argv[])
{
    Money payable{ 79.99 };        // Legal: direct initialization is explicit.

    display_balance(payable);      // Legal: no conversion required
    display_balance(49.95);        // Error: no suitable conversion exists to convert from double to Money.
    display_balance((Money)9.99f); // Legal: explicit cast to Money

    return 0;
}
```

In this example, notice that you can still use the explicit conversion constructor to perform direct initialization of `payable`. If instead you were to copy-initialize `Money payable = 79.99;`, it would be an error. The first call to `display_balance` is unaffected because the argument is the correct type. The second call to `display_balance` is an error, because the conversion constructor can't be used to perform implicit conversions. The third call to `display_balance` is legal because of the explicit cast to `Money`, but notice that the compiler still helped complete the cast by inserting an implicit cast from **`float`** to **`double`**.

Although the convenience of allowing implicit conversions can be tempting, doing so can introduce hard-to-find bugs. The rule of thumb is to make all conversion constructors explicit except when you're sure that you want a specific conversion to occur implicitly.

## <a name="ConvFunc"></a> Conversion functions

Conversion functions define conversions from a user-defined type to other types. These functions are sometimes referred to as "cast operators" because they, along with conversion constructors, are called when a value is cast to a different type. The following example demonstrates a conversion function that converts from the user-defined type, `Money`, to a built-in type, **`double`**:

```cpp
#include <iostream>

class Money
{
public:
    Money() : amount{ 0.0 } {};
    Money(double _amount) : amount{ _amount } {};

    operator double() const { return amount; }
private:
    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << balance << std::endl;
}
```

Notice that the member variable `amount` is made private and that a public conversion function to type **`double`** is introduced just to return the value of `amount`. In the function `display_balance`, an implicit conversion occurs when the value of `balance` is streamed to standard output by using the stream insertion operator `<<`. Because no stream-insertion operator is defined for the user-defined type `Money`, but there is one for built-in type **`double`**, the compiler can use the conversion function from `Money` to **`double`** to satisfy the stream-insertion operator.

Conversion functions are inherited by derived classes. Conversion functions in a derived class only override an inherited conversion function when they convert to exactly the same type. For example, a user-defined conversion function of the derived class **operator int** does not override—or even influence—a user-defined conversion function of the base class **operator short**, even though the standard conversions define a conversion relationship between **`int`** and **`short`**.

### Declaring conversion functions

The following rules apply to declaring a conversion function:

- The target type of the conversion must be declared prior to the declaration of the conversion function. Classes, structures, enumerations, and typedefs cannot be declared within the declaration of the conversion function.

    ```cpp
    operator struct String { char string_storage; }() // illegal
    ```

- Conversion functions take no arguments. Specifying any parameters in the declaration is an error.

- Conversion functions have a return type that is specified by the name of the conversion function, which is also the name of the conversion's target type. Specifying a return type in the declaration is an error.

- Conversion functions can be virtual.

- Conversion functions can be explicit.

### Explicit conversion functions

When a conversion function is declared to be explicit, it can only be used to perform an explicit cast. This prevents functions that accept an argument of the conversion function's target type from also implicitly accepting arguments of the class type, and prevents instances of the target type from being copy-initialized from a value of the class type. The following example demonstrates how to define an explicit conversion function and the effect it has on what code is well-formed.

```cpp
#include <iostream>

class Money
{
public:
    Money() : amount{ 0.0 } {};
    Money(double _amount) : amount{ _amount } {};

    explicit operator double() const { return amount; }
private:
    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << (double)balance << std::endl;
}
```

Here the conversion function **operator double** has been made explicit, and an explicit cast to type **`double`** has been introduced in the function `display_balance` to perform the conversion. If this cast were omitted, the compiler would be unable to locate a suitable stream-insertion operator `<<` for type `Money` and an error would occur.
