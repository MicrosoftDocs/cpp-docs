---
title: "_com_ptr_t Class"
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
ms.topic: language-reference
ms.assetid: 3753a8a0-03d4-4cfd-8a9a-74872ea53971
caps.latest.revision: 8
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
# _com_ptr_t Class
**Microsoft Specific**  
  
 A `_com_ptr_t` object encapsulates a COM interface pointer and is called a "smart" pointer. This template class manages resource allocation and deallocation through function calls to the **IUnknown** member functions: `QueryInterface`, `AddRef`, and **Release**.  
  
 A smart pointer is usually referenced by the typedef definition provided by the **_COM_SMARTPTR_TYPEDEF** macro. This macro takes an interface name and the IID and declares a specialization of `_com_ptr_t` with the name of the interface plus a suffix of `Ptr`. For example:  
  
```  
_COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
```  
  
 declares the `_com_ptr_t` specialization **IMyInterfacePtr**.  
  
 A set of [function templates](../VS_visualcpp/Relational-Function-Templates.md), not members of this template class, support comparisons with a smart pointer on the right side of the comparison operator.  
  
### Construction  
  
|||  
|-|-|  
|[_com_ptr_t](../VS_visualcpp/_com_ptr_t--_com_ptr_t.md)|Constructs a `_com_ptr_t` object.|  
  
### Low-Level Operations  
  
|||  
|-|-|  
|[AddRef](../VS_visualcpp/_com_ptr_t--AddRef.md)|Calls the `AddRef` member function of **IUnknown** on the encapsulated interface pointer.|  
|[Attach](../VS_visualcpp/_com_ptr_t--Attach.md)|Encapsulates a raw interface pointer of this smart pointer's type.|  
|[CreateInstance](../VS_visualcpp/_com_ptr_t--CreateInstance.md)|Creates a new instance of an object given a **CLSID** or **ProgID**.|  
|[Detach](../VS_visualcpp/_com_ptr_t--Detach.md)|Extracts and returns the encapsulated interface pointer.|  
|[GetActiveObject](../VS_visualcpp/_com_ptr_t--GetActiveObject.md)|Attaches to an existing instance of an object given a **CLSID** or **ProgID**.|  
|[GetInterfacePtr](../VS_visualcpp/_com_ptr_t--GetInterfacePtr.md)|Returns the encapsulated interface pointer.|  
|[QueryInterface](../VS_visualcpp/_com_ptr_t--QueryInterface.md)|Calls the `QueryInterface` member function of **IUnknown** on the encapsulated interface pointer.|  
|[Release](../VS_visualcpp/_com_ptr_t--Release.md)|Calls the **Release** member function of **IUnknown** on the encapsulated interface pointer.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../VS_visualcpp/_com_ptr_t--operator-=.md)|Assigns a new value to an existing `_com_ptr_t` object.|  
|[operators ==, !=, <, >, <=, >=](../VS_visualcpp/_com_ptr_t-Relational-Operators.md)|Compare the smart pointer object to another smart pointer, raw interface pointer, or **NULL**.|  
|[Extractors](../VS_visualcpp/_com_ptr_t-Extractors.md)|Extract the encapsulated COM interface pointer.|  
  
## END Microsoft Specific  
  
## Requirements  
 **Header:** comip.h  
  
 **Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md) for more information)  
  
## See Also  
 [Compiler COM Support Classes](../VS_visualcpp/Compiler-COM-Support-Classes.md)