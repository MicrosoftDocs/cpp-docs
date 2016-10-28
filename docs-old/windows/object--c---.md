---
title: "object (C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "object attribute"
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
caps.latest.revision: 9
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
# object (C++)
Identifies a custom interface.  
  
## Syntax  
  
```  
  
[object]  
  
```  
  
## Remarks  
 When preceding an interface definition, the **object** C++ attribute causes the interface to be placed in the .idl file as a custom interface.  
  
 Any interface marked with object must inherit from **IUnknown**. This condition is satisfied if any of the base interfaces inherit from **IUnknown**. If no base interfaces inherit from **IUnknown**, the compiler will cause the interface marked with **object** to derive from **IUnknown**.  
  
## Example  
 See [nonbrowsable](../windows/nonbrowsable.md) for an example of how to use **object**.  
  
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
 [dual](../windows/dual.md)   
 [dispinterface](../windows/dispinterface.md)   
 [custom](../windows/custom--c---.md)   
 [__interface](../cpp/__interface.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)