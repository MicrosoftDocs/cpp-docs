---
title: "CEnumerator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CEnumerator", "CEnumerator::Find", "ATL::CEnumerator::Find", "ATL.CEnumerator.Find", "CEnumerator.Find", "GetMoniker", "CEnumerator.GetMoniker", "CEnumerator::GetMoniker", "ATL.CEnumerator.GetMoniker", "ATL::CEnumerator::GetMoniker", "ATL.CEnumerator.Open", "CEnumerator::Open", "ATL::CEnumerator::Open", "CEnumerator.Open"]
dev_langs: ["C++"]
helpviewer_keywords: ["CEnumerator class", "Find method", "GetMoniker method", "Open method"]
ms.assetid: 25805f1b-26e3-402f-af83-1b5fe5ddebf7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CEnumerator Class
Uses an OLE DB enumerator object, which exposes the [ISourcesRowset](https://msdn.microsoft.com/library/ms715969.aspx) interface to return a rowset describing all data sources and enumerators.  
  
## Syntax

```cpp
class CEnumerator :   
   public CAccessorRowset< CAccessor <CEnumeratorAccessor >>  
```  

## Requirements  
 **Header:**atldbcli.h
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Find](#find)|Searches through available providers (data sources) looking for one with the specified name.|  
|[GetMoniker](#getmoniker)|Retrieves the `IMoniker` interface for the current record.|  
|[Open](#open)|Opens the enumerator.|  
  
## Remarks  
 You can retrieve the `ISourcesRowset` data indirectly from this class.  

## <a name="find"></a> CEnumerator::Find
Looks for a specified name among available providers.  
  
### Syntax  
  
```cpp
bool Find(TCHAR* szSearchName) throw();  
```  
  
#### Parameters  
 *szSearchName*  
 [in] The name to search for.  
  
### Return Value  
 **true** if the name was found. Otherwise, **false**.  
  
### Remarks  
 This name maps to the `SOURCES_NAME` member of the [ISourcesRowset](https://msdn.microsoft.com/library/ms715969.aspx) interface.  
  
## <a name="getmoniker"></a> CEnumerator::GetMoniker
Parses the display name to extract the component of the string that can be converted into a moniker.  
  
### Syntax  
  
```cpp
HRESULT GetMoniker(LPMONIKER* ppMoniker) const throw();  

HRESULT GetMoniker(LPMONIKER* ppMoniker,   
   LPCTSTR lpszDisplayName) const throw();  
```  
  
#### Parameters  
 *ppMoniker*  
 [out] The moniker parsed from the display name ([CEnumeratorAccessor::m_szParseName](../../data/oledb/cenumeratoraccessor-m-szparsename.md)) of the current row.  
  
 *lpszDisplayName*  
 [in] The display name to parse.  
  
### Return Value  
 A standard HRESULT.  

## <a name="open"></a> CEnumerator::Open
Binds the moniker for the enumerator, if one is specified, then retrieves the rowset for the enumerator by calling [ISourcesRowset::GetSourcesRowset](https://msdn.microsoft.com/library/ms711200.aspx).  
  
### Syntax  
  
```cpp
HRESULT Open(LPMONIKER pMoniker) throw();  

HRESULT Open(const CLSID* pClsid = & CLSID_OLEDB_ENUMERATOR) throw();  

HRESULT Open(const CEnumerator& enumerator) throw();  
```  
  
#### Parameters  
 *pMoniker*  
 [in] A pointer to a moniker for an enumerator.  
  
 *pClsid*  
 [in] A pointer to the `CLSID` of an enumerator.  
  
 *enumerator*  
 [in] A reference to an enumerator.  
  
### Return Value  
 A standard HRESULT.  
  
## See Also  
 [DBViewer](../../visual-cpp-samples.md)   
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)