---
title: "db_column | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.db_column"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "db_column attribute"
ms.assetid: 58da4afc-f69c-4ae6-af9a-3f9515f56081
caps.latest.revision: 12
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
# db_column
Binds a specified column to a variable in the rowset.  
  
## Syntax  
  
```  
  
      [ db_column(   
   ordinal,   
   dbtype,   
   precision,   
   scale,   
   status,   
   length   
) ]  
```  
  
#### Parameters  
 `ordinal`  
 The ordinal column number (**DBCOLUMNINFO** ordinal) or column name (ANSI or Unicode string) corresponding to a field in the rowset to which to bind data. If you use numbers, you can skip consecutive ordinals (for example: 1, 2, 3, 5). The name may contain spaces if the OLE DB provider you use supports it. For example, you can use either of the following formats:  
  
```  
[db_column("2")] TCHAR szCity[30];  
[db_column(L"city_name")] TCHAR szCity[30];  
```  
  
 *dbtype* (optional)  
 An OLE DB [Type Indicator](https://msdn.microsoft.com/en-us/library/ms711251.aspx) for the column entry.  
  
 *precision* (optional)  
 The precision to be used for the column entry. For details, see the description of the `bPrecision` element of the [DBBINDING structure](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *scale* (optional)  
 The scale to be used for the column entry. For details, see the description of `bScale` element of the [DBBINDING structure](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *status* (optional)  
 A member variable used to hold the status of this column. The status indicates whether the column value is a data value or some other value, such as **NULL**. For possible values, see [Status](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in the *OLE DB Programmer's Reference*.  
  
 *length* (optional)  
 A member variable used to hold the size of the column in bytes.  
  
## Remarks  
 **db_column** binds the specified table column to a variable in the rowset. It delimits member data that can participate in OLE DB `IAccessor`-based binding. This attribute sets up the column map normally defined using the OLE DB consumer macros [BEGIN_COLUMN_MAP](../data/oledb/begin-column-map.md), [END_COLUMN_MAP](../data/oledb/end-column-map.md), and [COLUMN_ENTRY](../data/oledb/column-entry.md). These manipulate the OLE DB [DBBINDING structure](https://msdn.microsoft.com/en-us/library/ms716845.aspx) to bind the specified column. Each member you mark with the **db_column** attribute will occupy one entry in the column map in the form of a column entry. Therefore, you call this attribute where you would put the column map, that is, in the command or table class.  
  
 Use **db_column** in conjunction with either the [db_table](../windows/db-table.md) or [db_command](../windows/db-command.md) attributes.  
  
 When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to _*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName,* which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.  
  
 For examples of this attribute used in an application, see the samples [AtlAgent](http://msdn.microsoft.com/en-us/52bef5da-c1a0-4223-b4e6-9e464b6db409), and [MultiRead](http://msdn.microsoft.com/en-us/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## Example  
 This sample binds a column in a table to a **long** data member and specifies status and length fields.  
  
```  
// db_column_1.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_command(L"Select * from Products") ]  
class CProducts {  
   DBSTATUS m_dwProductIDStatus;  
   DBLENGTH m_dwProductIDLength;  
  
   [ db_column("1", status="m_dwProductIDStatus", length="m_dwProductIDLength") ] LONG m_ProductID;  
};  
```  
  
## Example  
 This sample binds four columns to a **long**, a character string, a timestamp, and a **DB_NUMERIC** integer, in that order.  
  
```  
// db_column_2.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_command(L"Select * from Products") ]  
class CProducts {  
   [db_column("1")] LONG m_OrderID;  
   [db_column("2")] TCHAR m_CustomerID[6];  
   [db_column("4")] DB_NUMERIC m_OrderDate;     
   [db_column("7", dbtype="DBTYPE_NUMERIC")] DB_NUMERIC m_ShipVia;  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`, member, method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)