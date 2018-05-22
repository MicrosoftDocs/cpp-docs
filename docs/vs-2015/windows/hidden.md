---
title: "hidden | Microsoft Docs"
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
  - "vc-attr.hidden"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hidden attribute"
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hidden
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [hidden](https://docs.microsoft.com/cpp/windows/hidden).  
  
Indicates that the item exists but should not be displayed in a user-oriented browser.  
  
## Syntax  
  
```  
  
[hidden]  
  
```  
  
## Remarks  
 The **hidden** C++ attribute has the same functionality as the [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) MIDL attribute.  
  
## Example  
 See the example for [bindable](../windows/bindable.md) for an example of how to use **hidden**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`, **class**, `struct`, method, property|  
|**Repeatable**|No|  
|**Required attributes**|**coclass** (when applied to **class** or `struct`)|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



