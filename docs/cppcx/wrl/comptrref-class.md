---
description: "Learn more about: ComPtrRef Class"
title: "ComPtrRef Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef", "client/Microsoft::WRL::Details::ComPtrRef::ComPtrRef", "client/Microsoft::WRL::Details::ComPtrRef::GetAddressOf", "client/Microsoft::WRL::Details::ComPtrRef::operator==", "client/Microsoft::WRL::Details::ComPtrRef::operator!=", "client/Microsoft::WRL::Details::ComPtrRef::operator InterfaceType**", "client/Microsoft::WRL::Details::ComPtrRef::operator*", "client/Microsoft::WRL::Details::ComPtrRef::operator T*", "client/Microsoft::WRL::Details::ComPtrRef::operator void**", "client/Microsoft::WRL::Details::ComPtrRef::ReleaseAndGetAddressOf"]
helpviewer_keywords: ["Microsoft::WRL::Details::ComPtrRef class", "Microsoft::WRL::Details::ComPtrRef::ComPtrRef, constructor", "Microsoft::WRL::Details::ComPtrRef::GetAddressOf method", "Microsoft::WRL::Details::ComPtrRef::operator== operator", "Microsoft::WRL::Details::ComPtrRef::operator!= operator", "Microsoft::WRL::Details::ComPtrRef::operator InterfaceType** operator", "Microsoft::WRL::Details::ComPtrRef::operator* operator", "Microsoft::WRL::Details::ComPtrRef::operator T* operator", "Microsoft::WRL::Details::ComPtrRef::operator void** operator", "Microsoft::WRL::Details::ComPtrRef::ReleaseAndGetAddressOf method"]
ms.assetid: d6bdfd20-e977-45b4-9ac1-1b8efbdb77de
---
# ComPtrRef Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename T>
class ComPtrRef : public ComPtrRefBase<T>;
```

### Parameters

*T*<br/>
A [ComPtr\<T>](comptr-class.md) type or a type derived from it, not merely the interface represented by the `ComPtr`.

## Remarks

Represents a reference to an object of type `ComPtr<T>`.

## Members

### Public Constructors

Name                               | Description
---------------------------------- | -------------------------------------------------------------------------------------------------------------
[ComPtrRef::ComPtrRef](#comptrref) | Initializes a new instance of the `ComPtrRef` class from the specified pointer to another `ComPtrRef` object.

### Public Methods

Name                                                         | Description
------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------
[ComPtrRef::GetAddressOf](#getaddressof)                     | Retrieves the address of a pointer to the interface represented by the current `ComPtrRef` object.
[ComPtrRef::ReleaseAndGetAddressOf](#releaseandgetaddressof) | Deletes the current `ComPtrRef` object and returns a pointer-to-a-pointer to the interface that was represented by the `ComPtrRef` object.

### Public Operators

Name                                                                     | Description
------------------------------------------------------------------------ | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ComPtrRef::operator InterfaceType**](#operator-interfacetype-star-star) | Deletes the current `ComPtrRef` object and returns a pointer-to-a-pointer to the interface that was represented by the `ComPtrRef` object.
[ComPtrRef::operator T*](#operator-t-star)                               | Returns the value of the [ptr_](comptrrefbase-class.md#ptr) data member of the current ComPtrRef object.
[ComPtrRef::operator void**](#operator-void-star-star)                   | Deletes the current `ComPtrRef` object, casts the pointer to the interface that was represented by the `ComPtrRef` object as a pointer-to-pointer-to **`void`**, and then returns the cast pointer.
[ComPtrRef::operator*](#operator-star)                                   | Retrieves the pointer to the interface represented by the current `ComPtrRef` object.
[ComPtrRef::operator==](#operator-equality)                              | Indicates whether two `ComPtrRef` objects are equal.
[ComPtrRef::operator!=](#operator-inequality)                            | Indicates whether two `ComPtrRef` objects are not equal.

## Inheritance Hierarchy

`ComPtrRefBase`

`ComPtrRef`

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="comptrref"></a> ComPtrRef::ComPtrRef

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
ComPtrRef(
   _In_opt_ T* ptr
);
```

