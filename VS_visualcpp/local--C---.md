---
title: "local (C++)"
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
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
caps.latest.revision: 9
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
# local (C++)
When used in the interface header, allows you to use the MIDL compiler as a header generator. When used in an individual function, designates a local procedure for which no stubs are generated.  
  
## Syntax  
  
```  
  
[local]  
  
```  
  
## Remarks  
 The `local` C++ attribute has the same functionality as the [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) MIDL attribute.  
  
## Example  
 See [call_as](../VS_visualcpp/call_as.md) for an example of how to use `local`.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**dispinterface**|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Interface Attributes](../VS_visualcpp/Interface-Attributes.md)   
 [Method Attributes](../VS_visualcpp/Method-Attributes.md)   
 [call_as](../VS_visualcpp/call_as.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)