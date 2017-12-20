---
title: "ATL Global Variables | Microsoft Docs"
ms.custom: ""
ms.date: "12/06/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATLBASE/_pAtlModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "global variables, ATL"
  - "_pAtlModule"
ms.assetid: e881a319-99ca-4f5d-8a0b-34b3dcd0f37f
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# ATL Global Variables

## _pAtlModule  
A global variable storing a pointer to the current module.  

```cpp  
__declspec(selectany) CAtlModule * _pAtlModule  
```  
### Remarks  
Methods on this global variable can be used to provide the functionality that the (now obsolete) class CComModule provided in Visual C++ 6.0.

### Example  

```cpp  
LONG lLocks = _pAtlModule->GetLockCount();  
```  
### Requirements  
 **Header:** atlbase.h  

