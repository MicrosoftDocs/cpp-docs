---
title: "CComEnumOnSTL Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComEnumOnSTL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComEnumOnSTL class"
ms.assetid: befe1a44-7a00-4f28-9a2e-cc0fa526643c
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComEnumOnSTL Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CComEnumOnSTL Class](https://docs.microsoft.com/cpp/atl/reference/ccomenumonstl-class).  
  
  
This class defines a COM enumerator object based on an STL collection.  
  
## Syntax  
  
```
template <class Base,
    const IID* piid, class T, class Copy, class CollType, class ThreadModel = CComObjectThreadModel>  
class ATL_NO_VTABLE CComEnumOnSTL : public IEnumOnSTLImpl<Base, piid,
 T,
    Copy,
 CollType>,
    public CComObjectRootEx<ThreadModel>
```  
  
#### Parameters  
 `Base`  
 A COM enumerator ( [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx)) interface.  
  
 `piid`  
 A pointer to the interface ID of the enumerator interface.  
  
 `T`  
 The type of item exposed by the enumerator interface.  
  
 `Copy`  
 A [copy policy](../../atl/atl-copy-policy-classes.md) class.  
  
 `CollType`  
 An STL container class.  
  
## Remarks  
 `CComEnumOnSTL` defines a COM enumerator object based on an STL collection. This class can be used on its own or in conjunction with [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md). Typical steps for using this class are outlined below. For more information, see [ATL Collections and Enumerators](../../atl/atl-collections-and-enumerators.md).  
  
## To use this class with ICollectionOnSTLImpl:  
  
- `typedef` a specialization of this class.  
  
-   Use the `typedef` as the final template argument in a specialization of `ICollectionOnSTLImpl`.  
  
 See [ATL Collections and Enumerators](../../atl/atl-collections-and-enumerators.md) for an example.  
  
## To use this class independently of ICollectionOnSTLImpl:  
  
- `typedef` a specialization of this class.  
  
-   Use the `typedef` as the template argument in a specialization of `CComObject`.  
  
-   Create an instance of the `CComObject` specialization.  
  
-   Initialize the enumerator object by calling [IEnumOnSTLImpl::Init](../../atl/reference/ienumonstlimpl-class.md#ienumonstlimpl__init).  
  
-   Return the enumerator interface to the client.  
  
## Inheritance Hierarchy  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)  
  
 `CComEnumOnSTL`  
  
## Requirements  
 **Header:** atlcom.h  
  
## Example  
 The code shown below provides a generic function to handle the creation and initialization of an enumerator object:  
  
 [!code-cpp[NVC_ATL_COM#34](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/VariantCollection.h#34)]  
  
 This template function can be used to implement the `_NewEnum` property of a collection interface as shown below:  
  
 [!code-cpp[NVC_ATL_COM#35](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/VariantCollection.h#35)]  
  
 This code creates a `typedef` for `CComEnumOnSTL` that exposes a vector of `CComVariant`s by means of the **IEnumVariant** interface. The **CVariantCollection** class simply specializes **CreateSTLEnumerator** to work with enumerator objects of this type.  
  
## See Also  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)   
 [ATLCollections Sample: Demonstrates ICollectionOnSTLImpl, CComEnumOnSTL, and Custom Copy Policy Classes](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [CComObjectThreadModel](../Topic/CComObjectThreadModel.md)   
 [IEnumOnSTLImpl Class](../../atl/reference/ienumonstlimpl-class.md)








