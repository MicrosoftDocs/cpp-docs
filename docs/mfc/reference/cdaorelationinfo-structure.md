---
description: "Learn more about: CDaoRelationInfo Structure"
title: "CDaoRelationInfo Structure"
ms.date: "06/25/2018"
f1_keywords: ["CDaoRelationInfo"]
helpviewer_keywords: ["DAO (Data Access Objects), Relations collection", "CDaoRelationInfo structure [MFC]"]
ms.assetid: 92dda090-fe72-4090-84ec-429498a48aad
---
# CDaoRelationInfo Structure

The `CDaoRelationInfo` structure contains information about a relation defined between fields of two tables in a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object.

## Syntax

```cpp
struct CDaoRelationInfo
{
    CDaoRelationInfo();                     // Constructor
    CString m_strName;                      // Primary
    CString m_strTable;                     // Primary
    CString m_strForeignTable;              // Primary
    long m_lAttributes;                     // Secondary
    CDaoRelationFieldInfo* m_pFieldInfos;   // Secondary
    short m_nFields;                        // Secondary
    // Below the // Implementation comment:
    // Destructor, not otherwise documented
};
```

#### Parameters

*m_strName*<br/>
Uniquely names the relation object. For more information, see the topic "Name Property" in DAO Help.

*m_strTable*<br/>
Names the primary table in the relation.

*m_strForeignTable*<br/>
Names the foreign table in the relation. A foreign table is a table used to contain foreign keys. Generally, you use a foreign table to establish or enforce referential integrity. The foreign table is usually on the many side of a one-to-many relationship. Examples of foreign tables include tables containing codes for the American states or Canadian provinces or customer orders.

*m_lAttributes*<br/>
Contains information about the relation type. The value of this member can be any of the following:

- `dbRelationUnique` Relationship is one-to-one.

- `dbRelationDontEnforce` Relationship is not enforced (no referential integrity).

- `dbRelationInherited` Relationship exists in a noncurrent database that contains the two attached tables.

- `dbRelationLeft` The relationship is a left join. A left outer join includes all of the records from the first (left-hand) of two tables, even if there are no matching values for records in the second (right-hand) table.

- `dbRelationRight` The relationship is a right join. A right outer join includes all of the records from the second (right-hand) of two tables, even if there are no matching values for records in the first (left-hand) table.

- `dbRelationUpdateCascade` Updates will cascade.

- `dbRelationDeleteCascade` Deletions will cascade.

*m_pFieldInfos*<br/>
A pointer to an array of [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) structures. The array contains one object for each field in the relation. The `m_nFields` data member gives a count of the array elements.

*m_nFields*<br/>
The number of `CDaoRelationFieldInfo` objects in the `m_pFieldInfos` data member.

## Remarks

The references to Primary and Secondary above indicate how the information is returned by the [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) member function in class `CDaoDatabase`.

Relation objects are not represented by an MFC class. Instead, the DAO object underlying an MFC object of the `CDaoDatabase` class maintains a collection of relation objects: `CDaoDatabase` supplies member functions to access some individual items of relation information, or you can access them all at once with a `CDaoRelationInfo` object by calling the `GetRelationInfo` member function of the containing database object.

Information retrieved by the [CDaoDatabase::GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) member function is stored in a `CDaoRelationInfo` structure. `CDaoRelationInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoRelationInfo` object.

## Requirements

**Header:** afxdao.h

## See also

[CDaoRelationFieldInfo Structure](../../mfc/reference/cdaorelationfieldinfo-structure.md)
