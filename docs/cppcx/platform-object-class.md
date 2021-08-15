---
description: "Learn more about: Platform::Object Class"
title: "Platform::Object Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Object::Object", "VCCORLIB/Platform::Object::Equals", "VCCORLIB/Platform::Object::GetHashCode", "VCCORLIB/Platform::Object::ReferenceEquals", "VCCORLIB/Platform::ToString", "VCCORLIB/Platform::GetType"]
helpviewer_keywords: ["Object class"]
ms.assetid: 709e84a8-0bff-471b-bc14-63e424080b5a
---
# Platform::Object Class

Provides common behavior for ref classes and ref structs in Windows Runtime apps. All ref class and ref struct instances are implicitly convertible to Platform::Object^ and can override its virtual ToString method.

## Syntax

```cpp
public ref class Object : Object
```

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[Object::Object](#ctor)|Initializes a new instance of the Object class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[Object::Equals](#equals)|Determines whether the specified object is equal to the current object.|
|[Object::GetHashCode](#gethashcode)|Returns the hash code for this instance.|
|[Object::ReferenceEquals](#referenceequals)|Determines whether the specified Object instances are the same instance.|
|[ToString](#tostring)|Returns a string that represents the current object. Can be overridden.|
|[GetType](#gettype)|Gets a [Platform::Type](../cppcx/platform-type-class.md) that describes the current instance.|

## Inheritance Hierarchy

`Object`

`Object`

### Requirements

**Header:** vccorlib.h

**Namespace:** Platform

## <a name="equals"></a> Object::Equals Method

Determines whether the specified object is equal to the current object.

### Syntax

```cpp
bool Equals(
    Object^ obj
)
```

### Parameters

*obj*<br/>
The object to compare.

### Return Value

**`true`** if the objects are equal, otherwise **`false`**.

## <a name="gethashcode"></a> Object::GetHashCode Method

Returns the `IUnknown`* identity value for this instance if it is a COM object, or a computed hash value if it is not a COM object.

### Syntax

```cpp
public:int GetHashCode();
```

### Return Value

A numeric value that uniquely identifies this object.

### Remarks

You can use GetHashCode to create keys for objects in maps. You can compare hash codes by using [Object::Equals](#equals). If the code path is extremely critical and `GetHashCode` and `Equals` are not sufficiently fast, then you can drop down to the underlying COM layer and do native `IUnknown` pointer comparisons.

## <a name="gettype"></a> Object::GetType Method

Returns a [Platform::Type](../cppcx/platform-type-class.md) object that describes the runtime type of an object.

### Syntax

```cpp
Object::GetType();
```

### Property Value/Return Value

A [Platform::Type](../cppcx/platform-type-class.md) object that describes the runtime type of the object.

### Remarks

The static [Type::GetTypeCode](../cppcx/platform-type-class.md#gettypecode) can be used to get a [Platform::TypeCode Enumeration](../cppcx/platform-typecode-enumeration.md) value that represents the current type. This is mostly useful for built-in types. The type code for any ref class besides [Platform::String](../cppcx/platform-string-class.md) is Object (1).

The [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename) class is used in the Windows APIs as a language-independent way of passing type information between Windows components and apps. The T[Platform::Type Class](../cppcx/platform-type-class.md) has operators for converting between `Type` and `TypeName`.

Use the [typeid](../extensions/typeid-cpp-component-extensions.md) operator to return a `Platform::Type` object for a class name, for example when navigating between XAML pages:

```
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
```

## <a name="ctor"></a> Object::Object Constructor

Initializes a new instance of the Object class.

### Syntax

```cpp
public:Object();
```

## <a name="referenceequals"></a> Object::ReferenceEquals Method

Determines whether the specified Object instances are the same instance.

### Syntax

```cpp
public:static bool ReferenceEquals(  Object^ obj1,   Object^ obj2);
```

### Parameters

*obj1*<br/>
The first object to compare.

*obj2*<br/>
The second object to compare.

### Return Value

**`true`** if the two objects are the same; otherwise, **`false`**.

## <a name="tostring"></a> Object::ToString Method (C++/CX)

Returns a string that represents the current object.

### Syntax

```cpp
public:
virtual String^ ToString();
```

### Return Value

A string that represents the current object. You can override this method to provide a custom string message in your ref class or struct:

```cpp
public ref class Tree sealed
{
public:
    Tree(){}
    virtual Platform::String^ ToString() override
    {
      return "I’m a Tree";
    };
};
```

## See also

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Platform::Type Class](platform-type-class.md)<br/>
[Type System](type-system-c-cx.md)
