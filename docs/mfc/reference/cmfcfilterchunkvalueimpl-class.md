---
description: "Learn more about: CMFCFilterChunkValueImpl Class"
title: "CMFCFilterChunkValueImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCFilterChunkValueImpl", "AFXWIN/CMFCFilterChunkValueImpl", "AFXWIN/CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl", "AFXWIN/CMFCFilterChunkValueImpl::Clear", "AFXWIN/CMFCFilterChunkValueImpl::CopyChunk", "AFXWIN/CMFCFilterChunkValueImpl::CopyFrom", "AFXWIN/CMFCFilterChunkValueImpl::GetChunkGUID", "AFXWIN/CMFCFilterChunkValueImpl::GetChunkPID", "AFXWIN/CMFCFilterChunkValueImpl::GetChunkType", "AFXWIN/CMFCFilterChunkValueImpl::GetString", "AFXWIN/CMFCFilterChunkValueImpl::GetValue", "AFXWIN/CMFCFilterChunkValueImpl::GetValueNoAlloc", "AFXWIN/CMFCFilterChunkValueImpl::IsValid", "AFXWIN/CMFCFilterChunkValueImpl::SetBoolValue", "AFXWIN/CMFCFilterChunkValueImpl::SetDwordValue", "AFXWIN/CMFCFilterChunkValueImpl::SetFileTimeValue", "AFXWIN/CMFCFilterChunkValueImpl::SetInt64Value", "AFXWIN/CMFCFilterChunkValueImpl::SetIntValue", "AFXWIN/CMFCFilterChunkValueImpl::SetLongValue", "AFXWIN/CMFCFilterChunkValueImpl::SetSystemTimeValue", "AFXWIN/CMFCFilterChunkValueImpl::SetTextValue", "AFXWIN/CMFCFilterChunkValueImpl::SetChunk"]
helpviewer_keywords: ["CMFCFilterChunkValueImpl [MFC], CMFCFilterChunkValueImpl", "CMFCFilterChunkValueImpl [MFC], Clear", "CMFCFilterChunkValueImpl [MFC], CopyChunk", "CMFCFilterChunkValueImpl [MFC], CopyFrom", "CMFCFilterChunkValueImpl [MFC], GetChunkGUID", "CMFCFilterChunkValueImpl [MFC], GetChunkPID", "CMFCFilterChunkValueImpl [MFC], GetChunkType", "CMFCFilterChunkValueImpl [MFC], GetString", "CMFCFilterChunkValueImpl [MFC], GetValue", "CMFCFilterChunkValueImpl [MFC], GetValueNoAlloc", "CMFCFilterChunkValueImpl [MFC], IsValid", "CMFCFilterChunkValueImpl [MFC], SetBoolValue", "CMFCFilterChunkValueImpl [MFC], SetDwordValue", "CMFCFilterChunkValueImpl [MFC], SetFileTimeValue", "CMFCFilterChunkValueImpl [MFC], SetInt64Value", "CMFCFilterChunkValueImpl [MFC], SetIntValue", "CMFCFilterChunkValueImpl [MFC], SetLongValue", "CMFCFilterChunkValueImpl [MFC], SetSystemTimeValue", "CMFCFilterChunkValueImpl [MFC], SetTextValue", "CMFCFilterChunkValueImpl [MFC], SetChunk"]
ms.assetid: 3c833f23-5b88-4d08-9e09-ca6a8aec88bf
---
# CMFCFilterChunkValueImpl Class

This is a class which simplifies both chunk and property value pair logic.

## Syntax

