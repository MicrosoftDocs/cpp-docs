---
description: "Learn more about: COleSafeArray Class"
title: "COleSafeArray Class"
ms.date: "08/29/2019"
f1_keywords: ["COleSafeArray", "AFXDISP/COleSafeArray", "AFXDISP/COleSafeArray::COleSafeArray", "AFXDISP/COleSafeArray::AccessData", "AFXDISP/COleSafeArray::AllocData", "AFXDISP/COleSafeArray::AllocDescriptor", "AFXDISP/COleSafeArray::Attach", "AFXDISP/COleSafeArray::Clear", "AFXDISP/COleSafeArray::Copy", "AFXDISP/COleSafeArray::Create", "AFXDISP/COleSafeArray::CreateOneDim", "AFXDISP/COleSafeArray::Destroy", "AFXDISP/COleSafeArray::DestroyData", "AFXDISP/COleSafeArray::DestroyDescriptor", "AFXDISP/COleSafeArray::Detach", "AFXDISP/COleSafeArray::GetByteArray", "AFXDISP/COleSafeArray::GetDim", "AFXDISP/COleSafeArray::GetElement", "AFXDISP/COleSafeArray::GetElemSize", "AFXDISP/COleSafeArray::GetLBound", "AFXDISP/COleSafeArray::GetOneDimSize", "AFXDISP/COleSafeArray::GetUBound", "AFXDISP/COleSafeArray::Lock", "AFXDISP/COleSafeArray::PtrOfIndex", "AFXDISP/COleSafeArray::PutElement", "AFXDISP/COleSafeArray::Redim", "AFXDISP/COleSafeArray::ResizeOneDim", "AFXDISP/COleSafeArray::UnaccessData", "AFXDISP/COleSafeArray::Unlock"]
helpviewer_keywords: ["COleSafeArray [MFC], COleSafeArray", "COleSafeArray [MFC], AccessData", "COleSafeArray [MFC], AllocData", "COleSafeArray [MFC], AllocDescriptor", "COleSafeArray [MFC], Attach", "COleSafeArray [MFC], Clear", "COleSafeArray [MFC], Copy", "COleSafeArray [MFC], Create", "COleSafeArray [MFC], CreateOneDim", "COleSafeArray [MFC], Destroy", "COleSafeArray [MFC], DestroyData", "COleSafeArray [MFC], DestroyDescriptor", "COleSafeArray [MFC], Detach", "COleSafeArray [MFC], GetByteArray", "COleSafeArray [MFC], GetDim", "COleSafeArray [MFC], GetElement", "COleSafeArray [MFC], GetElemSize", "COleSafeArray [MFC], GetLBound", "COleSafeArray [MFC], GetOneDimSize", "COleSafeArray [MFC], GetUBound", "COleSafeArray [MFC], Lock", "COleSafeArray [MFC], PtrOfIndex", "COleSafeArray [MFC], PutElement", "COleSafeArray [MFC], Redim", "COleSafeArray [MFC], ResizeOneDim", "COleSafeArray [MFC], UnaccessData", "COleSafeArray [MFC], Unlock"]
ms.assetid: f45a5224-5f48-40ec-9ddd-287ef9740150
---
# COleSafeArray Class

A class for working with arrays of arbitrary type and dimension.

## Syntax

