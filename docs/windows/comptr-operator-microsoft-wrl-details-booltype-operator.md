---
title: "ComPtr::operator Microsoft::WRL::Details::BoolType Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: cfba6521-fb30-4fb8-afb2-cfab1cb5e0b8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::operator Microsoft::WRL::Details::BoolType Operator
Indicates whether or not a **ComPtr** is managing the object lifetime of an interface.  
  
## Syntax  
  
```cpp  
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;  
```  
  
## Return Value  
 If an interface is associated with this **ComPtr**, the address of the [BoolStruct::Member](../windows/boolstruct-member-data-member.md) data member; otherwise, **nullptr**.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)   
 [ComPtr::Get Method](../windows/comptr-get-method.md)