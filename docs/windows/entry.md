---
title: "entry | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.entry"]
dev_langs: ["C++"]
helpviewer_keywords: ["entry attribute"]
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# entry
Specifies an exported function or constant in a module by identifying the entry point in the DLL.  
  
## Syntax  
  
```cpp  
[ entry(  
   id  
) ]  
```  
  
### Parameters  
 *id*  
 The ID of the entry point.  
  
## Remarks  
 The **entry** C++ attribute has the same functionality as the [entry](http://msdn.microsoft.com/library/windows/desktop/aa366815) MIDL attribute.  
  
## Example  
 See the example for [idl_module](../windows/idl-module.md) for an example use of **entry**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`idl_module` attribute|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   