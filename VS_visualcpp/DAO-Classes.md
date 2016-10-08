---
title: "DAO Classes"
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
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
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
# DAO Classes
These classes work with the other application framework classes to give easy access to Data Access Object (DAO) databases, which use the same database engine as Microsoft Visual Basic and Microsoft Access. The DAO classes can also access a wide variety of databases for which Open Database Connectivity (ODBC) drivers are available.  
  
 Programs that use DAO databases will have at least a `CDaoDatabase` object and a `CDaoRecordset` object.  
  
> [!NOTE]
>  As of Visual C++ .NET, the Visual C++ environment and wizards no longer support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use ODBC for new MFC projects. You should only use DAO in maintaining existing applications.  
  
 [CDaoWorkspace](../VS_visualcpp/CDaoWorkspace-Class.md)  
 Manages a named, password-protected database session from login to logoff. Most programs use the default workspace.  
  
 [CDaoDatabase](../VS_visualcpp/CDaoDatabase-Class.md)  
 A connection to a database through which you can operate on the data.  
  
 [CDaoRecordset](../VS_visualcpp/CDaoRecordset-Class.md)  
 Represents a set of records selected from a data source.  
  
 [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md)  
 A view that displays database records in controls.  
  
 [CDaoQueryDef](../VS_visualcpp/CDaoQueryDef-Class.md)  
 Represents a query definition, usually one saved in a database.  
  
 [CDaoTableDef](../VS_visualcpp/CDaoTableDef-Class.md)  
 Represents the stored definition of a base table or an attached table.  
  
 [CDaoException](../VS_visualcpp/CDaoException-Class.md)  
 Represents an exception condition arising from the DAO classes.  
  
 [CDaoFieldExchange](../VS_visualcpp/CDaoFieldExchange-Class.md)  
 Supports the DAO record field exchange (DFX) routines used by the DAO database classes. You will normally not directly use this class.  
  
## Related Classes  
 [CLongBinary](../VS_visualcpp/CLongBinary-Class.md)  
 Encapsulates a handle to storage for a binary large object (BLOB), such as a bitmap. `CLongBinary` objects are used to manage large data objects stored in database tables.  
  
 [COleCurrency](../VS_visualcpp/COleCurrency-Class.md)  
 Wrapper for the OLE automation type **CURRENCY**, a fixed-point arithmetic type, with 15 digits before the decimal point and 4 digits after.  
  
 [COleDateTime](../VS_visualcpp/COleDateTime-Class.md)  
 Wrapper for the OLE automation type **DATE**. Represents date and time values.  
  
 [COleVariant](../VS_visualcpp/COleVariant-Class.md)  
 Wrapper for the OLE automation type **VARIANT**. Data in **VARIANT**s can be stored in many formats.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)