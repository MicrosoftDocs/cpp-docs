---
title: "HString::HString Constructor | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HString::HString"
dev_langs: 
  - "C++"
ms.assetid: 6da12785-ed01-4720-a004-667db60298f1
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HString::HString Constructor
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HString::HString Constructor](https://docs.microsoft.com/cpp/windows/hstring-hstring-constructor).  
  
  
Initializes a new instance of the HString class.  
  
## Syntax  
  
```cpp  
  
HString(HSTRING hstr = nullptr) throw();  
HString(HString&& other) throw();  
```  
  
#### Parameters  
 `hstr`  
 An HSTRING handle.  
  
 `other`  
 An existing HString object.  
  
## Remarks  
 The first constructor initializes a new HString object that is empty.  
  
 The second constructor initializes a new HString object to the value of the existing `other` parameter, and then destroys the `other` parameter.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)

