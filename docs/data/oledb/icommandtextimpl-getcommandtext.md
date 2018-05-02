---
title: "ICommandTextImpl::GetCommandText | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetCommandText", "ICommandTextImpl.GetCommandText", "ICommandTextImpl::GetCommandText"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetCommandText method"]
ms.assetid: 0f8da470-b1c3-4573-974f-1acc111e3984
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandTextImpl::GetCommandText
Returns the text command set by the last call to [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).  
  
## Syntax  
  
```cpp
      STDMETHOD(GetCommandText)(GUID * pguidDialect,   
   LPOLESTR * ppwszCommand);  
```  
  
#### Parameters  
 See [ICommandText::GetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) in the *OLE DB Programmer's Reference*. The *pguidDialect* parameter is ignored by default.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandTextImpl Class](../../data/oledb/icommandtextimpl-class.md)