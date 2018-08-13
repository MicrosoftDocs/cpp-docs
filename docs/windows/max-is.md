---
title: "max_is | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.max_is"]
dev_langs: ["C++"]
helpviewer_keywords: ["max_is attribute"]
ms.assetid: 7c851f5c-6649-4d77-a792-247c37d8f560
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# max_is
Designates the maximum value for a valid array index.  
  
## Syntax  
  
```cpp  
[ max_is(  
   "expression"  
) ]  
```  
  
### Parameters  
 *expression*  
 One or more C-language expressions. Empty argument slots are allowed.  
  
## Remarks  
 The **max_is** C++ attribute has the same functionality as the [max_is](http://msdn.microsoft.com/library/windows/desktop/aa367074) MIDL attribute.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Field in **struct** or **union**, interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**size_is**|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## Example  
 See [first_is](../windows/first-is.md) for an example of how to specify a section of an array.  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [first_is](../windows/first-is.md)   
 [last_is](../windows/last-is.md)   
 [length_is](../windows/length-is.md)   
 [size_is](../windows/size-is.md)   