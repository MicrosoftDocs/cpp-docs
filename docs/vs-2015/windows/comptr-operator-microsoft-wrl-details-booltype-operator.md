---
title: "ComPtr::operator Microsoft::WRL::Details::BoolType Operator | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: cfba6521-fb30-4fb8-afb2-cfab1cb5e0b8
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ComPtr::operator Microsoft::WRL::Details::BoolType Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ComPtr::operator Microsoft::WRL::Details::BoolType Operator](https://docs.microsoft.com/cpp/windows/comptr-operator-microsoft-wrl-details-booltype-operator).  
  
  
Indicates whether or not a ComPtr is managing the object lifetime of an interface.  
  
## Syntax  
  
```  
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;  
```  
  
## Return Value  
 If an interface is associated with this ComPtr, the address of the [BoolStruct::Member](../windows/boolstruct-member-data-member.md) data member; otherwise, `nullptr`.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)   
 [ComPtr::Get Method](../windows/comptr-get-method.md)

