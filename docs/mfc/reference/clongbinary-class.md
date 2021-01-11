---
description: "Learn more about: CLongBinary Class"
title: "CLongBinary Class"
ms.date: "11/04/2016"
f1_keywords: ["CLongBinary", "AFXDB_/CLongBinary", "AFXDB_/CLongBinary::CLongBinary", "AFXDB_/CLongBinary::m_dwDataLength", "AFXDB_/CLongBinary::m_hData"]
helpviewer_keywords: ["CLongBinary class [MFC]"]
ms.assetid: f4320059-aeb4-4ee5-bc2b-25f19d898ef5
---
# CLongBinary Class

Simplifies working with very large binary data objects (often called BLOBs, or "binary large objects") in a database.

## Syntax

```
class CLongBinary : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CLongBinary::CLongBinary](#clongbinary)|Constructs a `CLongBinary` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CLongBinary::m_dwDataLength](#m_dwdatalength)|Contains the actual size in bytes of the data object whose handle is stored in `m_hData`.|
|[CLongBinary::m_hData](#m_hdata)|Contains a Windows HGLOBAL handle to the actual image object.|

## Remarks

For example, a record field in a SQL table might contain a bitmap representing a picture. A `CLongBinary` object stores such an object and keeps track of its size.

> [!NOTE]
> In general, it is better practice now to use [CByteArray](../../mfc/reference/cbytearray-class.md) in conjunction with the [DFX_Binary](record-field-exchange-functions.md#dfx_binary) function. You can still use `CLongBinary`, but in general `CByteArray` provides more functionality under Win32, since there is no longer the size limitation encountered with 16-bit `CByteArray`. This advice applies to programming with Data Access Objects (DAO) as well as Open Database Connectivity (ODBC).

To use a `CLongBinary` object, declare a field data member of type `CLongBinary` in your recordset class. This member will be an embedded member of the recordset class and will be constructed when the recordset is constructed. After the `CLongBinary` object is constructed, the record field exchange (RFX) mechanism loads the data object from a field in the current record on the data source and stores it back to the record when the record is updated. RFX queries the data source for the size of the binary large object, allocates storage for it (via the `CLongBinary` object's `m_hData` data member), and stores an `HGLOBAL` handle to the data in `m_hData`. RFX also stores the actual size of the data object in the `m_dwDataLength` data member. Work with the data in the object through `m_hData`, using the same techniques you would normally use to manipulate the data stored in a Windows `HGLOBAL` handle.

When you destroy your recordset, the embedded `CLongBinary` object is also destroyed, and its destructor deallocates the `HGLOBAL` data handle.

For more information about large objects and the use of `CLongBinary`, see the articles [Recordset (ODBC)](../../data/odbc/recordset-odbc.md) and [Recordset: Working with Large Data Items (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CLongBinary`

## Requirements

**Header:** afxdb_.h

## <a name="clongbinary"></a> CLongBinary::CLongBinary

Constructs a `CLongBinary` object.

```
CLongBinary();
```

## <a name="m_dwdatalength"></a> CLongBinary::m_dwDataLength

Stores the actual size in bytes of the data stored in the HGLOBAL handle in `m_hData`.

```
SQLULEN m_dwDataLength;
```

### Remarks

This size may be smaller than the size of the memory block allocated for the data. Call the Win32 [GLobalSize](/windows/win32/api/winbase/nf-winbase-globalsize) function to get the allocated size.

## <a name="m_hdata"></a> CLongBinary::m_hData

Stores a Windows HGLOBAL handle to the actual binary large object data.

```
HGLOBAL m_hData;
```

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)
