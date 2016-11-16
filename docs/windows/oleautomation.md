---
title: "oleautomation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.oleautomation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oleautomation attribute"
ms.assetid: c1086c91-260b-4dc3-b244-662852d09906
caps.latest.revision: 9
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
# oleautomation
Indicates that an interface is compatible with Automation.  
  
## Syntax  
  
```  
  
[oleautomation]  
  
```  
  
## Remarks  
 The **oleautomation** C++ attribute has the same functionality as the [oleautomation](http://msdn.microsoft.com/library/windows/desktop/aa367129) MIDL attribute.  
  
## Example  
 See the examples for [defaultvalue](../windows/defaultvalue.md) and [nonextensible](../windows/nonextensible.md) for a sample use of **oleautomation**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**dispinterface**|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)