```
class COleSafeArray : public tagVARIANT
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleSafeArray::COleSafeArray](#colesafearray)|Constructs a `COleSafeArray` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleSafeArray::AccessData](#accessdata)|Retrieves a pointer to the array data.|
|[COleSafeArray::AllocData](#allocdata)|Allocates memory for the array.|
|[COleSafeArray::AllocDescriptor](#allocdescriptor)|Allocates memory for the safe array descriptor.|
|[COleSafeArray::Attach](#attach)|Gives control of the existing `VARIANT` array to the `COleSafeArray` object.|
|[COleSafeArray::Clear](#clear)|Frees all data in the underlying `VARIANT`.|
|[COleSafeArray::Copy](#copy)|Creates a copy of an existing array.|
|[COleSafeArray::Create](#create)|Creates a safe array.|
|[COleSafeArray::CreateOneDim](#createonedim)|Creates a one-dimensional `COleSafeArray` object.|
|[COleSafeArray::Destroy](#destroy)|Destroys an existing array.|
|[COleSafeArray::DestroyData](#destroydata)|Destroys data in a safe array.|
|[COleSafeArray::DestroyDescriptor](#destroydescriptor)|Destroys a descriptor of a safe array.|
|[COleSafeArray::Detach](#detach)|Detaches the VARIANT array from the `COleSafeArray` object (so that the data will not be freed).|
|[COleSafeArray::GetByteArray](#getbytearray)|Copies the contents of the safe array into a [CByteArray](../../mfc/reference/cbytearray-class.md).|
|[COleSafeArray::GetDim](#getdim)|Returns the number of dimensions in the array.|
|[COleSafeArray::GetElement](#getelement)|Retrieves a single element of the safe array.|
|[COleSafeArray::GetElemSize](#getelemsize)|Returns the size, in bytes, of one element in a safe array.|
|[COleSafeArray::GetLBound](#getlbound)|Returns the lower bound for any dimension of a safe array.|
|[COleSafeArray::GetOneDimSize](#getonedimsize)|Returns the number of elements in the one-dimensional `COleSafeArray` object.|
|[COleSafeArray::GetUBound](#getubound)|Returns the upper bound for any dimension of a safe array.|
|[COleSafeArray::Lock](#lock)|Increments the lock count of an array and places a pointer to the array data in the array descriptor.|
|[COleSafeArray::PtrOfIndex](#ptrofindex)|Returns a pointer to the indexed element.|
|[COleSafeArray::PutElement](#putelement)|Assigns a single element into the array.|
|[COleSafeArray::Redim](#redim)|Changes the least significant (rightmost) bound of a safe array.|
|[COleSafeArray::ResizeOneDim](#resizeonedim)|Changes the number of elements in a one-dimensional `COleSafeArray` object.|
|[COleSafeArray::UnaccessData](#unaccessdata)|Decrements the lock count of an array and invalidates the pointer retrieved by `AccessData`.|
|[COleSafeArray::Unlock](#unlock)|Decrements the lock count of an array so it can be freed or resized.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[COleSafeArray::operator LPCVARIANT](#operator_lpcvariant)|Accesses the underlying `VARIANT` structure of the `COleSafeArray` object.|
|[COleSafeArray::operator LPVARIANT](#operator_lpvariant)|Accesses the underlying `VARIANT` structure of the `COleSafeArray` object.|
|[COleSafeArray::operator =](#operator_eq)|Copies values into a `COleSafeArray` object (`SAFEARRAY`, `VARIANT`, `COleVariant`, or `COleSafeArray` array).|
|[COleSafeArray::operator ==](#operator_eq_eq)|Compares two variant arrays (`SAFEARRAY`, `VARIANT`, `COleVariant`, or `COleSafeArray` arrays).|
|[COleSafeArray::operator &lt;&lt;](#operator_lt_lt)|Outputs the contents of a `COleSafeArray` object to the dump context.|

## Remarks

`COleSafeArray` derives from the OLE `VARIANT` structure. The OLE `SAFEARRAY` member functions are available through `COleSafeArray`, as well as a set of member functions specifically designed for one-dimensional arrays of bytes.

## Inheritance Hierarchy

`tagVARIANT`

`COleSafeArray`

## Requirements

**Header:** afxdisp.h

## <a name="accessdata"></a> COleSafeArray::AccessData

Retrieves a pointer to the array data.

```cpp
void AccessData(void** ppvData);
```

### Parameters

*ppvData*<br/>
A pointer to a pointer to the array data.

### Remarks

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#26](../../mfc/codesnippet/cpp/colesafearray-class_1.cpp)]

## <a name="allocdata"></a> COleSafeArray::AllocData

Allocates memory for a safe array.

```cpp
void AllocData();
```

### Remarks

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

## <a name="allocdescriptor"></a> COleSafeArray::AllocDescriptor

Allocates memory for the descriptor of a safe array.

```cpp
void AllocDescriptor(DWORD dwDims);
```

### Parameters

*dwDims*<br/>
Number of dimensions in the safe array.

### Remarks

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

## <a name="attach"></a> COleSafeArray::Attach

Gives control of the data in an existing `VARIANT` array to the `COleSafeArray` object.

```cpp
void Attach(VARIANT& varSrc);
```

### Parameters

*varSrc*<br/>
A `VARIANT` object. The *varSrc* parameter must have the VARTYPE [VT_ARRAY](/windows/win32/api/wtypes/ne-wtypes-varenum).

### Remarks

The source `VARIANT`'s type is set to VT_EMPTY. This function clears the current array data, if any.

### Example

  See the example for [COleSafeArray::AccessData](#accessdata).

## <a name="clear"></a> COleSafeArray::Clear

Clears the safe array.

```cpp
void Clear();
```

### Remarks

The function clears a safe array by setting the `VARTYPE` of the object to VT_EMPTY. The current contents are released and the array is freed.

## <a name="colesafearray"></a> COleSafeArray::COleSafeArray

Constructs a `COleSafeArray` object.

```
COleSafeArray();

