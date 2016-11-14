---
title: "CAccessorRowset::GetColumnInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetColumnInfo"
  - "CAccessorRowset.GetColumnInfo"
  - "CAccessorRowset::GetColumnInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetColumnInfo method"
ms.assetid: 8ade2388-3c58-43cd-8ed6-499ee0531291
caps.latest.revision: 8
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
# CAccessorRowset::GetColumnInfo
Gets column information from the opened rowset.  
  
## Syntax  
  
```  
  
      HRESULT GetColumnInfo(  
   DBORDINAL* pulColumns,  
   DBCOLUMNINFO** ppColumnInfo,  
   LPOLESTR* ppStrings   
) const;  
HRESULT GetColumnInfo(  
   DBORDINAL* pColumns,  
   DBCOLUMNINFO** ppColumnInfo   
);  
```  
  
#### Parameters  
 See [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 The user must free the returned column information and string buffer. Use the second version of this method when you use [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) and need to override the bindings.  
  
 For more information, see [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorRowset Class](../../data/oledb/caccessorrowset-class.md)