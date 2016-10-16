---
title: "IRowsetChangeImpl::SetData"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "SetData"
  - "IRowsetChangeImpl::SetData"
  - "ATL.IRowsetChangeImpl.SetData"
  - "IRowsetChangeImpl.SetData"
  - "ATL::IRowsetChangeImpl::SetData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetData method"
ms.assetid: 81e1dd0a-0518-440c-8808-cee76e4929c7
caps.latest.revision: 9
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
# IRowsetChangeImpl::SetData
Sets data values in one or more columns.  
  
## Syntax  
  
```  
  
      STDMETHOD ( SetData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData   
);  
```  
  
#### Parameters  
 See [IRowsetChange::SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetChangeImpl Class](../data/irowsetchangeimpl-class.md)