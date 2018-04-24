---
title: "CComEnum Class | Microsoft Docs"
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
  - "CComEnum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComEnum class"
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComEnum Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CComEnum Class](https://docs.microsoft.com/cpp/atl/reference/ccomenum-class).  
  
  
This class defines a COM enumerator object based on an array.  
  
## Syntax  
  
```
template <class Base,
    const IID* piid, class T, class Copy, class ThreadModel = CcomObjectThreadModel>  
class ATL_NO_VTABLE CComEnum : public CComEnumImpl<Base, piid,
 T,
    Copy>,
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
 A homogeneous [copy policy class](../../atl/atl-copy-policy-classes.md).  
  
 `ThreadModel`  
 The threading model of the class. This parameter defaults to the global object thread model used in your project.  
  
## Remarks  
 `CComEnum` defines a COM enumerator object based on an array. This class is analogous to [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md) which implements an enumerator based on an STL container. Typical steps for using this class are outlined below. For more information, see [ATL Collections and Enumerators](../../atl/atl-collections-and-enumerators.md).  
  
## To use this class:  
  
- `typedef` a specialization of this class.  
  
-   Use the `typedef` as the template argument in a specialization of `CComObject`.  
  
-   Create an instance of the `CComObject` specialization.  
  
-   Initialize the enumerator object by calling [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#ccomenumimpl__init).  
  
-   Return the enumerator interface to the client.  
  
## Inheritance Hierarchy  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)  
  
 `CComEnum`  
  
## Requirements  
 **Header:** atlcom.h  
  
## Example  
 The code shown below provides a reusable function for creating and initializing an enumerator object.  
  
 [!code-cpp[NVC_ATL_COM#32](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/VariantArrayCollection.h#32)]  
  
 This template function can be used to implement the `_NewEnum` property of a collection interface as shown below:  
  
 [!code-cpp[NVC_ATL_COM#33](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/VariantArrayCollection.h#33)]  
  
 This code creates a `typedef` for `CComEnum` that exposes a vector of **VARIANT**s through the **IEnumVariant** interface. The **CVariantArrayCollection** class simply specializes **CreateEnumerator** to work with enumerator objects of this type and passes the necessary arguments.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComObjectThreadModel](../Topic/CComObjectThreadModel.md)   
 [CComEnumImpl Class](../../atl/reference/ccomenumimpl-class.md)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)








