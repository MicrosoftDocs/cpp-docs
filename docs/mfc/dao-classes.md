---
title: "DAO Classes"
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
  - "vc.classes.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "database classes [C++], DAO"
  - "DAO [C++], classes"
ms.assetid: b15d0cd6-328b-4288-9c19-d037a795db57
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# DAO Classes
These classes work with the other application framework classes to give easy access to Data Access Object (DAO) databases, which use the same database engine as Microsoft Visual Basic and Microsoft Access. The DAO classes can also access a wide variety of databases for which Open Database Connectivity (ODBC) drivers are available.  
  
 Programs that use DAO databases will have at least a `CDaoDatabase` object and a `CDaoRecordset` object.  
  
> [!NOTE]
>  As of Visual C++ .NET, the Visual C++ environment and wizards no longer support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use ODBC for new MFC projects. You should only use DAO in maintaining existing applications.  
  
 [CDaoWorkspace](../mfcref/cdaoworkspace-class.md)  
 Manages a named, password-protected database session from login to logoff. Most programs use the default workspace.  
  
 [CDaoDatabase](../mfcref/cdaodatabase-class.md)  
 A connection to a database through which you can operate on the data.  
  
 [CDaoRecordset](../mfcref/cdaorecordset-class.md)  
 Represents a set of records selected from a data source.  
  
 [CDaoRecordView](../mfcref/cdaorecordview-class.md)  
 A view that displays database records in controls.  
  
 [CDaoQueryDef](../mfcref/cdaoquerydef-class.md)  
 Represents a query definition, usually one saved in a database.  
  
 [CDaoTableDef](../mfcref/cdaotabledef-class.md)  
 Represents the stored definition of a base table or an attached table.  
  
 [CDaoException](../mfcref/cdaoexception-class.md)  
 Represents an exception condition arising from the DAO classes.  
  
 [CDaoFieldExchange](../mfcref/cdaofieldexchange-class.md)  
 Supports the DAO record field exchange (DFX) routines used by the DAO database classes. You will normally not directly use this class.  
  
## Related Classes  
 [CLongBinary](../mfcref/clongbinary-class.md)  
 Encapsulates a handle to storage for a binary large object (BLOB), such as a bitmap. `CLongBinary` objects are used to manage large data objects stored in database tables.  
  
 [COleCurrency](../mfcref/colecurrency-class.md)  
 Wrapper for the OLE automation type **CURRENCY**, a fixed-point arithmetic type, with 15 digits before the decimal point and 4 digits after.  
  
 [COleDateTime](../atl/coledatetime-class.md)  
 Wrapper for the OLE automation type **DATE**. Represents date and time values.  
  
 [COleVariant](../mfcref/colevariant-class.md)  
 Wrapper for the OLE automation type **VARIANT**. Data in **VARIANT**s can be stored in many formats.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)