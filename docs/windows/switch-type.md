---
title: "switch_type | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.switch_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "switch_type attribute"
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
caps.latest.revision: 11
author: "mikeblome"
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
 See the [case](../windows/case-cpp.md) example for a sample use of **switch_type**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`typedef`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [export](../windows/export.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)