---
title: "IAccessorImpl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "IAccessorImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAccessorImpl class"
ms.assetid: 768606da-8b71-417c-a62c-88069ce7730d
caps.latest.revision: 9
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
# IAccessorImpl Class
Provides an implementation of the [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) interface.  
  
## Syntax  
  
```  
template <  
   class T,   
   class BindType = ATLBINDINGS,   
   class BindingVector = CAtlMap <   
      HACCESSOR hAccessor,   
      BindType* pBindingsStructure   
   >   
>  
class ATL_NO_VTABLE IAccessorImpl : public IAccessorImplBase<BindType>  
```  
  
#### Parameters  
 `T`  
 Your rowset or command object class.  
  
 `BindType`  
 Storage unit for binding information. The default is the **ATLBINDINGS** structure (see atldb.h).  
  
 `BindingVector`  
 Storage unit for column information. The default is [CAtlMap](../atl/catlmap-class.md) where the key element is an **HACCESSOR** value and the value element is a pointer to a `BindType` structure.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[IAccessorImpl](../data/iaccessorimpl-class.md)|The constructor.|  
  
### Interface Methods  
  
|||  
|-|-|  
|[AddRefAccessor](../data/iaccessorimpl--addrefaccessor.md)|Adds a reference count to an existing accessor.|  
|[CreateAccessor](../data/iaccessorimpl--createaccessor.md)|Creates an accessor from a set of bindings.|  
|[GetBindings](../data/iaccessorimpl--getbindings.md)|Returns the bindings in an accessor.|  
|[ReleaseAccessor](../data/iaccessorimpl--releaseaccessor.md)|Releases an accessor.|  
  
## Remarks  
 This is mandatory on rowsets and commands. OLE DB requires providers to implement an **HACCESSOR**, which is a tag to an array of [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) structures. **HACCESSOR**s provided by `IAccessorImpl` are addresses of the `BindType` structures. By default, `BindType` is defined as an **ATLBINDINGS** in `IAccessorImpl`'s template definition. `BindType` provides a mechanism used by `IAccessorImpl` to track the number of elements in its **DBBINDING** array as well as a reference count and accessor flags.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)