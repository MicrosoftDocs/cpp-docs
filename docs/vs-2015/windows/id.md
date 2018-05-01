---
title: "id | Microsoft Docs"
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
  - "vc-attr.id"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "id attribute"
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# id
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [id](https://docs.microsoft.com/cpp/windows/id).  
  
Specifies a `dispid` parameter for a member function (either a property or a method, in an interface or dispinterface).  
  
## Syntax  
  
```  
  
      [ id(  
   dispid  
) ]  
```  
  
#### Parameters  
 `dispid`  
 The dispatch ID for the interface method.  
  
## Remarks  
 The **id** C++ attribute has the same functionality as the [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) MIDL attribute.  
  
## Example  
 See the example for [bindable](../windows/bindable.md) for an example of how to use **id**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Data Member Attributes](../windows/data-member-attributes.md)   
 [defaultvalue](../windows/defaultvalue.md)   
 [in](../windows/in-cpp.md)   
 [out](../windows/out-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



