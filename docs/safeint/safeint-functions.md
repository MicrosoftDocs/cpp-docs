---
description: "Learn more about: SafeInt Functions"
title: "SafeInt Functions"
ms.date: "06/23/2020"
ms.topic: "reference"
f1_keywords: ["SafeInt functions", "SafeAdd", "SafeCast", "SafeDivide", "SafeEquals", "SafeGreaterThan", "SafeGreaterThanEquals", "SafeLessThan", "SafeLessThanEquals", "SafeModulus", "SafeMultiply", "SafeNotEquals", "SafeSubtract"]
helpviewer_keywords: ["functions, SafeInt", "SafeAdd function", "SafeCast function", "SafeDivide function", "SafeEquals function", "SafeGreaterThan function", "SafeGreaterThanEquals function", "SafeLessThan function", "SafeLessThanEquals function", "SafeModulus function", "SafeMultiply function", "SafeNotEquals function", "SafeSubtract function"]
ms.assetid: fdc208e5-5d8a-41a9-8271-567fd438958d
---
# SafeInt Functions

The SafeInt library provides several functions that you can use without creating an instance of the [SafeInt class](safeint-class.md). If you want to protect a single mathematical operation from integer overflow, you can use these functions. If you want to protect multiple mathematical operations, you should create `SafeInt` objects. It's more efficient to create `SafeInt` objects than to use these functions multiple times.

These functions enable you to compare or perform mathematical operations on two different types of parameters without having to convert them to the same type first.

Each of these functions has two template types: `T` and `U`. Each of these types can be a Boolean, character, or integral type. Integral types can be signed or unsigned and any size from 8 bits to 64 bits.

> [!NOTE]
> The latest version of this library is located at [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt).

## In This Section

