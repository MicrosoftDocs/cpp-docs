---
title: "CRowset::GetDataHere | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CRowset<TAccessor>::GetDataHere", "CRowset<TAccessor>.GetDataHere", "CRowset.GetDataHere", "GetDataHere", "CRowset::GetDataHere", "ATL::CRowset::GetDataHere", "ATL::CRowset<TAccessor>::GetDataHere", "ATL.CRowset<TAccessor>.GetDataHere", "ATL.CRowset.GetDataHere"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetDataHere method"]
ms.assetid: 2fe2a987-1c4c-4299-876e-0591caf63af4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::GetDataHere
Retrieves data from the current row and places it into the specified buffer.  
  
## Syntax  
  
```
HRESULT GetDataHere(int nAccessor,   
  void* pBuffer) throw();  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The index number of the accessor to use for accessing the data.  
  
 `pBuffer`  
 [out] A buffer into which to place the data for the current record.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 For an example of how to use this function, see the [MultiRead sample](../../visual-cpp-samples.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [CRowset::GetData](../../data/oledb/crowset-getdata.md)