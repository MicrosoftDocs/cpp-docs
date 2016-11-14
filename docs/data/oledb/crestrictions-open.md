---
title: "CRestrictions::Open | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRestrictions.Open"
  - "ATL::CRestrictions::Open"
  - "ATL.CRestrictions.Open"
  - "CRestrictions::Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open method"
ms.assetid: 0aff0cc3-543a-47d2-8d6b-ebb36926b6db
caps.latest.revision: 9
author: "mikeblome"
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
# CRestrictions::Open
Returns a result set according to the user-supplied restrictions.  
  
## Syntax  
  
```  
  
      HRESULT Open(  
   const CSession& session,  
   LPCTSTR lpszParam 1 = NULL,  
   LPCTSTR lpszParam 2 = NULL,  
   LPCTSTR lpszParam 3 = NULL,  
   LPCTSTR lpszParam 4 = NULL,  
   LPCTSTR lpszParam 5 = NULL,  
   LPCTSTR lpszParam 6 = NULL,  
   LPCTSTR lpszParam 7 = NULL,  
   bool bBind = true  
);  
```  
  
#### Parameters  
 `session`  
 [in] Specifies an existing session object used to connect to the data source.  
  
 *lpszParam*  
 [in] Specifies the restrictions on the schema rowset.  
  
 `bBind`  
 [in] Specifies whether to bind the column map automatically. The default is **true**, which causes the column map to be bound automatically. Setting `bBind` to **false** prevents the automatic binding of the column map so that you can bind manually. (Manual binding is of particular interest to OLAP users.)  
  
## Return Value  
 One of the standard `HRESULT` values.  
  
## Remarks  
 You can specify a maximum of seven restrictions on a schema rowset.  
  
 See [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) for information about the defined restrictions on each schema rowset.  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)   
 [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)