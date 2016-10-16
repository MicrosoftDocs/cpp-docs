---
title: "_com_ptr_t Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_com_ptr_t class"
ms.assetid: 3753a8a0-03d4-4cfd-8a9a-74872ea53971
caps.latest.revision: 8
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
# _com_ptr_t Class
**Microsoft Specific**  
  
 A `_com_ptr_t` object encapsulates a COM interface pointer and is called a "smart" pointer. This template class manages resource allocation and deallocation through function calls to the **IUnknown** member functions: `QueryInterface`, `AddRef`, and **Release**.  
  
 A smart pointer is usually referenced by the typedef definition provided by the **_COM_SMARTPTR_TYPEDEF** macro. This macro takes an interface name and the IID and declares a specialization of `_com_ptr_t` with the name of the interface plus a suffix of `Ptr`. For example:  
  
```  
_COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
```  
  
 declares the `_com_ptr_t` specialization **IMyInterfacePtr**.  
  
 A set of [function templates](../cpp/relational-function-templates.md), not members of this template class, support comparisons with a smart pointer on the right side of the comparison operator.  
  
### Construction  
  
|||  
|-|-|  
|[_com_ptr_t](../cpp/_com_ptr_t--_com_ptr_t.md)|Constructs a `_com_ptr_t` object.|  
  
### Low-Level Operations  
  
|||  
|-|-|  
|[AddRef](../cpp/_com_ptr_t--addref.md)|Calls the `AddRef` member function of **IUnknown** on the encapsulated interface pointer.|  
|[Attach](../cpp/_com_ptr_t--attach.md)|Encapsulates a raw interface pointer of this smart pointer's type.|  
|[CreateInstance](../cpp/_com_ptr_t--createinstance.md)|Creates a new instance of an object given a **CLSID** or **ProgID**.|  
|[Detach](../cpp/_com_ptr_t--detach.md)|Extracts and returns the encapsulated interface pointer.|  
|[GetActiveObject](../cpp/_com_ptr_t--getactiveobject.md)|Attaches to an existing instance of an object given a **CLSID** or **ProgID**.|  
|[GetInterfacePtr](../cpp/_com_ptr_t--getinterfaceptr.md)|Returns the encapsulated interface pointer.|  
|[QueryInterface](../cpp/_com_ptr_t--queryinterface.md)|Calls the `QueryInterface` member function of **IUnknown** on the encapsulated interface pointer.|  
|[Release](../cpp/_com_ptr_t--release.md)|Calls the **Release** member function of **IUnknown** on the encapsulated interface pointer.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../cpp/_com_ptr_t--operator-=.md)|Assigns a new value to an existing `_com_ptr_t` object.|  
|[operators ==, !=, \<, >, \<=, >=](../cpp/_com_ptr_t-relational-operators.md)|Compare the smart pointer object to another smart pointer, raw interface pointer, or **NULL**.|  
|[Extractors](../cpp/_com_ptr_t-extractors.md)|Extract the encapsulated COM interface pointer.|  
  
## END Microsoft Specific  
  
## Requirements  
 **Header:** comip.h  
  
 **Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../buildref/-zc-wchar_t--wchar_t-is-native-type-.md) for more information)  
  
## See Also  
 [Compiler COM Support Classes](../cpp/compiler-com-support-classes.md)