---
title: "ICommandPropertiesImpl::SetProperties"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c42132bb-16a9-4e00-aba6-dee785a98488
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# ICommandPropertiesImpl::SetProperties
Sets properties for the command object.  
  
## Syntax  
  
```  
  
      STDMETHOD(SetProperties)(   
   ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]    
);  
```  
  
#### Parameters  
 See [ICommandProperties::SetProperties](https://msdn.microsoft.com/en-us/library/ms711497.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandPropertiesImpl Class](../VS_visualcpp/ICommandPropertiesImpl-Class.md)   
 [ICommandPropertiesImpl::GetProperties](../VS_visualcpp/ICommandPropertiesImpl--GetProperties.md)