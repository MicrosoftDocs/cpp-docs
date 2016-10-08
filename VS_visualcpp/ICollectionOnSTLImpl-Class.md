---
title: "ICollectionOnSTLImpl Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 683c88b0-0d97-4779-a762-e493334ba7f9
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# ICollectionOnSTLImpl Class
This class provides methods used by a collection class.  
  
## Syntax  
  
```  
template <class T,  
    class CollType,  
    class ItemType,  
    class CopyItem,  
    class EnumType>  
    class ICollectionOnSTLImpl :  
    public T  
```  
  
#### Parameters  
 `T`  
 A COM collection interface.  
  
 `CollType`  
 An STL container class.  
  
 *ItemType*  
 The type of item exposed by the container interface.  
  
 *CopyItem*  
 A [copy policy class](../VS_visualcpp/ATL-Copy-Policy-Classes.md).  
  
 *EnumType*  
 A [CComEnumOnSTL](../VS_visualcpp/CComEnumOnSTL-Class.md)-compatible enumerator class.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ICollectionOnSTLImpl::get__NewEnum](../Topic/ICollectionOnSTLImpl::get__NewEnum.md)|Returns an enumerator object for the collection.|  
|[ICollectionOnSTLImpl::get_Count](../Topic/ICollectionOnSTLImpl::get_Count.md)|Returns the number of elements in the collection.|  
|[ICollectionOnSTLImpl::get_Item](../Topic/ICollectionOnSTLImpl::get_Item.md)|Returns the requested item from the collection.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[ICollectionOnSTLImpl::m_coll](../Topic/ICollectionOnSTLImpl::m_coll.md)|The collection.|  
  
## Remarks  
 This class provides the implementation for three methods of a collection interface: [get_Count](../Topic/ICollectionOnSTLImpl::get_Count.md), [get_Item](../Topic/ICollectionOnSTLImpl::get_Item.md), and [get__NewEnum](../Topic/ICollectionOnSTLImpl::get__NewEnum.md).  
  
 To use this class:  
  
-   Define (or borrow) a collection interface that you wish to implement.  
  
-   Derive your class from a specialization of `ICollectionOnSTLImpl` based on this collection interface.  
  
-   Use your derived class to implement any methods from the collection interface not handled by `ICollectionOnSTLImpl`.  
  
> [!NOTE]
>  If the collection interface is a dual interface, derive your class from [IDispatchImpl](../VS_visualcpp/IDispatchImpl-Class.md), passing the `ICollectionOnSTLImpl` specialization as the first template parameter if you want ATL to provide the implementation of the `IDispatch` methods.  
  
-   Add items to the [m_coll](../Topic/ICollectionOnSTLImpl::m_coll.md) member to populate the collection.  
  
 For more information and examples, see [ATL Collections and Enumerators](../VS_visualcpp/ATL-Collections-and-Enumerators.md).  
  
## Inheritance Hierarchy  
 `T`  
  
 `ICollectionOnSTLImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="icollectiononstlimpl__get_count"></a>  ICollectionOnSTLImpl::get_Count  
 This method returns the number of items in the collection.  
  
```  
STDMETHOD(get_Count)(    long* pcount );  
```  
  
### Parameters  
 *pcount*  
 [out] The number of elements in the collection.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="icollectiononstlimpl__get_item"></a>  ICollectionOnSTLImpl::get_Item  
 This method returns the specified item from the collection.  
  
```  
STDMETHOD(get_Item)(  
    long Index,  
    ItemType* pvar );  
```  
  
### Parameters  
 `Index`  
 [in] The 1-based index of an item in the collection.  
  
 `pvar`  
 [out] The item corresponding to `Index`.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The item is obtained by copying the data at the specified position in [m_coll](../Topic/ICollectionOnSTLImpl::m_coll.md) using the copy method of the [copy policy class](../VS_visualcpp/ATL-Copy-Policy-Classes.md) passed as a template argument in the `ICollectionOnSTLImpl` specialization.  
  
##  <a name="icollectiononstlimpl__get__newenum"></a>  ICollectionOnSTLImpl::get__NewEnum  
 Returns an enumerator object for the collection.  
  
```  
STDMETHOD(get__NewEnum)(    IUnknown** ppUnk );  
```  
  
### Parameters  
 `ppUnk`  
 [out] The **IUnknown** pointer of a newly created enumerator object.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The newly created enumerator maintains an iterator on the original collection, `m_coll`, (so no copy is made) and holds a COM reference on the collection object to ensure that the collection remains alive while there are outstanding enumerators.  
  
##  <a name="icollectiononstlimpl__m_coll"></a>  ICollectionOnSTLImpl::m_coll  
 This member holds the items represented by the collection.  
  
```  
CollType m_coll;  
```  
  
## See Also  
 [ATLCollections Sample](../VS_visualcpp/Visual-C---Samples.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)