```
class CMFCFilterChunkValueImpl : public ATL::IFilterChunkValue;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl](#_dtorcmfcfilterchunkvalueimpl)|Destructs the object.|
|[CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl](#cmfcfilterchunkvalueimpl)|Constructs the object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::Clear](#clear)|Clears the ChunkValue.|
|[CMFCFilterChunkValueImpl::CopyChunk](#copychunk)|Copies this chunk to a structure describing the characteristics of a chunk.|
|[CMFCFilterChunkValueImpl::CopyFrom](#copyfrom)|Initializes this chunk value from the other value.|
|[CMFCFilterChunkValueImpl::GetChunkGUID](#getchunkguid)|Retrieves the chunk GUID.|
|[CMFCFilterChunkValueImpl::GetChunkPID](#getchunkpid)|Retrieves the chunk PID (property ID).|
|[CMFCFilterChunkValueImpl::GetChunkType](#getchunktype)|Gets chunk type.|
|[CMFCFilterChunkValueImpl::GetString](#getstring)|Retrieves the string value.|
|[CMFCFilterChunkValueImpl::GetValue](#getvalue)|Retrieves the value as an allocated propvariant.|
|[CMFCFilterChunkValueImpl::GetValueNoAlloc](#getvaluenoalloc)|Returns non-allocated (internal value) value.|
|[CMFCFilterChunkValueImpl::IsValid](#isvalid)|Checks whether this property value is valid or not.|
|[CMFCFilterChunkValueImpl::SetBoolValue](#setboolvalue)|Overloaded. Sets the property by key to a Boolean.|
|[CMFCFilterChunkValueImpl::SetDwordValue](#setdwordvalue)|Sets the property by key to a DWORD.|
|[CMFCFilterChunkValueImpl::SetFileTimeValue](#setfiletimevalue)|Sets the property by key to a filetime.|
|[CMFCFilterChunkValueImpl::SetInt64Value](#setint64value)|Sets the property by key to an int64.|
|[CMFCFilterChunkValueImpl::SetIntValue](#setintvalue)|Sets the property by key to an int.|
|[CMFCFilterChunkValueImpl::SetLongValue](#setlongvalue)|Sets the property by key to a LONG.|
|[CMFCFilterChunkValueImpl::SetSystemTimeValue](#setsystemtimevalue)|Sets the property by key to a SystemTime.|
|[CMFCFilterChunkValueImpl::SetTextValue](#settextvalue)|Sets the property by key to a Unicode string.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCFilterChunkValueImpl::SetChunk](#setchunk)|A helper function that sets the chunk's common properties.|

## Remarks

To use, you simply create a CMFCFilterChunkValueImpl class of the right kind

Example:

CMFCFilterChunkValueImpl chunk;

hr = chunk.SetBoolValue(PKEY_IsAttachment, true);

or

hr = chunk.SetFileTimeValue(PKEY_ItemDate, ftLastModified);

## Inheritance Hierarchy

`ATL::IFilterChunkValue`

[CMFCFilterChunkValueImpl](../../mfc/reference/cmfcfilterchunkvalueimpl-class.md)

## Requirements

**Header:** afxwin.h

## <a name="clear"></a> CMFCFilterChunkValueImpl::Clear

Clears the ChunkValue.

```cpp
void Clear();
```

### Remarks

## <a name="cmfcfilterchunkvalueimpl"></a> CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl

Constructs the object.

```
CMFCFilterChunkValueImpl();
```

### Remarks

## <a name="_dtorcmfcfilterchunkvalueimpl"></a> CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl

Destructs the object.

```
virtual ~CMFCFilterChunkValueImpl();
```

### Remarks

## <a name="copychunk"></a> CMFCFilterChunkValueImpl::CopyChunk

Copies this chunk to a structure describing the characteristics of a chunk.

```
HRESULT CopyChunk(STAT_CHUNK* pStatChunk);
```

### Parameters

*pStatChunk*<br/>
A pointer to destination value describing the characteristics of the chunk.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="copyfrom"></a> CMFCFilterChunkValueImpl::CopyFrom

Initializes this chunk value from the other value.

```cpp
void CopyFrom (IFilterChunkValue* pValue);
```

### Parameters

*pValue*<br/>
Specifies the source value to copy from.

### Remarks

## <a name="getchunkguid"></a> CMFCFilterChunkValueImpl::GetChunkGUID

Retrieves the chunk GUID.

```
REFGUID GetChunkGUID() const;
```

### Return Value

A reference to a GUID identifying the chunk.

### Remarks

## <a name="getchunkpid"></a> CMFCFilterChunkValueImpl::GetChunkPID

Retrieves the chunk PID (property ID).

```
DWORD GetChunkPID() const;
```

### Return Value

A DWORD value containing the property ID.

### Remarks

## <a name="getchunktype"></a> CMFCFilterChunkValueImpl::GetChunkType

Retrieves the chunk type.

```
CHUNKSTATE GetChunkType() const;
```

### Return Value

A CHUNKSTATE enumerated value, which specifies whether the current chunk is a text-type property or a value-type property.

### Remarks

## <a name="getstring"></a> CMFCFilterChunkValueImpl::GetString

Retrieves the string value.

```
CString &GetString();
```

### Return Value

A string containing the chunk value.

### Remarks

## <a name="getvalue"></a> CMFCFilterChunkValueImpl::GetValue

Retrieves the value as an allocated propvariant.

```
HRESULT GetValue(PROPVARIANT** ppPropVariant);
```

### Parameters

*ppPropVariant*<br/>
When the function returns, this parameter contains the chunk value.

### Return Value

S_OK if PROPVARIANT was allocated successfully and the chunk value was successfully copied to *ppPropVariant*; otherwise an error code.

### Remarks

## <a name="getvaluenoalloc"></a> CMFCFilterChunkValueImpl::GetValueNoAlloc

Returns the non-allocated (internal value) value.

```
PROPVARIANT GetValueNoAlloc ();
```

### Return Value

Returns the current chunk value.

### Remarks

## <a name="isvalid"></a> CMFCFilterChunkValueImpl::IsValid

Checks whether this property value is valid or not.

```
BOOL IsValid() const;
```

### Return Value

TRUE if the current chunk value is valid; otherwise FALSE.

### Remarks

## <a name="setboolvalue"></a> CMFCFilterChunkValueImpl::SetBoolValue

Overloaded. Sets the property by key to a Boolean.

```
HRESULT SetBoolValue(
    REFPROPERTYKEY pkey,
    BOOL bVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);

