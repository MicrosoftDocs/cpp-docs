---
title: "pragma"
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
ms.assetid: 3f90d023-b8b5-4007-8311-008bb72cbea1
caps.latest.revision: 11
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
# pragma
Emits the specified string into the generated .idl file without the use of  quotation marks. .  
  
## Syntax  
  
```  
  
      [ pragma(  
   pragma_statement  
) ];  
```  
  
#### Parameters  
 *pragma_statement*  
 The pragma that you want to go into the generated .idl file.  
  
## Remarks  
 The **pragma** C++ attribute has the same functionality as the [pragma](http://msdn.microsoft.com/library/windows/desktop/aa367143) MIDL attribute.  
  
## Example  
  
```  
// cpp_attr_ref_pragma.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyLib")];  
[pragma(pack(4))];  
  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface A  
{  
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Anywhere|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Stand-Alone Attributes](../VS_visualcpp/Stand-Alone-Attributes.md)   
 [pack](../VS_visualcpp/pack.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)