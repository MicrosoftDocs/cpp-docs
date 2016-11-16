---
title: "ICommandTextImpl::GetCommandText | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 8
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
# ICommandTextImpl::GetCommandText
Returns the text command set by the last call to [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).  
  
## Syntax  
  
```  
  
      STDMETHOD(GetCommandText)(   
   GUID * pguidDialect,   
   LPOLESTR * ppwszCommand    
);  
```  
  
#### Parameters  
 See [ICommandText::GetCommandText](https://msdn.microsoft.com/en-us/library/ms709825.aspx) in the *OLE DB Programmer's Reference*. The *pguidDialect* parameter is ignored by default.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandTextImpl Class](../../data/oledb/icommandtextimpl-class.md)