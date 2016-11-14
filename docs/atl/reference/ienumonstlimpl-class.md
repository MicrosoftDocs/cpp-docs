---
title: "IEnumOnSTLImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IEnumOnSTLImpl"
  - "ATL.IEnumOnSTLImpl"
  - "ATL::IEnumOnSTLImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IEnumOnSTLImpl class"
ms.assetid: 1789e77b-88b8-447d-a490-806b918912ce
caps.latest.revision: 20
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
# IEnumOnSTLImpl Class
This class defines an enumerator interface based on an STL collection.  
  
## Syntax  
  
```
template <class Base,
    const IID* piid, class T, class Copy, class CollType>  class ATL_NO_VTABLE IEnumOnSTLImpl :  public Base
```  
  
#### Parameters  
 `Base`  
 A COM enumerator ( [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx)) interface.  
  
 `piid`  
 A pointer to the interface ID of the enumerator interface.  
  
 `T`  
 The type of item exposed by the enumerator interface.  
  
 `Copy`  
 A [copy policy class](../../atl/atl-copy-policy-classes.md).  
  
 `CollType`  
 An STL container class.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IEnumOnSTLImpl::Clone](#ienumonstlimpl__clone)|The implementation of [IEnumXXXX::Clone](https://msdn.microsoft.com/library/ms690336.aspx).|  
|[IEnumOnSTLImpl::Init](#ienumonstlimpl__init)|Initializes the enumerator.|  
|[IEnumOnSTLImpl::Next](#ienumonstlimpl__next)|The implementation of [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx).|  
|[IEnumOnSTLImpl::Reset](#ienumonstlimpl__reset)|The implementation of [IEnumXXXX::Reset](https://msdn.microsoft.com/library/ms693414.aspx).|  
|[IEnumOnSTLImpl::Skip](#ienumonstlimpl__skip)|The implementation of [IEnumXXXX::Skip](https://msdn.microsoft.com/library/ms690392.aspx).|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[IEnumOnSTLImpl::m_iter](#ienumonstlimpl__m_iter)|The iterator that represents the enumerator's current position within the collection.|  
|[IEnumOnSTLImpl::m_pcollection](#ienumonstlimpl__m_pcollection)|A pointer to the STL container holding the items to be enumerated.|  
|[IEnumOnSTLImpl::m_spUnk](#ienumonstlimpl__m_spunk)|The **IUnknown** pointer of the object supplying the collection.|  
  
## Remarks  
 `IEnumOnSTLImpl` provides the implementation for a COM enumerator interface where the items being enumerated are stored in an STL-compatible container. This class is analogous to the [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md) class, which provides an implementation for an enumerator interface based on an array.  
  
> [!NOTE]
>  See [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#ccomenumimpl__init) for details on further differences between `CComEnumImpl` and `IEnumOnSTLImpl`.  
  
 Typically, you will *not* need to create your own enumerator class by deriving from this interface implementation. If you want to use an ATL-supplied enumerator based on an STL container, it is more common to create an instance of [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md), or to create a collection class that returns an enumerator by deriving from [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).  
  
 However, if you do need to provide a custom enumerator (for example, one that exposes interfaces in addition to the enumerator interface), you can derive from this class. In this situation it is likely that you'll need to override the [Clone](#ienumonstlimpl__clone) method to provide your own implementation.  
  
## Inheritance Hierarchy  
 `Base`  
  
 `IEnumOnSTLImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ienumonstlimpl__init"></a>  IEnumOnSTLImpl::Init  
 Initializes the enumerator.  
  
```
HRESULT Init(
    IUnknown* pUnkForRelease,
    CollType& collection);
```  
  
### Parameters  
 `pUnkForRelease`  
 [in] The **IUnknown** pointer of an object that must be kept alive during the lifetime of the enumerator. Pass **NULL** if no such object exists.  
  
 `collection`  
 A reference to the STL container that holds the items to be enumerated.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 If you pass `Init` a reference to a collection held in another object, you can use the `pUnkForRelease` parameter to ensure that the object, and the collection it holds, is available for as long as the enumerator needs it.  
  
 You must call this method before passing a pointer to the enumerator interface back to any clients.  
  
##  <a name="ienumonstlimpl__clone"></a>  IEnumOnSTLImpl::Clone  
 This method provides the implementation of the [IEnumXXXX::Clone](https://msdn.microsoft.com/library/ms690336.aspx) method by creating an object of type `CComEnumOnSTL`, initializing it with the same collection and iterator used by the current object, and returning the interface on the newly created object.  
  
```
STDMETHOD(Clone)(Base** ppEnum);
```  
  
### Parameters  
 `ppEnum`  
 [out] The enumerator interface on a newly created object cloned from the current enumerator.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ienumonstlimpl__m_spunk"></a>  IEnumOnSTLImpl::m_spUnk  
 The **IUnknown** pointer of the object supplying the collection.  
  
```
CComPtr<IUnknown> m_spUnk;
```  
  
### Remarks  
 This smart pointer maintains a reference on the object passed to [IEnumOnSTLImpl::Init](#ienumonstlimpl__init), ensuring that it remains alive during the lifetime of the enumerator.  
  
##  <a name="ienumonstlimpl__m_pcollection"></a>  IEnumOnSTLImpl::m_pcollection  
 This member points to the collection that provides the data driving the implementation of the enumerator interface.  
  
```
CollType* m_pcollection;
```  
  
### Remarks  
 This member is initialized by a call to [IEnumOnSTLImpl::Init](#ienumonstlimpl__init).  
  
##  <a name="ienumonstlimpl__m_iter"></a>  IEnumOnSTLImpl::m_iter  
 This member holds the iterator used to mark the current position within the collection and navigate to subsequent elements.  
  
```
CollType::iterator m_iter;
```  
  
##  <a name="ienumonstlimpl__next"></a>  IEnumOnSTLImpl::Next  
 This method provides the implementation of the [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx) method.  
  
```
STDMETHOD(Next)(ULONG celt,
    T* rgelt,
    ULONG* pceltFetched);
```  
  
### Parameters  
 `celt`  
 [in] The number of elements requested.  
  
 `rgelt`  
 [out] The array to be filled in with the elements.  
  
 `pceltFetched`  
 [out] The number of elements actually returned in `rgelt`. This can be less than `celt` if fewer than `celt` elements remain in the list.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ienumonstlimpl__reset"></a>  IEnumOnSTLImpl::Reset  
 This method provides the implementation of the [IEnumXXXX::Reset](https://msdn.microsoft.com/library/ms693414.aspx) method.  
  
```
STDMETHOD(Reset)(void);
```  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ienumonstlimpl__skip"></a>  IEnumOnSTLImpl::Skip  
 This method provides the implementation of the [IEnumXXXX::Skip](https://msdn.microsoft.com/library/ms690392.aspx) method.  
  
```
STDMETHOD(Skip)(ULONG celt);
```  
  
### Parameters  
 `celt`  
 [in] The number of elements to skip.  
  
### Return Value  
 A standard `HRESULT` value.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
