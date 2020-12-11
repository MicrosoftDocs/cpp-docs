---
description: "Learn more about: CComPtrBase Class"
title: "CComPtrBase Class"
ms.date: "11/04/2016"
f1_keywords: ["CComPtrBase", "ATLCOMCLI/ATL::CComPtrBase", "ATLCOMCLI/ATL::CComPtrBase::Advise", "ATLCOMCLI/ATL::CComPtrBase::Attach", "ATLCOMCLI/ATL::CComPtrBase::CoCreateInstance", "ATLCOMCLI/ATL::CComPtrBase::CopyTo", "ATLCOMCLI/ATL::CComPtrBase::Detach", "ATLCOMCLI/ATL::CComPtrBase::IsEqualObject", "ATLCOMCLI/ATL::CComPtrBase::QueryInterface", "ATLCOMCLI/ATL::CComPtrBase::Release", "ATLCOMCLI/ATL::CComPtrBase::SetSite", "ATLCOMCLI/ATL::CComPtrBase::p"]
helpviewer_keywords: ["CComPtrBase class"]
ms.assetid: 6dbe9543-dee8-4a97-b02f-dd3a25f4a1a0
---
# CComPtrBase Class

This class provides a basis for smart pointer classes using COM-based memory routines.

## Syntax

```
template <class T>
class CComPtrBase
```

#### Parameters

