---
title: "_pAtlModule"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 10
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
# _pAtlModule
A global variable storing a pointer to the current module.  
  
## Syntax  
  
```  
__declspec(selectany) CAtlModule * _pAtlModule  
```  
  
## Remarks  
 Methods on this global variable can be used to provide the functionality that the (now obsolete) class [CComModule](../atl/ccommodule-class.md) provided in Visual C++ 6.0.  
  
## Example  
 [!code[NVC_ATL_Windowing#97](../atl/codesnippet/CPP/_patlmodule_1.cpp)]  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [Global Variables](../atl/atl-global-variables.md)