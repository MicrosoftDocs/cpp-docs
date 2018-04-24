---
title: "size_is | Microsoft Docs"
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
  - "vc-attr.size_is"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size_is attribute"
ms.assetid: 70192d09-f6c5-4d52-b3fe-303f8cb10aa5
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# size_is
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [size_is](https://docs.microsoft.com/cpp/windows/size-is).  
  
Specify the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.  
  
## Syntax  
  
```  
  
      [ size_is(  
   "expression"  
) ]  
```  
  
#### Parameters  
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
|**Applies to**|Field in `struct` or **union**, interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**max_is**|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [first_is](../windows/first-is.md)   
 [last_is](../windows/last-is.md)   
 [max_is](../windows/max-is.md)   
 [length_is](../windows/length-is.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



