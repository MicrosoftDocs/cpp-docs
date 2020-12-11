---
description: "Learn more about: RuntimeClassBaseT Structure"
title: "RuntimeClassBaseT Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::RuntimeClassBaseT", "implements/Microsoft::WRL::Details::RuntimeClassBaseT::AsIID", "implements/Microsoft::WRL::Details::RuntimeClassBaseT::GetImplementedIIDS"]
helpviewer_keywords: ["Microsoft::WRL::Details::RuntimeClassBaseT structure", "Microsoft::WRL::Details::RuntimeClassBaseT::AsIID method", "Microsoft::WRL::Details::RuntimeClassBaseT::GetImplementedIIDS method"]
ms.assetid: a62775fb-3359-4f45-9ff1-c07fa8da464b
---
# RuntimeClassBaseT Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <unsigned int RuntimeClassTypeT>
friend struct Details::RuntimeClassBaseT;
```

### Parameters

*RuntimeClassTypeT*<br/>
A field of flags that specifies one or more [RuntimeClassType](runtimeclasstype-enumeration.md) enumerators.

## Remarks

Provides helper methods for `QueryInterface` operations and getting interface IDs.

## Members

### Protected Methods

Name                                                         | Description
------------------------------------------------------------ | -----------------------------------------------------------------------------
[RuntimeClassBaseT::AsIID](#asiid)                           | Retrieves a pointer to the specified interface ID.
[RuntimeClassBaseT::GetImplementedIIDS](#getimplementediids) | Retrieves an array of interface IDs that are implemented by a specified type.

## Inheritance Hierarchy

`RuntimeClassBaseT`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="asiid"></a> RuntimeClassBaseT::AsIID

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
template<typename T>
__forceinline static HRESULT AsIID(
   _In_ T* implements,
   REFIID riid,
   _Deref_out_ void **ppvObject
);
```

### Parameters

*T*<br/>
A type that implements the interface ID specified by parameter *riid*.

*implements*<br/>
A variable of the type specified by template parameter *T*.

*riid*<br/>
The interface ID to retrieve.

*ppvObject*<br/>
If this operation is successful, a pointer-to-a-pointer to the interface specified by parameter *riid*.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the error.

### Remarks

Retrieves a pointer to the specified interface ID.

## <a name="getimplementediids"></a> RuntimeClassBaseT::GetImplementedIIDS

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
template<typename T>
__forceinline static HRESULT GetImplementedIIDS(
   _In_ T* implements,
   _Out_ ULONG *iidCount,
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids
);
```

### Parameters

*T*<br/>
The type of the *implements* parameter.

*implements*<br/>
Pointer to the type specified by parameter *T*.

*iidCount*<br/>
The maximum number of interface IDs to retrieve.

*iids*<br/>
If this operation completes successfully, an array of the interface IDs implemented by type *T*.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the error.

### Remarks

Retrieves an array of interface IDs that are implemented by a specified type.
