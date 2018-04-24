---
title: "DontUseNewUseMake::operator new Operator | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator new operator"
ms.assetid: 6af07a0d-2271-430c-9d9b-5a4223fed049
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DontUseNewUseMake::operator new Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [DontUseNewUseMake::operator new Operator](https://docs.microsoft.com/cpp/windows/dontusenewusemake-operator-new-operator).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
void* operator new(  
   size_t,  
   _In_ void* placement  
);  
```  
  
#### Parameters  
 `__unnamed0`  
 An unnamed parameter that specifies the number of bytes of memory to allocate.  
  
 `placement`  
 The type to be allocated.  
  
## Return Value  
 Provides a way to pass additional arguments if you overload operator `new`.  
  
## Remarks  
 Overloads operator `new` and prevents it from being used in RuntimeClass.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [DontUseNewUseMake Class](../windows/dontusenewusemake-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

