---
description: "Learn more about: CDaoIndexInfo Structure"
title: "CDaoIndexInfo Structure"
ms.date: "06/25/2018"
f1_keywords: ["CDaoIndexInfo"]
helpviewer_keywords: ["DAO (Data Access Objects), Indexes collection", "CDaoIndexInfo structure [MFC]"]
ms.assetid: 251d8285-78ce-4716-a0b3-ccc3395fc437
---
# CDaoIndexInfo Structure

The `CDaoIndexInfo` structure contains information about an index object defined for data access objects (DAO).

## Syntax

```cpp
struct CDaoIndexInfo {
    CDaoIndexInfo();                    // Constructor
    CString m_strName;                  // Primary
    CDaoIndexFieldInfo* m_pFieldInfos;  // Primary
    short m_nFields;                    // Primary
    BOOL m_bPrimary;                    // Secondary
    BOOL m_bUnique;                     // Secondary
    BOOL m_bClustered;                  // Secondary
    BOOL m_bIgnoreNulls;                // Secondary
    BOOL m_bRequired;                   // Secondary
    BOOL m_bForeign;                    // Secondary
    long m_lDistinctCount;              // All

    // Below the // Implementation comment:
    // Destructor, not otherwise documented
};
```

### Parameters

*m_strName*<br/>
Uniquely names the field object. For details, see the topic "Name Property" in DAO Help.

*m_pFieldInfos*<br/>
A pointer to an array of [CDaoIndexFieldInfo](../../mfc/reference/cdaoindexfieldinfo-structure.md) objects indicating which tabledef or recordset fields are key fields in an index. Each object identifies one field in the index. The default index ordering is ascending. An index object can have one or more fields representing index keys for each record. These can be ascending, descending, or a combination.

*m_nFields*<br/>
The number of fields stored in `m_pFieldInfos`.

*m_bPrimary*<br/>
If the Primary property is TRUE, the index object represents a primary index. A primary index consists of one or more fields that uniquely identify all records in a table in a predefined order. Because the index field must be unique, the Unique property of the Index object is also set to TRUE in DAO. If the primary index consists of more than one field, each field can contain duplicate values, but each combination of values from all the indexed fields must be unique. A primary index consists of a key for the table and usually contains the same fields as the primary key.

When you set a primary key for a table, the primary key is automatically defined as the primary index for the table. For more information, see the topics "Primary Property" and "Unique Property" in DAO Help.

> [!NOTE]
> There can be, at most, one primary index on a table.

*m_bUnique*<br/>
Indicates whether an index object represents a unique index for a table. If this property is TRUE, the index object represents an index that is unique. A unique index consists of one or more fields that logically arrange all records in a table in a unique, predefined order. If the index consists of one field, values in that field must be unique for the entire table. If the index consists of more than one field, each field can contain duplicate values, but each combination of values from all the indexed fields must be unique.

If both the Unique and Primary properties of an index object are set to TRUE, the index is unique and primary: It uniquely identifies all records in the table in a predefined, logical order. If the Primary property is set to FALSE, the index is a secondary index. Secondary indexes (both key and nonkey) logically arrange records in a predefined order without serving as an identifier for records in the table.

For more information, see the topics "Primary Property" and "Unique Property" in DAO Help.

*m_bClustered*<br/>
Indicates whether an index object represents a clustered index for a table. If this property is TRUE, the index object represents a clustered index; otherwise, it does not. A clustered index consists of one or more nonkey fields that, taken together, arrange all records in a table in a predefined order. With a clustered index, the data in the table is literally stored in the order specified by the clustered index. A clustered index provides efficient access to records in a table. For more information, see the topic "Clustered Property" in DAO Help.

> [!NOTE]
> The Clustered property is ignored for databases that use the Microsoft Jet database engine because the Jet database engine does not support clustered indexes.

*m_bIgnoreNulls*<br/>
Indicates whether there are index entries for records that have Null values in their index fields. If this property is TRUE, fields with Null values do not have an index entry. To make searching for records using a field faster, you can define an index for the field. If you allow Null entries in an indexed field and expect many of the entries to be Null, you can set the IgnoreNulls property for the index object to TRUE to reduce the amount of storage space that the index uses. The IgnoreNulls property setting and the Required property setting together determine whether a record with a Null index value has an index entry, as the following table shows.

|IgnoreNulls|Required|Null in index field|
|-----------------|--------------|-------------------------|
|True|False|Null value allowed; no index entry added.|
|False|False|Null value allowed; index entry added.|
|True or False|True|Null value not allowed; no index entry added.|

For more information, see the topic "IgnoreNulls Property" in DAO Help.

*m_bRequired*<br/>
Indicates whether a DAO index object requires a non-Null value. If this property is TRUE, the index object does not allow a Null value. For more information, see the topic "Required Property" in DAO Help.

> [!TIP]
> When you can set this property for either a DAO index object or a field object (contained by a tabledef, recordset, or querydef object), set it for the field object. The validity of the property setting for a field object is checked before that of an index object.

*m_bForeign*<br/>
Indicates whether an index object represents a foreign key in a table. If this property is TRUE, the index represents a foreign key in a table. A foreign key consists of one or more fields in a foreign table that uniquely identify a row in a primary table. The Microsoft Jet database engine creates an index object for the foreign table and sets the Foreign property when you create a relationship that enforces referential integrity. For more information, see the topic "Foreign Property" in DAO Help.

*m_lDistinctCount*<br/>
Indicates the number of unique values for the index object that are included in the associated table. Check the DistinctCount property to determine the number of unique values, or keys, in an index. Any key is counted only once, even though there may be multiple occurrences of that value if the index permits duplicate values. This information is useful in applications that attempt to optimize data access by evaluating index information. The number of unique values is also known as the cardinality of an index object. The DistinctCount property will not always reflect the actual number of keys at a particular time. For example, a change caused by a transaction rollback will not be reflected immediately in the DistinctCount property. For more information, see the topic "DistinctCount Property" in DAO Help.

## Remarks

The references to Primary, Secondary, and All above indicate how the information is returned by the `GetIndexInfo` member function in classes [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) and [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).

Index objects are not represented by an MFC class. Instead, DAO objects underlying MFC objects of class [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) or [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contain a collection of index objects, called the Indexes collection. These classes supply member functions to access individual items of index information, or you can access them all at once with a `CDaoIndexInfo` object by calling the `GetIndexInfo` member function of the containing object.

`CDaoIndexInfo` has a constructor and a destructor in order to properly allocate and deallocate the index field information in `m_pFieldInfos`.

Information retrieved by the `GetIndexInfo` member function of a tabledef object is stored in a `CDaoIndexInfo` structure. Call the `GetIndexInfo` member function of the containing tabledef object in whose Indexes collection the index object is stored. `CDaoIndexInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoIndexInfo` object.

## Requirements

**Header:** afxdao.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)
