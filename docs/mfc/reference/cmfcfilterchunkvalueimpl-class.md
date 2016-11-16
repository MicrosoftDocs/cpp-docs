---
title: "CMFCFilterChunkValueImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCFilterChunkValueImpl"
  - "afxwin/CMFCFilterChunkValueImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCFilterChunkValueImpl class"
ms.assetid: 3c833f23-5b88-4d08-9e09-ca6a8aec88bf
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl](#cmfcfilterchunkvalueimpl___dtorcmfcfilterchunkvalueimpl)|Destructs the object.|  
|[CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl](#cmfcfilterchunkvalueimpl__cmfcfilterchunkvalueimpl)|Constructs the object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCFilterChunkValueImpl::Clear](#cmfcfilterchunkvalueimpl__clear)|Clears the ChunkValue.|  
|[CMFCFilterChunkValueImpl::CopyChunk](#cmfcfilterchunkvalueimpl__copychunk)|Copies this chunk to a structure describing the characteristics of a chunk.|  
|[CMFCFilterChunkValueImpl::CopyFrom](#cmfcfilterchunkvalueimpl__copyfrom)|Initializes this chunk value from the other value.|  
|[CMFCFilterChunkValueImpl::GetChunkGUID](#cmfcfilterchunkvalueimpl__getchunkguid)|Retrieves the chunk GUID.|  
|[CMFCFilterChunkValueImpl::GetChunkPID](#cmfcfilterchunkvalueimpl__getchunkpid)|Retrieves the chunk PID (property ID).|  
|[CMFCFilterChunkValueImpl::GetChunkType](#cmfcfilterchunkvalueimpl__getchunktype)|Gets chunk type.|  
|[CMFCFilterChunkValueImpl::GetString](#cmfcfilterchunkvalueimpl__getstring)|Retrieves the the string value.|  
|[CMFCFilterChunkValueImpl::GetValue](#cmfcfilterchunkvalueimpl__getvalue)|Retrieves the value as an allocated propvariant.|  
|[CMFCFilterChunkValueImpl::GetValueNoAlloc](#cmfcfilterchunkvalueimpl__getvaluenoalloc)|Returns non-allocated (internal value) value.|  
|[CMFCFilterChunkValueImpl::IsValid](#cmfcfilterchunkvalueimpl__isvalid)|Checks whether this property value is valid or not.|  
|[CMFCFilterChunkValueImpl::SetBoolValue](#cmfcfilterchunkvalueimpl__setboolvalue)|Overloaded. Sets the property by key to a Boolean.|  
|[CMFCFilterChunkValueImpl::SetDwordValue](#cmfcfilterchunkvalueimpl__setdwordvalue)|Sets the property by key to a DWORD.|  
|[CMFCFilterChunkValueImpl::SetFileTimeValue](#cmfcfilterchunkvalueimpl__setfiletimevalue)|Sets the property by key to a filetime.|  
|[CMFCFilterChunkValueImpl::SetInt64Value](#cmfcfilterchunkvalueimpl__setint64value)|Sets the property by key to an int64.|  
|[CMFCFilterChunkValueImpl::SetIntValue](#cmfcfilterchunkvalueimpl__setintvalue)|Sets the property by key to an int.|  
|[CMFCFilterChunkValueImpl::SetLongValue](#cmfcfilterchunkvalueimpl__setlongvalue)|Sets the property by key to a LONG.|  
|[CMFCFilterChunkValueImpl::SetSystemTimeValue](#cmfcfilterchunkvalueimpl__setsystemtimevalue)|Sets the property by key to a SystemTime.|  
|[CMFCFilterChunkValueImpl::SetTextValue](#cmfcfilterchunkvalueimpl__settextvalue)|Sets the property by key to a Unicode string.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCFilterChunkValueImpl::SetChunk](#cmfcfilterchunkvalueimpl__setchunk)|A helper function that sets the chunk's common properties.|  
  
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
  
##  <a name="cmfcfilterchunkvalueimpl__clear"></a>  CMFCFilterChunkValueImpl::Clear  
 Clears the ChunkValue.  
  
```  
void Clear();
```  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__cmfcfilterchunkvalueimpl"></a>  CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl  
 Constructs the object.  
  
```  
CMFCFilterChunkValueImpl();
```  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl___dtorcmfcfilterchunkvalueimpl"></a>  CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl  
 Destructs the object.  
  
```  
virtual ~CMFCFilterChunkValueImpl();
```  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__copychunk"></a>  CMFCFilterChunkValueImpl::CopyChunk  
 Copies this chunk to a structure describing the characteristics of a chunk.  
  
```  
HRESULT CopyChunk(STAT_CHUNK* pStatChunk);
```  
  
### Parameters  
 `pStatChunk`  
 A pointer to destination value describing the characteristics of the chunk.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__copyfrom"></a>  CMFCFilterChunkValueImpl::CopyFrom  
 Initializes this chunk value from the other value.  
  
```  
void CopyFrom (IFilterChunkValue* pValue);
```  
  
### Parameters  
 `pValue`  
 Specifies the source value to copy from.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__getchunkguid"></a>  CMFCFilterChunkValueImpl::GetChunkGUID  
 Retrieves the chunk GUID.  
  
```  
REFGUID GetChunkGUID() const;

 
```  
  
### Return Value  
 A reference to a GUID identifying the chunk.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__getchunkpid"></a>  CMFCFilterChunkValueImpl::GetChunkPID  
 Retrieves the chunk PID (property ID).  
  
```  
DWORD GetChunkPID() const;

 
```  
  
### Return Value  
 A DWORD value containing the property ID.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__getchunktype"></a>  CMFCFilterChunkValueImpl::GetChunkType  
 Retrieves the chunk type.  
  
```  
CHUNKSTATE GetChunkType() const;

 
```  
  
### Return Value  
 A CHUNKSTATE enumerated value, which specifies whether the current chunk is a text-type property or a value-type property.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__getstring"></a>  CMFCFilterChunkValueImpl::GetString  
 Retrieves the string value.  
  
```  
CString &GetString();
```  
  
### Return Value  
 A string containing the chunk value.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__getvalue"></a>  CMFCFilterChunkValueImpl::GetValue  
 Retrieves the value as an allocated propvariant.  
  
```  
HRESULT GetValue(PROPVARIANT** ppPropVariant);
```  
  
### Parameters  
 `ppPropVariant`  
 When the function returns, this parameter contains the chunk value.  
  
### Return Value  
 S_OK if PROPVARIANT was allocated successfully and the chunk value was successfully copied to `ppPropVariant`; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__getvaluenoalloc"></a>  CMFCFilterChunkValueImpl::GetValueNoAlloc  
 Returns the non-allocated (internal value) value.  
  
```  
PROPVARIANT GetValueNoAlloc ();
```  
  
### Return Value  
 Returns the current chunk value.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__isvalid"></a>  CMFCFilterChunkValueImpl::IsValid  
 Checks whether this property value is valid or not.  
  
```  
BOOL IsValid() const;

 
```  
  
### Return Value  
 `TRUE` if the current chunk value is valid; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setboolvalue"></a>  CMFCFilterChunkValueImpl::SetBoolValue  
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
 `pkey`  
 Specifies a property key.  
  
 `bVal`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setchunk"></a>  CMFCFilterChunkValueImpl::SetChunk  
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
 `pkey`  
 Specifies a property key.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setdwordvalue"></a>  CMFCFilterChunkValueImpl::SetDwordValue  
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
 `pkey`  
 Specifies a property key.  
  
 `dwVal`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setfiletimevalue"></a>  CMFCFilterChunkValueImpl::SetFileTimeValue  
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
 `pkey`  
 Specifies a property key.  
  
 `dtVal`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setint64value"></a>  CMFCFilterChunkValueImpl::SetInt64Value  
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
 `pkey`  
 Specifies a property key.  
  
 `nVal`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setintvalue"></a>  CMFCFilterChunkValueImpl::SetIntValue  
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
 `pkey`  
 Specifies a property key.  
  
 `nVal`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setlongvalue"></a>  CMFCFilterChunkValueImpl::SetLongValue  
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
 `pkey`  
 Specifies a property key.  
  
 `lVal`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__setsystemtimevalue"></a>  CMFCFilterChunkValueImpl::SetSystemTimeValue  
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
 `pkey`  
 Specifies a property key.  
  
 `systemTime`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
##  <a name="cmfcfilterchunkvalueimpl__settextvalue"></a>  CMFCFilterChunkValueImpl::SetTextValue  
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
 `pkey`  
 Specifies a property key.  
  
 `pszValue`  
 Specifies the chunk value to set.  
  
 `chunkType`  
 Flags indicate whether this chunk contains a text-type or a value-type property. Flag values are taken from the CHUNKSTATE enumeration.  
  
 `locale`  
 The language and sublanguage associated with a chunk of text. Chunk locale is used by document indexers to perform proper word breaking of text. If the chunk is neither text-type nor a value-type with data type VT_LPWSTR, VT_LPSTR, or VT_BSTR, this field is ignored.  
  
 `cwcLenSource`  
 The length in characters of the source text from which the current chunk was derived. A zero value signifies character-by-character correspondence between the source text and the derived text. A nonzero value means that no such direct correspondence exists.  
  
 `cwcStartSource`  
 The offset from which the source text for a derived chunk starts in the source chunk.  
  
 `chunkBreakType`  
 The type of break that separates the previous chunk from the current chunk. Values are from the CHUNK_BREAKTYPE enumeration.  
  
### Return Value  
 S_OK if successful; otherwise an error code.  
  
### Remarks  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
