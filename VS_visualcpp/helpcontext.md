---
title: "helpcontext"
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
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
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
# helpcontext
Specifies a context ID that lets the user view information about this element in the Help file.  
  
## Syntax  
  
```  
  
      [ helpcontext(  
   id  
) ]  
```  
  
#### Parameters  
 `id`  
 The context ID of the help topic. See [HTML Help: Context-Sensitive Help for Your Programs](../VS_visualcpp/HTML-Help--Context-Sensitive-Help-for-Your-Programs.md) for more information on context IDs.  
  
## Remarks  
 The **helpcontext** C++ attribute has the same functionality as the [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) MIDL attribute.  
  
## Example  
 See the example for [defaultvalue](../VS_visualcpp/defaultvalue.md) for an example of how to use **helpcontext**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`, `typedef`, **class**, method, property|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Interface Attributes](../VS_visualcpp/Interface-Attributes.md)   
 [Class Attributes](../VS_visualcpp/Class-Attributes.md)   
 [Method Attributes](../VS_visualcpp/Method-Attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../VS_visualcpp/Typedef--Enum--Union--and-Struct-Attributes.md)   
 [helpfile](../VS_visualcpp/helpfile.md)   
 [helpstring](../VS_visualcpp/helpstring.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)