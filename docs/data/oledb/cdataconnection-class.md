---
description: "Learn more about: CDataConnection Class"
title: "CDataConnection Class"
ms.date: "03/27/2019"
f1_keywords: ["ATL::CDataConnection", "ATL.CDataConnection", "CDataConnection", "CDataConnection.CDataConnection", "ATL.CDataConnection.CDataConnection", "CDataConnection::CDataConnection", "ATL::CDataConnection::CDataConnection", "CDataConnection.Copy", "ATL.CDataConnection.Copy", "ATL::CDataConnection::Copy", "CDataConnection::Copy", "CDataConnection.Open", "ATL.CDataConnection.Open", "CDataConnection::Open", "ATL::CDataConnection::Open", "CDataConnection.OpenNewSession", "ATL.CDataConnection.OpenNewSession", "ATL::CDataConnection::OpenNewSession", "OpenNewSession", "CDataConnection::OpenNewSession", "CDataConnection::operatorBOOL", "ATL::CDataConnection::operatorBOOL", "CDataConnection.operatorBOOL", "ATL.CDataConnection.operatorBOOL", "CDataSource&", "CDataConnection.operatorCDataSource&", "operatorCDataSource&", "CDataConnection::operatorCDataSource&", "CDataSource*", "CDataConnection::operatorCDataSource*", "CDataConnection.operatorCDataSource*", "operatorCDataSource*", "CSession&", "CDataConnection::operatorCSession&", "CDataConnection.operatorCSession&", "operatorCSession&", "CDataConnection.operatorCSession*", "CDataConnection::operatorCSession*", "operatorCSession*", "CSession*"]
helpviewer_keywords: ["CDataConnection class", "CDataConnection class, constructor", "Copy method", "Open method", "OpenNewSession method", "BOOL operator", "operator bool", "BOOL operator", "operator bool", "CDataSource& operator", "operator & (CDataSource)", "CDataSource* operator", "operator * (CDataSource)", "operator CSession&", "CSession& operator", "operator CSession*", "CSession* operator"]
ms.assetid: 77432d85-4e20-49ec-a0b0-142137828471
---
# CDataConnection Class

Manages the connection with the data source.

## Syntax

