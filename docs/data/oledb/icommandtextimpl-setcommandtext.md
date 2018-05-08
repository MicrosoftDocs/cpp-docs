---
title: "ICommandTextImpl::SetCommandText | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ICommandTextImpl.SetCommandText", "ICommandTextImpl::SetCommandText", "SetCommandText"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetCommandText method"]
ms.assetid: 7271bfb0-7a8b-4281-b3e8-7c80b9fe79d4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandTextImpl::SetCommandText
Sets the command text, replacing the existing command text.  
  
## Syntax  
  
```cpp
      STDMETHOD(SetCommandText)(REFGUID rguidDialect,   
   LPCOLESTR pwszCommand);  
```  
  
#### Parameters  
 See [ICommandText::SetCommandText](https://msdn.microsoft.com/en-us/library/ms709757.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandTextImpl Class](../../data/oledb/icommandtextimpl-class.md)   
 [ICommandTextImpl::GetCommandText](../../data/oledb/icommandtextimpl-getcommandtext.md)