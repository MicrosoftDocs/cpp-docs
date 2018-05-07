---
title: "helpstringcontext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.helpstringcontext"]
dev_langs: ["C++"]
helpviewer_keywords: ["helpstringcontext attribute [C++]"]
ms.assetid: d4cd135e-d91c-4aa3-9353-8aeb096f52cf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# helpstringcontext
Specifies the ID of a help topic in an .hlp or .chm file.  
  
## Syntax  
  
```  
  
      [ helpstringcontext(  
   contextID  
) ]  
```  
  
#### Parameters  
 `contextID`  
 A 32-bit Help context identifier in the Help file.  
  
## Remarks  
 The **helpstringcontext** C++ attribute has the same functionality as the [helpstringcontext](http://msdn.microsoft.com/library/windows/desktop/aa366858) ODL attribute.  
  
## Example  
  
```  
// cpp_attr_ref_helpstringcontext.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[   object,   
   helpstring("help string"),   
   helpstringcontext(1),   
   uuid="11111111-1111-1111-1111-111111111111"  
]  
__interface IMyI   
{  
   HRESULT xx();  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `interface`, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [module](../windows/module-cpp.md)   