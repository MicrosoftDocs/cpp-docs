---
title: "CEnumeratorAccessor::m_szParseName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CEnumeratorAccessor::m_szParseName"
  - "ATL::CEnumeratorAccessor::m_szParseName"
  - "m_szParseName"
  - "CEnumeratorAccessor.m_szParseName"
  - "ATL.CEnumeratorAccessor.m_szParseName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_szParseName"
ms.assetid: 32e826b6-0890-4db4-aa92-fc1ea3f528b2
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
# CEnumeratorAccessor::m_szParseName
String to pass to [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) to obtain a moniker for the data source or enumerator.  
  
## Syntax  
  
```  
  
WCHAR m_szParseName[129];  
  
```  
  
## Remarks  
 See [ISourcesRowset::GetSourcesRowset](https://msdn.microsoft.com/en-us/library/ms711200.aspx) in the *OLE DB Programmer's Reference* for more information.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CEnumeratorAccessor Class](../../data/oledb/cenumeratoraccessor-class.md)