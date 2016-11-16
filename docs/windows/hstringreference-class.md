---
title: "HStringReference Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference"
dev_langs: 
  - "C++"
ms.assetid: 9bf823b1-17eb-4ac4-8c5d-27d27c7a4150
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# HStringReference Class
Represents an HSTRING that is created from an existing string.  
  
## Syntax  
  
```cpp  
class HStringReference;  
```  
  
## Remarks  
 The lifetime of the backing buffer in the new HSTRING is not managed by the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]. The caller allocates a source string on the stack frame to avoid a heap allocation and to eliminate the risk of a memory leak. Also, the caller must ensure that source string remains unchanged during the lifetime of the attached HSTRING. For more information, see [WindowsCreateStringReference function](http://msdn.microsoft.com/en-us/0361bb7e-da49-4289-a93e-de7aab8712ac).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[HStringReference::HStringReference Constructor](../windows/hstringreference-hstringreference-constructor.md)|Initializes a new instance of the HStringReference class.|  
  
### Members  
  
|Member|Description|  
|------------|-----------------|  
|[HStringReference::CopyTo Method](../windows/hstringreference-copyto-method.md)|Copies the current HStringReference object to an HSTRING object.|  
|[HStringReference::Get Method](../windows/hstringreference-get-method.md)|Retrieves the value of the underlying HSTRING handle.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[HStringReference::Operator= Operator](../windows/hstringreference-operator-assign-operator.md)|Moves the value of another HStringReference object to the current HStringReference object.|  
|[HStringReference::Operator== Operator](../windows/hstringreference-operator-equality-operator.md)|Indicates whether the two parameters are equal.|  
|[HStringReference::Operator!= Operator](../windows/hstringreference-operator-inequality-operator.md)|Indicates whether the two parameters are not equal.|  
  
## Inheritance Hierarchy  
 `HStringReference`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)