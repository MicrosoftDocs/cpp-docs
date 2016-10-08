---
title: "ref (C++)"
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
ms.assetid: 67e82d3e-07d9-4ef8-bf2b-0a4491d12557
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
# ref (C++)
Identifies a reference pointer.  
  
## Syntax  
  
```  
  
[ref]  
  
```  
  
## Remarks  
 The `ref` C++ attribute has the same functionality as the [ref](http://msdn.microsoft.com/library/windows/desktop/aa367153) MIDL attribute.  
  
## Example  
 The following code shows how to use the `ref` attribute:  
  
```  
// cpp_attr_ref_ref.cpp  
// compile with: /LD  
#include <windows.h>   
[module(name="ATLFIRELib")];  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl  
{  
   [id(1), unique] char * GetFirstName([in, ref] char * pszFullName );   
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`typedef`, interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../VS_visualcpp/Typedef--Enum--Union--and-Struct-Attributes.md)   
 [Parameter Attributes](../VS_visualcpp/Parameter-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)