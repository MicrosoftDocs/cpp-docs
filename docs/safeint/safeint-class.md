---
description: "Learn more about: SafeInt Class"
title: "SafeInt Class"
ms.date: "10/22/2018"
ms.topic: "reference"
f1_keywords: ["SafeInt", "SafeInt::SafeInt", "SafeInt.SafeInt"]
helpviewer_keywords: ["SafeInt class", "SafeInt class, constructor"]
ms.assetid: 27a8f087-2511-46f9-8d76-2aeb66ca272f
---
# SafeInt Class

Extends the integer primitives to help prevent integer overflow and lets you compare different types of integers.

> [!NOTE]
> The latest version of the SafeInt library is located at [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt). To use the SafeInt library, clone the repo and `#include "SafeInt.hpp"`

## Syntax

```cpp
template<typename T, typename E = _SAFEINT_DEFAULT_ERROR_POLICY>
class SafeInt;
```

### Parameters

*`T`*\
The type of integer or Boolean parameter that `SafeInt` replaces.

*`E`*\
An enumerated data type that defines the error handling policy.

*`U`*\
The type of integer or Boolean parameter for the secondary operand.

*rhs*\
[in] An input parameter that represents the value on the right side of the operator in several stand-alone functions.

*i*\
[in] An input parameter that represents the value on the right side of the operator in several stand-alone functions.

*bits*\
[in] An input parameter that represents the value on the right side of the operator in several stand-alone functions.

## Members

### Public Constructors