COleSafeArray(
    const SAFEARRAY& saSrc,
    VARTYPE vtSrc);

COleSafeArray(
    LPCSAFEARRAY pSrc,
    VARTYPE vtSrc);

COleSafeArray(const COleSafeArray& saSrc);
COleSafeArray(const VARIANT& varSrc);
COleSafeArray(LPCVARIANT pSrc);
COleSafeArray(const COleVariant& varSrc);
```

### Parameters

*saSrc*<br/>
An existing `COleSafeArray` object or `SAFEARRAY` to be copied into the new `COleSafeArray` object.

*vtSrc*<br/>
The VARTYPE of the new `COleSafeArray` object.

*psaSrc*<br/>
A pointer to a `SAFEARRAY` to be copied into the new `COleSafeArray` object.

*varSrc*<br/>
An existing `VARIANT` or `COleVariant` object to be copied into the new `COleSafeArray` object.

*pSrc*<br/>
A pointer to a `VARIANT` object to be copied into the new `COleSafeArray` object.

### Remarks

All of these constructors create new `COleSafeArray` objects. If there is no parameter, an empty `COleSafeArray` object is created (VT_EMPTY). If the `COleSafeArray` is copied from another array whose VARTYPE is known implicitly (a `COleSafeArray`, `COleVariant`, or `VARIANT`), the VARTYPE of the source array is retained and need not be specified. If the `COleSafeArray` is copied from another array whose VARTYPE is not known (`SAFEARRAY`), the VARTYPE must be specified in the *vtSrc* parameter.

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

## <a name="copy"></a> COleSafeArray::Copy

Creates a copy of an existing safe array.

```cpp
void Copy(LPSAFEARRAY* ppsa);
```

### Parameters

*ppsa*<br/>
Pointer to a location in which to return the new array descriptor.

### Remarks

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

## <a name="create"></a> COleSafeArray::Create

Allocates and initializes the data for the array.

```cpp
void Create(
    VARTYPE vtSrc,
    DWORD dwDims,
    DWORD* rgElements);

void Create(
    VARTYPE vtSrc,
    DWORD dwDims,
    SAFEARRAYBOUND* rgsabounds);
```

### Parameters

*vtSrc*<br/>
The base type of the array (that is, the VARTYPE of each element of the array). The VARTYPE is restricted to a subset of the variant types. Neither the VT_ARRAY nor the VT_BYREF flag can be set. VT_EMPTY and VT_NULL are not valid base types for the array. All other types are legal.

*dwDims*<br/>
Number of dimensions in the array. This can be changed after the array is created with [Redim](#redim).

*rgElements*<br/>
Pointer to an array of the number of elements for each dimension in the array.

*rgsabounds*<br/>
Pointer to a vector of bounds (one for each dimension) to allocate for the array.

### Remarks

This function will clear the current array data if necessary. On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

## <a name="createonedim"></a> COleSafeArray::CreateOneDim

Creates a new one-dimensional `COleSafeArray` object.

```cpp
void CreateOneDim(
    VARTYPE vtSrc,
    DWORD dwElements,
    const void* pvSrcData = NULL,
    long nLBound = 0);
```

### Parameters

*vtSrc*<br/>
The base type of the array (that is, the VARTYPE of each element of the array).

*dwElements*<br/>
Number of elements in the array. This can be changed after the array is created with [ResizeOneDim](#resizeonedim).

*pvSrcData*<br/>
Pointer to the data to copy into the array.

*nLBound*<br/>
The lower bound of the array.

### Remarks

The function allocates and initializes the data for the array, copying the specified data if the pointer *pvSrcData* is not NULL.

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#28](../../mfc/codesnippet/cpp/colesafearray-class_3.cpp)]

## <a name="destroy"></a> COleSafeArray::Destroy

Destroys an existing array descriptor and all the data in the array.

```cpp
void Destroy();
```

### Remarks

If objects are stored in the array, each object is released. On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

## <a name="destroydata"></a> COleSafeArray::DestroyData

Destroys all the data in a safe array.

```cpp
void DestroyData();
```

### Remarks

If objects are stored in the array, each object is released. On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

## <a name="destroydescriptor"></a> COleSafeArray::DestroyDescriptor

Destroys a descriptor of a safe array.

```cpp
void DestroyDescriptor();
```

### Remarks

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

## <a name="detach"></a> COleSafeArray::Detach

Detaches the `VARIANT` data from the `COleSafeArray` object.

```
VARIANT Detach();
```

### Return Value

The underlying `VARIANT` value in the `COleSafeArray` object.

### Remarks

The function detaches the data in a safe array by setting the VARTYPE of the object to VT_EMPTY. It is the caller's responsibility to free the array by calling the Windows function [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear).

On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).

### Example

  See the example for [COleSafeArray::PutElement](#putelement).

## <a name="getbytearray"></a> COleSafeArray::GetByteArray

Copies the contents of the safe array into a `CByteArray`.

```cpp
void GetByteArray(CByteArray& bytes);
```

### Parameters

*bytes*<br/>
A reference to a [CByteArray](../../mfc/reference/cbytearray-class.md) object.

## <a name="getdim"></a> COleSafeArray::GetDim

Returns the number of dimensions in the `COleSafeArray` object.

```
DWORD GetDim();
```

### Return Value

The number of dimensions in the safe array.

### Example

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

## <a name="getelement"></a> COleSafeArray::GetElement

Retrieves a single element of the safe array.

```cpp
void GetElement(
    long* rgIndices,
    void* pvData);
