---
description: "Learn more about: Platform::STAThreadAttribute Class"
title: "Platform::STAThreadAttribute Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Platform", "COLLECTION/Platform::Platform::STAThreadAttribute constructor 1", "COLLECTION/Platform::Platform::STAThreadAttribute::Equals", "COLLECTION/Platform::Platform::STAThreadAttribute::GetHashCode", "COLLECTION/Platform::Platform::STAThreadAttribute::ToString"]
helpviewer_keywords: ["Platform::STAThreadAttribute Class"]
ms.assetid: f97960fc-e673-4d9e-910a-54c8415411c4
---
# Platform::STAThreadAttribute Class

Indicates that the threading model for an application is single-threaded apartment (STA).

## Syntax

```
public ref class STAThreadAttribute sealed : Attribute
```

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[STAThreadAttribute constructor 1](#ctor)|Initializes a new instance of the class.|

### Public Methods

The STAThreadAttribute attribute inherits from [Platform::Object Class](../cppcx/platform-object-class.md). STAThreadAttribute also overloads or has the following members:

|Name|Description|
|----------|-----------------|
|[STAThreadAttribute::Equals](#equals)|Determines whether the specified object is equal to the current object.|
|[STAThreadAttribute::GetHashCode](#gethashcode)|Returns the hash code for this instance.|
|[STAThreadAttribute::ToString](#tostring)|Returns a string that represents the current object.|

## Inheritance Hierarchy

`Platform`

### Requirements

**Header:** collection.h

**Namespace:** Platform

## <a name="ctor"></a> STAThreadAttribute constructor

Initializes a new instance of the STAThreadAttribute class.

### Syntax

```cpp
public:STAThreadAttribute();
```

## <a name="equals"></a> STAThreadAttribute::Equals

Determines whether the specified object is equal to the current object.

### Syntax

```cpp
public:virtual override bool Equals( Object^ obj );
```

### Parameters

*obj*<br/>
The object to compare.

### Return Value

**`true`** if the objects are equal; otherwise, **`false`**.

## <a name="gethashcode"></a> STAThreadAttribute::GetHashCode

Returns the hash code for this instance.

### Syntax

```cpp
public:int GetHashCode();
```

### Return Value

The hash code for this instance.

## <a name="tostring"></a> STAThreadAttribute::ToString

Returns a string that represents the current object.

### Syntax

```cpp
public:String^ ToString();
```

### Return Value

A string that represents the current object.

## See also

[Platform Namespace](platform-namespace-c-cx.md)
