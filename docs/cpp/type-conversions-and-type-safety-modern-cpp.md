---
description: "Learn more about: Type conversions and type safety"
title: "Type conversions and type safety"
ms.date: "11/19/2019"
ms.topic: "conceptual"
ms.assetid: 629b361a-2ce1-4700-8b5d-ab4f57b245d5
---
# Type conversions and type safety

This document identifies common type conversion problems and describes how you can avoid them in your C++ code.

When you write a C++ program, it's important to ensure that it's type-safe. This means that every variable, function argument, and function return value is storing an acceptable kind of data, and that operations that involve values of different types "make sense" and don't cause data loss, incorrect interpretation of bit patterns, or memory corruption. A program that never explicitly or implicitly converts values from one type to another is type-safe by definition. However, type conversions, even unsafe conversions, are sometimes required. For example, you might have to store the result of a floating point operation in a variable of type **`int`**, or you might have to pass the value in an **`unsigned int`** to a function that takes a **`signed int`**. Both examples illustrate unsafe conversions because they may cause data loss or re-interpretation of a value.

When the compiler detects an unsafe conversion, it issues either an error or a warning. An error stops compilation; a warning allows compilation to continue but indicates a possible error in the code. However, even if your program compiles without warnings, it still may contain code that leads to implicit type conversions that produce incorrect results. Type errors can also be introduced by explicit conversions, or casts, in the code.

## Implicit type conversions

When an expression contains operands of different built-in types, and no explicit casts are present, the compiler uses built-in *standard conversions* to convert one of the operands so that the types match. The compiler tries the conversions in a well-defined sequence until one succeeds. If the selected conversion is a promotion, the compiler does not issue a warning. If the conversion is a narrowing, the compiler issues a warning about possible data loss. Whether actual data loss occurs depends on the actual values involved, but we recommend that you treat this warning as an error. If a user-defined type is involved, then the compiler tries to use the conversions that you have specified in the class definition. If it can't find an acceptable conversion, the compiler issues an error and does not compile the program. For more information about the rules that govern the standard conversions, see [Standard Conversions](../cpp/standard-conversions.md). For more information about user-defined conversions, see [User-Defined Conversions (C++/CLI)](../dotnet/user-defined-conversions-cpp-cli.md).

### Widening conversions (promotion)

In a widening conversion, a value in a smaller variable is assigned to a larger variable with no loss of data. Because widening conversions are always safe, the compiler performs them silently and does not issue warnings. The following conversions are widening conversions.

|From|To|
|----------|--------|
|Any **`signed`** or **`unsigned`** integral type except **`long long`** or **`__int64`**|**`double`**|
|**`bool`** or **`char`**|Any other built-in type|
|**`short`** or **`wchar_t`**|**`int`**, **`long`**, **`long long`**|
|**`int`**, **`long`**|**`long long`**|
|**`float`**|**`double`**|

### Narrowing conversions (coercion)

The compiler performs narrowing conversions implicitly, but it warns you about potential data loss. Take these warnings very seriously. If you are certain that no data loss will occur because the values in the larger variable will always fit in the smaller variable, then add an explicit cast so that the compiler will no longer issue a warning. If you are not sure that the conversion is safe, add to your code some kind of runtime check to handle possible data loss so that it does not cause your program to produce incorrect results.

Any conversion from a floating point type to an integral type is a narrowing conversion because the fractional portion of the floating point value is discarded and lost.

The following code example shows some implicit narrowing conversions, and the warnings that the compiler issues for them.

```cpp
int i = INT_MAX + 1; //warning C4307:'+':integral constant overflow
wchar_t wch = 'A'; //OK
char c = wch; // warning C4244:'initializing':conversion from 'wchar_t'
              // to 'char', possible loss of data
unsigned char c2 = 0xfffe; //warning C4305:'initializing':truncation from
                           // 'int' to 'unsigned char'
int j = 1.9f; // warning C4244:'initializing':conversion from 'float' to
              // 'int', possible loss of data
int k = 7.7; // warning C4244:'initializing':conversion from 'double' to
             // 'int', possible loss of data
```

### Signed - unsigned conversions

A signed integral type and its unsigned counterpart are always the same size, but they differ in how the bit pattern is interpreted for value transformation. The following code example demonstrates what happens when the same bit pattern is interpreted as a signed value and as an unsigned value. The bit pattern stored in both `num` and `num2` never changes from what is shown in the earlier illustration.

```cpp
using namespace std;
unsigned short num = numeric_limits<unsigned short>::max(); // #include <limits>
short num2 = num;
cout << "unsigned val = " << num << " signed val = " << num2 << endl;
// Prints: unsigned val = 65535 signed val = -1

// Go the other way.
num2 = -1;
num = num2;
cout << "unsigned val = " << num << " signed val = " << num2 << endl;
// Prints: unsigned val = 65535 signed val = -1
```

Notice that values are reinterpreted in both directions. If your program produces odd results in which the sign of the value seems inverted from what you expect, look for implicit conversions between signed and unsigned integral types. In the following example, the result of the expression ( 0 - 1) is implicitly converted from **`int`** to **`unsigned int`** when it's stored in `num`. This causes the bit pattern to be reinterpreted.

```cpp
unsigned int u3 = 0 - 1;
cout << u3 << endl; // prints 4294967295
```

