---
description: "Learn more about: Platform::Box Class"
title: "Platform::Box Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Box"]
ms.assetid: b3d7ea37-e98a-4fbc-80b0-ad35e50250c6
---
# Platform::Box Class

Enables a value type such as `Windows::Foundation::DateTime` or a scalar type such as **`int`** to be stored in a `Platform::Object` type. It is usually not necessary to use `Box` explicitly because boxing happens implicitly when you cast a value type to `Object^`.

### Syntax

```cpp
ref class Box abstract;
```

### Requirements

**Header:** vccorlib.h

**Namespace:** Platform

### Members

|Member|Description|
|------------|-----------------|
|[Box](#ctor) | Creates a `Box` that can encapsulate a value of the specified type. |
|[operator Box&lt;const T&gt;^](#box-const-t) | Enables boxing conversions from a **`const`** value class `T` or **`enum`** class `T` to `Box<T>`. |
|[operator Box&lt;const volatile T&gt;^](#box-const-volatile-t) | Enables boxing conversions from a **`const volatile`** value class `T` or **`enum`** type `T` to `Box<T>`. |
|[operator Box&lt;T&gt;^](#box-t) | Enables boxing conversions from a value class `T` to `Box<T>`. |
|[operator Box&lt;volatile T&gt;^](#box-volatile-t) | Enables boxing conversions from a **`volatile`** value class `T` or **`enum`** type `T` to `Box<T>`. |
|[Box::operator T](#t) | Enables boxing conversions from a value class `T` or **`enum`** class `T` to `Box<T>`. |
|[Value property](#value) | Returns the value that is encapsulated in the `Box` object. |

## <a name="ctor"></a> Box::Box Constructor

Creates a `Box` that can encapsulate a value of the specified type.

### Syntax

```cpp
Box(T valueArg);
```

### Parameters

*valueArg*<br/>
The type of value to be boxed—for example, **`int`**, **`bool`**, `float64`, `DateTime`.

## <a name="box-const-t"></a> Box::operator Box&lt;const T&gt;^ Operator

Enables boxing conversions from a **`const`** value class `T` or **`enum`** class `T` to `Box<T>`.

### Syntax

```cpp
operator Box<const T>^(const T valueType);
```

### Parameters

*T*<br/>
Any value class, value struct, or enum type. Includes the built-in types in the [default namespace](../cppcx/default-namespace.md).

### Return Value

A `Platform::Box<T>^` instance that represents the original value boxed in a ref class.

## <a name="box-const-volatile-t"></a> Box::operator Box&lt;const volatile T&gt;^ Operator

Enables boxing conversions from a **`const volatile`** value class `T` or **`enum`** type `T` to `Box<T>`.

### Syntax

```cpp
operator Box<const volatile T>^(const volatile T valueType);
```

### Parameters

*T*<br/>
Any enum type, value class, or value struct. Includes the built-in types in the [default namespace](../cppcx/default-namespace.md).

### Return Value

A `Platform::Box<T>^` instance that represents the original value boxed in a ref class.

## <a name="box-t"></a> Box::operator Box&lt;T&gt;^ Operator

Enables boxing conversions from a value class `T` to `Box<T>`.

### Syntax

```cpp
operator Box<const T>^(const T valueType);
```

### Parameters

*T*<br/>
Any enum type, value class, or value struct. Includes the built-in types in the [default namespace](../cppcx/default-namespace.md).

### Return Value

A `Platform::Box<T>^` instance that represents the original value boxed in a ref class.

## <a name="box-volatile-t"></a> Box::operator Box&lt;volatile T&gt;^ Operator

Enables boxing conversions from a **`volatile`** value class `T` or **`enum`** type `T` to `Box<T>`.

### Syntax

```cpp
operator Box<volatile T>^(volatile T valueType);
```

### Parameters

*T*<br/>
Any enum type, value class, or value struct. Includes the built-in types in the [default namespace](../cppcx/default-namespace.md).

### Return Value

A `Platform::Box<T>^` instance that represents the original value boxed in a ref class.

## <a name="t"></a> Box::operator T Operator

Enables boxing conversions from a value class `T` or **`enum`** class `T` to `Box<T>`.

### Syntax

```cpp
operator Box<T>^(T valueType);
```

### Parameters

*T*<br/>
Any enum type, value class, or value struct. Includes the built-in types in the [default namespace](../cppcx/default-namespace.md).

### Return Value

A `Platform::Box<T>^` instance that represents the original value boxed in a ref class.

## <a name="value"></a> Box::Value Property

Returns the value that is encapsulated in the `Box` object.

### Syntax

```cpp
virtual property T Value{
   T get();
}
```

### Return Value

Returns the boxed value with the same type as it originally had before it was boxed.

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)<br/>
[Boxing](../cppcx/boxing-c-cx.md)
