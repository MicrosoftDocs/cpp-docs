---
title: "CAccessorRowset::Bind | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CAccessorRowset.Bind", "CAccessorRowset::Bind"]
dev_langs: ["C++"]
helpviewer_keywords: ["Bind method"]
ms.assetid: 42a1fc86-f570-4e54-9b82-7f7141564214
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CAccessorRowset::Bind
Creates the bindings if you specified **bBind** as false in [CCommand::Open](../../data/oledb/ccommand-open.md).  
  
## Syntax  
  
```cpp
HRESULT Bind();  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorRowset Class](../../data/oledb/caccessorrowset-class.md)