| Name                          |  Description |
|---------------------------|--------------------|
| [SafeInt::SafeInt](#safeint)  |  Default constructor. |

### Assignment Operators

| Name  |  Syntax |
|----|---------|
| =     |  `template<typename U>`<br />`SafeInt<T,E>& operator= (const U& rhs)` |
| =     |  `SafeInt<T,E>& operator= (const T& rhs) throw()` |
| =     |  `template<typename U>`<br />`SafeInt<T,E>& operator= (const SafeInt<U, E>& rhs)` |
| =     |  `SafeInt<T,E>& operator= (const SafeInt<T,E>& rhs) throw()` |

### Casting Operators

| Name              |  Syntax |
|------|---------------------------------|
| bool              |  `operator bool() throw()` |
| char              |  `operator char() const` |
| signed char       |  `operator signed char() const` |
| unsigned char     |  `operator unsigned char() const` |
| __int16           |  `operator __int16() const` |
| unsigned __int16  |  `operator unsigned __int16() const` |
| __int32           |  `operator __int32() const` |
| unsigned __int32  |  `operator unsigned __int32() const` |
| long              |  `operator long() const` |
| unsigned long     |  `operator unsigned long() const` |
| __int64           |  `operator __int64() const` |
| unsigned __int64  |  `operator unsigned __int64() const` |
| wchar_t           |  `operator wchar_t() const` |

### Comparison Operators

| Name  |  Syntax |
|----|----------------|
| \<     |  `template<typename U>`<br /><br /> `bool operator< (U rhs) const throw()` |
| \<     |  `bool operator< (SafeInt<T,E> rhs) const throw()` |
| \>=    |  `template<typename U>`<br /><br /> `bool operator>= (U rhs) const throw()` |
| \>=    |  `Bool operator>= (SafeInt<T,E> rhs) const throw()` |
| \>     |  `template<typename U>`<br /><br /> `bool operator> (U rhs) const throw()` |
| \>     |  `Bool operator> (SafeInt<T,E> rhs) const throw()` |
| \<=    |  `template<typename U>`<br /><br /> `bool operator<= (U rhs) const throw()` |
| \<=    |  `bool operator<= (SafeInt<T,E> rhs) const throw()` |
| ==    |  `template<typename U>`<br /><br /> `bool operator== (U rhs) const throw()` |
| ==    |  `bool operator== (bool rhs) const throw()` |
| ==    |  `bool operator== (SafeInt<T,E> rhs) const throw()` |
| !=    |  `template<typename U>`<br /><br /> `bool operator!= (U rhs) const throw()` |
| !=    |  `bool operator!= (bool b) const throw()` |
| !=    |  `bool operator!= (SafeInt<T,E> rhs) const throw()` |

### Arithmetic Operators

| Name  |  Syntax |
|----|--------------|
| +     |  `const SafeInt<T,E>& operator+ () const throw()` |
| -     |  `SafeInt<T,E> operator- () const` |
| ++    |  `SafeInt<T,E>& operator++ ()` |
| --    |  `SafeInt<T,E>& operator-- ()` |
| %     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator% (U rhs) const` |
| %     |  `SafeInt<T,E> operator% (SafeInt<T,E> rhs) const` |
| %=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (U rhs)` |
| %=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (SafeInt<U, E> rhs)` |
| \*     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator* (U rhs) const` |
| \*     |  `SafeInt<T,E> operator* (SafeInt<T,E> rhs) const` |
| \*=    |  `SafeInt<T,E>& operator*= (SafeInt<T,E> rhs)` |
| \*=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (U rhs)` |
| \*=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (SafeInt<U, E> rhs)` |
| /     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator/ (U rhs) const` |
| /     |  `SafeInt<T,E> operator/ (SafeInt<T,E> rhs ) const` |
| /=    |  `SafeInt<T,E>& operator/= (SafeInt<T,E> i)` |
| /=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (U i)` |
| /=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (SafeInt<U, E> i)` |
| +     |  `SafeInt<T,E> operator+ (SafeInt<T,E> rhs) const` |
| +     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator+ (U rhs) const` |
| +=    |  `SafeInt<T,E>& operator+= (SafeInt<T,E> rhs)` |
| +=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (U rhs)` |
| +=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (SafeInt<U, E> rhs)` |
| -     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator- (U rhs) const` |
| -     |  `SafeInt<T,E> operator- (SafeInt<T,E> rhs) const` |
| -=    |  `SafeInt<T,E>& operator-= (SafeInt<T,E> rhs)` |
| -=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (U rhs)` |
| -=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (SafeInt<U, E> rhs)` |

### Logical Operators

| Name     |  Syntax |
|------|--------------|
| !        |  `bool operator !() const throw()` |
| ~        |  `SafeInt<T,E> operator~ () const throw()` |
| \<\<       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (U bits) const throw()` |
| \<\<       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (SafeInt<U, E> bits) const throw()` |
| \<\<=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (U bits) throw()` |
| \<\<=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (SafeInt<U, E> bits) throw()` |
| \>\>       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (U bits) const throw()` |
| \>\>       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (SafeInt<U, E> bits) const throw()` |
| \>\>=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (U bits) throw()` |
| \>\>=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (SafeInt<U, E> bits) throw()` |
| &        |  `SafeInt<T,E> operator& (SafeInt<T,E> rhs) const throw()` |
| &        |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator& (U rhs) const throw()` |
| &=       |  `SafeInt<T,E>& operator&= (SafeInt<T,E> rhs) throw()` |
| &=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (U rhs) throw()` |
| &=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (SafeInt<U, E> rhs) throw()` |
| ^        |  `SafeInt<T,E> operator^ (SafeInt<T,E> rhs) const throw()` |
| ^        |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator^ (U rhs) const throw()` |
| ^=       |  `SafeInt<T,E>& operator^= (SafeInt<T,E> rhs) throw()` |
| ^=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (U rhs) throw()` |
| ^=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (SafeInt<U, E> rhs) throw()` |
| &#124;   |  `SafeInt<T,E> operator&#124; (SafeInt<T,E> rhs) const throw()` |
| &#124;   |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator&#124; (U rhs) const throw()` |
| &#124;=  |  `SafeInt<T,E>& operator&#124;= (SafeInt<T,E> rhs) throw()` |
| &#124;=  |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (U rhs) throw()` |
| &#124;=  |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (SafeInt<U, E> rhs) throw()` |

## Remarks

The `SafeInt` class protects against integer overflow in mathematical operations. For example, consider adding two 8-bit integers: one has a value of 200 and the second has a value of 100. The correct mathematical operation would be 200 + 100 = 300. However, because of the 8-bit integer limit, the upper bit will be lost and the compiler will return 44 (300 - 2<sup>8</sup>) as the result. Any operation that depends on this mathematical equation will generate unexpected behavior.

The `SafeInt` class checks whether an arithmetic overflow occurs or whether the code tries to divide by zero. In both cases, the class calls the error handler to warn the program of the potential problem.

This class also lets you compare two different types of integers as long as they are `SafeInt` objects. Typically, when you do a comparison, you must first convert the numbers to be the same type. Casting one number to another type often requires checks to make sure that there is no loss of data.

The Operators table in this topic lists the mathematical and comparison operators supported by the `SafeInt` class. Most mathematical operators return a `SafeInt` object of type `T`.

Comparison operations between a `SafeInt` and an integral type can be performed in either direction. For example, both `SafeInt<int>(x) < y` and `y> SafeInt<int>(x)` are valid and will return the same result.

Many binary operators don't support using two different `SafeInt` types. One example of this is the `&` operator. `SafeInt<T, E> & int` is supported, but `SafeInt<T, E> & SafeInt<U, E>` isn't. In the latter example, the compiler does not know what type of parameter to return. One solution to this problem is to cast the second parameter back to the base type. By using the same parameters, this can be done with `SafeInt<T, E> & (U)SafeInt<U, E>`.

> [!NOTE]
> For any bitwise operations, the two different parameters should be the same size. If the sizes differ, the compiler will throw an [ASSERT](../mfc/reference/diagnostic-services.md#assert) exception. The results of this operation can't be guaranteed to be accurate. To resolve this issue, cast the smaller parameter until it's the same size as the larger parameter.

For the shift operators, shifting more bits than exist for the template type will throw an ASSERT exception. This will have no effect in release mode. Mixing two types of SafeInt parameters is possible for the shift operators because the return type is the same as the original type. The number on the right side of the operator only indicates the number of bits to shift.

When you do a logical comparison with a SafeInt object, the comparison is strictly arithmetic. For example, consider these expressions:

- `SafeInt<uint>((uint)~0) > -1`

- `((uint)~0) > -1`

The first statement resolves to **`true`**, but the second statement resolves to **`false`**. The bitwise negation of 0 is 0xFFFFFFFF. In the second statement, the default comparison operator compares 0xFFFFFFFF to 0xFFFFFFFF and considers them to be equal. The comparison operator for the `SafeInt` class realizes that the second parameter is negative whereas the first parameter is unsigned. Therefore, although the bit representation is identical, the `SafeInt` logical operator realizes that the unsigned integer is larger than -1.

Be careful when you use the `SafeInt` class together with the `?:` ternary operator. Consider the following line of code.

```cpp
Int x = flag ? SafeInt<unsigned int>(y) : -1;
```

The compiler converts it to this:

```cpp
Int x = flag ? SafeInt<unsigned int>(y) : SafeInt<unsigned int>(-1);
```

If `flag` is **`false`**, the compiler throws an exception instead of assigning the value of -1 to `x`. Therefore, to avoid this behavior, the correct code to use is the following line.

```cpp
Int x = flag ? (int) SafeInt<unsigned int>(y) : -1;
```

`T` and `U` can be assigned a Boolean type, character type, or integer type. The integer types can be signed or unsigned and any size from 8 bits to 64 bits.

> [!NOTE]
> Although the `SafeInt` class accepts any kind of integer, it performs more efficiently with unsigned types.

`E` is the error handling mechanism that `SafeInt` uses. Two error handling mechanisms are provided with the SafeInt library. The default policy is `SafeIntErrorPolicy_SafeIntException`, which throws a [SafeIntException Class](safeintexception-class.md) exception when an error occurs. The other policy is `SafeIntErrorPolicy_InvalidParameter`, which stops the program if an error occurs.

There are two options to customize the error policy. The first option is to set the parameter `E` when you create a `SafeInt`. Use this option when you want to change the error handling policy for just one `SafeInt`. The other option is to define _SAFEINT_DEFAULT_ERROR_POLICY to be your customized error-handling class before you include the `SafeInt` library. Use this option when you want to change the default error handling policy for all instances of the `SafeInt` class in your code.

> [!NOTE]
> A customized class that handles errors from the SafeInt library should not return control to the code that called the error handler. After the error handler is called, the result of the `SafeInt` operation can't be trusted.

## Inheritance Hierarchy

`SafeInt`

## Requirements

**Header:** SafeInt.hpp
> [!NOTE]
> The latest version of this library is located at [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt). Clone the library and include SafeInt.hpp to use the SafeInt library.
> Prefer this github repo to <safeint.h>. it's a modern version of <safeint.h> that includes a small number of bug fixes, uses modern features of C++ resulting in more efficient code, and is portable to any platform using gcc, clang, or Intel compilers.

### Example

```c
#include "SafeInt.hpp" // set path to your clone of the SafeInt GitHub repo (https://github.com/dcleblanc/SafeInt)

int main()
{
    int divisor = 3;
    int dividend = 6;
    int result;

    bool success = SafeDivide(dividend, divisor, result); // result = 2
    success = SafeDivide(dividend, 0, result); // expect fail. result isn't modified.
}
```

**Namespace:** none

## <a name="safeint"></a> SafeInt::SafeInt

Constructs a `SafeInt` object.

```cpp
SafeInt() throw

SafeInt (const T& i) throw ()

SafeInt (bool b) throw ()

template <typename U>
SafeInt (const SafeInt <U, E>& u)

I template <typename U>
SafeInt (const U& i)
```

### Parameters

`i`<br/>
[in] The value for the new `SafeInt` object. This must be a parameter of type T or U, depending on the constructor.

`b`<br/>
[in] The Boolean value for the new `SafeInt` object.

`u`<br/>
[in] A `SafeInt` of type U. The new `SafeInt` object will have the same value as *u*, but will be of type T.

`U`
The type of data stored in the `SafeInt`. This can be either a Boolean, character, or integer type. If it's an integer type, it can be signed or unsigned and be between 8 and 64 bits.

### Remarks

The input parameter for the constructor, *i* or *u*, must be a Boolean, character, or integer type. If it's another type of parameter, the `SafeInt` class calls [static_assert](../cpp/static-assert.md) to indicate an invalid input parameter.

The constructors that use the template type `U` automatically convert the input parameter to the type specified by `T`. The `SafeInt` class converts the data without any loss of data. It reports to the error handler `E` if it can't convert the data to type `T` without data loss.

If you create a `SafeInt` from a Boolean parameter, you need to initialize the value immediately. You can't construct a `SafeInt` using the code `SafeInt<bool> sb;`. This will generate a compile error.
