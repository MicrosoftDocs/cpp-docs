---
title: "PROPERTY_INFO_ENTRY"
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
ms.assetid: f7bd23d6-52b4-4d6a-aa9a-1fca9834c8dc
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# PROPERTY_INFO_ENTRY
Represents a specific property in a property set.  
  
## Syntax  
  
```  
  
PROPERTY_INFO_ENTRY(  
dwPropID   
)  
  
```  
  
#### Parameters  
 *dwPropID*  
 [in] A [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) value that can be used in conjunction with the property set GUID to identify a property.  
  
## Remarks  
 This macro sets the property value of type `DWORD` to a default value defined in ATLDB.H. To set the property to a value of your choosing, use [PROPERTY_INFO_ENTRY_VALUE](../VS_visualcpp/PROPERTY_INFO_ENTRY_VALUE.md). To set the [VARTYPE](assetId:///317b911b-1805-402d-a9cb-159546bc88b4) and [DBPROPFLAGS](https://msdn.microsoft.com/en-us/library/ms724342.aspx) for the property at the same time, use [PROPERTY_INFO_ENTRY_EX](../VS_visualcpp/PROPERTY_INFO_ENTRY_EX.md).  
  
## Example  
 See [BEGIN_PROPSET_MAP](../VS_visualcpp/BEGIN_PROPSET_MAP.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../VS_visualcpp/Macros-for-OLE-DB-Provider-Templates.md)   
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [Creating an OLE DB Provider](../VS_visualcpp/Creating-an-OLE-DB-Provider.md)