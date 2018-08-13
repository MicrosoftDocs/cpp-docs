---
title: "local (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.local"]
dev_langs: ["C++"]
helpviewer_keywords: ["local attribute"]
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# local (C++)
When used in the interface header, allows you to use the MIDL compiler as a header generator. When used in an individual function, designates a local procedure for which no stubs are generated.  
  
## Syntax  
  
```cpp  
[local]  
```  
  
## Remarks  
 The **local** C++ attribute has the same functionality as the [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) MIDL attribute.  
  
## Example  
 See [call_as](../windows/call-as.md) for an example of how to use **local**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**interface**, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|`dispinterface`|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [call_as](../windows/call-as.md)   