HRESULT SetBoolValue(
    REFPROPERTYKEY pkey,
    VARIANT_BOOL bVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*bVal*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="setchunk"></a> CMFCFilterChunkValueImpl::SetChunk

A helper function that sets the chunk's common properties.

```
HRESULT SetChunk(
    REFPROPERTYKEY pkey,
    CHUNKSTATE chunkType=CHUNK_VALUE,
    LCID locale=0,
    DWORD cwcLenSource=0,
    DWORD cwcStartSource=0,
    CHUNK_BREAKTYPE chunkBreakType=CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise error code.

### Remarks

## <a name="setdwordvalue"></a> CMFCFilterChunkValueImpl::SetDwordValue

Set the property by key to a DWORD.

```
HRESULT SetDwordValue(
    REFPROPERTYKEY pkey,
    DWORD dwVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*dwVal*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="setfiletimevalue"></a> CMFCFilterChunkValueImpl::SetFileTimeValue

Set the property by key to a filetime.

```
HRESULT SetFileTimeValue(
    REFPROPERTYKEY pkey,
    FILETIME dtVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*dtVal*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="setint64value"></a> CMFCFilterChunkValueImpl::SetInt64Value

Set the property by key to an int64.

```
HRESULT SetInt64Value(
    REFPROPERTYKEY pkey,
    __int64 nVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*nVal*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="setintvalue"></a> CMFCFilterChunkValueImpl::SetIntValue

Set the property by key to an int.

```
HRESULT SetIntValue(
    REFPROPERTYKEY pkey,
    int nVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*nVal*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="setlongvalue"></a> CMFCFilterChunkValueImpl::SetLongValue

Set the property by key to a LONG.

```
HRESULT SetLongValue(
    REFPROPERTYKEY pkey,
    long lVal,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*lVal*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="setsystemtimevalue"></a> CMFCFilterChunkValueImpl::SetSystemTimeValue

Sets the property by key to a SystemTime.

```
HRESULT SetSystemTimeValue(
    REFPROPERTYKEY pkey,
    const SYSTEMTIME& systemTime,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale=0,
    DWORD cwcLenSource=0,
    DWORD cwcStartSource=0,
    CHUNK_BREAKTYPE chunkBreakType=CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*systemTime*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## <a name="settextvalue"></a> CMFCFilterChunkValueImpl::SetTextValue

Sets the property by key to a Unicode string.

```
HRESULT SetTextValue(
    REFPROPERTYKEY pkey,
    LPCTSTR pszValue,
    CHUNKSTATE chunkType = CHUNK_VALUE,
    LCID locale = 0,
    DWORD cwcLenSource = 0,
    DWORD cwcStartSource = 0,
    CHUNK_BREAKTYPE chunkBreakType = CHUNK_NO_BREAK);
```

### Parameters

*pkey*<br/>
Specifies a property key.

*pszValue*<br/>
Specifies the chunk value to set.

*chunkType*<br/>
Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.

*locale*<br/>
The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.

*cwcLenSource*<br/>
The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.

*cwcStartSource*<br/>
The offset from which the source text for a derived chunk starts in the source chunk.

*chunkBreakType*<br/>
The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.

### Return Value

S_OK if successful; otherwise an error code.

### Remarks

## See also

[Classes](../../mfc/reference/mfc-classes.md)
