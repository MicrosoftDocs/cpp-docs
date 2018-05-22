---
title: "FtmBase::CreateGlobalInterfaceTable Method | Microsoft Docs"
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
  - "ftm/Microsoft::WRL::FtmBase::CreateGlobalInterfaceTable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateGlobalInterfaceTable method"
ms.assetid: bb82a0c5-22b9-4844-9204-7922033d8b07
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FtmBase::CreateGlobalInterfaceTable Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FtmBase::CreateGlobalInterfaceTable Method](https://docs.microsoft.com/cpp/windows/ftmbase-createglobalinterfacetable-method).  
  
  
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
 [FtmBase Class](../windows/ftmbase-class.md)

