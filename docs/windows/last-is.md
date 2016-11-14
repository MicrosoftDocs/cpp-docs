---
title: "last_is | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.last_is"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "last_is attribute"
ms.assetid: 9e045ac0-fa38-4249-af55-67bde5d0a58c
caps.latest.revision: 9
author: "mikeblome"
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
# last_is
Specifies the index of the last array element to be transmitted.  
  
## Syntax  
  
```  
  
      [ last_is(  
   "expression"  
) ]  
```  
  
#### Parameters  
 *expression*  
 One or more C-language expressions. Empty argument slots are allowed.  
  
## Remarks  
 The **last_is** C++ attribute has the same functionality as the [last_is](http://msdn.microsoft.com/library/windows/desktop/aa367066) MIDL attribute.  
  
## Example  
 See [first_is](../windows/first-is.md) for an example of how to specify a section of an array.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Field in `struct` or **union**, interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [first_is](../windows/first-is.md)   
 [max_is](../windows/max-is.md)   
 [length_is](../windows/length-is.md)   
 [size_is](../windows/size-is.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)