---
title: "version (C++)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# version (C++)
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
 See the [bindable](../VS_visualcpp/bindable.md) example for a sample use of **version**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|**coclass**|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [Compiler Attributes](../VS_visualcpp/Compiler-Attributes.md)   
 [Class Attributes](../VS_visualcpp/Class-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)