---
title: "Defining Stored Procedures | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stored procedures, syntax"
  - "OLE DB, stored procedures"
  - "stored procedures, defining"
  - "stored procedures, OLE DB"
ms.assetid: 54949b81-3275-4dd9-96e4-3eda1ed755f2
caps.latest.revision: 7
author: "mikeblome"
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
# Defining Stored Procedures
Before calling a stored procedure, you must first define it, using the [DEFINE_COMMAND](../../data/oledb/define-command.md) macro. When you define the command, denote parameters with a question mark (?) as the parameter marker:  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{INSERT {name, phone} into shippers  (?,?)}")  
```  
  
 Note that the syntax (the use of braces and so on) used in the code examples in this topic is specific to SQL Server. The syntax that you use in your stored procedures might vary according to the provider you use.  
  
 Next, in the parameter map, specify the parameters that you used in the command, listing the parameters in the order that they occur in the command:  
  
```  
BEGIN_PARAM_MAP(CMySProcAccessor)  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(1, m_Name)   // name corresponds to first '?' param  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(2, m_Phone)  // phone corresponds to second '?' param  
END_PARAM_MAP()  
```  
  
 The previous example defines a stored procedure as it goes. Typically, for efficient reuse of code, a database contains a set of predefined stored procedures with names such as "Sales by Year" or "dt_adduserobject." You can view their definitions using SQL Server Enterprise Manager. You call them as follows (the placement of the '?' parameters depends on the stored procedure's interface):  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL \"Sales by Year\" (?,?) }")  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL dbo.dt_adduserobject (?,?) }")  
```  
  
 Next, declare the command class:  
  
```  
class CMySProc : public CCommand<CAccessor<CMySProcAccessor> >  
```  
  
 Finally, call the stored procedure in `OpenRowset` as follows:  
  
```  
CSession m_session;  
HRESULT OpenRowset()  
{  
   return CCommand<CAccessor<CMySProcAccessor> >::Open(m_session);  
}  
```  
  
 Also note that you can define a stored procedure using the database attribute [db_command](../../windows/db-command.md) as follows:  
  
```  
db_command("{ ? = CALL dbo.dt_adduserobject }")  
```  
  
## See Also  
 [Using Stored Procedures](../../data/oledb/using-stored-procedures.md)