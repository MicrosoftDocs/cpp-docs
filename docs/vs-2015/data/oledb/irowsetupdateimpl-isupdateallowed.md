---
title: "IRowsetUpdateImpl::IsUpdateAllowed | Microsoft Docs"
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
  - "IRowsetUpdateImpl::IsUpdateAllowed"
  - "IRowsetUpdateImpl.IsUpdateAllowed"
  - "IsUpdateAllowed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsUpdateAllowed method"
ms.assetid: d6daf3b3-a8e0-4275-a67d-897dea01e297
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetUpdateImpl::IsUpdateAllowed
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetUpdateImpl::IsUpdateAllowed](https://docs.microsoft.com/cpp/data/oledb/irowsetupdateimpl-isupdateallowed).  
  
  
Override this method to check for security, integrity, and so on before updates.  
  
## Syntax  
  
```  
  
      HRESULT IsUpdateAllowed(  
   DBPENDINGSTATUS /* [in] *//* status */,  
   HROW /* [in] *//* hRowUpdate */,  
   DBROWSTATUS* /* [out] *//* pRowStatus */  
);  
```  
  
#### Parameters  
 *status*  
 [in] The status of pending operations on the rows.  
  
 *hRowUpdate*  
 [in] Handle for the rows the user wants to update.  
  
 *pRowStatus*  
 [out] The status returned to the user.  
  
## Remarks  
 If you determine that an update should be allowed, returns `S_OK`; otherwise returns **E_FAIL**. If you allow an update, you also need to set the **DBROWSTATUS** in [IRowsetUpdateImpl::Update](../../data/oledb/irowsetupdateimpl-update.md) to an appropriate [row state](https://msdn.microsoft.com/library/ms722752.aspx).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../../data/oledb/irowsetupdateimpl-class.md)

