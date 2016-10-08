---
title: "IConvertTypeImpl::CanConvert"
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
ms.assetid: bdad6e95-bc0b-4427-9b5e-eea51f09f392
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
# IConvertTypeImpl::CanConvert
Gives information on the availability of type conversions on a command or on a rowset.  
  
## Syntax  
  
```  
  
      STDMETHOD(CanConvert)(   
   DBTYPE wFromType,   
   DBTYPE wToType,   
   DBCONVERTFLAGS dwConvertFlags    
);  
```  
  
#### Parameters  
 See [IConvertType::CanConvert](https://msdn.microsoft.com/en-us/library/ms711224.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Uses OLE DB data conversion in `MSADC.DLL`.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IConvertTypeImpl Class](../VS_visualcpp/IConvertTypeImpl-Class.md)