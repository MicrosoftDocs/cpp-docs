---
title: "CDBPropSet::CDBPropSet"
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
  - "CDBPropSet.CDBPropSet"
  - "CDBPropSet::CDBPropSet"
  - "ATL::CDBPropSet::CDBPropSet"
  - "ATL.CDBPropSet.CDBPropSet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBPropSet class, constructor"
ms.assetid: 02ae5d9e-c067-47ca-8111-a03e86b5626b
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
# CDBPropSet::CDBPropSet
The constructor. Initializes the **rgProperties**, **cProperties**, and **guidPropertySet** fields of the [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) structure.  
  
## Syntax  
  
```  
  
      CDBPropSet(  
   const GUID& guid   
);  
CDBPropSet(   
   const CDBPropSet& propset    
);  
CDBPropSet( );  
```  
  
#### Parameters  
 `guid`  
 [in] A GUID used to initialize the **guidPropertySet** field.  
  
 *propset*  
 [in] Another `CDBPropSet` object for copy construction.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBPropSet Class](../data/cdbpropset-class.md)   
 [CDBPropSet::SetGUID](../data/cdbpropset--setguid.md)   
 [DBPROP Structure](https://msdn.microsoft.com/en-us/library/ms717970.aspx)