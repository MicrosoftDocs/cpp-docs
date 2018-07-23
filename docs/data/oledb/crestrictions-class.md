---
title: "CRestrictions Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::CRestrictions", "CRestrictions", "ATL.CRestrictions", "CRestrictions.Open", "ATL::CRestrictions::Open", "ATL.CRestrictions.Open", "CRestrictions::Open"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRestrictions class", "Open method"]
ms.assetid: 0aaa2364-641c-4318-b110-7446aada4b4f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRestrictions Class
A generic class that allows you to specify restrictions for schema rowsets.  
  
## Syntax

```cpp
template <class T, short nRestrictions, const GUID* pguid>  
class CRestrictions : 
        public CSchemaRowset <T, nRestrictions>  
```  
  
#### Parameters  
 *T*  
 The class used for the accessor.  
  
 *nRestrictions*  
 The number of restriction columns for the schema rowset.  
  
 *pguid*  
 A pointer to the GUID for the schema.  

## Requirements  
 **Header:** atldbsch.h 
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Open](#open)|Returns a result set according to the user-supplied restrictions.|   

## <a name="open"></a> CRestrictions::Open
Returns a result set according to the user-supplied restrictions.  
  
### Syntax  
  
```cpp
HRESULT Open(const CSession& session,  
   LPCTSTR lpszParam 1 = NULL,  
   LPCTSTR lpszParam 2 = NULL,  
   LPCTSTR lpszParam 3 = NULL,  
   LPCTSTR lpszParam 4 = NULL,  
   LPCTSTR lpszParam 5 = NULL,  
   LPCTSTR lpszParam 6 = NULL,  
   LPCTSTR lpszParam 7 = NULL,  
   bool bBind = true);  
```  
  
#### Parameters  
 *session*  
 [in] Specifies an existing session object used to connect to the data source.  
  
 *lpszParam*  
 [in] Specifies the restrictions on the schema rowset.  
  
 *bBind*  
 [in] Specifies whether to bind the column map automatically. The default is **true**, which causes the column map to be bound automatically. Setting *bBind* to **false** prevents the automatic binding of the column map so that you can bind manually. (Manual binding is of particular interest to OLAP users.)  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 You can specify a maximum of seven restrictions on a schema rowset.  
  
 See [IDBSchemaRowset](https://msdn.microsoft.com/library/ms713686.aspx) for information about the defined restrictions on each schema rowset.  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)    
 [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)