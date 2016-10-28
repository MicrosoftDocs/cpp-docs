---
title: "BEGIN_PARAM_MAP"
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
  - "BEGIN_PARAM_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_PARAM_MAP macro"
ms.assetid: 32f3f70e-c7c6-4b80-ab98-e02c8eb3a894
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
# BEGIN_PARAM_MAP
Marks the beginning of the parameter map entries.  
  
## Syntax  
  
```  
  
BEGIN_PARAM_MAP(  
x  
 )  
  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record class.  
  
## Remarks  
 Parameters are used by [commands](https://msdn.microsoft.com/en-us/library/ms724608.aspx).  
  
## Example  
 See the example for the [BEGIN_COLUMN_MAP](../data/begin_column_map.md) macro.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../data/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [END_PARAM_MAP](../data/end_param_map.md)   
 [SET_PARAM_TYPE](../data/set_param_type.md)