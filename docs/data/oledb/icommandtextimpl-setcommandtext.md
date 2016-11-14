---
title: "ICommandTextImpl::SetCommandText | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# ICommandTextImpl::SetCommandText
Sets the command text, replacing the existing command text.  
  
## Syntax  
  
```  
  
      STDMETHOD(SetCommandText)(   
   REFGUID rguidDialect,   
   LPCOLESTR pwszCommand    
);  
```  
  
#### Parameters  
 See [ICommandText::SetCommandText](https://msdn.microsoft.com/en-us/library/ms709757.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandTextImpl Class](../../data/oledb/icommandtextimpl-class.md)   
 [ICommandTextImpl::GetCommandText](../../data/oledb/icommandtextimpl-getcommandtext.md)