```

### Parameters

*rgIndices*<br/>
Pointer to an array of indexes for each dimension of the array.

*pvData*<br/>
Pointer to the location to place the element of the array.

### Remarks

This function automatically calls the windows functions `SafeArrayLock` and `SafeArrayUnlock` before and after retrieving the element. If the data element is a string, object, or variant, the function copies the element in the correct way. The parameter *pvData* should point to a large enough buffer to contain the element.

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#29](../../mfc/codesnippet/cpp/colesafearray-class_4.cpp)]

## <a name="getelemsize"></a> COleSafeArray::GetElemSize

Retrieves the size of an element in a `COleSafeArray` object.

```
DWORD GetElemSize();
```

### Return Value

The size, in bytes, of the elements of a safe array.

## <a name="getlbound"></a> COleSafeArray::GetLBound

Returns the lower bound for any dimension of a `COleSafeArray` object.

```cpp
void GetLBound(
    DWORD dwDim,
    long* pLBound);
```

### Parameters

*dwDim*<br/>
The array dimension for which to get the lower bound.

*pLBound*<br/>
Pointer to the location to return the lower bound.

### Remarks

On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#30](../../mfc/codesnippet/cpp/colesafearray-class_5.cpp)]

## <a name="getonedimsize"></a> COleSafeArray::GetOneDimSize

Returns the number of elements in the one-dimensional `COleSafeArray` object.

```
DWORD GetOneDimSize();
```

### Return Value

The number of elements in the one-dimensional safe array.

### Example

  See the example for [COleSafeArray::CreateOneDim](#createonedim).

## <a name="getubound"></a> COleSafeArray::GetUBound

Returns the upper bound for any dimension of a safe array.

```cpp
void GetUBound(
    DWORD dwDim,
    long* pUBound);
```

### Parameters

*dwDim*<br/>
The array dimension for which to get the upper bound.

*pUBound*<br/>
Pointer to the location to return the upper bound.

### Remarks

On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#31](../../mfc/codesnippet/cpp/colesafearray-class_6.cpp)]

## <a name="lock"></a> COleSafeArray::Lock

Increments the lock count of an array and place a pointer to the array data in the array descriptor.

```cpp
void Lock();
```

### Remarks

On error, it throws a [COleException](../../mfc/reference/coleexception-class.md).

The pointer in the array descriptor is valid until `Unlock` is called. Calls to `Lock` can be nested; an equal number of calls to `Unlock` are required.

An array cannot be deleted while it is locked.

## <a name="operator_lpcvariant"></a> COleSafeArray::operator LPCVARIANT

Call this casting operator to access the underlying `VARIANT` structure for this `COleSafeArray` object.

```
operator LPCVARIANT() const;
```

## <a name="operator_lpvariant"></a> COleSafeArray::operator LPVARIANT

Call this casting operator to access the underlying `VARIANT` structure for this `COleSafeArray` object.

```
operator LPVARIANT();
```

### Remarks

Note that changing the value in the `VARIANT` structure accessed by the pointer returned by this function will change the value of this `COleSafeArray` object.

## <a name="operator_eq"></a> COleSafeArray::operator =

These overloaded assignment operators copy the source value into this `COleSafeArray` object.

```
COleSafeArray& operator=(const COleSafeArray& saSrc);
COleSafeArray& operator=(const VARIANT& varSrc);
COleSafeArray& operator=(LPCVARIANT pSrc);
COleSafeArray& operator=(const COleVariant& varSrc);
```

### Remarks

A brief description of each operator follows:

- **operator =(** *saSrc* **)** Copies an existing `COleSafeArray` object into this object.

- **operator =(** *varSrc* **)** Copies an existing `VARIANT` or `COleVariant` array into this object.

- **operator =(** *pSrc* **)** Copies the `VARIANT` array object accessed by *pSrc* into this object.

## <a name="operator_eq_eq"></a> COleSafeArray::operator ==

This operator compares two arrays (`SAFEARRAY`, `VARIANT`, `COleVariant`, or `COleSafeArray` arrays) and returns nonzero if they are equal; otherwise 0.

```
BOOL operator==(const SAFEARRAY& saSrc) const;  BOOL operator==(LPCSAFEARRAY pSrc) const;