*T*<br/>
The object type to be referenced by the smart pointer.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComPtrBase::~CComPtrBase](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComPtrBase::Advise](#advise)|Call this method to create a connection between the `CComPtrBase`'s connection point and a client's sink.|
|[CComPtrBase::Attach](#attach)|Call this method to take ownership of an existing pointer.|
|[CComPtrBase::CoCreateInstance](#cocreateinstance)|Call this method to create an object of the class associated with a specified Class ID or Program ID.|
|[CComPtrBase::CopyTo](#copyto)|Call this method to copy the `CComPtrBase` pointer to another pointer variable.|
|[CComPtrBase::Detach](#detach)|Call this method to release ownership of a pointer.|
|[CComPtrBase::IsEqualObject](#isequalobject)|Call this method to check if the specified `IUnknown` points to the same object associated with the `CComPtrBase` object.|
|[CComPtrBase::QueryInterface](#queryinterface)|Call this method to return a pointer to a specified interface.|
|[CComPtrBase::Release](#release)|Call this method to release the interface.|
|[CComPtrBase::SetSite](#setsite)|Call this method to set the site of the `CComPtrBase` object to the `IUnknown` of the parent object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CComPtrBase::operator T*](#operator_t_star)|The cast operator.|
|[CComPtrBase::operator !](#operator_not)|The NOT operator.|
|[CComPtrBase::operator &](#operator_amp)|The & operator.|
|[CComPtrBase::operator *](#operator_star)|The \* operator.|
|[CComPtrBase::operator <](#ccomptrbase__operator lt)|The less-than operator.|
|[CComPtrBase::operator ==](#operator_eq_eq)|The equality operator.|
|[CComPtrBase::operator ->](#operator_ptr)|The pointer-to-members operator.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComPtrBase::p](#p)|The pointer data member variable.|

## Remarks

This class provides the basis for other smart pointers which use COM memory management routines, such as [CComQIPtr](../../atl/reference/ccomqiptr-class.md) and [CComPtr](../../atl/reference/ccomptr-class.md). The derived classes add their own constructors and operators, but rely on the methods provided by `CComPtrBase`.

## Requirements

**Header:** atlcomcli.h

## <a name="advise"></a> CComPtrBase::Advise

Call this method to create a connection between the `CComPtrBase`'s connection point and a client's sink.

```
HRESULT Advise(
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw) throw();
```

### Parameters

*pUnk*<br/>
A pointer to the client's `IUnknown`.

*iid*<br/>
The GUID of the connection point. Typically, this is the same as the outgoing interface managed by the connection point.

*pdw*<br/>
A pointer to the cookie that uniquely identifies the connection.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

See [AtlAdvise](connection-point-global-functions.md#atladvise) for more information.

## <a name="attach"></a> CComPtrBase::Attach

Call this method to take ownership of an existing pointer.

```cpp
void Attach(T* p2) throw();
```

### Parameters

*p2*<br/>
The `CComPtrBase` object will take ownership of this pointer.

### Remarks

`Attach` calls [CComPtrBase::Release](#release) on the existing [CComPtrBase::p](#p) member variable and then assigns *p2* to `CComPtrBase::p`. When a `CComPtrBase` object takes ownership of a pointer, it will automatically call `Release` on the pointer which will delete the pointer and any allocated data if the reference count on the object goes to 0.

## <a name="dtor"></a> CComPtrBase::~CComPtrBase

The destructor.

```
~CComPtrBase() throw();
```

### Remarks

Releases the interface pointed to by `CComPtrBase`.

## <a name="cocreateinstance"></a> CComPtrBase::CoCreateInstance

Call this method to create an object of the class associated with a specified Class ID or Program ID.

```
HRESULT CoCreateInstance(
    LPCOLESTR szProgID,
    LPUNKNOWN pUnkOuter = NULL,
    DWORD dwClsContext = CLSCTX_ALL) throw();

HRESULT CoCreateInstance(
    REFCLSID rclsid,
    LPUNKNOWN pUnkOuter = NULL,
    DWORD dwClsContext = CLSCTX_ALL) throw();
```

### Parameters

*szProgID*<br/>
Pointer to a ProgID, used to recover the CLSID.

*pUnkOuter*<br/>
If NULL, indicates that the object is not being created as part of an aggregate. If non- NULL, is a pointer to the aggregate object's `IUnknown` interface (the controlling `IUnknown`).

*dwClsContext*<br/>
Context in which the code that manages the newly created object will run.

*rclsid*<br/>
CLSID associated with the data and code that will be used to create the object.

### Return Value

Returns S_OK on success, or REGDB_E_CLASSNOTREG, CLASS_E_NOAGGREGATION, CO_E_CLASSSTRING or E_NOINTERFACE on failure. See [CoCreateClassInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance) and [CLSIDFromProgID](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromprogid) for a description of these errors.

### Remarks

If the first form of the method is called, [CLSIDFromProgID](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromprogid) is used to recover the CLSID. Both forms then call [CoCreateClassInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

In debug builds, an assertion error will occur if [CComPtrBase::p](#p) is not equal to NULL.

## <a name="copyto"></a> CComPtrBase::CopyTo

Call this method to copy the `CComPtrBase` pointer to another pointer variable.

```
HRESULT CopyTo(T** ppT) throw();
```

### Parameters

*ppT*<br/>
Address of the variable which will receive the `CComPtrBase` pointer.

### Return Value

Returns S_OK on success, E_POINTER on failure.

### Remarks

Copies the `CComPtrBase` pointer to *ppT*. The reference count on the [CComPtrBase::p](#p) member variable is incremented.

An error HRESULT will be returned if *ppT* is equal to NULL. In debug builds, an assertion error will occur if *ppT* is equal to NULL.

## <a name="detach"></a> CComPtrBase::Detach

Call this method to release ownership of a pointer.

```
T* Detach() throw();
```

### Return Value

Returns a copy of the pointer.

### Remarks

Releases ownership of a pointer, sets the [CComPtrBase::p](#p) data member variable to NULL, and returns a copy of the pointer.

## <a name="isequalobject"></a> CComPtrBase::IsEqualObject

Call this method to check if the specified `IUnknown` points to the same object associated with the `CComPtrBase` object.

```
bool IsEqualObject(IUnknown* pOther) throw();
```

### Parameters

*pOther*<br/>
The `IUnknown *` to compare.

### Return Value

Returns true if the objects are identical, false otherwise.

## <a name="operator_not"></a> CComPtrBase::operator !

The NOT operator.

```
bool operator!() const throw();
```

### Return Value

Returns true if the `CComHeapPtr` pointer is equal to NULL, false otherwise.

## <a name="operator_amp"></a> CComPtrBase::operator &amp;

The & operator.

```
T** operator&() throw();
```

### Return Value

Returns the address of the object pointed to by the `CComPtrBase` object.

## <a name="operator_star"></a> CComPtrBase::operator \*

The \* operator.

```
T& operator*() const throw();
```

### Return Value

Returns the value of [CComPtrBase::p](#p); that is, a pointer to the object referenced by the `CComPtrBase` object.

If debug builds, an assertion error will occur if [CComPtrBase::p](#p) is not equal to NULL.

## <a name="operator_eq_eq"></a> CComPtrBase::operator ==

The equality operator.

```
bool operator== (T* pT) const throw();
```

### Parameters

*pT*<br/>
A pointer to an object.

### Return Value

Returns true if `CComPtrBase` and *pT* point to the same object, false otherwise.

## <a name="operator_ptr"></a> CComPtrBase::operator -&gt;

The pointer-to-member operator.

```
_NoAddRefReleaseOnCComPtr<T>* operator->() const throw();
```

### Return Value

Returns the value of the [CComPtrBase::p](#p) data member variable.

### Remarks

Use this operator to call a method in a class pointed to by the `CComPtrBase` object. In debug builds, an assertion failure will occur if the `CComPtrBase` data member points to NULL.

## <a name="operator_lt"></a> CComPtrBase::operator &lt;

The less-than operator.

```
bool operator<(T* pT) const throw();
```

### Parameters

*pT*<br/>
A pointer to an object.

### Return Value

Returns true if the pointer managed by current object is less than the pointer to which it is being compared.

## <a name="operator_t_star"></a> CComPtrBase::operator T\*

The cast operator.

```
operator T*() const throw();
```

### Remarks

Returns a pointer to the object data type defined in the class template.

## <a name="p"></a> CComPtrBase::p

The pointer data member variable.

```
T* p;
```

### Remarks

This member variable holds the pointer information.

## <a name="queryinterface"></a> CComPtrBase::QueryInterface

Call this method to return a pointer to a specified interface.

```
template <class Q> HRESULT QueryInterface(Q
** pp) const throw();
```

### Parameters

*Q*<br/>
The object type whose interface pointer is required.

*pp*<br/>
Address of output variable that receives the requested interface pointer.

### Return Value

Returns S_OK on success, or E_NOINTERFACE on failure.

### Remarks

This method calls [IUnknown::QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)).

In debug builds, an assertion error will occur if *pp* is not equal to NULL.

## <a name="release"></a> CComPtrBase::Release

Call this method to release the interface.

```cpp
void Release() throw();
```

### Remarks

The interface is released, and [CComPtrBase::p](#p) is set to NULL.

## <a name="setsite"></a> CComPtrBase::SetSite

Call this method to set the site of the `CComPtrBase` object to the `IUnknown` of the parent object.

```
HRESULT SetSite(IUnknown* punkParent) throw();
```

### Parameters

*punkParent*<br/>
A pointer to the `IUnknown` interface of the parent.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This method calls [AtlSetChildSite](composite-control-global-functions.md#atlsetchildsite).

## See also

[Class Overview](../../atl/atl-class-overview.md)
