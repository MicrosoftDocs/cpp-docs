---
title: "out (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.out"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "out attribute"
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# out (C++)
Identifies pointer parameters that are returned from the called procedure to the calling procedure (from the server to the client).  
  
## Syntax  
  
```  
  
[out]  
  
```  
  
## Remarks  
 The **out** C++ attribute has the same functionality as the [out](http://msdn.microsoft.com/library/windows/desktop/aa367136) MIDL attribute.  
  
## Example  
 See the example for [bindable](../windows/bindable.md) for a sample use of **out**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface parameter|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [defaultvalue](../windows/defaultvalue.md)   
 [id](../windows/id.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)