BOOL operator==(const COleSafeArray& saSrc) const;  BOOL operator==(const VARIANT& varSrc) const;

BOOL operator==(LPCVARIANT pSrc) const;  BOOL operator==(const COleVariant& varSrc) const;
```

### Remarks

Two arrays are equal if they have an equal number of dimensions, equal size in each dimension, and equal element values.

## <a name="operator_lt_lt"></a> COleSafeArray::operator &lt;&lt;

The `COleSafeArray` insertion (<<) operator supports diagnostic dumping and storing of a `COleSafeArray` object to an archive.

```
CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,
    COleSafeArray& saSrc);
```

## <a name="ptrofindex"></a> COleSafeArray::PtrOfIndex

Returns a pointer to the element specified by the index values.

```cpp
void PtrOfIndex(
    long* rgIndices,
    void** ppvData);
```

### Parameters

*rgIndices*<br/>
An array of index values that identify an element of the array. All indexes for the element must be specified.

*ppvData*<br/>
On return, pointer to the element identified by the values in *rgIndices*.

## <a name="putelement"></a> COleSafeArray::PutElement

Assigns a single element into the array.

```cpp
void PutElement(
    long* rgIndices,
    void* pvData);
```

### Parameters

*rgIndices*<br/>
Pointer to an array of indexes for each dimension of the array.

*pvData*<br/>
Pointer to the data to assign to the array. VT_DISPATCH, VT_UNKNOWN, and VT_BSTR variant types are pointers and do not require another level of indirection.

### Remarks

This function automatically calls the Windows functions [SafeArrayLock](/windows/win32/api/oleauto/nf-oleauto-safearraylock) and [SafeArrayUnlock](/windows/win32/api/oleauto/nf-oleauto-safearrayunlock) before and after assigning the element. If the data element is a string, object, or variant, the function copies it correctly, and if the existing element is a string, object, or variant, it is cleared correctly.

Note that you can have multiple locks on an array, so you can put elements into an array while the array is locked by other operations.

On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).

### Example

[!code-cpp[NVC_MFCOleContainer#32](../../mfc/codesnippet/cpp/colesafearray-class_7.cpp)]

## <a name="redim"></a> COleSafeArray::Redim

Changes the least significant (rightmost) bound of a safe array.

```cpp
void Redim(SAFEARRAYBOUND* psaboundNew);
```

### Parameters

*psaboundNew*<br/>
Pointer to a new safe array bound structure containing the new array bound. Only the least significant dimension of an array may be changed.

### Remarks

On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).

## <a name="resizeonedim"></a> COleSafeArray::ResizeOneDim

Changes the number of elements in a one-dimensional `COleSafeArray` object.

```cpp
void ResizeOneDim(DWORD dwElements);
```

### Parameters

*dwElements*<br/>
Number of elements in the one-dimensional safe array.

### Remarks

On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).

### Example

  See the example for [COleSafeArray::CreateOneDim](#createonedim).

## <a name="unaccessdata"></a> COleSafeArray::UnaccessData

Decrements the lock count of an array and invalidates the pointer retrieved by `AccessData`.

```cpp
void UnaccessData();
```

### Remarks

On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).

### Example

  See the example for [COleSafeArray::AccessData](#accessdata).

## <a name="unlock"></a> COleSafeArray::Unlock

Decrements the lock count of an array so it can be freed or resized.

```cpp
void Unlock();
```

### Remarks

This function is called after access to the data in an array is finished. On error, it throws a [COleException](../../mfc/reference/coleexception-class.md).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleVariant Class](../../mfc/reference/colevariant-class.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)<br/>
[CDatabase Class](../../mfc/reference/cdatabase-class.md)<br/>