Function                      | Description
----------------------------- | --------------------------------------------------------------
[SafeAdd](#safeadd)           | Adds two numbers and protects against overflow.
[SafeCast](#safecast)         | Casts one type of parameter to another type.
[SafeDivide](#safedivide)     | Divides two numbers and protects against dividing by zero.
[SafeEquals](#safeequals), [SafeGreaterThan](#safegreaterthan), [SafeGreaterThanEquals](#safegreaterthanequals), [SafeLessThan](#safelessthan), [SafeLessThanEquals](#safelessthanequals), [SafeNotEquals](#safenotequals) | Compares two numbers. These functions enable you to compare two different types of numbers without changing their types.
[SafeModulus](#safemodulus)   | Performs the modulus operation on two numbers.
[SafeMultiply](#safemultiply) | Multiplies two numbers together and protects against overflow.
[SafeSubtract](#safesubtract) | Subtracts two numbers and protects against overflow.

## Related Sections

Section                                                  | Description
-------------------------------------------------------- | ----------------------------------------------------
[SafeInt](safeint-class.md)                   | The `SafeInt` class.
[SafeIntException](safeintexception-class.md) | The exception class specific to the SafeInt library.

## <a name="safeadd"></a> SafeAdd

Adds two numbers in a way that protects against overflow.

```cpp
template<typename T, typename U>
inline bool SafeAdd (
   T t,
   U u,
   T& result
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to add. This must be of type T.

*u*<br/>
[in] The second number to add. This must be of type U.

*result*<br/>
[out] The parameter where `SafeAdd` stores the result.

### Return Value

**`true`** if no error occurs; **`false`** if an error occurs.

## <a name="safecast"></a> SafeCast

Casts one type of number to another type.

```cpp
template<typename T, typename U>
inline bool SafeCast (
   const T From,
   U& To
);
```

### Parameters

*From*<br/>
[in] The source number to convert. This must be of type `T`.

*To*<br/>
[out] A reference to the new number type. This must be of type `U`.

### Return Value

**`true`** if no error occurs; **`false`** if an error occurs.

## <a name="safedivide"></a> SafeDivide

Divides two numbers in a way that protects against dividing by zero.

```cpp
template<typename T, typename U>
inline bool SafeDivide (
   T t,
   U u,
   T& result
) throw ();
```

### Parameters

*t*<br/>
[in] The dividend. This must be of type T.

*u*<br/>
[in] The divisor. This must be of type U.

*result*<br/>
[out] The parameter where `SafeDivide` stores the result.

### Return Value

**`true`** if no error occurs; **`false`** if an error occurs.

## <a name="safeequals"></a> SafeEquals

Compares two numbers to determine whether they're equal.

```cpp
template<typename T, typename U>
inline bool SafeEquals (
   const T t,
   const U u
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to compare. This must be of type T.

*u*<br/>
[in] The second number to compare. This must be of type U.

### Return Value

**`true`** if *t* and *u* are equal; otherwise **`false`**.

### Remarks

The method enhances `==` because `SafeEquals` enables you to compare two different types of numbers.

## <a name="safegreaterthan"></a> SafeGreaterThan

Compares two numbers.

```cpp
template<typename T, typename U>
inline bool SafeGreaterThan (
   const T t,
   const U u
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to compare. This must be of type `T`.

*u*<br/>
[in] The second number to compare. This must be of type `U`.

### Return Value

**`true`** if *t* is greater than *u*; otherwise **`false`**.

### Remarks

`SafeGreaterThan` extends the regular comparison operator by enabling you to compare two different types of numbers.

## <a name="safegreaterthanequals"></a> SafeGreaterThanEquals

Compares two numbers.

```cpp
template <typename T, typename U>
inline bool SafeGreaterThanEquals (
   const T t,
   const U u
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to compare. This must be of type `T`.

*u*<br/>
[in] The second number to compare. This must be of type `U`.

### Return Value

**`true`** if *t* is greater than or equal to *u*; otherwise **`false`**.

### Remarks

`SafeGreaterThanEquals` enhances the standard comparison operator because it enables you to compare two different types of numbers.

## <a name="safelessthan"></a> SafeLessThan

Determines whether one number is less than another.

```cpp
template<typename T, typename U>
inline bool SafeLessThan (
   const T t,
   const U u
) throw ();
```

### Parameters

*t*<br/>
[in] The first number. This must be of type `T`.

*u*<br/>
[in] The second number. This must be of type `U`.

### Return Value

**`true`** if *t* is less than *u*; otherwise **`false`**.

### Remarks

This method enhances the standard comparison operator because `SafeLessThan` enables you to compare two different types of number.

## <a name="safelessthanequals"></a> SafeLessThanEquals

Compares two numbers.

```cpp
template <typename T, typename U>
inline bool SafeLessThanEquals (
   const T t,
   const U u
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to compare. This must be of type `T`.

*u*<br/>
[in] The second number to compare. This must be of type `U`.

### Return Value

**`true`** if *t* is less than or equal to *u*; otherwise **`false`**.

### Remarks

`SafeLessThanEquals` extends the regular comparison operator by enabling you to compare two different types of numbers.

## <a name="safemodulus"></a> SafeModulus

Performs the modulus operation on two numbers.

```cpp
template<typename T, typename U>
inline bool SafeModulus (
   const T t,
   const U u,
   T& result
) throw ();
```

### Parameters

*t*<br/>
[in] The divisor. This must be of type `T`.

*u*<br/>
[in] The dividend. This must be of type `U`.

*result*<br/>
[out] The parameter where `SafeModulus` stores the result.

### Return Value

**`true`** if no error occurs; **`false`** if an error occurs.

## <a name="safemultiply"></a> SafeMultiply

Multiplies two numbers together in a way that protects against overflow.

```cpp
template<typename T, typename U>
inline bool SafeMultiply (
   T t,
   U u,
   T& result
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to multiply. This must be of type `T`.

*u*<br/>
[in] The second number to multiply. This must be of type `U`.

*result*<br/>
[out] The parameter where `SafeMultiply` stores the result.

### Return Value

**`true`** if no error occurs; **`false`** if an error occurs.

## <a name="safenotequals"></a> SafeNotEquals

Determines if two numbers aren't equal.

```cpp
template<typename T, typename U>
inline bool SafeNotEquals (
   const T t,
   const U u
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to compare. This must be of type `T`.

*u*<br/>
[in] The second number to compare. This must be of type `U`.

### Return Value

**`true`** if *t* and *u* aren't equal; otherwise **`false`**.

### Remarks

The method enhances `!=` because `SafeNotEquals` enables you to compare two different types of numbers.

## <a name="safesubtract"></a> SafeSubtract

Subtracts two numbers in a way that protects against overflow.

```cpp
template<typename T, typename U>
inline bool SafeSubtract (
   T t,
   U u,
   T& result
) throw ();
```

### Parameters

*t*<br/>
[in] The first number in the subtraction. This must be of type `T`.

*u*<br/>
[in] The number to subtract from *t*. This must be of type `U`.

*result*<br/>
[out] The parameter where `SafeSubtract` stores the result.

### Return Value

**`true`** if no error occurs; **`false`** if an error occurs.
