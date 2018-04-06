---
title: "CManualAccessor::AddParameterEntry | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CManualAccessor::AddParameterEntry", "ATL.CManualAccessor.AddParameterEntry", "CManualAccessor.AddParameterEntry", "AddParameterEntry", "ATL::CManualAccessor::AddParameterEntry"]
dev_langs: ["C++"]
helpviewer_keywords: ["AddParameterEntry method"]
ms.assetid: 9048b164-052b-41b1-a861-227fc529e0b5
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CManualAccessor::AddParameterEntry
Adds a parameter entry to the parameter entry structures.  
  
## Syntax  
  
```
void AddParameterEntry(DBORDINAL nOrdinal,  
   DBTYPE wType,  DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL,  
   DBPARAMIO eParamIO = DBPARAMIO_INPUT) throw ();  
```  
  
#### Parameters  
 See [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in the *OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 [in] Parameter number.  
  
 `wType`  
 [in] Data type.  
  
 `nColumnSize`  
 [in] Column size in bytes.  
  
 `pData`  
 [in] A pointer to the column data stored in the buffer.  
  
 `pLength`  
 [in] A pointer to the field length, if required.  
  
 `pStatus`  
 [in] A pointer to the variable to be bound to the column status, if required.  
  
 *eParamIO*  
 [in] Specifies whether the parameter with which the binding is associated is an input, input/output, or output parameter.  
  
## Remarks  
 To use this function, you must first call [CreateParameterAccessor](../../data/oledb/cmanualaccessor-createparameteraccessor.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)   
 [CManualAccessor::AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md)   
 [DBViewer sample](../../visual-cpp-samples.md)