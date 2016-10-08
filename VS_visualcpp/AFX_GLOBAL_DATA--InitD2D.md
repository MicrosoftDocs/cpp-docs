---
title: "AFX_GLOBAL_DATA::InitD2D"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 49d2f99f-aeee-43f6-b38c-7f7b750ab5a1
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# AFX_GLOBAL_DATA::InitD2D
Initializes D2D, DirectWrite, and WIC factories. Call this method before the main window is initialized.  
  
## Syntax  
  
```  
BOOL InitD2D(  
   D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,  
   DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED  
);  
```  
  
#### Parameters  
 `d2dFactoryType`  
 The threading model of the D2D factory and the resources it creates.  
  
 `writeFactoryType`  
 A value that specifies whether the write factory object will be shared or isolated  
  
## Return Value  
 Returns TRUE if the factories were intilalizrd, FALSE - otherwise  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)