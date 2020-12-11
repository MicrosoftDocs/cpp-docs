---
description: "Learn more about: cancellation_token_registration Class"
title: "cancellation_token_registration Class"
ms.date: "11/04/2016"
f1_keywords: ["cancellation_token_registration", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration::cancellation_token_registration"]
helpviewer_keywords: ["cancellation_token_registration class"]
ms.assetid: 823d63f4-7233-4d65-8976-6152ccf12d0e
---
# cancellation_token_registration Class

The `cancellation_token_registration` class represents a callback notification from a `cancellation_token`. When the `register` method on a `cancellation_token` is used to receive notification of when cancellation occurs, a `cancellation_token_registration` object is returned as a handle to the callback so that the caller can request a specific callback no longer be made through use of the `deregister` method.

## Syntax

```cpp
class cancellation_token_registration;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[cancellation_token_registration](#ctor)||
|[~cancellation_token_registration Destructor](#dtor)||

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator!=](#operator_neq)||
|[operator=](#operator_eq)||
|[operator==](#operator_eq_eq)||

## Inheritance Hierarchy

`cancellation_token_registration`

## Requirements

**Header:** pplcancellation_token.h

**Namespace:** concurrency

## <a name="dtor"></a> ~cancellation_token_registration

```cpp
~cancellation_token_registration();
```

## <a name="ctor"></a> cancellation_token_registration

```cpp
cancellation_token_registration();

cancellation_token_registration(const cancellation_token_registration& _Src);

cancellation_token_registration(cancellation_token_registration&& _Src);
```

### Parameters

*_Src*<br/>
The `cancellation_token_registration` to copy or move.

## <a name="operator_neq"></a> operator!=

```cpp
bool operator!= (const cancellation_token_registration& _Rhs) const;
```

### Parameters

*_Rhs*<br/>
The `cancellation_token_registration` to compare.

### Return Value

## <a name="operator_eq"></a> operator=

```cpp
cancellation_token_registration& operator= (const cancellation_token_registration& _Src);

cancellation_token_registration& operator= (cancellation_token_registration&& _Src);
```

### Parameters

*_Src*<br/>
The `cancellation_token_registration` to assign.

### Return Value

## <a name="operator_eq_eq"></a> operator==

```cpp
bool operator== (const cancellation_token_registration& _Rhs) const;
```

### Parameters

*_Rhs*<br/>
The `cancellation_token_registration` to compare.

### Return Value

## See also

[concurrency Namespace](concurrency-namespace.md)
