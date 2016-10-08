---
title: "CComEnum Class"
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
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
caps.latest.revision: 14
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
# CComEnum Class
This class defines a COM enumerator object based on an array.  
  
## Syntax  
  
```  
template <class Base,  
    const IID* piid,  
    class T,  
    class Copy,  
    class ThreadModel = CcomObjectThreadModel>  
    class ATL_NO_VTABLE CComEnum :  
    public CComEnumImpl< Base,piid,T,Copy  
   >,  
    public CComObjectRootEx< ThreadModel  
    >  
```  
  
#### Parameters  
 `Base`  
 A COM enumerator ( [IEnumXXXX](https://msdn.microsoft.com/en-us/library/ms680089.aspx)) interface.  
  
 `piid`  
 A pointer to the interface ID of the enumerator interface.  
  
 `T`  
 The type of item exposed by the enumerator interface.  
  
 `Copy`  
 A homogeneous [copy policy class](../VS_visualcpp/ATL-Copy-Policy-Classes.md).  
  
 `ThreadModel`  
 The threading model of the class. This parameter defaults to the global object thread model used in your project.  
  
## Remarks  
 `CComEnum` defines a COM enumerator object based on an array. This class is analogous to [CComEnumOnSTL](../VS_visualcpp/CComEnumOnSTL-Class.md) which implements an enumerator based on an STL container. Typical steps for using this class are outlined below. For more information, see [ATL Collections and Enumerators](../VS_visualcpp/ATL-Collections-and-Enumerators.md).  
  
## To use this class:  
  
-   `typedef` a specialization of this class.  
  
-   Use the `typedef` as the template argument in a specialization of `CComObject`.  
  
-   Create an instance of the `CComObject` specialization.  
  
-   Initialize the enumerator object by calling [CComEnumImpl::Init](../Topic/CComEnumImpl::Init.md).  
  
-   Return the enumerator interface to the client.  
  
## Inheritance Hierarchy  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../VS_visualcpp/CComObjectRootEx-Class.md)  
  
 [CComEnumImpl](../VS_visualcpp/CComEnumImpl-Class.md)  
  
 `CComEnum`  
  
## Requirements  
 **Header:** atlcom.h  
  
## Example  
 The code shown below provides a reusable function for creating and initializing an enumerator object.  
  
 [!CODE [NVC_ATL_COM#32](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#32)]  
  
 This template function can be used to implement the `_NewEnum` property of a collection interface as shown below:  
  
 [!CODE [NVC_ATL_COM#33](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#33)]  
  
 This code creates a `typedef` for `CComEnum` that exposes a vector of **VARIANT**s through the **IEnumVariant** interface. The **CVariantArrayCollection** class simply specializes **CreateEnumerator** to work with enumerator objects of this type and passes the necessary arguments.  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [CComObjectThreadModel](../Topic/CComObjectThreadModel.md)   
 [CComEnumImpl Class](../VS_visualcpp/CComEnumImpl-Class.md)   
 [CComObjectRootEx Class](../VS_visualcpp/CComObjectRootEx-Class.md)