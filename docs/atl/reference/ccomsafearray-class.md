---
description: "Learn more about: CComSafeArray Class"
title: "CComSafeArray Class"
ms.date: "05/06/2019"
f1_keywords: ["CComSafeArray", "ATLSAFE/ATL::CComSafeArray", "ATLSAFE/ATL::CComSafeArray::CComSafeArray", "ATLSAFE/ATL::CComSafeArray::Add", "ATLSAFE/ATL::CComSafeArray::Attach", "ATLSAFE/ATL::CComSafeArray::CopyFrom", "ATLSAFE/ATL::CComSafeArray::CopyTo", "ATLSAFE/ATL::CComSafeArray::Create", "ATLSAFE/ATL::CComSafeArray::Destroy", "ATLSAFE/ATL::CComSafeArray::Detach", "ATLSAFE/ATL::CComSafeArray::GetAt", "ATLSAFE/ATL::CComSafeArray::GetCount", "ATLSAFE/ATL::CComSafeArray::GetDimensions", "ATLSAFE/ATL::CComSafeArray::GetLowerBound", "ATLSAFE/ATL::CComSafeArray::GetSafeArrayPtr", "ATLSAFE/ATL::CComSafeArray::GetType", "ATLSAFE/ATL::CComSafeArray::GetUpperBound", "ATLSAFE/ATL::CComSafeArray::IsSizable", "ATLSAFE/ATL::CComSafeArray::MultiDimGetAt", "ATLSAFE/ATL::CComSafeArray::MultiDimSetAt", "ATLSAFE/ATL::CComSafeArray::Resize", "ATLSAFE/ATL::CComSafeArray::SetAt", "ATLSAFE/ATL::CComSafeArray::m_psa"]
helpviewer_keywords: ["CComSafeArray class"]
ms.assetid: ee349aef-33db-4c85-bd08-5d86a3c9d53a
---
# CComSafeArray Class

This class is a wrapper for the `SAFEARRAY` structure.

## Syntax

```
template <typename T, VARTYPE _vartype = _ATL_AutomationType<T>::type>
class CComSafeArray
```

#### Parameters

