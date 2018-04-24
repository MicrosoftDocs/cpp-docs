---
title: "CRowset::MoveToRatio | Microsoft Docs"
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
  - "MoveToRatio"
  - "CRowset<TAccessor>::MoveToRatio"
  - "CRowset::MoveToRatio"
  - "CRowset<TAccessor>.MoveToRatio"
  - "ATL.CRowset.MoveToRatio"
  - "ATL::CRowset::MoveToRatio"
  - "CRowset.MoveToRatio"
  - "ATL.CRowset<TAccessor>.MoveToRatio"
  - "ATL::CRowset<TAccessor>::MoveToRatio"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveToRatio method"
ms.assetid: 1fa313bd-8fd1-4608-8e85-44993b97dd88
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::MoveToRatio
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CRowset::MoveToRatio](https://docs.microsoft.com/cpp/data/oledb/crowset-movetoratio).  
  
  
Fetches rows starting from a fractional position in the rowset.  
  
## Syntax  
  
```  
  
      HRESULT MoveToRatio(   
   DBCOUNTITEM nNumerator,   
   DBCOUNTITEM nDenominator,   
   bool bForward = true    
) throw( );  
```  
  
#### Parameters  
 `nNumerator`  
 [in] The numerator used to determine the fractional positional from which to fetch data.  
  
 `nDenominator`  
 [in] The denominator used to determine the fractional positional from which to fetch data.  
  
 `bForward`  
 [in] Indicates whether to move forward or backward. The default is forward.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 `MoveToRatio` fetches rows according roughly to the following formula:  
  
 `( nNumerator *  RowsetSize ) / nDenominator`  
  
 where `RowsetSize` is the size of the rowset, measured in rows. The accuracy of this formula depends on the specific provider. For details, see [IRowsetScroll::GetRowsAtRatio](https://msdn.microsoft.com/library/ms709602.aspx).  
  
 This method requires the optional interface `IRowsetScroll`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetScroll** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)

