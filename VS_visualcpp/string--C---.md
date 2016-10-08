---
title: "string (C++)"
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
ms.assetid: ddde900a-2e99-4fcd-86e8-57e1bdba7c93
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
# string (C++)
Indicates that the one-dimensional `char`, `wchar_t`, **byte** (or equivalent) array or the pointer to such an array must be treated as a string.  
  
## Syntax  
  
```  
  
[string]  
  
```  
  
## Remarks  
 The **string** C++ attribute has the same functionality as the [string](http://msdn.microsoft.com/library/windows/desktop/aa367270) MIDL attribute.  
  
## Example  
 The following code shows how to use **string** on an interface and on a typedef:  
  
```  
// cpp_attr_ref_string.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
[export, string] typedef char a[21];  
[dispinterface, restricted, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl  
{  
   [id(1)] HRESULT Method3([in, string] char *pC);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Array or pointer to an array, interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Array Attributes](../VS_visualcpp/Array-Attributes.md)   
 [export](../VS_visualcpp/export.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)