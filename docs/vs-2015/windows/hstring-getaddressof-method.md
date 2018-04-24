---
title: "HString::GetAddressOf Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HString::GetAddressOf"
dev_langs: 
  - "C++"
ms.assetid: 6050decf-5f99-49f0-9497-1c8192c485ae
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HString::GetAddressOf Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HString::GetAddressOf Method](https://docs.microsoft.com/cpp/windows/hstring-getaddressof-method).  
  
  
Retrieves a pointer to the underlying HSTRING handle.  
  
## Syntax  
  
```  
HSTRING* GetAddressOf() throw()  
```  
  
## Return Value  
 A pointer to the underlying HSTRING handle.  
  
## Remarks  
 After this operation, the string value of the underlying HSTRING handle is destroyed.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)

