---
title: "ICommandTextImpl::GetCommandText | Microsoft Docs"
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
  - "GetCommandText"
  - "ICommandTextImpl.GetCommandText"
  - "ICommandTextImpl::GetCommandText"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCommandText method"
ms.assetid: 0f8da470-b1c3-4573-974f-1acc111e3984
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ICommandTextImpl::GetCommandText
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ICommandTextImpl::GetCommandText](https://docs.microsoft.com/cpp/data/oledb/icommandtextimpl-getcommandtext).  
  
  
Returns the text command set by the last call to [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).  
  
## Syntax  
  
```  
  
      STDMETHOD(GetCommandText)(   
   GUID * pguidDialect,   
   LPOLESTR * ppwszCommand    
);  
```  
  
#### Parameters  
 See [ICommandText::GetCommandText](https://msdn.microsoft.com/library/ms709825.aspx) in the *OLE DB Programmer's Reference*. The *pguidDialect* parameter is ignored by default.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandTextImpl Class](../../data/oledb/icommandtextimpl-class.md)

