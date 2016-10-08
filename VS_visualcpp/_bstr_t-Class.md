---
title: "_bstr_t Class"
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
ms.assetid: 58841fef-fe21-4a84-aab9-780262b5201f
caps.latest.revision: 9
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
# _bstr_t Class
**Microsoft Specific**  
  
 A `_bstr_t` object encapsulates the [BSTR data type](assetId:///1b2d7d2c-47af-4389-a6b6-b01b7e915228). The class manages resource allocation and deallocation through function calls to **SysAllocString** and **SysFreeString** and other `BSTR` APIs when appropriate. The `_bstr_t` class uses reference counting to avoid excessive overhead.  
  
### Construction  
  
|||  
|-|-|  
|[_bstr_t](../VS_visualcpp/_bstr_t--_bstr_t.md)|Constructs a `_bstr_t` object.|  
  
### Operations  
  
|||  
|-|-|  
|[Assign](../VS_visualcpp/_bstr_t--Assign.md)|Copies a `BSTR` into the `BSTR` wrapped by a `_bstr_t`.|  
|[Attach](../VS_visualcpp/_bstr_t--Attach.md)|Links a `_bstr_t` wrapper to a `BSTR`.|  
|[copy](../VS_visualcpp/_bstr_t--copy.md)|Constructs a copy of the encapsulated `BSTR`.|  
|[Detach](../VS_visualcpp/_bstr_t--Detach.md)|Returns the `BSTR` wrapped by a `_bstr_t` and detaches the `BSTR` from the `_bstr_t`.|  
|[GetAddress](../VS_visualcpp/_bstr_t--GetAddress.md)|Points to the `BSTR` wrapped by a `_bstr_t`.|  
|[GetBSTR](../VS_visualcpp/_bstr_t--GetBSTR.md)|Points to the beginning of the `BSTR` wrapped by the `_bstr_t`.|  
|[length](../VS_visualcpp/_bstr_t--length.md)|Returns the number of characters in the `_bstr_t`.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../VS_visualcpp/_bstr_t--operator-=.md)|Assigns a new value to an existing `_bstr_t` object.|  
|[operator +=](../VS_visualcpp/_bstr_t--operator--=---.md)|Appends characters to the end of the `_bstr_t` object.|  
|[operator +](../VS_visualcpp/_bstr_t--operator--=---.md)|Concatenates two strings.|  
|[operator !](../VS_visualcpp/_bstr_t--operator-!.md)|Checks if the encapsulated `BSTR` is a **NULL** string.|  
|[operator ==, !=, <, >, <=, >=](../VS_visualcpp/_bstr_t-Relational-Operators.md)|Compares two `_bstr_t` objects.|  
|[operator wchar_t* &#124; char\*](../VS_visualcpp/_bstr_t--wchar_t---_bstr_t--char-.md)|Extract the pointers to the encapsulated Unicode or multibyte `BSTR` object.|  
  
## END Microsoft Specific  
  
## Requirements  
 **Header:** comutil.h  
  
 **Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md) for more information)  
  
## See Also  
 [Compiler COM Support Classes](../VS_visualcpp/Compiler-COM-Support-Classes.md)