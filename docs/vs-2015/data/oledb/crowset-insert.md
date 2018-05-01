---
title: "CRowset::Insert | Microsoft Docs"
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
  - "ATL.CRowset<TAccessor>.Insert"
  - "CRowset.Insert"
  - "CRowset<TAccessor>.Insert"
  - "CRowset<TAccessor>::Insert"
  - "ATL::CRowset<TAccessor>::Insert"
  - "ATL.CRowset.Insert"
  - "CRowset::Insert"
  - "ATL::CRowset::Insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Insert method"
ms.assetid: 6a64a1c3-10ac-4296-8685-0fd6fe63a13b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::Insert
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CRowset::Insert](https://docs.microsoft.com/cpp/data/oledb/crowset-insert).  
  
  
Creates and initializes a new row using data from the accessor.  
  
## Syntax  
  
```  
  
      HRESULT Insert(   
   int nAccessor = 0,   
   bool bGetHRow = false    
) throw( );  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The number of the accessor to use for inserting the data.  
  
 *bGetHRow*  
 [in] Indicates whether the handle for the inserted row is retrieved.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires the optional interface `IRowsetChange`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetChange** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
 Insert might fail if one or more columns is not writable. Modify your cursor map to correct this.  
  
## Example  
 The following example shows how to access a data source through a rowset and then insert a string using a table in that rowset.  
  
 First, create a table class by inserting a New ATL Object into your project. For example, right-click the project in the Workspace pane and select **New ATL Object**. From the **Data Access** category, select **Consumer**. Create a consumer object of type **Table**. (Selecting **Table** creates a rowset directly from the table; selecting **Command** creates a rowset through a SQL command.) Select a data source, specifying a table through which to access that data source. If you call your consumer object **CCustomerTable**, you would then implement your insertion code as follows:  
  
 [!code-cpp[NVC_OLEDB_Consumer#10](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#10)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)

