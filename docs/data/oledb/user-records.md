---
description: "Learn more about: User Records"
title: "User Records"
ms.date: "05/09/2019"
f1_keywords: ["COLUMN_ENTRY_MAP"]
helpviewer_keywords: ["rowsets [C++], accessors", "COLUMN_ENTRY macro", "COLUMN_ENTRY_MAP macro", "user records, OLE DB consumer templates", "OLE DB consumer templates, user records", "CAccessor class, example", "BEGIN_ACCESSOR_MAP macro", "accessors [C++], rowsets", "accessors [C++], static", "BEGIN_ACCESSOR macro, example"]
ms.assetid: 2de9e5eb-53ce-42b1-80fa-57d46600a80c
---
# User Records

> [!NOTE]
> The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually. For more information, see [Creating a Consumer Without Using a Wizard](creating-a-consumer-without-using-a-wizard.md).

To use a static accessor (that is, an accessor derived from `CAccessor`), your consumer must have a user record. The user record is a C++ class that contains data elements to handle input or output. The **ATL OLE DB Consumer Wizard** generates a user record for your consumer. You can add methods to the user record for optional tasks like handling commands.

The following code shows a sample record that handles commands. In the user record, BEGIN_COLUMN_MAP represents a data rowset passed to the consumer from a provider. BEGIN_PARAM_MAP represents a set of command parameters. This example uses a [CCommand](../../data/oledb/ccommand-class.md) class to handle the command parameters. The data members in the map entries represent offsets into one contiguous block of memory for each instance of the class. The COLUMN_ENTRY macros correspond to the PROVIDER_COLUMN_ENTRY macros on the provider side.

For more information about the COLUMN_MAP and PARAM_MAP macros, see [Macros for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

```cpp
class CArtists
{
public:
// Data Elements
   CHAR m_szFirstName[20];
   CHAR m_szLastName[30];
   short m_nAge;

// Column binding map
BEGIN_COLUMN_MAP(CArtists)
   COLUMN_ENTRY(1, m_szFirstName)
   COLUMN_ENTRY(2, m_szLastName)
   COLUMN_ENTRY(3, m_nAge)
END_COLUMN_MAP()

// Parameter binding map
BEGIN_PARAM_MAP(CArtists)
   COLUMN_ENTRY(1, m_nAge)
END_PARAM_MAP()
};
```

## Wizard-Generated User Records

If you use the **ATL OLE DB Consumer Wizard** to generate a consumer, you have the choice of using OLE DB Templates or OLE DB Attributes. The generated code is different in each case. For more information about this code, see [Consumer Wizard-Generated Classes](../../data/oledb/consumer-wizard-generated-classes.md).

## User Record Support for Multiple Accessors

For a detailed discussion of the scenarios in which you need to use multiple accessors, see [Using Multiple Accessors on a Rowset](../../data/oledb/using-multiple-accessors-on-a-rowset.md).

The following example shows the user record modified to support multiple accessors on the rowset. Instead of BEGIN_COLUMN_MAP and END_COLUMN_MAP, it uses [BEGIN_ACCESSOR_MAP](./macros-and-global-functions-for-ole-db-consumer-templates.md#begin_accessor_map) and [BEGIN_ACCESSOR](./macros-and-global-functions-for-ole-db-consumer-templates.md#begin_accessor) for each accessor. The BEGIN_ACCESSOR macro specifies the accessor number (offset from zero) and whether the accessor is an autoaccessor. Autoaccessors call `GetData` to retrieve data automatically on a call to [MoveNext](./crowset-class.md#movenext). Nonautomatic accessors require you to explicitly retrieve the data. Use a nonautomatic accessor if you're binding to a large data field (like a bitmap image) that you might not want to retrieve for every record.

```cpp
class CMultiArtists
{
public:
// Data Elements
   CHAR m_szFirstName[20];
   CHAR m_szLastName[30];
   short m_nAge;

// Column binding map
BEGIN_ACCESSOR_MAP(CMultiArtists, 2)
   BEGIN_ACCESSOR(0, true)    // true specifies an auto accessor
    COLUMN_ENTRY(1, m_szFirstName)
    COLUMN_ENTRY(2, m_szLastName)
   END_ACCESSOR()
   BEGIN_ACCESSOR(1, false)   // false specifies a manual accessor
    COLUMN_ENTRY(3, m_nAge)
   END_ACCESSOR()
END_ACCESSOR_MAP()
};
```

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)
