---
title: "CSimpleRow::Compare | Microsoft Docs"
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
  - "CSimpleRow.Compare"
  - "CSimpleRow::Compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Compare method"
ms.assetid: 0bb65f09-c7bc-449b-aa4e-c828cac13510
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSimpleRow::Compare
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CSimpleRow::Compare](https://docs.microsoft.com/cpp/data/oledb/csimplerow-compare).  
  
  
Compares two rows to see if they refer to the same row instance.  
  
## Syntax  
  
```  
  
      HRESULT Compare(   
   CSimpleRow* pRow    
);  
```  
  
#### Parameters  
 `pRow`  
 A pointer to a `CSimpleRow` object.  
  
## Return Value  
 An `HRESULT` value, usually `S_OK`, indicating the two rows are the same row instance, or **S_FALSE**, indicating the two rows are different. See [IRowsetIdentity::IsSameRow](https://msdn.microsoft.com/library/ms719629.aspx) in the *OLE DB Programmer's Reference* for other possible return values.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CSimpleRow Class](../../data/oledb/csimplerow-class.md)   
 [CSimpleRow::ReleaseRow](../../data/oledb/csimplerow-releaserow.md)   
 [IRowsetImpl::RefRows](../../data/oledb/irowsetimpl-refrows.md)

