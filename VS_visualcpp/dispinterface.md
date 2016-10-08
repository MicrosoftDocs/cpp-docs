---
title: "dispinterface"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# dispinterface
Places an interface in the .idl file as a dispatch interface.  
  
## Syntax  
  
```  
  
[dispinterface]  
  
```  
  
## Remarks  
 When the **dispinterface** C++ attribute precedes an interface, it causes the interface to be placed inside the library block in the generated .idl file.  
  
 Unless you specify a base class, a dispatch interface will derive from `IDispatch`. You must specify an [id](../VS_visualcpp/id.md) for the members of a dispatch interface.  
  
 The usage example for [dispinterface](http://msdn.microsoft.com/library/windows/desktop/aa366802) in the MIDL documentation:  
  
```  
dispinterface helloPro   
   { interface hello; };   
```  
  
 is not valid for the **dispinterface** attribute.  
  
## Example  
 See the example for [bindable](../VS_visualcpp/bindable.md) for an example of how to use **dispinterface**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**dual**, **object**, **oleautomation**, `local`, **ms_union**|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Attributes by Usage](../VS_visualcpp/Attributes-by-Usage.md)   
 [uuid](../VS_visualcpp/uuid--C---Attributes-.md)   
 [dual](../VS_visualcpp/dual.md)   
 [custom](../VS_visualcpp/custom--C---.md)   
 [object](../VS_visualcpp/object--C---.md)   
 [__interface](../VS_visualcpp/__interface.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)