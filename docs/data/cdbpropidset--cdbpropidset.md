---
title: "CDBPropIDSet::CDBPropIDSet"
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
  - "ATL::CDBPropIDSet::CDBPropIDSet"
  - "CDBPropIDSet"
  - "CDBPropIDSet.CDBPropIDSet"
  - "CDBPropIDSet::CDBPropIDSet"
  - "ATL.CDBPropIDSet.CDBPropIDSet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBPropIDSet class, constructor"
ms.assetid: e68cc20e-fce2-4cc1-9e9d-05c542334cc8
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
# CDBPropIDSet::CDBPropIDSet
The constructor. Initializes the **rgProperties**, **cProperties**, and (optionally) **guidPropertySet** fields of the [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx) structure.  
  
## Syntax  
  
```  
  
      CDBPropIDSet(  
   const GUID& guid   
);  
CDBPropIDSet(   
   const CDBPropIDSet& propidset    
);  
CDBPropIDSet( );  
```  
  
#### Parameters  
 `guid`  
 [in] A GUID used to initialize the **guidPropertySet** field.  
  
 *propidset*  
 [in] Another `CDBPropIDSet` object for copy construction.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBPropIDSet Class](../data/cdbpropidset-class.md)   
 [CDBPropIDSet::SetGUID](../data/cdbpropidset--setguid.md)