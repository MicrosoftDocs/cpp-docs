---
title: "HString::CopyTo Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: a1fd2ef0-e175-4c18-927b-550e02a89e43
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::CopyTo Method
Copies the current **HString** object to an HSTRING object.  
  
## Syntax  
  
```  
HRESULT CopyTo(  
   _Out_ HSTRING *str  
   ) const throw();  
```  
  
#### Parameters  
 *str*  
 The HSTRING that receives the copy.  
  
## Remarks  
 This method calls the [WindowsDuplicateString](http://msdn.microsoft.com/library/br224634.aspx) function.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)