---
title: "HStringReference::CopyTo Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: 179d9b14-1ced-4b16-b297-19ca1e92a462
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# HStringReference::CopyTo Method
Copies the current HStringReference object to an HSTRING object.  
  
## Syntax  
  
```  
  
HRESULT CopyTo(  
   _Out_ HSTRING *str  
   ) const throw();  
```  
  
#### Parameters  
 `str`  
 The HSTRING that receives the copy.  
  
## Remarks  
 This method calls the [WindowsDuplicateString](http://msdn.microsoft.com/library/br224634.aspx) function.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HStringReference Class](../windows/hstringreference-class.md)