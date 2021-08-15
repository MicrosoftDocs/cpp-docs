---
description: "Learn more about: CManualAccessor Class"
title: "CManualAccessor Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CManualAccessor", "ATL.CManualAccessor", "CManualAccessor", "ATL::CManualAccessor::AddBindEntry", "ATL.CManualAccessor.AddBindEntry", "CManualAccessor::AddBindEntry", "CManualAccessor.AddBindEntry", "CManualAccessor::AddParameterEntry", "ATL.CManualAccessor.AddParameterEntry", "CManualAccessor.AddParameterEntry", "AddParameterEntry", "ATL::CManualAccessor::AddParameterEntry", "ATL::CManualAccessor::CreateAccessor", "ATL.CManualAccessor.CreateAccessor", "CManualAccessor.CreateAccessor", "CManualAccessor::CreateAccessor", "ATL::CManualAccessor::CreateParameterAccessor", "ATL.CManualAccessor.CreateParameterAccessor", "CManualAccessor.CreateParameterAccessor", "CreateParameterAccessor", "CManualAccessor::CreateParameterAccessor"]
helpviewer_keywords: ["CManualAccessor class", "AddBindEntry method", "AddParameterEntry method", "CreateAccessor method", "CreateParameterAccessor method"]
ms.assetid: a0088074-7135-465c-b228-69097a50b8cc
---
# CManualAccessor Class

Represents an accessor type designed for advanced use.

## Syntax

```cpp
class CManualAccessor : public CAccessorBase
```

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[AddBindEntry](#addbindentry)|Adds a bind entry to the output columns.|
|[AddParameterEntry](#addparameterentry)|Adds a parameter entry to the parameter accessor.|
|[CreateAccessor](#createaccessor)|Allocates memory for the column bind structures and initializes the column data members.|
|[CreateParameterAccessor](#createparameteraccessor)|Allocates memory for the parameter bind structures and initializes the parameter data members.|

## Remarks

Using `CManualAccessor`, you can specify the parameter and output column binding by run-time function calls.

## <a name="addbindentry"></a> CManualAccessor::AddBindEntry

Adds a bind entry to the output columns.

### Syntax

```cpp
void AddBindEntry(DBORDINAL nOrdinal,
   DBTYPE wType,  DBLENGTH nColumnSize,
   void* pData,
   void* pLength = NULL,
   void* pStatus = NULL) throw ();
```

#### Parameters

See [DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)) in the *OLE DB Programmer's Reference*.

*nOrdinal*<br/>
[in] Column number.

*wType*<br/>
[in] Data type.

*nColumnSize*<br/>
[in] Column size in bytes.

*pData*<br/>
[in] A pointer to the column data stored in the buffer.

*pLength*<br/>
[in] A pointer to the field length, if required.

*pStatus*<br/>
[in] A pointer to the variable to be bound to the column status, if required.

### Remarks

To use this function, you must first call [CreateAccessor](#createaccessor). You cannot add more entries than the number of columns specified in `CreateAccessor`.

## <a name="addparameterentry"></a> CManualAccessor::AddParameterEntry

Adds a parameter entry to the parameter entry structures.

### Syntax

```cpp
void AddParameterEntry(DBORDINAL nOrdinal,
   DBTYPE wType,  DBLENGTH nColumnSize,
   void* pData,
   void* pLength = NULL,
   void* pStatus = NULL,
   DBPARAMIO eParamIO = DBPARAMIO_INPUT) throw ();
```

#### Parameters

See [DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)) in the *OLE DB Programmer's Reference*.

*nOrdinal*<br/>
[in] Parameter number.

*wType*<br/>
[in] Data type.

*nColumnSize*<br/>
[in] Column size in bytes.

*pData*<br/>
[in] A pointer to the column data stored in the buffer.

*pLength*<br/>
[in] A pointer to the field length, if required.

*pStatus*<br/>
[in] A pointer to the variable to be bound to the column status, if required.

*eParamIO*<br/>
[in] Specifies whether the parameter with which the binding is associated is an input, input/output, or output parameter.

### Remarks

To use this function, you must first call [CreateParameterAccessor](#createparameteraccessor).

## <a name="createaccessor"></a> CManualAccessor::CreateAccessor

Allocates memory for the column bind structures and initializes the column data members.

### Syntax

```cpp
HRESULT CreateAccessor(int nBindEntries,
  void* pBuffer,
   DBLENGTH nBufferSize) throw();
```

#### Parameters

*nBindEntries*<br/>
[in] Number of columns. This number should match the number of calls to the [CManualAccessor::AddBindEntry](#addbindentry) function.

*pBuffer*<br/>
[in] A pointer to the buffer where the output columns are stored.

*nBufferSize*<br/>
[in] The size of the buffer in bytes.

### Return Value

One of the standard HRESULT values.

### Remarks

Call this function before you call the `CManualAccessor::AddBindEntry` function.

## <a name="createparameteraccessor"></a> CManualAccessor::CreateParameterAccessor

Allocates memory for the parameter bind structures and initializes the parameter data members.

### Syntax

```cpp
HRESULT CreateParameterAccessor(int nBindEntries,
   void* pBuffer,
   DBLENGTH nBufferSize) throw();
```

#### Parameters

*nBindEntries*<br/>
[in] Number of columns.

*pBuffer*<br/>
[in] A pointer to the buffer where the input columns are stored.

*nBufferSize*<br/>
[in] The size of the buffer in bytes.

### Return Value

One of the standard HRESULT values.

### Remarks

You must call this function before calling [AddParameterEntry](#addparameterentry).

## See also

[DBViewer](../../overview/visual-cpp-samples.md)<br/>
[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[CAccessor Class](../../data/oledb/caccessor-class.md)<br/>
[CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)<br/>
[CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)
