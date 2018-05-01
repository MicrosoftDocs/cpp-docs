---
title: "ComPtr::ReleaseAndGetAddressOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseAndGetAddressOf method"
ms.assetid: 3751dcb4-d50e-432c-89e4-e736be34d434
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ComPtr::ReleaseAndGetAddressOf Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ComPtr::ReleaseAndGetAddressOf Method](https://docs.microsoft.com/cpp/windows/comptr-releaseandgetaddressof-method).  
  
  
Releases the interface associated with this ComPtr and then retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface that was released.  
  
## Syntax  
  
```  
T** ReleaseAndGetAddressOf();  
```  
  
## Return Value  
 The address of the [ptr_](../windows/comptr-ptr-data-member.md) data member of this ComPtr.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)   
 [ComPtr::ptr_ Data Member](../windows/comptr-ptr-data-member.md)

