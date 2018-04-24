---
title: "DeferrableEventArgs::GetDeferral Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: ef6dc7c5-b0be-4b85-8507-d3fd97f2185d
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DeferrableEventArgs::GetDeferral Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [DeferrableEventArgs::GetDeferral Method](https://docs.microsoft.com/cpp/windows/deferrableeventargs-getdeferral-method).  
  
  
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

