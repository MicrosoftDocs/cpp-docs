---
title: "dispinterface"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.dispinterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dispinterface attribute"
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
caps.latest.revision: 9
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# dispinterface
Places an interface in the .idl file as a dispatch interface.  
  
## Syntax  
  
```  
  
[dispinterface]  
  
```  
  
## Remarks  
 When the **dispinterface** C++ attribute precedes an interface, it causes the interface to be placed inside the library block in the generated .idl file.  
  
 Unless you specify a base class, a dispatch interface will derive from `IDispatch`. You must specify an [id](../windows/id.md) for the members of a dispatch interface.  
  
 The usage example for [dispinterface](http://msdn.microsoft.com/library/windows/desktop/aa366802) in the MIDL documentation:  
  
```  
dispinterface helloPro   
   { interface hello; };   
```  
  
 is not valid for the **dispinterface** attribute.  
  
## Example  
 See the example for [bindable](../windows/bindable.md) for an example of how to use **dispinterface**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`interface`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**dual**, **object**, **oleautomation**, `local`, **ms_union**|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Attributes by Usage](../windows/attributes-by-usage.md)   
 [uuid](../windows/uuid--c---attributes-.md)   
 [dual](../windows/dual.md)   
 [custom](../windows/custom--c---.md)   
 [object](../windows/object--c---.md)   
 [__interface](../cpp/__interface.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)