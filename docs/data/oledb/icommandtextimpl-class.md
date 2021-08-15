---
description: "Learn more about: ICommandTextImpl Class"
title: "ICommandTextImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ICommandText", "GetCommandText", "ICommandTextImpl.GetCommandText", "ICommandTextImpl::GetCommandText", "ATL::ICommandTextImpl::m_strCommandText", "ICommandTextImpl<T>::m_strCommandText", "m_strCommandText", "ICommandTextImpl.m_strCommandText", "ICommandTextImpl::m_strCommandText", "ATL::ICommandTextImpl<T>::m_strCommandText", "ATL.ICommandTextImpl.m_strCommandText", "ICommandTextImpl.SetCommandText", "ICommandTextImpl::SetCommandText", "SetCommandText"]
helpviewer_keywords: ["ICommandText class", "GetCommandText method", "m_strCommandText", "SetCommandText method"]
ms.assetid: 9c2715cc-1e55-4468-8327-85341617ed46
---
# ICommandTextImpl Class

Provides an implementation for the [ICommandText](/previous-versions/windows/desktop/ms714914(v=vs.85)) interface.

## Syntax

```cpp
template <class T >
class ATL_NO_VTABLE ICommandTextImpl
   : public ICommandImpl<T, ICommandText>
```

### Parameters

*T*<br/>
The command class derived from `ICommandTextImpl`.

## Requirements

**Header:** altdb.h

## Members

### Interface Methods

| Name | Description |
|-|-|
|[GetCommandText](#getcommandtext)|Returns the text command set by the last call to [SetCommandText](#setcommandtext).|
|[SetCommandText](#setcommandtext)|Sets the command text, replacing the existing command text.|

### Data Members

| Name | Description |
|-|-|
|[m_strCommandText](#strcommandtext)|Stores the command text.|

## Remarks

A mandatory interface on commands.

## <a name="getcommandtext"></a> ICommandTextImpl::GetCommandText

Returns the text command set by the last call to [SetCommandText](#setcommandtext).

### Syntax

```cpp
STDMETHOD(GetCommandText)(GUID * pguidDialect,
   LPOLESTR * ppwszCommand);
```

#### Parameters

See [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) in the *OLE DB Programmer's Reference*. The *pguidDialect* parameter is ignored by default.

## <a name="setcommandtext"></a> ICommandTextImpl::SetCommandText

Sets the command text, replacing the existing command text.

### Syntax

```cpp
STDMETHOD(SetCommandText)(REFGUID rguidDialect,
   LPCOLESTR pwszCommand);
```

#### Parameters

See [ICommandText::SetCommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="strcommandtext"></a> ICommandTextImpl::m_strCommandText

Stores the command text string.

### Syntax

```cpp
CComBSTR m_strCommandText;
```

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
