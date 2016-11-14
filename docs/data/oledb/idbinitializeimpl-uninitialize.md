---
title: "IDBInitializeImpl::Uninitialize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBInitializeImpl.Uninitialize"
  - "Uninitialize"
  - "IDBInitializeImpl::Uninitialize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Uninitialize method"
ms.assetid: ba37fc74-f84e-40b0-abb6-41bddd505269
caps.latest.revision: 9
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
# IDBInitializeImpl::Uninitialize
Places the data source object in an uninitialized state by freeing internal resources such as the property support.  
  
## Syntax  
  
```  
  
      STDMETHOD(Uninitialize)(   
   void    
);  
```  
  
## Remarks  
 See [IDBInitialize::Uninitialize](https://msdn.microsoft.com/en-us/library/ms719648.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBInitializeImpl Class](../../data/oledb/idbinitializeimpl-class.md)   
 [IDBInitializeImpl::Initialize](../../data/oledb/idbinitializeimpl-initialize.md)