---
title: "pragma | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.pragma"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pragma attribute"
ms.assetid: 3f90d023-b8b5-4007-8311-008bb72cbea1
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
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand-Alone Attributes](../windows/stand-alone-attributes.md)   
 [pack](../preprocessor/pack.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)