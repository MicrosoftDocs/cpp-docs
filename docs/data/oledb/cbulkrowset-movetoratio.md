---
title: "CBulkRowset::MoveToRatio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CBulkRowset.MoveToRatio"
  - "ATL::CBulkRowset::MoveToRatio"
  - "MoveToRatio"
  - "CBulkRowset::MoveToRatio"
  - "ATL.CBulkRowset<TAccessor>.MoveToRatio"
  - "ATL::CBulkRowset<TAccessor>::MoveToRatio"
  - "ATL.CBulkRowset.MoveToRatio"
  - "CBulkRowset<TAccessor>::MoveToRatio"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveToRatio method"
ms.assetid: 86be60f5-9341-44c1-8e1e-9174c082d0d5
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
# CBulkRowset::MoveToRatio
Fetches rows starting from a fractional position in the rowset.  
  
## Syntax  
  
```  
  
      HRESULT MoveToRatio(  
   DBCOUNTITEM nNumerator,  
   DBCOUNTITEM nDenominator   
) throw( );  
```  
  
#### Parameters  
 `nNumerator`  
 [in] The numerator used to determine the fractional position from which to fetch data.  
  
 `nDenominator`  
 [in] The denominator used to determine the fractional position from which to fetch data.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 `MoveToRatio` fetches the rows roughly according to the following formula:  
  
 `( nNumerator *  RowsetSize ) / nDenominator`  
  
 Where `RowsetSize` is the size of the rowset, measured in rows. The accuracy of this formula depends on the specific provider. For details, see [IRowsetScroll::GetRowsAtRatio](https://msdn.microsoft.com/en-us/library/ms709602.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBulkRowset Class](../../data/oledb/cbulkrowset-class.md)