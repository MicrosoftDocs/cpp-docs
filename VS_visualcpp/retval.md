---
title: "retval"
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
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
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
# retval
Designates the parameter that receives the return value of the member.  
  
## Syntax  
  
```  
  
[retval]  
  
```  
  
## Remarks  
 The **retval** C++ attribute has the same functionality as the [retval](http://msdn.microsoft.com/library/windows/desktop/aa367158) MIDL attribute.  
  
 **retval** must appear on the last argument in a function's declaration.  
  
## Example  
 See the example for [bindable](../VS_visualcpp/bindable.md) for a sample use of **retval**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|**out**|  
|**Invalid attributes**|**in**|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Parameter Attributes](../VS_visualcpp/Parameter-Attributes.md)   
 [Method Attributes](../VS_visualcpp/Method-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)