---
description: "Learn more about: CAdapt Class"
title: "CAdapt Class"
ms.date: "11/04/2016"
f1_keywords: ["CAdapt", "ATLCOMCLI/ATL::CAdapt", "ATLCOMCLI/ATL::CAdapt::CAdapt", "ATLCOMCLI/ATL::CAdapt::m_T"]
helpviewer_keywords: ["address-of operator", "adapter objects", "& operator, address-of operator", "CAdapt class"]
ms.assetid: 0bb695a5-72fe-43d1-8f39-7e4da6e34765
---
# CAdapt Class

This template is used to wrap classes that redefine the address-of operator to return something other than the address of the object.

## Syntax

```cpp
template <class T>
class CAdapt
```

### Parameters

*T*<br/>
The adapted type.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAdapt::CAdapt](#cadapt)|The constructor.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAdapt::operator const T&](#operator_const_t_amp)|Returns a **`const`** reference to `m_T`.|
|[CAdapt::operator T&](#operator_t_amp)|Returns a reference to `m_T`.|
|[CAdapt::operator <](#operator_lt)|Compares an object of the adapted type with `m_T`.|
|[CAdapt::operator =](#operator_eq)|Assigns an object of the adapted type to `m_T`.|
|[CAdapt::operator ==](#operator_eq_eq)|Compares an object of the adapted type with `m_T`.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CAdapt::m_T](#m_t)|The data being adapted.|

## Remarks

`CAdapt` is a simple template used to wrap classes that redefine the address-of operator (`operator &`) to return something other than the address of the object. Examples of such classes include ATL's `CComBSTR`, `CComPtr`, and `CComQIPtr` classes, and the compiler COM support class, `_com_ptr_t`. These classes all redefine the address-of operator to return the address of one of their data members (a BSTR in the case of `CComBSTR`, and an interface pointer in the case of the other classes).

`CAdapt`'s primary role is to hide the address-of operator defined by class *T*, yet still retain the characteristics of the adapted class. `CAdapt` fulfils this role by holding a public member, [m_T](#m_t), of type *T*, and by defining conversion operators, comparison operators, and a copy constructor to allow specializations of `CAdapt` to be treated as if they are objects of type *T*.

The adapter class `CAdapt` is useful because some container-style classes expect to be able to obtain the addresses of their contained objects using the address-of operator. The redefinition of the address-of operator can confound this requirement, typically causing compilation errors and preventing the use of the non-adapted type with classes that expect it to "just work". `CAdapt` provides a way around those problems.

Typically, you will use `CAdapt` when you want to store `CComBSTR`, `CComPtr`, `CComQIPtr`, or `_com_ptr_t` objects in a container-style class. This was most commonly necessary for C++ Standard Library containers prior to support for the C++11 Standard, but C++11 Standard Library containers automatically work with types that have overloaded `operator&()`. The Standard Library achieves this by internally using [std::addressof](../../standard-library/memory-functions.md#addressof) to get the true addresses of objects.

## Requirements

**Header:** atlcomcli.h

## <a name="cadapt"></a> CAdapt::CAdapt

The constructors allow an adapter object to be default constructed, copied from an object of the adapted type, or copied from another adapter object.

```cpp
CAdapt();
CAdapt(const T& rSrc);
CAdapt(const CAdapt& rSrCA);
CAdapt(T&& rSrCA);  // (Visual Studio 2017)
CAdapt(CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### Parameters

*rSrc*<br/>
A variable of the type being adapted to be copied into the newly constructed adapter object.

*rSrCA*<br/>
An adapter object whose contained data should be copied (or moved) into the newly constructed adapter object.

## <a name="m_t"></a> CAdapt::m_T

Holds the data being adapted.

```cpp
T m_T;
```

### Remarks

This **`public`** data member can be accessed directly or indirectly with [operator const T&](#operator_const_t_amp) and [operator T&](#operator_t_amp).

## <a name="operator_const_t_amp"></a> CAdapt::operator const T&amp;

Returns a **`const`** reference to the [m_T](#m_t) member, allowing the adapter object to be treated as if it were an object of type *T*.

```cpp
operator const T&() const;
```

### Return Value

A **`const`** reference to `m_T`.

## <a name="operator_t_amp"></a> CAdapt::operator T&amp;

Returns a reference to the [m_T](#m_t) member, allowing the adapter object to be treated as if it were an object of type *T*.

```cpp
operator T&();
```

### Return Value

A reference to `m_T`.

## <a name="operator_lt"></a> CAdapt::operator &lt;

Compares an object of the adapted type with [m_T](#m_t).

```cpp
bool operator<(const T& rSrc) const;
```

### Parameters

*rSrc*<br/>
A reference to the object to be compared.

### Return Value

The result of the comparison between `m_T` and *rSrc*.

## <a name="operator_eq"></a> CAdapt::operator =

The assignment operator assigns the argument, *rSrc*, to the data member [m_T](#m_t) and returns the current adapter object.

```cpp
CAdapt& operator= (const T& rSrc);
CAdapt& operator= (T&& rSrCA); // (Visual Studio 2017)
CAdapt& operator= (CAdapt<T>&& rSrCA) noexcept; // (Visual Studio 2017)
```

### Parameters

*rSrc*<br/>
A reference to an object of the adapted type to be copied.

*rSrCA*<br/>
A reference to an object to be moved.

### Return Value

A reference to the current object.

## <a name="operator_eq_eq"></a> CAdapt::operator ==

Compares an object of the adapted type with [m_T](#m_t).

```cpp
bool operator== (const T& rSrc) const;
```

### Parameters

*rSrc*<br/>
A reference to the object to be compared.

### Return Value

The result of the comparison between *m_T* and *rSrc*.

## See also

[Class Overview](../../atl/atl-class-overview.md)
