---
title: "HStringReference::HStringReference Constructor | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference"
dev_langs: 
  - "C++"
ms.assetid: 29f5fe11-3928-4f60-9861-f0894247bfcb
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HStringReference::HStringReference Constructor
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HStringReference::HStringReference Constructor](https://docs.microsoft.com/cpp/windows/hstringreference-hstringreference-constructor).  
  
  
Initializes a new instance of the HStringReference class.  
  
## Syntax  
  
```cpp  
  
    template<unsigned int sizeDest>  
    HStringReference(wchar_t const (&str)[ sizeDest]) throw();  
  
    template<unsigned int sizeDest>  
    HStringReference(wchar_t const (&str)[ sizeDest],   
unsigned int len)  
       throw();  
  
    HStringReference(HStringReference&& other) throw();  
  
```  
  
#### Parameters  
 `sizeDest`  
 A template parameter that specifies the size of the destination HStringReference buffer.  
  
 `str`  
 A reference to a wide-character string.  
  
 `len`  
 The maximum length of the `str` parameter buffer to use in this operation. If the `len` parameter isn't specified, the entire `str` parameter is used. If `len` is greater than `sizeDest`, `len` is set to `sizeDest`-1.  
  
 `other`  
 Another HStringReference object.  
  
## Remarks  
 The first constructor initializes a new HStringReference object that the same size as parameter `str`.  
  
 The second constructor initializes a new HStringReference object that the size specifeid by parameter `len`.  
  
 The third constructor initializes a new HStringReference object to the value of the `other`parameter, and then destroys the `other` parameter.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HStringReference Class](../windows/hstringreference-class.md)

