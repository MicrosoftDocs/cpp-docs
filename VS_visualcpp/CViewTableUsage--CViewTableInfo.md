---
title: "CViewTableUsage, CViewTableInfo"
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
ms.assetid: 10b74f2a-8010-4f97-acc2-ffce07349981
caps.latest.revision: 6
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
# CViewTableUsage, CViewTableInfo
Call the typedef class **CViewTableUsage** to implement its parameter class **CViewTableInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../VS_visualcpp/Schema-Rowset-Classes-and-Typedef-Classes.md) for more information on using typedef classes.  
  
 This class identifies the viewed tables, defined in the catalog, that are accessible to a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [VIEW_TABLE_USAGE Rowset](https://msdn.microsoft.com/en-us/library/ms719727.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|VIEW_CATALOG|  
|m_szSchema|VIEW_SCHEMA|  
|m_szName|VIEW_NAME|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../VS_visualcpp/CRestrictions-Class.md)