### Parameters

*ptr*<br/>
The underlying value of another `ComPtrRef` object.

### Remarks

Initializes a new instance of the `ComPtrRef` class from the specified pointer to another `ComPtrRef` object.

## <a name="getaddressof"></a> ComPtrRef::GetAddressOf

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
InterfaceType* const * GetAddressOf() const;
```

### Return Value

Address of a pointer to the interface represented by the current `ComPtrRef` object.

### Remarks

Retrieves the address of a pointer to the interface represented by the current `ComPtrRef` object.

## <a name="operator-equality"></a> ComPtrRef::operator==

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   const Details::ComPtrRef<ComPtr<U>>& b
);

bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   decltype(__nullptr)
);

bool operator==(
   decltype(__nullptr),
   const Details::ComPtrRef<ComPtr<T>>& a
);

bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   void* b
);

bool operator==(
   void* b,
   const Details::ComPtrRef<ComPtr<T>>& a
);
```

### Parameters

*a*<br/>
A reference to a `ComPtrRef` object.

*b*<br/>
A reference to another `ComPtrRef` object, or a pointer to an anonymous type (**`void*`**).

### Return Value

The first operator yields **`true`** if object *a* is equal to object *b*; otherwise, **`false`**.

The second and third operators yield **`true`** if object *a* is equal to **`nullptr`**; otherwise, **`false`**.

The fourth and fifth operators yield **`true`** if object *a* is equal to object *b*; otherwise, **`false`**.

### Remarks

Indicates whether two `ComPtrRef` objects are equal.

## <a name="operator-inequality"></a> ComPtrRef::operator!=

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   const Details::ComPtrRef<ComPtr<U>>& b
);

bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   decltype(__nullptr)
);

bool operator!=(
   decltype(__nullptr),
   const Details::ComPtrRef<ComPtr<T>>& a
);

bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   void* b
);

bool operator!=(
   void* b,
   const Details::ComPtrRef<ComPtr<T>>& a
);
```

### Parameters

*a*<br/>
A reference to a `ComPtrRef` object.

*b*<br/>
A reference to another `ComPtrRef` object, or a pointer to an anonymous object (**`void*`**).

### Return Value

The first operator yields **`true`** if object *a* is not equal to object *b*; otherwise, **`false`**.

The second and third operators yield **`true`** if object *a* is not equal to **`nullptr`**; otherwise, **`false`**.

The fourth and fifth operators yield **`true`** if object *a* is not equal to object *b*; otherwise, **`false`**.

### Remarks

Indicates whether two `ComPtrRef` objects are not equal.

## <a name="operator-interfacetype-star-star"></a> ComPtrRef::operator InterfaceType\*\*

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
operator InterfaceType**();
```

### Remarks

Deletes the current `ComPtrRef` object and returns a pointer-to-a-pointer to the interface that was represented by the `ComPtrRef` object.

## <a name="operator-star"></a> ComPtrRef::operator*

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
InterfaceType* operator *();
```

### Return Value

Pointer to the interface represented by the current `ComPtrRef` object.

### Remarks

Retrieves the pointer to the interface represented by the current `ComPtrRef` object.

## <a name="operator-t-star"></a> ComPtrRef::operator T*

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
operator T*();
```

### Remarks

Returns the value of the [ptr_](comptrrefbase-class.md#ptr) data member of the current `ComPtrRef` object.

## <a name="operator-void-star-star"></a> ComPtrRef::operator void\*\*

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
operator void**() const;
```

### Remarks

Deletes the current `ComPtrRef` object, casts the pointer to the interface that was represented by the `ComPtrRef` object as a pointer-to-pointer-to **`void`**, and then returns the cast pointer.

## <a name="releaseandgetaddressof"></a> ComPtrRef::ReleaseAndGetAddressOf

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
InterfaceType** ReleaseAndGetAddressOf();
```

### Return Value

Pointer to the interface that was represented by the deleted `ComPtrRef` object.

### Remarks

Deletes the current `ComPtrRef` object and returns a pointer-to-a-pointer to the interface that was represented by the `ComPtrRef` object.
