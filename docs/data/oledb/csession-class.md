---
description: "Learn more about: CSession Class"
title: "CSession Class"
ms.date: "11/04/2016"
f1_keywords: ["CSession", "ATL::CSession", "ATL.CSession", "CSession.Abort", "CSession::Abort", "ATL.CSession.Abort", "ATL::CSession::Abort", "CSession::Close", "ATL.CSession.Close", "CSession.Close", "ATL::CSession::Close", "CSession.Commit", "ATL.CSession.Commit", "ATL::CSession::Commit", "CSession::Commit", "GetTransactionInfo", "CSession.GetTransactionInfo", "ATL.CSession.GetTransactionInfo", "CSession::GetTransactionInfo", "ATL::CSession::GetTransactionInfo", "ATL::CSession::Open", "CSession::Open", "CSession.Open", "ATL.CSession.Open", "CSession::StartTransaction", "StartTransaction", "ATL.CSession.StartTransaction", "CSession.StartTransaction", "ATL::CSession::StartTransaction"]
helpviewer_keywords: ["CSession class", "Abort method", "Close method", "Commit method", "GetTransactionInfo method", "Open method", "StartTransaction method"]
ms.assetid: 83cd798f-b45d-4f11-a23c-29183390450c
---
# CSession Class

Represents a single database access session.

## Syntax

```cpp
class CSession
```

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[Abort](#abort)|Cancels (terminates) the transaction.|
|[Close](#close)|Closes the session.|
|[Commit](#commit)|Commits the transaction.|
|[GetTransactionInfo](#gettransactioninfo)|Returns information regarding a transaction.|
|[Open](#open)|Opens a new session for the data source object.|
|[StartTransaction](#starttransaction)|Begins a new transaction for this session.|

## Remarks

One or more sessions can be associated with each provider connection (data source), which is represented by a [CDataSource](../../data/oledb/cdatasource-class.md) object. To create a new `CSession` for a `CDataSource`, call [CSession::Open](#open). To begin a database transaction, `CSession` provides the `StartTransaction` method. Once a transaction is started, you can commit to it using the `Commit` method, or cancel it using the `Abort` method.

## <a name="abort"></a> CSession::Abort

Terminates the transaction.

### Syntax

```cpp
HRESULT Abort(BOID* pboidReason = NULL,
   BOOL bRetaining = FALSE,
   BOOL bAsync = FALSE) const throw();
```

#### Parameters

See [ITransaction::Abort](/previous-versions/windows/desktop/ms709833(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

## <a name="close"></a> CSession::Close

Closes the session, which was opened by [CSession::Open](#open).

### Syntax

```cpp
void Close() throw();
```

### Remarks

Releases the `m_spOpenRowset` pointer.

## <a name="commit"></a> CSession::Commit

Commits the transaction.

### Syntax

```cpp
HRESULT Commit(BOOL bRetaining = FALSE,
   DWORD grfTC = XACTTC_SYNC,
   DWORD grfRM = 0) const throw();
```

#### Parameters

See [ITransaction::Commit](/previous-versions/windows/desktop/ms713008(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

### Remarks

For more information, see [ITransaction::Commit](/previous-versions/windows/desktop/ms713008(v=vs.85)).

## <a name="gettransactioninfo"></a> CSession::GetTransactionInfo

Returns information regarding a transaction.

### Syntax

```cpp
HRESULT GetTransactionInfo(XACTTRANSINFO* pInfo) const throw();
```

#### Parameters

See [ITransaction::GetTransactionInfo](/previous-versions/windows/desktop/ms714975(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

### Remarks

For more information, see [ITransaction::GetTransactionInfo](/previous-versions/windows/desktop/ms714975(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="open"></a> CSession::Open

Opens a new session for the data source object.

### Syntax

```cpp
HRESULT Open(const CDataSource& ds,
   DBPROPSET *pPropSet = NULL,
   ULONG ulPropSets = 0) throw();
```

#### Parameters

*ds*<br/>
[in] The data source for which the session is to be opened.

*pPropSet*<br/>
[in] A pointer to an array of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures containing properties and values to be set. See [Property Sets and Property Groups](/previous-versions/windows/desktop/ms713696(v=vs.85)) in the *OLE DB Programmer's Reference* in the Windows SDK.

*ulPropSets*<br/>
[in] The number of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures passed in the *pPropSet* argument.

### Return Value

A standard HRESULT.

### Remarks

You must open the data source object using [CDataSource::Open](./cdatasource-class.md#open) before passing it to `CSession::Open`.

## <a name="starttransaction"></a> CSession::StartTransaction

Begins a new transaction for this session.

### Syntax

```cpp
HRESULT StartTransaction(ISOLEVEL isoLevel = ISOLATIONLEVEL_READCOMMITTED,
   ULONG isoFlags = 0,
   ITransactionOptions* pOtherOptions = NULL,
   ULONG* pulTransactionLevel = NULL) const throw();
```

#### Parameters

See [ITransactionLocal::StartTransaction](/previous-versions/windows/desktop/ms709786(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

### Remarks

For more information, see [ITransactionLocal::StartTransaction](/previous-versions/windows/desktop/ms709786(v=vs.85)) in the *OLE DB Programmer's Reference*.

## See also

[CatDB](../../overview/visual-cpp-samples.md)<br/>
[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
