---
title: "helpstring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.helpstring"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "helpstring attribute [C++]"
ms.assetid: 0401e905-a63e-4fad-98d0-d1efea111966
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
# helpstring
Specifies a character string that is used to describe the element to which it applies.  
  
## Syntax  
  
```  
  
      [ helpstring(  
   "string"  
) ]  
```  
  
#### Parameters  
 `string`  
 The text of the help string.  
  
## Remarks  
 The **helpstring** C++ attribute has the same functionality as the [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) MIDL attribute.  
  
## Example  
 See the example for [defaultvalue](../windows/defaultvalue.md) for an example of how to use **helpstring**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`, `typedef`, **class**, method, property|  
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
 [helpfile](../windows/helpfile.md)   
 [helpcontext](../windows/helpcontext.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)