---
title: "in (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.in"]
dev_langs: ["C++"]
helpviewer_keywords: ["in attribute"]
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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