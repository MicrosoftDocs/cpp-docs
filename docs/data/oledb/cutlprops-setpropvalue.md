---
title: "CUtlProps::SetPropValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SetPropValue"
  - "ATL::CUtlProps<T>::SetPropValue"
  - "ATL.CUtlProps<T>.SetPropValue"
  - "ATL.CUtlProps.SetPropValue"
  - "CUtlProps::SetPropValue"
  - "CUtlProps<T>::SetPropValue"
  - "CUtlProps.SetPropValue"
  - "CUtlProps<T>.SetPropValue"
  - "ATL::CUtlProps::SetPropValue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetPropValue method"
ms.assetid: 69a703c0-f640-4ca3-8850-0c4e75d52429
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
# CUtlProps::SetPropValue
Sets a property in a property set.  
  
## Syntax  
  
```  
  
      HRESULT SetPropValue(  
   const GUID* pguidPropSet,  
   DBPROPID dwPropId,  
   VARIANT* pvValue   
);  
```  
  
#### Parameters  
 `pguidPropSet`  
 [in] The GUID for the PropSet.  
  
 `dwPropId`  
 [in] The property index.  
  
 `pvValue`  
 [in] A pointer to a variant that contains the new property value.  
  
## Return Value  
 `Failure` on failure and `S_OK` if successful.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CUtlProps Class](../../data/oledb/cutlprops-class.md)