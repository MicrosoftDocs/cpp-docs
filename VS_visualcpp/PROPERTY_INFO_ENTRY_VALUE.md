---
title: "PROPERTY_INFO_ENTRY_VALUE"
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
ms.assetid: 9690f7f3-fb20-4a7e-a75f-8a3a1cb1ce0d
caps.latest.revision: 7
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
# PROPERTY_INFO_ENTRY_VALUE
Represents a specific property in a property set.  
  
## Syntax  
  
```  
  
PROPERTY_INFO_ENTRY_VALUE(  
dwPropID  
, value )  
```  
  
#### Parameters  
 *dwPropID*  
 [in] A [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) value that can be used in conjunction with the property set GUID to identify a property.  
  
 *value*  
 [in] The property value of type `DWORD`.  
  
## Remarks  
 With this macro, you can directly specify the property value of type `DWORD`. To set the property to default value defined in ATLDB.H, use [PROPERTY_INFO_ENTRY](../VS_visualcpp/PROPERTY_INFO_ENTRY.md). To set the value, flags, and options for the property, use [PROPERTY_INFO_ENTRY_EX](../VS_visualcpp/PROPERTY_INFO_ENTRY_EX.md).  
  
## Example  
 See [BEGIN_PROPSET_MAP](../VS_visualcpp/BEGIN_PROPSET_MAP.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../VS_visualcpp/Macros-for-OLE-DB-Provider-Templates.md)   
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [Creating an OLE DB Provider](../VS_visualcpp/Creating-an-OLE-DB-Provider.md)