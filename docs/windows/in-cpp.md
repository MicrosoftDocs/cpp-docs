---
title: "in (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.in"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "in attribute"
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
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
# in (C++)
Indicates that a parameter is to be passed from the calling procedure to the called procedure.  
  
## Syntax  
  
```  
  
[in]  
  
```  
  
## Remarks  
 The **in** C++ attribute has the same functionality as the [in](http://msdn.microsoft.com/library/windows/desktop/aa367051) MIDL attribute.  
  
## Example  
 See [bindable](../windows/bindable.md) for an example of how to use **in**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**retval**|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [defaultvalue](../windows/defaultvalue.md)   
 [id](../windows/id.md)   
 [out](../windows/out-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)