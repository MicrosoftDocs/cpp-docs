---
title: "IConvertTypeImpl::CanConvert | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IConvertTypeImpl.CanConvert", "CanConvert", "IConvertTypeImpl::CanConvert"]
dev_langs: ["C++"]
helpviewer_keywords: ["CanConvert method"]
ms.assetid: bdad6e95-bc0b-4427-9b5e-eea51f09f392
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IConvertTypeImpl::CanConvert
Gives information on the availability of type conversions on a command or on a rowset.  
  
## Syntax  
  
```cpp
      STDMETHOD(CanConvert)(DBTYPE wFromType,   
   DBTYPE wToType,   
   DBCONVERTFLAGS dwConvertFlags);  
```  
  
#### Parameters  
 See [IConvertType::CanConvert](https://msdn.microsoft.com/en-us/library/ms711224.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Uses OLE DB data conversion in `MSADC.DLL`.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IConvertTypeImpl Class](../../data/oledb/iconverttypeimpl-class.md)