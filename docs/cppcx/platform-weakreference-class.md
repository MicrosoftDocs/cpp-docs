---
description: "Learn more about: Platform::WeakReference Class"
title: "Platform::WeakReference Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["Platform::WeakReference"]
ms.assetid: 8cfe1977-a8c7-4b7b-b539-25c77ed4c5f1
---
# Platform::WeakReference Class

Represents a weak reference to an instance of a ref class.

## Syntax

```cpp
class WeakReference
```

#### Parameters

### Members

### Constructors

|Member|Description|
|------------|-----------------|
|[WeakReference::WeakReference](#ctor)|Initializes a new instance of the WeakReference class.|

### Methods

|Member|Description|
|------------|-----------------|
|[WeakReference::Resolve](#resolve)|Returns a handle to the underlying ref class, or nullptr if the object no longer exists.|

### Operators

|Member|Description|
|------------|-----------------|
|[WeakReference::operator=](#operator-assign)|Assigns a new value to the WeakReference object.|
|[WeakReference::operator BoolType](#booltype)|Implements the safe bool pattern.|

### Remarks

The WeakReference class itself is not a ref class and therefore it does not inherit from Platform::Object^ and cannot be used in the signature of a public method.

## <a name="operator-assign"></a> WeakReference::operator=

Assigns a value to a WeakReference.

### Syntax

```cpp
WeakReference& operator=(decltype(__nullptr));
WeakReference& operator=(const WeakReference& otherArg);
WeakReference& operator=(WeakReference&& otherArg);
WeakReference& operator=(const volatile ::Platform::Object^ const otherArg);
```

### Remarks

The last overload in the list above enables you to assign a ref class to a WeakReference variable. In this case the ref class is downcast to [Platform::Object](../cppcx/platform-object-class.md)^. You restore the original type later by specifying it as the argument for the type parameter in the [WeakReference::Resolve\<T>](#resolve) member function.

## <a name="booltype"></a> WeakReference::operator BoolType

Implements the safe bool pattern for the WeakReference class. Not to be called explicitly from your code.

### Syntax

```cpp
BoolType BoolType();
```

## <a name="resolve"></a> WeakReference::Resolve Method (Platform namespace)

Returns a handle to the original ref class, or **`nullptr`** if the object no longer exists.

### Syntax

```cpp
template<typename T>
T^ Resolve() const;
```

### Parameters

### Property Value/Return Value

A handle to the ref class that the WeakReference object was previously associated with, or nullptr.

### Example

```cpp
Bar^ bar = ref new Bar();
//use bar...

if (bar != nullptr)
{
    WeakReference wr(bar);
    Bar^ newReference = wr.Resolve<Bar>();
}
```

Note that the type parameter is T, not T^.

## <a name="ctor"></a> WeakReference::WeakReference Constructor

Provides various ways to construct a WeakReference.

### Syntax

```cpp
WeakReference();
WeakReference(decltype(__nullptr));
WeakReference(const WeakReference& otherArg);
WeakReference(WeakReference&& otherArg);
explicit WeakReference(const volatile ::Platform::Object^ const otherArg);
```

### Example

```cpp
MyClass^ mc = ref new MyClass();
WeakReference wr(mc);
MyClass^ copy2 = wr.Resolve<MyClass>();
```

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