The compiler does not warn about implicit conversions between signed and unsigned integral types. Therefore, we recommend that you avoid signed-to-unsigned conversions altogether. If you can't avoid them, then add to your code a runtime check to detect whether the value being converted is greater than or equal to zero and less than or equal to the maximum value of the signed type. Values in this range will transfer from signed to unsigned or from unsigned to signed without being reinterpreted.

### Pointer conversions

In many expressions, a C-style array is implicitly converted to a pointer to the first element in the array, and constant conversions can happen silently. Although this is convenient, it's also potentially error-prone. For example, the following badly designed code example seems nonsensical, and yet it will compile and produces a result of 'p'. First, the "Help" string constant literal is converted to a **`char*`** that points to the first element of the array; that pointer is then incremented by three elements so that it now points to the last element 'p'.

```cpp
char* s = "Help" + 3;
```

## Explicit conversions (casts)

By using a cast operation, you can instruct the compiler to convert a value of one type to another type. The compiler will raise an error in some cases if the two types are completely unrelated, but in other cases it will not raise an error even if the operation is not type-safe. Use casts sparingly because any conversion from one type to another is a potential source of program error. However, casts are sometimes required, and not all casts are equally dangerous. One effective use of a cast is when your code performs a narrowing conversion and you know that the conversion is not causing your program to produce incorrect results. In effect, this tells the compiler that you know what you are doing and to stop bothering you with warnings about it. Another use is to cast from a pointer-to-derived class to a pointer-to-base class. Another use is to cast away the **`const`**-ness of a variable to pass it to a function that requires a non-**`const`** argument. Most of these cast operations involve some risk.

In C-style programming, the same C-style cast operator is used for all kinds of casts.

```cpp
(int) x; // old-style cast, old-style syntax
int(x); // old-style cast, functional syntax
```

The C-style cast operator is identical to the call operator () and is therefore inconspicuous in code and easy to overlook. Both are bad because they're difficult to recognize at a glance or search for, and they're disparate enough to invoke any combination of **`static`**, **`const`**, and **`reinterpret_cast`**. Figuring out what an old-style cast actually does can be difficult and error-prone. For all these reasons, when a cast is required, we recommend that you use one of the following C++ cast operators, which in some cases are significantly more type-safe, and which express much more explicitly the programming intent:

- **`static_cast`**, for casts that are checked at compile time only. **`static_cast`** returns an error if the compiler detects that you are trying to cast between types that are completely incompatible. You can also use it to cast between pointer-to-base and pointer-to-derived, but the compiler can't always tell whether such conversions will be safe at runtime.

    ```cpp
    double d = 1.58947;
    int i = d;  // warning C4244 possible loss of data
    int j = static_cast<int>(d);       // No warning.
    string s = static_cast<string>(d); // Error C2440:cannot convert from
                                       // double to std:string

    // No error but not necessarily safe.
    Base* b = new Base();
    Derived* d2 = static_cast<Derived*>(b);
    ```

   For more information, see [`static_cast`](../cpp/static-cast-operator.md).

- **`dynamic_cast`**, for safe, runtime-checked casts of pointer-to-base to pointer-to-derived. A **`dynamic_cast`** is safer than a **`static_cast`** for downcasts, but the runtime check incurs some overhead.

    ```cpp
    Base* b = new Base();

    // Run-time check to determine whether b is actually a Derived*
    Derived* d3 = dynamic_cast<Derived*>(b);

    // If b was originally a Derived*, then d3 is a valid pointer.
    if(d3)
    {
       // Safe to call Derived method.
       cout << d3->DoSomethingMore() << endl;
    }
    else
    {
       // Run-time check failed.
       cout << "d3 is null" << endl;
    }

    //Output: d3 is null;
    ```

   For more information, see [`dynamic_cast`](../cpp/dynamic-cast-operator.md).

- **`const_cast`**, for casting away the **`const`**-ness of a variable, or converting a non-**`const`** variable to be **`const`**. Casting away **`const`**-ness by using this operator is just as error-prone as is using a C-style cast, except that with **`const_cast`** you are less likely to perform the cast accidentally. Sometimes you have to cast away the **`const`**-ness of a variable, for example, to pass a **`const`** variable to a function that takes a non-**`const`** parameter. The following example shows how to do this.

    ```cpp
    void Func(double& d) { ... }
    void ConstCast()
    {
       const double pi = 3.14;
       Func(const_cast<double&>(pi)); //No error.
    }
    ```

   For more information, see [const_cast](../cpp/const-cast-operator.md).

- **`reinterpret_cast`**, for casts between unrelated types such as a pointer type and an **`int`**.

    > [!NOTE]
    >  This cast operator is not used as often as the others, and it's not guaranteed to be portable to other compilers.

   The following example illustrates how **`reinterpret_cast`** differs from **`static_cast`**.

    ```cpp
    const char* str = "hello";
    int i = static_cast<int>(str);//error C2440: 'static_cast' : cannot
                                  // convert from 'const char *' to 'int'
    int j = (int)str; // C-style cast. Did the programmer really intend
                      // to do this?
    int k = reinterpret_cast<int>(str);// Programming intent is clear.
                                       // However, it is not 64-bit safe.
    ```

   For more information, see [`reinterpret_cast` Operator](../cpp/reinterpret-cast-operator.md).

## See also

[C++ type system](../cpp/cpp-type-system-modern-cpp.md)<br/>
[Welcome back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