```cpp
class CDataConnection
```

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[CDataConnection](#cdataconnection)|Constructor. Instantiates and initializes a `CDataConnection` object.|
|[Copy](#copy)|Creates a copy of an existing data connection.|
|[Open](#open)|Opens a connection to a data source using an initialization string.|
|[OpenNewSession](#opennewsession)|Opens a new session on the current connection.|

### Operators

| Name | Description |
|-|-|
|[operator BOOL](#op_bool)|Determines whether the current session is open or not.|
|[operator bool](#op_bool_ole)|Determines whether the current session is open or not.|
|[operator CDataSource&](#op_cdata_amp)|Returns a reference to the contained `CDataSource` object.|
|[operator CDataSource*](#op_cdata_star)|Returns a pointer to the contained `CDataSource` object.|
|[operator CSession&](#op_csession_amp)|Returns a reference to the contained `CSession` object.|
|[operator CSession*](#op_csession_star)|Returns a pointer to the contained `CSession` object.|

## Remarks

`CDataConnection` is a useful class for creating clients because it encapsulates necessary objects (data source and session) and some of the work you need to do when connecting to a data source

Without `CDataConnection`, you have to create a `CDataSource` object, call its [OpenFromInitializationString](./cdatasource-class.md#openfrominitializationstring) method, then create an instance of a [CSession](../../data/oledb/csession-class.md) object, call its [Open](./csession-class.md#open) method, then create a [CCommand](../../data/oledb/ccommand-class.md) object and call its `Open`* methods.

With `CDataConnection`, you only need to create a connection object, pass it an initialization string, then use that connection to open commands. If you plan on using your connection to the database repeatedly, it is a good idea to keep the connection open, and `CDataConnection` provides a convenient way to do that.

> [!NOTE]
> If you are creating a database application that needs to handle multiple sessions, you will need to use [OpenNewSession](#opennewsession).

## <a name="cdataconnection"></a> CDataConnection::CDataConnection

Instantiates and initializes a `CDataConnection` object.

### Syntax

```cpp
CDataConnection();
CDataConnection(const CDataConnection &ds);
```

#### Parameters

*ds*<br/>
[in] A reference to an existing data connection.

### Remarks

The first override creates a new `CDataConnection` object with default settings.

The second override creates a new `CDataConnection` object with settings equivalent to the data connection object you specify.

## <a name="copy"></a> CDataConnection::Copy

Creates a copy of an existing data connection.

### Syntax

```cpp
CDataConnection& Copy(const CDataConnection & ds) throw();
```

#### Parameters

*ds*<br/>
[in] A reference to an existing data connection to copy.

## <a name="open"></a> CDataConnection::Open

Opens a connection to a data source using an initialization string.

### Syntax

```cpp
HRESULT Open(LPCOLESTR szInitString) throw();
```

#### Parameters

*szInitString*<br/>
[in] The initialization string for the data source.

### Return Value

A standard HRESULT.

## <a name="opennewsession"></a> CDataConnection::OpenNewSession

Opens a new session using the current connection object's data source.

### Syntax

```cpp
HRESULT OpenNewSession(CSession & session) throw();
```

#### Parameters

*session*<br/>
[in/out] A reference to the new session object.

### Remarks

The new session uses the current connection object's contained data source object as its parent, and can access all of the same information as the data source.

### Return Value

A standard HRESULT.

## <a name="op_bool"></a> CDataConnection::operator BOOL

Determines whether the current session is open or not.

### Syntax

```cpp
operator BOOL() throw();
```

### Remarks

Returns **BOOL** (MFC typedef) value. **TRUE** means the current session is open; **FALSE** means the current session is closed.

## <a name="op_bool_ole"></a> CDataConnection::operator bool (OLE DB)

Determines whether the current session is open or not.

### Syntax

```cpp
operator bool() throw();
```

### Remarks

Returns a **`bool`** (C++ data type) value. **`true`** means the current session is open; **`false`** means the current session is closed.

## <a name="op_cdata_amp"></a> CDataConnection::operator CDataSource&amp;

Returns a reference to the contained `CDataSource` object.

### Syntax

```cpp
operator const CDataSource&() throw();
```

### Remarks

This operator returns a reference to the contained `CDataSource` object, allowing you to pass a `CDataConnection` object where a `CDataSource` reference is expected.

### Example

If you have a function (such as `func` below) that takes a `CDataSource` reference, you can use `CDataSource&` to pass a `CDataConnection` object instead.

[!code-cpp[NVC_OLEDB_Consumer#3](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_1.cpp)]

[!code-cpp[NVC_OLEDB_Consumer#4](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_2.cpp)]

## <a name="op_cdata_star"></a> CDataConnection::operator CDataSource*

Returns a pointer to the contained `CDataSource` object.

### Syntax

```cpp
operator const CDataSource*() throw();
```

### Remarks

This operator returns a pointer to the contained `CDataSource` object, allowing you to pass a `CDataConnection` object where a `CDataSource` pointer is expected.

See [operator CDataSource&](#op_cdata_amp) for a usage example.

## <a name="op_csession_amp"></a> CDataConnection::operator CSession&amp;

Returns a reference to the contained `CSession` object.

### Syntax

```cpp
operator const CSession&();
```

### Remarks

This operator returns a reference to the contained `CSession` object, allowing you to pass a `CDataConnection` object where a `CSession` reference is expected.

### Example

If you have a function (such as `func` below) that takes a `CSession` reference, you can use `CSession&` to pass a `CDataConnection` object instead.

[!code-cpp[NVC_OLEDB_Consumer#5](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_1.cpp)]

[!code-cpp[NVC_OLEDB_Consumer#6](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_2.cpp)]

## <a name="op_csession_star"></a> CDataConnection::operator CSession*

Returns a pointer to the contained `CSession` object.

### Syntax

```cpp
operator const CSession*() throw();
```

### Remarks

This operator returns a pointer to the contained `CSession` object, allowing you to pass a `CDataConnection` object where a `CSession` pointer is expected.

### Example

See [operator CSession&](#op_csession_amp) for a usage example.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
