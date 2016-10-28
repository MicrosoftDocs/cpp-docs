---
title: "CDBPropIDSet::SetGUID"
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
  - "CDBPropIDSet.SetGUID"
  - "ATL::CDBPropIDSet::SetGUID"
  - "SetGUID"
  - "ATL.CDBPropIDSet.SetGUID"
  - "CDBPropIDSet::SetGUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetGUID method"
ms.assetid: 8dd0f3bf-1490-4d53-9063-322b8d821bbe
caps.latest.revision: 8
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
# CDBPropIDSet::SetGUID
Sets the GUID field in the **DBPROPIDSET** structure.  
  
## Syntax  
  
```  
  
      void SetGUID(   
   const GUID& guid    
) throw( );  
```  
  
#### Parameters  
 `guid`  
 [in] A GUID used to set the **guidPropertySet** field of the [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx) structure.  
  
## Remarks  
 This field can be set by the [constructor](../data/cdbpropidset--cdbpropidset.md) as well. Call this function if you use the default constructor for this class.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBPropIDSet Class](../data/cdbpropidset-class.md)