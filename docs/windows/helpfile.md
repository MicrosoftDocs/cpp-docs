---
title: "helpfile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.helpfile"]
dev_langs: ["C++"]
helpviewer_keywords: ["helpfile attribute"]
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# helpfile
Sets the name of the Help file for a type library.  
  
## Syntax  
  
```  
[ helpfile(  
   "filename"  
) ]  
```  
  
### Parameters  
 *filename*  
 The name of the file that contains the help topics.  
  
## Remarks  
 The **helpfile** C++ attribute has the same functionality as the [helpfile](http://msdn.microsoft.com/library/windows/desktop/aa366853) MIDL attribute.  
  
## Example  
 See the example for [module](../windows/module-cpp.md) for an example of how to use **helpfile**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**interface**, **typedef**, **class**, method, **property**|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [helpcontext](../windows/helpcontext.md)   
 [helpstring](../windows/helpstring.md)   