---
title: "CAccessorBase::ReleaseAccessors | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CAccessorBase::ReleaseAccessors"
  - "CAccessorBase.ReleaseAccessors"
  - "ReleaseAccessors"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseAccessors method"
ms.assetid: f08bc88e-0552-4a9c-9c65-b4061094649a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAccessorBase::ReleaseAccessors
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CAccessorBase::ReleaseAccessors](https://docs.microsoft.com/cpp/data/oledb/caccessorbase-releaseaccessors).  
  
  
Releases the accessors created by the class.  
  
## Syntax  
  
```  
  
      HRESULT ReleaseAccessors(  
   IUnknown* pUnk   
);  
```  
  
#### Parameters  
 *pUnk*  
 [in] A pointer to an **IUnknown** interface for the COM object for which the accessors have been created.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 Called from [CAccessorRowset::Close](../../data/oledb/caccessorrowset-close.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../../data/oledb/caccessorbase-class.md)

