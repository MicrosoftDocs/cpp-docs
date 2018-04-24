---
title: "IConvertTypeImpl::CanConvert | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IConvertTypeImpl.CanConvert"
  - "CanConvert"
  - "IConvertTypeImpl::CanConvert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanConvert method"
ms.assetid: bdad6e95-bc0b-4427-9b5e-eea51f09f392
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IConvertTypeImpl::CanConvert
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IConvertTypeImpl::CanConvert](https://docs.microsoft.com/cpp/data/oledb/iconverttypeimpl-canconvert).  
  
  
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
 See [IConvertType::CanConvert](https://msdn.microsoft.com/library/ms711224.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Uses OLE DB data conversion in `MSADC.DLL`.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IConvertTypeImpl Class](../../data/oledb/iconverttypeimpl-class.md)

