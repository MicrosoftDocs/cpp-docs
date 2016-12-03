---
title: "COleSafeArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleSafeArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleSafeArray class"
  - "arrays [C++], safe"
  - "safe arrays"
  - "ODBC, safe arrays"
ms.assetid: f45a5224-5f48-40ec-9ddd-287ef9740150
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[COleSafeArray::COleSafeArray](#colesafearray__colesafearray)|Constructs a `COleSafeArray` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleSafeArray::AccessData](#colesafearray__accessdata)|Retrieves a pointer to the array data.|  
|[COleSafeArray::AllocData](#colesafearray__allocdata)|Allocates memory for the array.|  
|[COleSafeArray::AllocDescriptor](#colesafearray__allocdescriptor)|Allocates memory for the safe array descriptor.|  
|[COleSafeArray::Attach](#colesafearray__attach)|Gives control of the existing **VARIANT** array to the `COleSafeArray` object.|  
|[COleSafeArray::Clear](#colesafearray__clear)|Frees all data in the underlying **VARIANT**.|  
|[COleSafeArray::Copy](#colesafearray__copy)|Creates a copy of an existing array.|  
|[COleSafeArray::Create](#colesafearray__create)|Creates a safe array.|  
|[COleSafeArray::CreateOneDim](#colesafearray__createonedim)|Creates a one-dimensional `COleSafeArray` object.|  
|[COleSafeArray::Destroy](#colesafearray__destroy)|Destroys an existing array.|  
|[COleSafeArray::DestroyData](#colesafearray__destroydata)|Destroys data in a safe array.|  
|[COleSafeArray::DestroyDescriptor](#colesafearray__destroydescriptor)|Destroys a descriptor of a safe array.|  
|[COleSafeArray::Detach](#colesafearray__detach)|Detaches the **VARIANT** array from the `COleSafeArray` object (so that the data will not be freed).|  
|[COleSafeArray::GetByteArray](#colesafearray__getbytearray)|Copies the contents of the safe array into a [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[COleSafeArray::GetDim](#colesafearray__getdim)|Returns the number of dimensions in the array.|  
|[COleSafeArray::GetElement](#colesafearray__getelement)|Retrieves a single element of the safe array.|  
|[COleSafeArray::GetElemSize](#colesafearray__getelemsize)|Returns the size, in bytes, of one element in a safe array.|  
|[COleSafeArray::GetLBound](#colesafearray__getlbound)|Returns the lower bound for any dimension of a safe array.|  
|[COleSafeArray::GetOneDimSize](#colesafearray__getonedimsize)|Returns the number of elements in the one-dimensional `COleSafeArray` object.|  
|[COleSafeArray::GetUBound](#colesafearray__getubound)|Returns the upper bound for any dimension of a safe array.|  
|[COleSafeArray::Lock](#colesafearray__lock)|Increments the lock count of an array and places a pointer to the array data in the array descriptor.|  
|[COleSafeArray::PtrOfIndex](#colesafearray__ptrofindex)|Returns a pointer to the indexed element.|  
|[COleSafeArray::PutElement](#colesafearray__putelement)|Assigns a single element into the array.|  
|[COleSafeArray::Redim](#colesafearray__redim)|Changes the least significant (rightmost) bound of a safe array.|  
|[COleSafeArray::ResizeOneDim](#colesafearray__resizeonedim)|Changes the number of elements in a one-dimensional `COleSafeArray` object.|  
|[COleSafeArray::UnaccessData](#colesafearray__unaccessdata)|Decrements the lock count of an array and invalidates the pointer retrieved by `AccessData`.|  
|[COleSafeArray::Unlock](#colesafearray__unlock)|Decrements the lock count of an array so it can be freed or resized.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[COleSafeArray::operator LPCVARIANT](#colesafearray__operator_lpcvariant)|Accesses the underlying **VARIANT** structure of the `COleSafeArray` object.|  
|[COleSafeArray::operator LPVARIANT](#colesafearray__operator_lpvariant)|Accesses the underlying **VARIANT** structure of the `COleSafeArray` object.|  
|[COleSafeArray::operator =](#colesafearray__operator__eq)|Copies values into a `COleSafeArray` object ( **SAFEARRAY**, **VARIANT**, `COleVariant`, or `COleSafeArray` array).|  
|[COleSafeArray::operator ==](#colesafearray__operator__eq_eq)|Compares two variant arrays ( **SAFEARRAY**, **VARIANT**, `COleVariant`, or `COleSafeArray` arrays).|  
|[COleSafeArray::operator &lt;&lt;](#colesafearray__operator__lt__lt_)|Outputs the contents of a `COleSafeArray` object to the dump context.|  
  
## Remarks  
 `COleSafeArray` derives from the OLE **VARIANT** structure. The OLE **SAFEARRAY** member functions are available through `COleSafeArray`, as well as a set of member functions specifically designed for one-dimensional arrays of bytes.  
  
## Inheritance Hierarchy  
 `tagVARIANT`  
  
 `COleSafeArray`  
  
## Requirements  
 **Header:** afxdisp.h  
  
##  <a name="colesafearray__accessdata"></a>  COleSafeArray::AccessData  
 Retrieves a pointer to the array data.  
  
```  
void AccessData(void** ppvData);
```  
  
### Parameters  
 `ppvData`  
 A pointer to a pointer to the array data.  
  
### Remarks  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#26](../../mfc/codesnippet/cpp/colesafearray-class_1.cpp)]  
  
##  <a name="colesafearray__allocdata"></a>  COleSafeArray::AllocData  
 Allocates memory for a safe array.  
  
```  
void AllocData();
```  
  
### Remarks  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__allocdescriptor"></a>  COleSafeArray::AllocDescriptor  
 Allocates memory for the descriptor of a safe array.  
  
```  
void AllocDescriptor(DWORD dwDims);
```  
  
### Parameters  
 `dwDims`  
 Number of dimensions in the safe array.  
  
### Remarks  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__attach"></a>  COleSafeArray::Attach  
 Gives control of the data in an existing **VARIANT** array to the `COleSafeArray` object.  
  
```  
void Attach(VARIANT& varSrc);
```  
  
### Parameters  
 *varSrc*  
 A **VARIANT** object. The *varSrc* parameter must have the [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4)**VT_ARRAY**.  
  
### Remarks  
 The source **VARIANT**'s type is set to `VT_EMPTY`. This function clears the current array data, if any.  
  
### Example  
  See the example for [COleSafeArray::AccessData](#colesafearray__accessdata).  
  
##  <a name="colesafearray__clear"></a>  COleSafeArray::Clear  
 Clears the safe array.  
  
```  
void Clear();
```  
  
### Remarks  
 The function clears a safe array by setting the `VARTYPE` of the object to `VT_EMPTY`. The current contents are released and the array is freed.  
  
##  <a name="colesafearray__colesafearray"></a>  COleSafeArray::COleSafeArray  
 Constructs a `COleSafeArray` object.  
  
```  
COleSafeArray();

 
COleSafeArray(
    const SAFEARRAY& saSrc,
    VARTYPE vtSrc);

 
COleSafeArray(
    LPCSAFEARRAY pSrc,
    VARTYPE vtSrc);

 
COleSafeArray(
    const COleSafeArray& saSrc);

 
COleSafeArray(
    const VARIANT& varSrc);

 
COleSafeArray(
    LPCVARIANT pSrc);

 
COleSafeArray(
    const COleVariant& varSrc);
```  
  
### Parameters  
 `saSrc`  
 An existing `COleSafeArray` object or **SAFEARRAY** to be copied into the new `COleSafeArray` object.  
  
 `vtSrc`  
 The **VARTYPE** of the new `COleSafeArray` object.  
  
 `psaSrc`  
 A pointer to a **SAFEARRAY** to be copied into the new `COleSafeArray` object.  
  
 *varSrc*  
 An existing **VARIANT** or `COleVariant` object to be copied into the new `COleSafeArray` object.  
  
 `pSrc`  
 A pointer to a **VARIANT** object to be copied into the new `COleSafeArray` object.  
  
### Remarks  
 All of these constructors create new `COleSafeArray` objects. If there is no parameter, an empty `COleSafeArray` object is created ( `VT_EMPTY`). If the `COleSafeArray` is copied from another array whose [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) is known implicitly (a `COleSafeArray`, `COleVariant`, or **VARIANT**), the **VARTYPE** of the source array is retained and need not be specified. If the `COleSafeArray` is copied from another array whose **VARTYPE** is not known ( **SAFEARRAY**), the **VARTYPE** must be specified in the `vtSrc` parameter.  
  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__copy"></a>  COleSafeArray::Copy  
 Creates a copy of an existing safe array.  
  
```  
void Copy(LPSAFEARRAY* ppsa);
```  
  
### Parameters  
 *ppsa*  
 Pointer to a location in which to return the new array descriptor.  
  
### Remarks  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__create"></a>  COleSafeArray::Create  
 Allocates and initializes the data for the array.  
  
```  
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
 `vtSrc`  
 The base type of the array (that is, the **VARTYPE** of each element of the array). The **VARTYPE** is restricted to a subset of the variant types. Neither the **VT_ARRAY** nor the **VT_BYREF** flag can be set. `VT_EMPTY` and **VT_NULL** are not valid base types for the array. All other types are legal.  
  
 `dwDims`  
 Number of dimensions in the array. This can be changed after the array is created with [Redim](#colesafearray__redim).  
  
 *rgElements*  
 Pointer to an array of the number of elements for each dimension in the array.  
  
 *rgsabounds*  
 Pointer to a vector of bounds (one for each dimension) to allocate for the array.  
  
### Remarks  
 This function will clear the current array data if necessary. On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]  
  
##  <a name="colesafearray__createonedim"></a>  COleSafeArray::CreateOneDim  
 Creates a new one-dimensional `COleSafeArray` object.  
  
```  
void CreateOneDim(
    VARTYPE vtSrc,  
    DWORD dwElements,  
    const void* pvSrcData = NULL,  
    long nLBound = 0);
```  
  
### Parameters  
 `vtSrc`  
 The base type of the array (that is, the **VARTYPE** of each element of the array).  
  
 `dwElements`  
 Number of elements in the array. This can be changed after the array is created with [ResizeOneDim](#colesafearray__resizeonedim).  
  
 `pvSrcData`  
 Pointer to the data to copy into the array.  
  
 *nLBound*  
 The lower bound of the array.  
  
### Remarks  
 The function allocates and initializes the data for the array, copying the specified data if the pointer `pvSrcData` is not **NULL**.  
  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#28](../../mfc/codesnippet/cpp/colesafearray-class_3.cpp)]  
  
##  <a name="colesafearray__destroy"></a>  COleSafeArray::Destroy  
 Destroys an existing array descriptor and all the data in the array.  
  
```  
void Destroy();
```  
  
### Remarks  
 If objects are stored in the array, each object is released. On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__destroydata"></a>  COleSafeArray::DestroyData  
 Destroys all the data in a safe array.  
  
```  
void DestroyData();
```  
  
### Remarks  
 If objects are stored in the array, each object is released. On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__destroydescriptor"></a>  COleSafeArray::DestroyDescriptor  
 Destroys a descriptor of a safe array.  
  
```  
void DestroyDescriptor();
```  
  
### Remarks  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__detach"></a>  COleSafeArray::Detach  
 Detaches the **VARIANT** data from the `COleSafeArray` object.  
  
```  
VARIANT Detach();
```  
  
### Return Value  
 The underlying **VARIANT** value in the `COleSafeArray` object.  
  
### Remarks  
 The function detaches the data in a safe array by setting the [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) of the object to `VT_EMPTY`. It is the caller's responsibility to free the array by calling the Windows function [VariantClear](http://msdn.microsoft.com/en-us/28741d81-8404-4f85-95d3-5c209ec13835).  
  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
  See the example for [COleSafeArray::PutElement](#colesafearray__putelement).  
  
##  <a name="colesafearray__getbytearray"></a>  COleSafeArray::GetByteArray  
 Copies the contents of the safe array into a `CByteArray`.  
  
```  
void GetByteArray(CByteArray& bytes);
```  
  
### Parameters  
 `bytes`  
 A reference to a [CByteArray](../../mfc/reference/cbytearray-class.md) object.  
  
##  <a name="colesafearray__getdim"></a>  COleSafeArray::GetDim  
 Returns the number of dimensions in the `COleSafeArray` object.  
  
```  
DWORD GetDim();
```  
  
### Return Value  
 The number of dimensions in the safe array.  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]  
  
##  <a name="colesafearray__getelement"></a>  COleSafeArray::GetElement  
 Retrieves a single element of the safe array.  
  
```  
void GetElement(
    long* rgIndices,  
    void* pvData);
```  
  
### Parameters  
 `rgIndices`  
 Pointer to an array of indexes for each dimension of the array.  
  
 `pvData`  
 Pointer to the location to place the element of the array.  
  
### Remarks  
 This function automatically calls the windows functions `SafeArrayLock` and `SafeArrayUnlock` before and after retrieving the element. If the data element is a string, object, or variant, the function copies the element in the correct way. The parameter `pvData` should point to a large enough buffer to contain the element.  
  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#29](../../mfc/codesnippet/cpp/colesafearray-class_4.cpp)]  
  
##  <a name="colesafearray__getelemsize"></a>  COleSafeArray::GetElemSize  
 Retrieves the size of an element in a `COleSafeArray` object.  
  
```  
DWORD GetElemSize();
```  
  
### Return Value  
 The size, in bytes, of the elements of a safe array.  
  
##  <a name="colesafearray__getlbound"></a>  COleSafeArray::GetLBound  
 Returns the lower bound for any dimension of a `COleSafeArray` object.  
  
```  
void GetLBound(
    DWORD dwDim,  
    long* pLBound);
```  
  
### Parameters  
 `dwDim`  
 The array dimension for which to get the lower bound.  
  
 *pLBound*  
 Pointer to the location to return the lower bound.  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#30](../../mfc/codesnippet/cpp/colesafearray-class_5.cpp)]  
  
##  <a name="colesafearray__getonedimsize"></a>  COleSafeArray::GetOneDimSize  
 Returns the number of elements in the one-dimensional `COleSafeArray` object.  
  
```  
DWORD GetOneDimSize();
```  
  
### Return Value  
 The number of elements in the one-dimensional safe array.  
  
### Example  
  See the example for [COleSafeArray::CreateOneDim](#colesafearray__createonedim).  
  
##  <a name="colesafearray__getubound"></a>  COleSafeArray::GetUBound  
 Returns the upper bound for any dimension of a safe array.  
  
```  
void GetUBound(
    DWORD dwDim,  
    long* pUBound);
```  
  
### Parameters  
 `dwDim`  
 The array dimension for which to get the upper bound.  
  
 *pUBound*  
 Pointer to the location to return the upper bound.  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#31](../../mfc/codesnippet/cpp/colesafearray-class_6.cpp)]  
  
##  <a name="colesafearray__lock"></a>  COleSafeArray::Lock  
 Increments the lock count of an array and place a pointer to the array data in the array descriptor.  
  
```  
void Lock();
```  
  
### Remarks  
 On error, it throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
 The pointer in the array descriptor is valid until `Unlock` is called. Calls to `Lock` can be nested; an equal number of calls to `Unlock` are required.  
  
 An array cannot be deleted while it is locked.  
  
##  <a name="colesafearray__operator_lpcvariant"></a>  COleSafeArray::operator LPCVARIANT  
 Call this casting operator to access the underlying **VARIANT** structure for this `COleSafeArray` object.  
  
```  
operator LPCVARIANT() const;

 
```  
  
##  <a name="colesafearray__operator_lpvariant"></a>  COleSafeArray::operator LPVARIANT  
 Call this casting operator to access the underlying **VARIANT** structure for this `COleSafeArray` object.  
  
```  
operator LPVARIANT();
```   
  
### Remarks  
 Note that changing the value in the **VARIANT** structure accessed by the pointer returned by this function will change the value of this `COleSafeArray` object.  
  
##  <a name="colesafearray__operator__eq"></a>  COleSafeArray::operator =  
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
  
- **operator =(** *varSrc***)** Copies an existing **VARIANT** or `COleVariant` array into this object.  
  
- **operator =(** `pSrc` **)** Copies the **VARIANT** array object accessed by `pSrc` into this object.  
  
##  <a name="colesafearray__operator__eq_eq"></a>  COleSafeArray::operator ==  
 This operator compares two arrays ( **SAFEARRAY**, **VARIANT**, `COleVariant`, or `COleSafeArray` arrays) and returns nonzero if they are equal; otherwise 0.  
  
```  
BOOL operator==(const SAFEARRAY& saSrc) const;

 
 
BOOL operator==(LPCSAFEARRAY pSrc) const;

 
 
BOOL operator==(const COleSafeArray& saSrc) const;

 
 
BOOL operator==(const VARIANT& varSrc) const;

 
 
BOOL operator==(LPCVARIANT pSrc) const;

 
 
BOOL operator==(const COleVariant& varSrc) const;

 
```  
  
### Remarks  
 Two arrays are equal if they have an equal number of dimensions, equal size in each dimension, and equal element values.  
  
##  <a name="colesafearray__operator__lt__lt_"></a>  COleSafeArray::operator &lt;&lt;  
 The `COleSafeArray` insertion (<<) operator supports diagnostic dumping and storing of a `COleSafeArray` object to an archive.  
  
```  
CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,  
    COleSafeArray& saSrc);
```  
  
##  <a name="colesafearray__ptrofindex"></a>  COleSafeArray::PtrOfIndex  
 Returns a pointer to the element specified by the index values.  
  
```  
void PtrOfIndex(
    long* rgIndices,  
    void** ppvData);
```  
  
### Parameters  
 `rgIndices`  
 An array of index values that identify an element of the array. All indexes for the element must be specified.  
  
 `ppvData`  
 On return, pointer to the element identified by the values in `rgIndices`.  
  
##  <a name="colesafearray__putelement"></a>  COleSafeArray::PutElement  
 Assigns a single element into the array.  
  
```  
void PutElement(
    long* rgIndices,  
    void* pvData);
```  
  
### Parameters  
 `rgIndices`  
 Pointer to an array of indexes for each dimension of the array.  
  
 `pvData`  
 Pointer to the data to assign to the array. **VT_DISPATCH**, **VT_UNKNOWN**, and `VT_BSTR` variant types are pointers and do not require another level of indirection.  
  
### Remarks  
 This function automatically calls the Windows functions [SafeArrayLock](https://msdn.microsoft.com/library/windows/desktop/ms221492.aspx) and [SafeArrayUnlock](https://msdn.microsoft.com/library/windows/desktop/ms221246.aspx) before and after assigning the element. If the data element is a string, object, or variant, the function copies it correctly, and if the existing element is a string, object, or variant, it is cleared correctly.  
  
 Note that you can have multiple locks on an array, so you can put elements into an array while the array is locked by other operations.  
  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#32](../../mfc/codesnippet/cpp/colesafearray-class_7.cpp)]  
  
##  <a name="colesafearray__redim"></a>  COleSafeArray::Redim  
 Changes the least significant (rightmost) bound of a safe array.  
  
```  
void Redim(SAFEARRAYBOUND* psaboundNew);
```  
  
### Parameters  
 *psaboundNew*  
 Pointer to a new safe array bound structure containing the new array bound. Only the least significant dimension of an array may be changed.  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="colesafearray__resizeonedim"></a>  COleSafeArray::ResizeOneDim  
 Changes the number of elements in a one-dimensional `COleSafeArray` object.  
  
```  
void ResizeOneDim(DWORD dwElements);
```  
  
### Parameters  
 `dwElements`  
 Number of elements in the one-dimensional safe array.  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
  See the example for [COleSafeArray::CreateOneDim](#colesafearray__createonedim).  
  
##  <a name="colesafearray__unaccessdata"></a>  COleSafeArray::UnaccessData  
 Decrements the lock count of an array and invalidates the pointer retrieved by `AccessData`.  
  
```  
void UnaccessData();
```  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
  See the example for [COleSafeArray::AccessData](#colesafearray__accessdata).  
  
##  <a name="colesafearray__unlock"></a>  COleSafeArray::Unlock  
 Decrements the lock count of an array so it can be freed or resized.  
  
```  
void Unlock();
```  
  
### Remarks  
 This function is called after access to the data in an array is finished. On error, it throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleVariant Class](../../mfc/reference/colevariant-class.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)
