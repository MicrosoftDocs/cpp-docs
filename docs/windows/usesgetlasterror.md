---
title: "usesgetlasterror | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["vc-attr.usesgetlasterror"]
dev_langs: ["C++"]
helpviewer_keywords: ["usesgetlasterror attribute"]
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# usesgetlasterror
Tells the caller that if there is an error when calling that function, then the caller can then call `GetLastError` to retrieve the error code.  
  
## Syntax  
  
```  
  
[usesgetlasterror]  
  
```  
  
## Remarks  
 The **usesgetlasterror** C++ attribute has the same functionality as the [usesgetlasterror](http://msdn.microsoft.com/library/windows/desktop/aa367297) MIDL attribute.  
  
## Example  
 See the [idl_module](../windows/idl-module.md) example for a sample of how to use **usesgetlasterror**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**module** attribute|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   