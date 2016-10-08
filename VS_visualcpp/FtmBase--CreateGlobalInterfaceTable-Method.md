---
title: "FtmBase::CreateGlobalInterfaceTable Method"
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
ms.topic: reference
ms.assetid: bb82a0c5-22b9-4844-9204-7922033d8b07
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# FtmBase::CreateGlobalInterfaceTable Method
Creates a global interface table (GIT).  
  
## Syntax  
  
```  
static HRESULT CreateGlobalInterfaceTable(  
   __out IGlobalInterfaceTable **git  
);  
```  
  
#### Parameters  
 `git`  
 When this operation completes, a pointer to a global interface table.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 For more information, see the "IGlobalInterfaceTable" topic in the "COM Interfaces" subtopic of the "COM Reference" topic in the MSDN Library.  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [FtmBase Class](../VS_visualcpp/FtmBase-Class.md)