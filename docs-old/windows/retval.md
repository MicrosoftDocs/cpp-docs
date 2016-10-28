---
title: "retval"
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
  - "vc-attr.retval"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "retval attribute"
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
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
# retval
Designates the parameter that receives the return value of the member.  
  
## Syntax  
  
```  
  
[retval]  
  
```  
  
## Remarks  
 The **retval** C++ attribute has the same functionality as the [retval](http://msdn.microsoft.com/library/windows/desktop/aa367158) MIDL attribute.  
  
 **retval** must appear on the last argument in a function's declaration.  
  
## Example  
 See the example for [bindable](../windows/bindable.md) for a sample use of **retval**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|**out**|  
|**Invalid attributes**|**in**|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)