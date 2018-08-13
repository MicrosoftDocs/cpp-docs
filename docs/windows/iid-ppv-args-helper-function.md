---
title: "IID_PPV_ARGS_Helper Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/IID_PPV_ARGS_Helper"]
dev_langs: ["C++"]
helpviewer_keywords: ["IID_PPV_ARGS_Helper function"]
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# IID_PPV_ARGS_Helper Function
Verifies that the type of the specified argument derives from the `IUnknown` interface.  
  
> [!IMPORTANT]
>  This template specialization supports the WRL infrastructure and is not intended to be used directly from your code. Use [IID_PPV_ARGS](http://msdn.microsoft.com/library/windows/desktop/ee330727.aspx) instead.  
  
## Syntax  
  
```cpp  
template<typename T>  
void** IID_PPV_ARGS_Helper(  
   _Inout_ Microsoft::WRL::Details::ComPtrRef<T> pp  
);  
```  
  
### Parameters  
 *T*  
 The type of argument *pp*.  
  
 *pp*  
 A doubly-indirect pointer.  
  
## Return Value  
 Argument *pp* cast to a pointer-to-a-pointer to **void**.  
  
## Remarks  
 A compile-time error is generated if the template parameter *T* doesn't derive from `IUnknown`.  
  
## Requirements  
 **Header:** client.h  
  
## See Also  
 [Reference (Windows Runtime Library)](http://msdn.microsoft.com/00000000-0000-0000-0000-000000000000)