---
title: "helpfile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.helpfile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "helpfile attribute"
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
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
# helpfile
Sets the name of the Help file for a type library.  
  
## Syntax  
  
```  
  
      [ helpfile(  
   "filename"  
) ]  
```  
  
#### Parameters  
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
 [helpcontext](../windows/helpcontext.md)   
 [helpstring](../windows/helpstring.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)