---
title: "switch_type"
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
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
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
# switch_type
Identifies the type of the variable used as the union discriminant.  
  
## Syntax  
  
```  
  
[switch_type(  
type  
}]  
  
```  
  
#### Parameters  
 `type`  
 The switch type, can be an integer, character, Boolean, or enumeration type.  
  
## Remarks  
 The **switch_type** C++ attribute has the same functionality as the [switch_type](http://msdn.microsoft.com/library/windows/desktop/aa367276) MIDL attribute.  
  
 C++ attributes do not support [encapsulated unions](http://msdn.microsoft.com/library/windows/desktop/aa366811). [Nonencapsulated unions](http://msdn.microsoft.com/library/windows/desktop/aa367119) are supported only in the following form:  
  
```  
// cpp_attr_ref_switch_type.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLibrary")];  
[ export ]  
struct SizedValue2 {  
   [switch_type("char"), switch_is(kind)] union {  
      [case(1), string]  
         wchar_t* wval;  
      [default, string]  
         char* val;  
   };  
   char kind;  
};  
```  
  
## Example  
 See the [case](../VS_visualcpp/case--C---.md) example for a sample use of **switch_type**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`typedef`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../VS_visualcpp/Typedef--Enum--Union--and-Struct-Attributes.md)   
 [export](../VS_visualcpp/export.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)