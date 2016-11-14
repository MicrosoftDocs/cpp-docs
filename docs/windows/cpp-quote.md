---
title: "cpp_quote | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.cpp_quote"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cpp_quote attribute"
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
caps.latest.revision: 10
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
# cpp_quote
Emits the specified string, without the quote characters, into the generated .idl file.  
  
## Syntax  
  
```  
  
      [ cpp_quote(  
   "statement"  
) ];  
```  
  
#### Parameters  
 *statement*  
 A C instruction.  
  
## Remarks  
 The **cpp_quote** C++ attribute is useful if you want to put a preprocessor directive in an .idl file.  
  
 You can also use **cpp_quote** and generate an .h file as part of the MIDL compilation. For example, if you have a C++ header file that uses C++ IDL attributes but cannot use this file for some task, then you can compile it to create a MIDL-generated .h file, which you should be able to use.  
  
 The **cpp_quote** attribute has the same functionality as the [cpp_quote](http://msdn.microsoft.com/library/windows/desktop/aa366765) MIDL attribute.  
  
## Example  
 See the example for [dual](../windows/dual.md) for an example use how to use **cpp_quote**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Anywhere|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand-Alone Attributes](../windows/stand-alone-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)