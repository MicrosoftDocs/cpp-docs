---
title: "CTable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::CTable", "ATL.CTable", "CTable", "ATL.CTable.Open", "ATL::CTable::Open", "CTable::Open", "CTable.Open"]
dev_langs: ["C++"]
helpviewer_keywords: ["CTable class", "Open method"]
ms.assetid: f13fdaa3-e198-4557-977d-54b0bbc3454d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CTable Class
Provides a means to directly access a simple rowset (one with no parameters).  
  
## Syntax

```cpp
template <class TAccessor = CNoAccessor, 
            template <typename T> class TRowset = CRowset>  
class CTable :  
   public CAccessorRowset <TAccessor, TRowset>  
```  
  
### Parameters  
 *TAccessor*  
 An accessor class.  
  
 *TRowset*  
 A rowset class.  

## Requirements  
 **Header:** atldbcli.h  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Open](#open)|Opens the table.|  
  
## Remarks  
 See [CCommand](../../data/oledb/ccommand-class.md) for information on how to execute a command to access a rowset.  

## <a name="open"></a> CTable::Open
Opens the table.  
  
### Syntax  
  
```cpp
HRESULT Open(const CSession& session,  
   LPCWSTR wszTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  

HRESULT Open(const CSession& session,  
   LPCSTR szTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  

HRESULT Open(const CSession& session,  
   DBID& dbid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  
```  
  
#### Parameters  
 *session*  
 [in] The session for which the table is opened.  
  
 *wszTableName*  
 [in] The name of the table to open, passed as a Unicode string.  
  
 *szTableName*  
 [in] The name of the table to open, passed as an ANSI string.  
  
 *dbid*  
 [in] The `DBID` of the table to open.  
  
 *pPropSet*  
 [in] A pointer to an array of [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) structures containing properties and values to be set. See [Property Sets and Property Groups](https://msdn.microsoft.com/library/ms713696.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK. The default value of NULL specifies no properties.  
  
 *ulPropSets*  
 [in] The number of [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) structures passed in the *pPropSet* argument.  
  
### Return Value  
 A standard HRESULT.  
  
### Remarks  
 For more details, see [IOpenRowset::OpenRowset](https://msdn.microsoft.com/library/ms716724.aspx) in the *OLE DB Programmer's Reference*.  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   