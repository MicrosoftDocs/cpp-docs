---
title: "Output Parameters | Microsoft Docs"
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
  - "OLE DB, stored procedures"
  - "stored procedures, calling"
  - "stored procedures, parameters"
  - "procedure calls"
  - "procedure calls, stored procedures"
ms.assetid: 4f7c2700-1c2d-42f3-8c9f-7e83962b2442
caps.latest.revision: 7
author: "mikeblome"
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
# Output Parameters
Calling a stored procedure is similar to invoking a SQL command. The main difference is that stored procedures use output parameters (or "outparameters") and return values.  
  
 In the following stored procedure, the first '?' is the return value (phone) and the second '?' is the input parameter (name):  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{ ? = SELECT phone FROM shippers WHERE name = ? }")  
```  
  
 You specify the in and out parameters in the parameter map:  
  
```  
BEGIN_PARAM_MAP(CMySProcAccessor)  
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)  
   COLUMN_ENTRY(1, m_Phone)   // Phone is the return value  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(2, m_Name)   // Name is the input parameter  
END_PARAM_MAP()  
```  
  
 Your application must handle the output returned from stored procedures. Different OLE DB providers return output parameters and return values at different times during result processing. For example, the Microsoft OLE DB provider for SQL Server (SQLOLEDB) does not supply output parameters and return codes until after the consumer has retrieved or canceled the result sets returned by the stored procedure. The output is returned in the last TDS packet from the server.  
  
## Row Count  
 If you use the OLE DB Consumer Templates to execute a stored procedure that has outparameters, the row count is not set until you close the rowset.  
  
 For example, consider a stored procedure with a rowset and an outparameter:  
  
```  
create procedure sp_test  
   @_rowcount integer output  
as  
   select top 50 * from test  
   @_rowcount = @@rowcount  
return 0  
```  
  
 The @_rowcount outparameter reports how many rows were actually returned from the test table. However, this stored procedure limits the number of rows to a maximum of 50. For example, if there were 100 rows in test, the rowcount would be 50 (because this code retrieves only the top 50 rows). If there were only 30 rows in the table, the rowcount would be 30. You must call **Close** or **CloseAll** to populate the outparameter before you fetch its value.  
  
## See Also  
 [Using Stored Procedures](../../data/oledb/using-stored-procedures.md)