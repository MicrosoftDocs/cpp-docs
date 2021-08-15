---
description: "Learn more about: CCommand Class"
title: "CCommand Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CCommand", "CCommand", "ATL.CCommand", "CCommand.Close", "CCommand::Close", "CCommand.Create", "CCommand::Create", "CCommand.CreateCommand", "CreateCommand", "CCommand::CreateCommand", "ATL::CCommand::GetNextResult", "CCommand::GetNextResult", "GetNextResult", "CCommand.GetNextResult", "ATL.CCommand.GetNextResult", "GetParameterInfo", "CCommand.GetParameterInfo", "CCommand::GetParameterInfo", "ATL.CCommand.Open", "ATL::CCommand::Open", "CCommand.Open", "CCommand::Open", "CCommand.Prepare", "CCommand::Prepare", "Prepare", "CCommand.ReleaseCommand", "ReleaseCommand", "CCommand::ReleaseCommand", "SetParameterInfo", "CCommand.SetParameterInfo", "CCommand::SetParameterInfo", "Unprepare", "CCommand.Unprepare", "CCommand::Unprepare"]
helpviewer_keywords: ["CCommand class", "Close method", "Create method [C++]", "CreateCommand method", "GetNextResult method", "GetParameterInfo method", "Open method", "Prepare method", "ReleaseCommand method", "SetParameterInfo method", "Unprepare method"]
ms.assetid: 0760bfc5-b9ee-4aee-8e54-31bd78714d3a
---
# CCommand Class

Provides methods to set and execute a command.

## Syntax

```cpp
template <class TAccessor = CNoAccessor,
   template <typename T> class TRowset = CRowset,
   class TMultiple = CNoMultipleResults>
class CCommand :
   public CAccessorRowset <TAccessor, TRowset>,
   public CCommandBase,
   public TMultiple
```

### Parameters

*TAccessor*<br/>
The type of accessor class (such as `CDynamicParameterAccessor`, `CDynamicStringAccessor`, or `CEnumeratorAccessor`) that you want the command to use. The default is `CNoAccessor`, which specifies that the class not support parameters or output columns.

*TRowset*<br/>
The type of rowset class (such as `CArrayRowset` or `CNoRowset`) that you want the command to use. The default is `CRowset`.

