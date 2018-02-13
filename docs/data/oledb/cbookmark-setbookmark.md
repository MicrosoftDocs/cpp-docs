---
title: "CBookmark::SetBookmark | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["CBookmark<0>::SetBookmark", "ATL.CBookmark<0>.SetBookmark", "CBookmark<0>.SetBookmark", "SetBookmark", "ATL::CBookmark::SetBookmark", "ATL::CBookmark<0>::SetBookmark", "CBookmark.SetBookmark", "ATL.CBookmark.SetBookmark", "CBookmark::SetBookmark"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetBookmark method"]
ms.assetid: bcd26831-6045-4e69-96d6-abf8037fc18d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CBookmark::SetBookmark
Copies the bookmark value referenced by `pBuffer` to the `CBookmark` buffer and sets the buffer size to `nSize`.  
  
## Syntax  
  
```
HRESULT SetBookmark(DBLENGTH nSize,  
  BYTE* pBuffer) throw();  
```  
  
#### Parameters  
 *nSize*  
 [in] The size of the bookmark buffer.  
  
 `pBuffer`  
 [in] A pointer to the byte array containing the bookmark value.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This function is only available in **CBookmark\<0>**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBookmark Class](../../data/oledb/cbookmark-class.md)