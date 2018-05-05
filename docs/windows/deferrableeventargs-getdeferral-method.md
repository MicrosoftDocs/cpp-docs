---
title: "DeferrableEventArgs::GetDeferral Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: ef6dc7c5-b0be-4b85-8507-d3fd97f2185d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# DeferrableEventArgs::GetDeferral Method
Gets a reference to the [Deferral](http://go.microsoft.com/fwlink/p/?linkid=526520) object which represents a deferred event.  
  
## Syntax  
  
```cpp  
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)  
```  
  
#### Parameters  
 `result`  
 A pointer that will reference the [Deferral](http://go.microsoft.com/fwlink/p/?linkid=526520) object when the call completes.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 For a code example, see [DeferrableEventArgs Class](../windows/deferrableeventargs-class.md).  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [DeferrableEventArgs Class](../windows/deferrableeventargs-class.md)