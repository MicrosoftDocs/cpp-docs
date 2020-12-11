---
description: "Learn more about: Platform::IntPtr value class"
title: "Platform::IntPtr value class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/PlatformIntPtr::IntPtr", "VCCORLIB/PlatformIntPtr::op_explicit Operator", "VCCORLIB/PlatformIntPtr::ToInt32"]
helpviewer_keywords: ["Platform::IntPtr Struct"]
ms.assetid: 6c0326e8-edfd-4e53-a963-240b845dcde8
---
# Platform::IntPtr value class

Represents an signed pointer or handle, and whose size is platform-specific (32-bit or 64-bit).

## Syntax

```cpp
public value struct IntPtr
```

### Members

IntPtr has the following members:

|Member|Description|
|------------|-----------------|
|[IntPtr::IntPtr](#ctor)|Initializes a new instance of IntPtr.|
|[IntPtr::op_explicit Operator](#op-explicit)|Converts the specified parameter to an IntPtr or a pointer to an IntPtr value.|
|[IntPtr::ToInt32](#toint32)|Converts the current IntPtr to a 32-bit integer.|

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## <a name="ctor"> </a> IntPtr::IntPtr Constructor

Initializes a new instance of an IntPtr with the specified value.

### Syntax

```cpp
IntPtr( __int64 handle-or-pointer );   IntPtr( void* value );   IntPtr( int 32-bit_value );
```

### Parameters

*value*<br/>
A 64-bit handle or pointer, or a pointer to a 64-bit value, or a 32-bit value that can be converted to a 64-bit value.

## <a name="op-explicit"> </a> IntPtr::op_explicit Operator

Converts the specified parameter to an IntPtr or a pointer to an IntPtr value.

### Syntax

```cpp
static IntPtr::operator IntPtr( void* value1);   static IntPtr::operator IntPtr( int value2);   static IntPtr::operator void*( IntPtr value3 );
```

### Parameters

*value1*<br/>
A pointer to a handle or IntPtr.

*value2*<br/>
An 32-bit integer that can be converted to an IntPtr.

*value3*<br/>
An IntPtr.

### Return Value

The first and second operators return an IntPtr. The third operator returns a pointer to the value represented by the current IntPtr.

## <a name="toint32"> </a> IntPtr::ToInt32 Method

Converts the current IntPtr value to a 32-bit integer.

### Syntax

```cpp
int32 IntPtr::ToInt32();
```

### Return Value

A 32-bit integer.

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
