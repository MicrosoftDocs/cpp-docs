---
title: "db_table | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.db_table"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "db_table attribute"
ms.assetid: ff9eb957-4e6d-4175-afcc-fd8ea916cec0
caps.latest.revision: 10
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
# db_table
Opens an OLE DB table.  
  
## Syntax  
  
```  
  
      [ db_table(   
   db_table,   
   name,   
   source_name,   
   hresult   
) ]  
```  
  
#### Parameters  
 *db_table*  
 A string specifying the name of a database table (such as "Products").  
  
 *name* (optional)  
 The name of the handle you use to work with the table. You must specify this parameter if you want to return more than one row of results. **db_table** generates a variable with the specified *name* that can be used to traverse the rowset or execute multiple action queries.  
  
 *source_name* (optional)  
 The `CSession` variable or instance of a class that has the `db_source` attribute applied to it on which the command executes. See [db_source](../windows/db-source.md).  
  
 `hresult` (optional)  
 Identifies the variable that will receive the `HRESULT` of this database command. If the variable does not exist, it will be automatically injected by the attribute.  
  
## Remarks  
 **db_table** creates a [CTable](../data/oledb/ctable-class.md) object, which is used by an OLE DB consumer to open a table. You can use this attribute only at the class level; you cannot use it inline. Use **db_column** to bind table columns to variables; use **db_param** to delimit (set the parameter type and so on) of parameters.  
  
 When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to _*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName,* which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.  
  
## Example  
 The following example opens the Products table for use by `CProducts`.  
  
```  
// db_table.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_table(L"dbo.Products") ]  
class CProducts {  
   [ db_column("1") ] LONG m_ProductID;  
};  
```  
  
 For an example of this attribute used in an application, see the samples [AtlAgent](http://msdn.microsoft.com/en-us/52bef5da-c1a0-4223-b4e6-9e464b6db409) and [MultiRead](http://msdn.microsoft.com/en-us/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)