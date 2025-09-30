---
title: "Platform::SizeT value class"
description: "Learn more about: Platform::SizeT value class"
ms.date: 12/30/2016
ms.topic: "reference"
f1_keywords: ["VCCORLIB/PlatformSizeT::SizeT constructor"]
helpviewer_keywords: ["Platform::SizeT Struct"]
---
# Platform::SizeT value class

Represents the size of an object. SizeT is an unsigned data type.

## Syntax

```cpp
public ref class SizeT sealed : ValueType
```

### Members

|Member|Description|
|------------|-----------------|
|[SizeT::SizeT constructor](#ctor)|Initializes a new instance of the class with the specified value.|

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## <a name="ctor"></a> SizeT::SizeT constructor

Initializes a new instance of SizeT with the specified value.

### Syntax

```cpp
SizeT( uint32 value1 );
SizeT( void* value2 );
```

### Parameters

*value1*<br/>
An unsigned 32-bit value.

*value2*<br/>
Pointer to an unsigned 32-bit value.

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
