---
title: "RuntimeClass::GetRuntimeClassName Method | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClass::GetRuntimeClassName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetRuntimeClassName method"
ms.assetid: f6388163-fe65-4948-a4bc-ae6826f480e7
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# RuntimeClass::GetRuntimeClassName Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [RuntimeClass::GetRuntimeClassName Method](https://docs.microsoft.com/cpp/windows/runtimeclass-getruntimeclassname-method).  
  
  
Gets the runtime class name of the current RuntimeClass object.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetRuntimeClassName  
)(_Out_ HSTRING* runtimeName);  
```  
  
## Parameters  
 `runtimeName`  
 When this operation completes, the runtime class name.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 An assert error is emitted if __WRL_STRICT\__or \__WRL_FORCE_INSPECTABLE_CLASS_MACRO\_\_ isn't defined.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [RuntimeClass Class](../windows/runtimeclass-class.md)