*T*<br/>
The type of data to be stored in the array.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComSafeArray::CComSafeArray](#ccomsafearray)|The constructor.|
|[CComSafeArray::~CComSafeArray](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComSafeArray::Add](#add)|Adds one or more elements, or a `SAFEARRAY` structure, to a `CComSafeArray`.|
|[CComSafeArray::Attach](#attach)|Attaches a `SAFEARRAY` structure to a `CComSafeArray` object.|
|[CComSafeArray::CopyFrom](#copyfrom)|Copies the contents of a `SAFEARRAY` structure into the `CComSafeArray` object.|
|[CComSafeArray::CopyTo](#copyto)|Creates a copy of the `CComSafeArray` object.|
|[CComSafeArray::Create](#create)|Creates a `CComSafeArray` object.|
|[CComSafeArray::Destroy](#destroy)|Destroys a `CComSafeArray` object.|
|[CComSafeArray::Detach](#detach)|Detaches a `SAFEARRAY` from a `CComSafeArray` object.|
|[CComSafeArray::GetAt](#getat)|Retrieves a single element from a single-dimensional array.|
|[CComSafeArray::GetCount](#getcount)|Returns the number of elements in the array.|
|[CComSafeArray::GetDimensions](#getdimensions)|Returns the number of dimensions in the array.|
|[CComSafeArray::GetLowerBound](#getlowerbound)|Returns the lower bound for a given dimension of the array.|
|[CComSafeArray::GetSafeArrayPtr](#getsafearrayptr)|Returns the address of the `m_psa` data member.|
|[CComSafeArray::GetType](#gettype)|Returns the type of data stored in the array.|
|[CComSafeArray::GetUpperBound](#getupperbound)|Returns the upper bound for any dimension of the array.|
|[CComSafeArray::IsSizable](#issizable)|Tests if a `CComSafeArray` object can be resized.|
|[CComSafeArray::MultiDimGetAt](#multidimgetat)|Retrieves a single element from a multidimensional array.|
|[CComSafeArray::MultiDimSetAt](#multidimsetat)|Sets the value of an element in a multidimensional array.|
|[CComSafeArray::Resize](#resize)|Resizes a `CComSafeArray` object.|
|[CComSafeArray::SetAt](#setat)|Sets the value of an element in a single-dimensional array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CComSafeArray::operator LPSAFEARRAY](#operator_lpsafearray)|Casts a value to a `SAFEARRAY` pointer.|
|[CComSafeArray::operator\[\]](ccomsafearray-class.md#operator_at)|Retrieves an element from the array.|
|[CComSafeArray::operator =](#operator_eq)|Assignment operator.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComSafeArray::m_psa](#m_psa)|This data member holds the address of the `SAFEARRAY` structure.|

## Remarks

`CComSafeArray` provides a wrapper for the [SAFEARRAY Data Type](/windows/win32/api/oaidl/ns-oaidl-safearray) class, making it a simple matter to create and manage single- and multidimensional arrays of almost any of the VARIANT-supported types.

`CComSafeArray` simplifies passing arrays between processes, and in addition provides extra security by checking array index values against upper and lower bounds.

The lower bound of a `CComSafeArray` can start at any user-defined value; however, arrays that are accessed through C++ should use a lower bound of 0. Other languages such as Visual Basic may use other bounding values (for example, -10 to 10).

Use [CComSafeArray::Create](#create) to create a `CComSafeArray` object, and [CComSafeArray::Destroy](#destroy) to delete it.

A `CComSafeArray` can contain the following subset of VARIANT data types:

|VARTYPE|Description|
|-------------|-----------------|
|VT_I1|char|
|VT_I2|short|
|VT_I4|int|
|VT_I4|long|
|VT_I8|longlong|
|VT_UI1|byte|
|VT_UI2|ushort|
|VT_UI4|uint|
|VT_UI4|ulong|
|VT_UI8|ulonglong|
|VT_R4|float|
|VT_R8|double|
|VT_DECIMAL|decimal pointer|
|VT_VARIANT|variant pointer|
|VT_CY|Currency data type|

## Requirements

**Header:** atlsafe.h

## Example

[!code-cpp[NVC_ATL_Utilities#75](../../atl/codesnippet/cpp/ccomsafearray-class_1.cpp)]

## <a name="add"></a> CComSafeArray::Add

Adds one or more elements, or a `SAFEARRAY` structure, to a `CComSafeArray`.

```
HRESULT Add(const SAFEARRAY* psaSrc);
HRESULT Add(ULONG ulCount, const T* pT, BOOL bCopy = TRUE);
HRESULT Add(const T& t, BOOL bCopy = TRUE);
```

### Parameters

*psaSrc*<br/>
A pointer to a `SAFEARRAY` object.

*ulCount*<br/>
The number of objects to add to the array.

*pT*<br/>
A pointer to one or more objects to be added to the array.

*t*<br/>
A reference to the object to be added to the array.

*bCopy*<br/>
Indicates whether a copy of the data should be created. The default value is TRUE.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The new objects are appended to the end of the existing `SAFEARRAY` object. Adding an object to a multidimensional `SAFEARRAY` object is not supported. When adding an existing array of objects, both arrays must contain elements of the same type.

The *bCopy* flag is taken into account when elements of type BSTR or VARIANT are added to an array. The default value of TRUE ensures that a new copy is made of the data when the element is added to the array.

## <a name="attach"></a> CComSafeArray::Attach

Attaches a `SAFEARRAY` structure to a `CComSafeArray` object.

```
HRESULT Attach(const SAFEARRAY* psaSrc);
```

### Parameters

*psaSrc*<br/>
A pointer to the `SAFEARRAY` structure.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Attaches a `SAFEARRAY` structure to a `CComSafeArray` object, making the existing `CComSafeArray` methods available.

## <a name="ccomsafearray"></a> CComSafeArray::CComSafeArray

The constructor.

```
CComSafeArray();
CComSafeArray(const SAFEARRAYBOUND& bound);
CComSafeArray(ULONG  ulCount, LONG lLBound = 0);
CComSafeArray(const SAFEARRAYBOUND* pBound, UINT uDims = 1);
CComSafeArray(const CComSafeArray& saSrc);
CComSafeArray(const SAFEARRAY& saSrc);
CComSafeArray(const SAFEARRAY* psaSrc);
```

### Parameters

*bound*<br/>
A `SAFEARRAYBOUND` structure.

*ulCount*<br/>
The number of elements in the array.

*lLBound*<br/>
The lower bound value; that is, the index of the first element in the array.

*pBound*<br/>
A pointer to a `SAFEARRAYBOUND` structure.

*uDims*<br/>
The count of dimensions in the array.

*saSrc*<br/>
A reference to a `SAFEARRAY` structure or `CComSafeArray` object. In either case the constructor uses this reference to make a copy of the array, so the array is not referenced after construction.

*psaSrc*<br/>
A pointer to a `SAFEARRAY` structure. The constructor uses this address to make a copy of the array, so the array is not referenced after construction.

### Remarks

Creates a `CComSafeArray` object.

## <a name="dtor"></a> CComSafeArray::~CComSafeArray

The destructor.

```
~CComSafeArray() throw()
```

### Remarks

Frees all allocated resources.

## <a name="copyfrom"></a> CComSafeArray::CopyFrom

Copies the contents of a `SAFEARRAY` structure into the `CComSafeArray` object.

```
HRESULT CopyFrom(LPSAFEARRAY* ppArray);
```

### Parameters

*ppArray*<br/>
Pointer to the `SAFEARRAY` to copy.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This method copies the contents of a `SAFEARRAY` into the current `CComSafeArray` object. The existing contents of the array are replaced.

## <a name="copyto"></a> CComSafeArray::CopyTo

Creates a copy of the `CComSafeArray` object.

```
HRESULT CopyTo(LPSAFEARRAY* ppArray);
```

### Parameters

*ppArray*<br/>
A pointer to a location in which to create the new `SAFEARRAY`.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This method copies the contents of a `CComSafeArray` object into a `SAFEARRAY` structure.

## <a name="create"></a> CComSafeArray::Create

Creates a `CComSafeArray`.

```
HRESULT Create(const SAFEARRAYBOUND* pBound, UINT uDims = 1);
HRESULT Create(ULONG ulCount = 0, LONG lLBound = 0);
```

### Parameters

*pBound*<br/>
A pointer to a `SAFEARRAYBOUND` object.

*uDims*<br/>
The number of dimensions in the array.

*ulCount*<br/>
The number of elements in the array.

*lLBound*<br/>
The lower bound value; that is, the index of the first element in the array.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

A `CComSafeArray` object can be created from an existing `SAFEARRAYBOUND` structure and the number of dimensions, or by specifying the number of elements in the array and the lower bound. If the array is to be accessed from C++, the lower bound should be 0. Other languages may allow other values for the lower bound (for example, Visual Basic supports arrays with elements with a range such as -10 to 10).

## <a name="destroy"></a> CComSafeArray::Destroy

Destroys a `CComSafeArray` object.

```
HRESULT Destroy();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Destroys an existing `CComSafeArray` object and all of the data it contains.

## <a name="detach"></a> CComSafeArray::Detach

Detaches a `SAFEARRAY` from a `CComSafeArray` object.

```
LPSAFEARRAY Detach();
```

### Return Value

Returns a pointer to a `SAFEARRAY` object.

### Remarks

This method detaches the `SAFEARRAY` object from the `CComSafeArray` object.

## <a name="getat"></a> CComSafeArray::GetAt

Retrieves a single element from a single-dimensional array.

```
T& GetAt(LONG lIndex) const;
```

### Parameters

*lIndex*<br/>
The index number of the value in the array to return.

### Return Value

Returns a reference to the required array element.

## <a name="getcount"></a> CComSafeArray::GetCount

Returns the number of elements in the array.

```
ULONG GetCount(UINT uDim = 0) const;
```

### Parameters

*uDim*<br/>
The array dimension.

### Return Value

Returns the number of elements in the array.

### Remarks

When used with a multidimensional array, this method will return the number of elements in a specific dimension only.

## <a name="getdimensions"></a> CComSafeArray::GetDimensions

Returns the number of dimensions in the array.

```
UINT GetDimensions() const;
```

### Return Value

Returns the number of dimensions in the array.

## <a name="getlowerbound"></a> CComSafeArray::GetLowerBound

Returns the lower bound for a given dimension of the array.

```
LONG GetLowerBound(UINT uDim = 0) const;
```

### Parameters

*uDim*<br/>
The array dimension for which to get the lower bound. If omitted, the default is 0.

### Return Value

Returns the lower bound.

### Remarks

If the lower bound is 0, this indicates a C-like array whose first element is element number 0. In the event of an error, for example, an invalid dimension argument, this method calls `AtlThrow` with an HRESULT describing the error.

## <a name="getsafearrayptr"></a> CComSafeArray::GetSafeArrayPtr

Returns the address of the `m_psa` data member.

```
LPSAFEARRAY* GetSafeArrayPtr() throw();
```

### Return Value

Returns a pointer to the [CComSafeArray::m_psa](#m_psa) data member.

## <a name="gettype"></a> CComSafeArray::GetType

Returns the type of data stored in the array.

```
VARTYPE GetType() const;
```

### Return Value

Returns the type of data stored in the array, which could be any of the following types:

|VARTYPE|Description|
|-------------|-----------------|
|VT_I1|char|
|VT_I2|short|
|VT_I4|int|
|VT_I4|long|
|VT_I8|longlong|
|VT_UI1|byte|
|VT_UI2|ushort|
|VT_UI4|uint|
|VT_UI4|ulong|
|VT_UI8|ulonglong|
|VT_R4|float|
|VT_R8|double|
|VT_DECIMAL|decimal pointer|
|VT_VARIANT|variant pointer|
|VT_CY|Currency data type|

## <a name="getupperbound"></a> CComSafeArray::GetUpperBound

Returns the upper bound for any dimension of the array.

```
LONG GetUpperBound(UINT uDim = 0) const;
```

### Parameters

*uDim*<br/>
The array dimension for which to get the upper bound. If omitted, the default is 0.

### Return Value

Returns the upper bound. This value is inclusive, the maximum valid index for this dimension.

### Remarks

In the event of an error, for example, an invalid dimension argument, this method calls `AtlThrow` with an HRESULT describing the error.

## <a name="issizable"></a> CComSafeArray::IsSizable

Tests if a `CComSafeArray` object can be resized.

```
bool IsSizable() const;
```

### Return Value

Returns TRUE if the `CComSafeArray` can be resized, FALSE if it cannot.

## <a name="m_psa"></a> CComSafeArray::m_psa

Holds the address of the `SAFEARRAY` structure accessed.

```
LPSAFEARRAY m_psa;
```

## <a name="multidimgetat"></a> CComSafeArray::MultiDimGetAt

Retrieves a single element from a multidimensional array.

```
HRESULT MultiDimGetAt(const LONG* alIndex, T& t);
```

### Parameters

*alIndex*<br/>
Pointer to a vector of indexes for each dimension in the array. The leftmost (most significant) dimension is `alIndex[0]`.

*t*<br/>
A reference to the data returned.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="multidimsetat"></a> CComSafeArray::MultiDimSetAt

Sets the value of an element in a multidimensional array.

```
HRESULT MultiDimSetAt(const LONG* alIndex, const T& t);
```

### Parameters

*alIndex*<br/>
Pointer to a vector of indexes for each dimension in the array. The rightmost (least significant) dimension is `alIndex`[0].

*T*<br/>
Specifies the value of the new element.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This is a multidimensional version of [CComSafeArray::SetAt](#setat).

## <a name="operator_at"></a> CComSafeArray::operator \[\]

Retrieves an element from the array.

```
T& operator[](long lindex) const;
T& operator[]int nindex) const;
```

### Parameters

*lIndex, nIndex*<br/>
The index number of the required element in the array.

### Return Value

Returns the appropriate array element.

### Remarks

Performs a similar function to [CComSafeArray::GetAt](#getat), however this operator only works with single-dimensional arrays.

## <a name="operator_eq"></a> CComSafeArray::operator =

Assignment operator.

```
ATL::CComSafeArray<T>& operator=(const ATL::CComSafeArray& saSrc);
ATL::CComSafeArray<T>& operator=(const SAFEARRAY* psaSrc);
```

### Parameters

*saSrc*<br/>
A reference to a `CComSafeArray` object.

*psaSrc*<br/>
A pointer to a `SAFEARRAY` object.

### Return Value

Returns the type of data stored in the array.

## <a name="operator_lpsafearray"></a> CComSafeArray::operator LPSAFEARRAY

Casts a value to a `SAFEARRAY` pointer.

```
operator LPSAFEARRAY() const;
```

### Return Value

Casts a value to a `SAFEARRAY` pointer.

## <a name="resize"></a> CComSafeArray::Resize

Resizes a `CComSafeArray` object.

```
HRESULT Resize(const SAFEARRAYBOUND* pBound);
HRESULT Resize(ULONG ulCount, LONG lLBound = 0);
```

### Parameters

*pBound*<br/>
A pointer to a `SAFEARRAYBOUND` structure that contains information on the number of elements and the lower bound of an array.

*ulCount*<br/>
The requested number of objects in the resized array.

*lLBound*<br/>
The lower bound.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This method only resizes the rightmost dimension. It will not resize arrays that return `IsResizable` as FALSE.

## <a name="setat"></a> CComSafeArray::SetAt

Sets the value of an element in a single-dimensional array.

```
HRESULT SetAt(LONG lIndex, const T& t, BOOL bCopy = TRUE);
```

### Parameters

*lIndex*<br/>
The index number of the array element to set.

*t*<br/>
The new value of the specified element.

*bCopy*<br/>
Indicates whether a copy of the data should be created. The default value is TRUE.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The *bCopy* flag is taken into account when elements of type BSTR or VARIANT are added to an array. The default value of TRUE ensures that a new copy is made of the data when the element is added to the array.

## See also

[SAFEARRAY Data Type](/windows/win32/api/oaidl/ns-oaidl-safearray)<br/>
[CComSafeArray::Create](#create)<br/>
[CComSafeArray::Destroy](#destroy)<br/>
[Class Overview](../../atl/atl-class-overview.md)
