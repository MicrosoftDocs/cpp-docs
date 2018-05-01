---
title: "ICommandTextImpl::SetCommandText | Microsoft Docs"
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
  - "ICommandTextImpl.SetCommandText"
  - "ICommandTextImpl::SetCommandText"
  - "SetCommandText"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetCommandText method"
ms.assetid: 7271bfb0-7a8b-4281-b3e8-7c80b9fe79d4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ICommandTextImpl::SetCommandText
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ICommandTextImpl::SetCommandText](https://docs.microsoft.com/cpp/data/oledb/icommandtextimpl-setcommandtext).  
  
  
Sets the command text, replacing the existing command text.  
  
## Syntax  
  
```  
  
      STDMETHOD(SetCommandText)(   
   REFGUID rguidDialect,   
   LPCOLESTR pwszCommand    
);  
```  
  
#### Parameters  
 See [ICommandText::SetCommandText](https://msdn.microsoft.com/library/ms709757.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandTextImpl Class](../../data/oledb/icommandtextimpl-class.md)   
 [ICommandTextImpl::GetCommandText](../../data/oledb/icommandtextimpl-getcommandtext.md)

