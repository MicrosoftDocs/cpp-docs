---
title: "CriticalSection::CriticalSection Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::CriticalSection::CriticalSection"]
dev_langs: ["C++"]
helpviewer_keywords: ["CriticalSection, constructor"]
ms.assetid: 930b89be-4d74-46bd-8879-5dd4d15bcbd0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# CriticalSection::CriticalSection Constructor
Initializes a synchronization object that is similar to a mutex object, but can be used by only the threads of a single process.  
  
## Syntax  
  
```cpp  
explicit CriticalSection(  
   ULONG spincount = 0  
);  
```  
  
### Parameters  
 *spincount*  
 The spin count for the critical section object. The default value is 0.  
  
## Remarks  
 For more information about critical sections and spincounts, see the `InitializeCriticalSectionAndSpinCount` function in the **Synchronization** section of the Windows API documenation.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [CriticalSection Class](../windows/criticalsection-class.md)