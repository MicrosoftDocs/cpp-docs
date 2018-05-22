---
title: "_pAtlModule | Microsoft Docs"
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
  - "ATLBASE/_pAtlModule"
  - "_pAtlModule"
  - "ATL::_pAtlModule"
  - "ATL._pAtlModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pAtlModule variable"
  - "_pAtlModule variable"
ms.assetid: 0ecde3a9-3f4d-4c7b-bb54-713ce05c4777
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _pAtlModule
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_pAtlModule](https://docs.microsoft.com/cpp/atl/reference/patlmodule).  
  
  
A global variable storing a pointer to the current module.  
  
## Syntax  
  
```  
__declspec(selectany) CAtlModule* _pAtlModule  
```  
  
## Remarks  
 Methods on this global variable can be used to provide the functionality that the (now obsolete) class [CComModule](../../atl/reference/ccommodule-class.md) provided in Visual C++ 6.0.  
  
## Example  
 [!code-cpp[NVC_ATL_Windowing#97](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyCtrl.cpp#97)]  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [Global Variables](../../atl/reference/atl-global-variables.md)









