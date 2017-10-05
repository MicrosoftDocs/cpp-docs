---
title: "library_block | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["vc-attr.library_block"]
dev_langs: ["C++"]
helpviewer_keywords: ["library_block attribute"]
ms.assetid: ae7a7ebe-5e1a-4eda-a058-11bbd058ece8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# library_block
Places a construct inside the IDL library block.  
  
## Syntax  
  
```  
  
[library_block]  
  
```  
  
## Remarks  
 When you place a construct inside the library block, you ensure that it will be passed into the type library, regardless of whether it is referenced. By default, only constructs modified by the [coclass](../windows/coclass.md), [dispinterface](../windows/dispinterface.md), and [idl_module](../windows/idl-module.md) attributes are placed in the library block.  
  
## Example  
 In the following code, a custom interface is placed inside the library block.  
  
```  
// cpp_attr_ref_library_block.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib")];  
[object, library_block, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface IMyInterface {  
   HRESULT f1();  
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
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Stand-Alone Attributes](../windows/stand-alone-attributes.md)   