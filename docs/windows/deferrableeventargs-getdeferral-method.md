---
title: "DeferrableEventArgs::GetDeferral Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: ef6dc7c5-b0be-4b85-8507-d3fd97f2185d
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
# DeferrableEventArgs::GetDeferral Method
Gets a reference to the [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) object which represents a deferred event.  
  
## Syntax  
  
```cpp  
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)  
```  
  
#### Parameters  
 `result`  
 A pointer that will reference the [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) object when the call completes.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 For a code example, see [DeferrableEventArgs Class](../windows/deferrableeventargs-class.md).  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [DeferrableEventArgs Class](../windows/deferrableeventargs-class.md)