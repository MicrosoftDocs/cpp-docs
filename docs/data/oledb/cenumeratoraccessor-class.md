---
description: "Learn more about: CEnumeratorAccessor Class"
title: "CEnumeratorAccessor Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CEnumeratorAccessor", "CEnumeratorAccessor", "ATL.CEnumeratorAccessor", "CEnumeratorAccessor.m_bIsParent", "ATL::CEnumeratorAccessor::m_bIsParent", "m_bIsParent", "ATL.CEnumeratorAccessor.m_bIsParent", "CEnumeratorAccessor::m_bIsParent", "ATL::CEnumeratorAccessor::m_nType", "CEnumeratorAccessor.m_nType", "CEnumeratorAccessor::m_nType", "ATL.CEnumeratorAccessor.m_nType", "ATL::CEnumeratorAccessor::m_szDescription", "CEnumeratorAccessor.m_szDescription", "CEnumeratorAccessor::m_szDescription", "ATL.CEnumeratorAccessor.m_szDescription", "CEnumeratorAccessor::m_szName", "ATL.CEnumeratorAccessor.m_szName", "ATL::CEnumeratorAccessor::m_szName", "CEnumeratorAccessor.m_szName", "CEnumeratorAccessor::m_szParseName", "ATL::CEnumeratorAccessor::m_szParseName", "m_szParseName", "CEnumeratorAccessor.m_szParseName", "ATL.CEnumeratorAccessor.m_szParseName"]
helpviewer_keywords: ["CEnumeratorAccessor class", "m_bIsParent", "m_nType", "m_szDescription", "m_szName", "m_szParseName"]
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
---
# CEnumeratorAccessor Class

Used by [CEnumerator](../../data/oledb/cenumerator-class.md) to access the data from the enumerator rowset.

## Syntax

```cpp
class CEnumeratorAccessor
```

## Requirements

**Header:** atldbcli.h

## Members

### Data Members

| Name | Description |
|-|-|
|[m_bIsParent](#bisparent)|A variable indicating whether the enumerator is a parent enumerator, if the row is an enumerator.|
|[m_nType](#ntype)|A variable indicating whether the row describes a data source or an enumerator.|
|[m_szDescription](#szdescription)|The description of the data source or enumerator.|
|[m_szName](#szname)|The name of the data source or enumerator.|
|[m_szParseName](#szparsename)|String to pass to [IParseDisplayName](/windows/win32/api/oleidl/nn-oleidl-iparsedisplayname) to obtain a moniker for the data source or enumerator.|

## Remarks

This rowset consists of the data sources and enumerators visible from the current enumerator.

## <a name="bisparent"></a> CEnumeratorAccessor::m_bIsParent

A variable indicating whether the enumerator is a parent enumerator, if the row is an enumerator.

### Syntax

```cpp
VARIANT_BOOL m_bIsParent;
```

### Remarks

See [ISourcesRowset::GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) in the *OLE DB Programmer's Reference* for more information.

## <a name="ntype"></a> CEnumeratorAccessor::m_nType

A variable indicating whether the row describes a data source or an enumerator.

### Syntax

```cpp
USHORT m_nType;
```

### Remarks

See [ISourcesRowset::GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) in the *OLE DB Programmer's Reference* for more information.

## <a name="szdescription"></a> CEnumeratorAccessor::m_szDescription

The description of the data source or enumerator.

### Syntax

```cpp
WCHAR m_szDescription[129];
```

### Remarks

See [ISourcesRowset::GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) in the *OLE DB Programmer's Reference* for more information.

## <a name="szname"></a> CEnumeratorAccessor::m_szName

The name of the data source or enumerator.

### Syntax

```cpp
WCHAR m_szName[129];
```

### Remarks

See [ISourcesRowset::GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) in the *OLE DB Programmer's Reference* for more information.

## <a name="szparsename"></a> CEnumeratorAccessor::m_szParseName

String to pass to [IParseDisplayName](/windows/win32/api/oleidl/nn-oleidl-iparsedisplayname) to obtain a moniker for the data source or enumerator.

### Syntax

```cpp
WCHAR m_szParseName[129];
```

### Remarks

See [ISourcesRowset::GetSourcesRowset](/previous-versions/windows/desktop/ms711200(v=vs.85)) in the *OLE DB Programmer's Reference* for more information.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