*TMultiple*<br/>
To use an OLE DB command that can return multiple results, specify [CMultipleResults](../../data/oledb/cmultipleresults-class.md). Otherwise, use [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md). For details, see [IMultipleResults](/previous-versions/windows/desktop/ms721289(v=vs.85)).

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[Close](#close)|Closes the current command.|
|[GetNextResult](#getnextresult)|Fetches the next result when using multiple result sets.|
|[Open](#open)|Executes and optionally binds the command.|

### Inherited Methods

| Name | Description |
|-|-|
|[Create](#create)|Creates a new command for the specified session, then sets the command text.|
|[CreateCommand](#createcommand)|Creates a new command.|
|[GetParameterInfo](#getparameterinfo)|Gets a list of the command's parameters, their names, and their types.|
|[Prepare](#prepare)|Validates and optimizes the current command.|
|[ReleaseCommand](#releasecommand)|Releases the parameter accessor if necessary, then releases the command.|
|[SetParameterInfo](#setparameterinfo)|Specifies the native type of each command parameter.|
|[Unprepare](#unprepare)|Discards the current command execution plan.|

## Remarks

Use this class when you need to perform a parameter-based operation or execute a command. If you merely need to open a simple rowset, use [CTable](../../data/oledb/ctable-class.md) instead.

The accessor class you are using determines the method of binding parameters and data.

Note that you cannot use stored procedures with the OLE DB Provider for Jet because that provider does not support stored procedures (only constants are allowed in query strings).

## <a name="close"></a> CCommand::Close

Releases the accessor rowset associated with the command.

### Syntax

```cpp
void Close();
```

### Remarks

A command uses a rowset, result set accessor, and (optionally) a parameter accessor (unlike tables, which do not support parameters and do not need a parameter accessor).

When you execute a command, you should call both `Close` and [ReleaseCommand](#releasecommand) after the command.

When you want to execute the same command repeatedly, you should release each result set accessor by calling `Close` before calling `Execute`. At the end of the series, you should release the parameter accessor by calling `ReleaseCommand`. Another common scenario is calling a stored procedure that has output parameters. On many providers (such as the OLE DB provider for SQL Server) the output parameter values will not be accessible until you close the result set accessor. Call `Close` to close the returned rowset and result set accessor, but not the parameter accessor, thus allowing you to retrieve the output parameter values.

### Example

The following example shows how you can call `Close` and `ReleaseCommand` when you execute the same command repeatedly.

[!code-cpp[NVC_OLEDB_Consumer#2](../../data/oledb/codesnippet/cpp/ccommand-close_1.cpp)]

## <a name="getnextresult"></a> CCommand::GetNextResult

Fetches the next result set if one is available.

### Syntax

```cpp
HRESULT GetNextResult(DBROWCOUNT* pulRowsAffected,
   bool bBind = true) throw();
```

#### Parameters

*pulRowsAffected*<br/>
[in/out] A pointer to memory where the count of rows affected by a command is returned.

*bBind*<br/>
[in] Specifies whether to bind the command automatically after being executed. The default is **`true`**, which causes the command to be bound automatically. Setting *bBind* to **`false`** prevents the automatic binding of the command so that you can bind manually. (Manual binding is of particular interest to OLAP users.)

### Return Value

A standard HRESULT.

### Remarks

If a result set has been previously fetched, this function releases the previous result set and unbinds the columns. If *bBind* is **`true`**, it binds the new columns.

You should call this function only if you have specified multiple results by setting the `CCommand` template parameter *TMultiple*=`CMultipleResults`.

## <a name="open"></a> CCommand::Open

Executes and optionally binds the command.

### Syntax

```cpp
HRESULT Open(const CSession& session,
   LPCWSTR wszCommand,
   DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   REFGUID guidCommand = DBGUID_DEFAULT,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();

HRESULT Open(const CSession& session,
   LPCSTR szCommand,
   DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   REFGUID guidCommand = DBGUID_DEFAULT,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();

HRESULT Open(const CSession& session,
   INT szCommand = NULL,
   DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   REFGUID guidCommand = DBGUID_DEFAULT,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();

HRESULT Open(DBPROPSET *pPropSet = NULL,
   DBROWCOUNT* pRowsAffected = NULL,
   bool bBind = true,
   ULONG ulPropSets = 0) throw();
```

#### Parameters

*session*<br/>
[in] The session in which to execute the command.

*wszCommand*<br/>
[in] The command to execute, passed as a Unicode string. Can be NULL when using `CAccessor`, in which case the command will be retrieved from the value passed to the [DEFINE_COMMAND](./macros-and-global-functions-for-ole-db-consumer-templates.md#define_command) macro. See [ICommand::Execute](/previous-versions/windows/desktop/ms718095(v=vs.85)) in the *OLE DB Programmer's Reference* for details.

*szCommand*<br/>
[in] Same as *wszCommand* except that this parameter takes an ANSI command string. The fourth form of this method can take a NULL value. See "Remarks" later in this topic for details.

*pPropSet*<br/>
[in] A pointer to an array of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures containing properties and values to be set. See [Property Sets and Property Groups](/previous-versions/windows/desktop/ms713696(v=vs.85)) in the *OLE DB Programmer's Reference* in the Windows SDK.

*pRowsAffected*<br/>
[in/out] A pointer to memory where the count of rows affected by a command is returned. If *\*pRowsAffected* is NULL, no row count is returned. Otherwise, `Open` sets *\*pRowsAffected* according to the following conditions:

|If|Then|
|--------|----------|
|The `cParamSets` element of `pParams` is greater than 1|*\*pRowsAffected* represents the total number of rows affected by all of the parameter sets specified in the execution.|
|The number of affected rows is not available|*\*pRowsAffected* is set to -1.|
|The command does not update, delete, or insert rows|*\*pRowsAffected* is undefined.|

*guidCommand*<br/>
[in] A GUID that specifies the syntax and general rules for the provider to use in parsing the command text. See [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) and [ICommandText::SetCommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)) in the *OLE DB Programmer's Reference* for details.

*bBind*<br/>
[in] Specifies whether to bind the command automatically after being executed. The default is **`true`**, which causes the command to be bound automatically. Setting *bBind* to **`false`** prevents the automatic binding of the command so that you can bind manually. (Manual binding is of particular interest to OLAP users.)

*ulPropSets*<br/>
[in] The number of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures passed in the *pPropSet* argument.

### Return Value

A standard HRESULT.

### Remarks

The first three forms of `Open` take a session, create a command, and execute the command, binding any parameters as necessary.

The first form of `Open` takes a Unicode command string and has no default value.

The second form of `Open` takes an ANSI command string and no default value (provided for backward compatibility with existing ANSI applications).

The third form of `Open` allows the command string to be NULL, because of type **`int`** with a default value of NULL. It is provided for calling `Open(session, NULL);` or `Open(session);` because NULL is of type **`int`**. This version requires and asserts that the **`int`** parameter be NULL.

Use the fourth form of `Open` when you have already created a command and you want to perform a single [Prepare](#prepare) and multiple executions.

> [!NOTE]
> `Open` calls `Execute`, which in turn calls `GetNextResult`.

## <a name="create"></a> CCommand::Create

Calls [CCommand::CreateCommand](#createcommand) to create a command for the specified session, then calls [ICommandText::SetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) to specify the command text.

### Syntax

```cpp
HRESULT CCommandBase::Create(const CSession& session,
   LPCWSTR wszCommand,
   REFGUID guidCommand = DBGUID_DEFAULT) throw ();

HRESULT CCommandBase::Create(const CSession& session,
   LPCSTR szCommand,
   REFGUID guidCommand = DBGUID_DEFAULT) throw ();
```

#### Parameters

*session*<br/>
[in] A session on which to create the command.

*wszCommand*<br/>
[in] A pointer to the Unicode text of the command string.

*szCommand*<br/>
[in] A pointer to the ANSI text of the command string.

*guidCommand*<br/>
[in] A GUID that specifies the syntax and general rules for the provider to use in parsing the command text. For a description of dialects, see [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

### Remarks

The first form of `Create` takes a Unicode command string. The second form of `Create` takes an ANSI command string (provided for backward compatibility with existing ANSI applications).

## <a name="createcommand"></a> CCommand::CreateCommand

Creates a new command.

### Syntax

```cpp
HRESULT CCommandBase::CreateCommand(const CSession& session) throw ();
```

#### Parameters

*session*<br/>
[in] A `CSession` object to be associated with the new command.

### Return Value

A standard HRESULT.

### Remarks

This method creates a command using the specified session object.

## <a name="getparameterinfo"></a> CCommand::GetParameterInfo

Gets a list of the command's parameters, their names, and their types.

### Syntax

```cpp
HRESULT CCommandBase::GetParameterInfo(DB_UPARAMS* pParams,
   DBPARAMINFO** ppParamInfo,
   OLECHAR** ppNamesBuffer) throw ();
```

#### Parameters

See [ICommandWithParameters::GetParameterInfo](/previous-versions/windows/desktop/ms714917(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

## <a name="prepare"></a> CCommand::Prepare

Validates and optimizes the current command.

### Syntax

```cpp
HRESULT CCommandBase::Prepare(ULONG cExpectedRuns = 0) throw();
```

#### Parameters

*cExpectedRuns*<br/>
[in] The number of times you expect to execute the command.

### Return Value

A standard HRESULT.

### Remarks

This method wraps the OLE DB method [ICommandPrepare::Prepare](/previous-versions/windows/desktop/ms718370(v=vs.85)).

## <a name="releasecommand"></a> CCommand::ReleaseCommand

Releases the parameter accessor, then releases the command itself.

### Syntax

```cpp
void CCommandBase::ReleaseCommand() throw();
```

### Remarks

`ReleaseCommand` is used in conjunction with `Close`. See [Close](#close) for usage details.

## <a name="setparameterinfo"></a> CCommand::SetParameterInfo

Specifies the native type of each command parameter.

### Syntax

```cpp
HRESULT CCommandBase::SetParameterInfo(DB_UPARAMS ulParams,
   const DBORDINAL* pOrdinals,
   const DBPARAMBINDINFO* pParamInfo) throw();
```

#### Parameters

See [ICommandWithParameters::SetParameterInfo](/previous-versions/windows/desktop/ms725393(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

## <a name="unprepare"></a> CCommand::Unprepare

Discards the current command execution plan.

### Syntax

```cpp
HRESULT CCommandBase::Unprepare() throw();
```

### Return Value

A standard HRESULT.

### Remarks

This method wraps the OLE DB method [ICommandPrepare::Unprepare](/previous-versions/windows/desktop/ms719635(v=vs.85)).

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
