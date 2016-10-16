---
title: "PROPERTY_INFO_ENTRY_EX"
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
  - "PROPERTY_INFO_ENTRY_EX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROPERTY_INFO_ENTRY_EX macro"
ms.assetid: af32dfcd-4c50-449d-af3b-48d21bd67a04
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# PROPERTY_INFO_ENTRY_EX
Represents a specific property in a property set.  
  
## Syntax  
  
```  
  
PROPERTY_INFO_ENTRY_EX(  
dwPropID  
, vt, dwFlags, value, options )  
```  
  
#### Parameters  
 *dwPropID*  
 [in] A [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) value that can be used in conjunction with the property set GUID to identify a property.  
  
 *vt*  
 [in] The [VARTYPE](assetId:///317b911b-1805-402d-a9cb-159546bc88b4) of this property entry.  
  
 `dwFlags`  
 [in] A [DBPROPFLAGS](https://msdn.microsoft.com/en-us/library/ms724342.aspx) value describing this property entry.  
  
 *value*  
 [in] The property value of type `DWORD`.  
  
 `options`  
 Either **DBPROPOPTIONS_REQUIRED** or **DBPROPOPTIONS_SETIFCHEAP**. Normally, a provider does not need to set `options` since it is set by the consumer.  
  
## Remarks  
 With this macro, you can directly specify the property value of type `DWORD` as well as options and flags. To merely set a property to a default value defined in ATLDB.H, use [PROPERTY_INFO_ENTRY](../data/property_info_entry.md). To set a property to a value of your choice, without setting options or flags on it, use [PROPERTY_INFO_ENTRY_VALUE](../data/property_info_entry_value.md).  
  
## Example  
 See [BEGIN_PROPSET_MAP](../data/begin_propset_map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../data/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../data/creating-an-ole-db-provider.md)