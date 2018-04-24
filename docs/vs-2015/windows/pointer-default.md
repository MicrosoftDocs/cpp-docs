---
title: "pointer_default | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.pointer_default"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointer_default attribute"
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# pointer_default
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [pointer_default](https://docs.microsoft.com/cpp/windows/pointer-default).  
  
Specifies the default pointer attribute for all pointers, except top-level pointers that appear in parameter lists.  
  
## Syntax  
  
```  
  
      [ pointer_default(  
   value  
) ]  
```  
  
#### Parameters  
 *value*  
 A value that describes the pointer type: **ptr**, `ref`, or **unique**.  
  
## Remarks  
 The **pointer_default** C++ attribute has the same functionality as the [pointer_default](http://msdn.microsoft.com/library/windows/desktop/aa367141) MIDL attribute.  
  
## Example  
 See the example for [defaultvalue](../windows/defaultvalue.md) for a sample use of **pointer_default**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



