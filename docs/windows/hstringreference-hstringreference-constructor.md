---
title: "HStringReference::HStringReference Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HStringReference::HStringReference"]
dev_langs: ["C++"]
ms.assetid: 29f5fe11-3928-4f60-9861-f0894247bfcb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HStringReference::HStringReference Constructor
Initializes a new instance of the **HStringReference** class.  
  
## Syntax  
  
```cpp  
template<unsigned int sizeDest>  
HStringReference(wchar_t const (&str)[ sizeDest]) throw();  
  
template<unsigned int sizeDest>  
HStringReference(wchar_t const (&str)[ sizeDest],   
                 unsigned int len) throw();  
  
HStringReference(HStringReference&& other) throw();  
```  
  
### Parameters  
 *sizeDest*  
 A template parameter that specifies the size of the destination **HStringReference** buffer.  
  
 *str*  
 A reference to a wide-character string.  
  
 *len*  
 The maximum length of the *str* parameter buffer to use in this operation. If the *len* parameter isn't specified, the entire *str* parameter is used. If *len* is greater than *sizeDest*, *len* is set to *sizeDest*-1.  
  
 *other*  
 Another **HStringReference** object.  
  
## Remarks  
 The first constructor initializes a new **HStringReference** object that the same size as parameter *str*.  
  
 The second constructor initializes a new **HStringReference** object that the size specifeid by parameter *len*.  
  
 The third constructor initializes a new **HStringReference** object to the value of the *other* parameter, and then destroys the *other* parameter.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HStringReference Class](../windows/hstringreference-class.md)