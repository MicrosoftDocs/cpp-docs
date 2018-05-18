---
title: "CDynamicAccessor::Close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::CDynamicAccessor::Close", "ATL.CDynamicAccessor.Close", "CDynamicAccessor.Close", "CDynamicAccessor::Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["Close method"]
ms.assetid: 2a28ded2-d7ed-4e80-90bf-143133c93feb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::Close
Unbinds all the columns, releases the allocated memory, and releases the [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) interface pointer in the class.  
  
## Syntax  
  
```cpp
void Close() throw();  
  
```  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)