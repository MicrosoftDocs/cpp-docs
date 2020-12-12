---
description: "Learn more about: CBookmark Class"
title: "CBookmark Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL.CBookmark", "ATL::CBookmark<nSize>", "CBookmark", "ATL.CBookmark<nSize>", "ATL::CBookmark", "CBookmark<0>.CBookmark<0>", "CBookmark::CBookmark", "ATL.CBookmark.CBookmark", "CBookmark.CBookmark", "ATL::CBookmark<0>::CBookmark<0>", "ATL.CBookmark<0>.CBookmark<0>", "CBookmark<0>::CBookmark<0>", "ATL::CBookmark::CBookmark", "ATL.CBookmark<0>.GetBuffer", "ATL.CBookmark.GetBuffer", "ATL::CBookmark<0>::GetBuffer", "ATL::CBookmark::GetBuffer", "CBookmark.GetBuffer", "ATL::CBookmark<nSize>::GetBuffer", "ATL.CBookmark<nSize>.GetBuffer", "CBookmark<0>.GetBuffer", "CBookmark<nSize>::GetBuffer", "CBookmark<0>::GetBuffer", "CBookmark<nSize>.GetBuffer", "CBookmark::GetBuffer", "CBookmark::GetSize", "ATL.CBookmark<nSize>.GetSize", "CBookmark<nSize>.GetSize", "CBookmark.GetSize", "ATL::CBookmark::GetSize", "CBookmark<0>::GetSize", "ATL::CBookmark<nSize>::GetSize", "ATL.CBookmark<0>.GetSize", "ATL::CBookmark<0>::GetSize", "ATL.CBookmark.GetSize", "CBookmark<0>.GetSize", "CBookmark<nSize>::GetSize", "CBookmark<0>::SetBookmark", "ATL.CBookmark<0>.SetBookmark", "CBookmark<0>.SetBookmark", "SetBookmark", "ATL::CBookmark::SetBookmark", "ATL::CBookmark<0>::SetBookmark", "CBookmark.SetBookmark", "ATL.CBookmark.SetBookmark", "CBookmark::SetBookmark", "CBookmark<0>::operator=", "CBookmark<0>.operator=", "ATL.CBookmark.operator=", "CBookmark::operator=", "ATL.CBookmark<0>.operator=", "ATL::CBookmark<0>::operator=", "CBookmark.operator=", "ATL::CBookmark::operator="]
helpviewer_keywords: ["CBookmark class", "CBookmark class, constructor", "GetBuffer method", "GetSize method", "SetBookmark method", "= operator, with OLE DB templates", "operator =, bookmarks", "operator=, bookmarks"]
ms.assetid: bc942f95-6f93-41d9-bb6e-bcdae4ae0b7a
---
# CBookmark Class

Holds a bookmark value in its buffer.

## Syntax

```cpp
template < DBLENGTH nSize = 0 >
class CBookmark : public CBookmarkBase

template <>
class CBookmark< 0 > : public CBookmarkBase
```

### Parameters

*nSize*<br/>
The size of the bookmark buffer in bytes. When *nSize* is zero, the bookmark buffer will be dynamically created at run time.

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[CBookmark](#cbookmark)|The constructor|
|[GetBuffer](#getbuffer)|Retrieves the pointer to the buffer.|
|[GetSize](#getsize)|Retrieves the size of the buffer in bytes.|
|[SetBookmark](#setbookmark)|Sets the bookmark value.|

### Operators

| Name | Description |
|-|-|
|[operator =](#operator)|Assigns one `CBookmark` class to another.|

## Remarks

`CBookmark<0>` is a template specialization of `CBookmark`; its buffer is dynamically created at run time.

## <a name="cbookmark"></a> CBookmark::CBookmark

The constructor.

### Syntax

```cpp
CBookmark();
CBookmark(DBLENGTH nSize);
```

#### Parameters

*nSize*<br/>
[in] Size of the bookmark buffer in bytes.

### Remarks

The first function sets the buffer to NULL and the buffer size to 0. The second function sets the buffer size to *nSize*, and the buffer to a byte array of *nSize* bytes.

> [!NOTE]
> This function is only available in `CBookmark<0>`.

## <a name="getbuffer"></a> CBookmark::GetBuffer

Retrieves the pointer to the bookmark buffer.

### Syntax

```cpp
virtual BYTE* GetBuffer() const throw();
```

### Return Value

A pointer to the bookmark buffer.

## <a name="getsize"></a> CBookmark::GetSize

Retrieves the size of the bookmark buffer.

### Syntax

```cpp
virtual DBLENGTH GetSize() const throw();
```

### Return Value

The size of the buffer in bytes.

## <a name="setbookmark"></a> CBookmark::SetBookmark

Copies the bookmark value referenced by *pBuffer* to the `CBookmark` buffer and sets the buffer size to *nSize*.

### Syntax

```cpp
HRESULT SetBookmark(DBLENGTH nSize, BYTE* pBuffer) throw();
```

#### Parameters

*nSize*<br/>
[in] The size of the bookmark buffer.

*pBuffer*<br/>
[in] A pointer to the byte array containing the bookmark value.

### Return Value

A standard HRESULT.

### Remarks

This function is only available in `CBookmark<0>`.

## <a name="operator"></a> CBookmark::operator =

Assigns a `CBookmark` object to another.

### Syntax

```cpp
CBookmark& operator =(const CBookmark& bookmark) throw();
```

### Remarks

This operator is needed only in `CBookmark<0>`.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
