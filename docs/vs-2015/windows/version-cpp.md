---
title: "version (C++) | Microsoft Docs"
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
  - "vc-attr.version"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "version attribute"
  - "version information, version attribute"
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# version (C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [version (C++)](https://docs.microsoft.com/cpp/windows/version-cpp).  
  
Identifies a particular version among multiple versions of a class.  
  
## Syntax  
  
```  
  
      [ version(  
   "version"  
) ]  
```  
  
#### Parameters  
 *version*  
 The version number of the coclass. If not specified, 1.0 will be placed in the .idl file.  
  
## Remarks  
 The **version** C++ attribute has the same functionality as the [version](http://msdn.microsoft.com/library/windows/desktop/aa367306) MIDL attribute and is passed through to the generated .idl file.  
  
## Example  
 See the [bindable](../windows/bindable.md) example for a sample use of **version**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|**coclass**|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



