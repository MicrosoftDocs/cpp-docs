---
title: "HString::Set Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HString::Set"
dev_langs: 
  - "C++"
ms.assetid: c9b3d613-95c4-48b0-999d-f5baf0804faf
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HString::Set Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HString::Set Method](https://docs.microsoft.com/cpp/windows/hstring-set-method).  
  
  
Sets the value of the current HString object to the specified wide-character string or HString parameter.  
  
## Syntax  
  
```  
  
HRESULT Set(  
          const wchar_t* str) throw();  
HRESULT Set(   
          const wchar_t* str,   
          unsigned int len  
           ) throw();  
HRESULT Set(  
          const HSTRING& hstr  
           ) throw();  
```  
  
#### Parameters  
 `str`  
 A wide-character string.  
  
 `len`  
 The maximum length of the `str` parameter that is assigned to the current HString object.  
  
 `hstr`  
 An existing HString object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)

