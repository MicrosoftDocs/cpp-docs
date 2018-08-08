---
title: "size_is | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.size_is"]
dev_langs: ["C++"]
helpviewer_keywords: ["size_is attribute"]
ms.assetid: 70192d09-f6c5-4d52-b3fe-303f8cb10aa5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# size_is
Specify the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.  
  
## Syntax  
  
```cpp  
[ size_is(  
   "expression"  
) ]  
```  
  
### Parameters  
 *expression*  
 The size of memory allocated for sized pointers.  
  
## Remarks  
 The **size_is** C++ attribute has the same functionality as the [size_is](http://msdn.microsoft.com/library/windows/desktop/aa367164) MIDL attribute.  
  
## Example  
 See the example for [first_is](../windows/first-is.md) for a sample of how to specify a section of an array.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Field in **struct** or **union**, interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|`max_is`|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [first_is](../windows/first-is.md)   
 [last_is](../windows/last-is.md)   
 [max_is](../windows/max-is.md)   
 [length_is](../windows/length-is.md)   