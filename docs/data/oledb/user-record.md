---
description: "Learn more about: User Record"
title: "User Record"
ms.date: "05/09/2019"
helpviewer_keywords: ["records, user", "OLE DB providers, user record", "user records", "user records, described", "rowsets, user record"]
ms.assetid: 9c0d2864-2738-4f62-a750-1016d9c3523f
---
# User Record

> [!NOTE]
> The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

The user record provides the code and data structure that represents the column data for a rowset. A user record can be created at compile time or at run time. When you create a provider using the **ATL OLE DB Provider Wizard**, the wizard creates a default user record that looks like this (assuming you specified a provider name [short name] of *MyProvider*):

```cpp
class CWindowsFile:
   public WIN32_FIND_DATA
{
public:
  
BEGIN_PROVIDER_COLUMN_MAP(CMyProviderWindowsFile)
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)
END_PROVIDER_COLUMN_MAP()
  
};
```

The OLE DB provider templates handle all OLE DB specifics on interactions with the client. To acquire the column data needed for a response, the provider calls the `GetColumnInfo` function, which you must place in the user record. You can explicitly override `GetColumnInfo` in the user record, for example, by declaring it in the .h file as shown here:

```cpp
template <class T>
static ATLCOLUMNINFO* GetColumnInfo(T* pThis, ULONG* pcCols)
```

This equates to:

```cpp
static ATLCOLUMNINFO* GetColumnInfo(CommandClass* pThis, ULONG* pcCols)
static ATLCOLUMNINFO* GetColumnInfo(RowsetClass* pThis, ULONG* pcCols)
```

Then, implement `GetColumnInfo` in the user record's .cpp file.

The PROVIDER_COLUMN_MAP macros aid in creating a `GetColumnInfo` function:

- BEGIN_PROVIDER_COLUMN_MAP defines the function prototype and a static array of `ATLCOLUMNINFO` structures.

- PROVIDER_COLUMN_ENTRY defines and initializes a single `ATLCOLUMNINFO`.

- END_PROVIDER_COLUMN_MAP closes the array and the function. It also places the array element count into the *pcCols* parameter.

When a user record is created at run time, `GetColumnInfo` uses the *pThis* parameter to receive a pointer to a rowset or command instance. Commands and rowsets must support the `IColumnsInfo` interface, so column information can be taken from this pointer.

`CommandClass` and `RowsetClass` are the command and rowset that use the user record.

For a more detailed example of how to override `GetColumnInfo` in a user record, see [Dynamically Determining Columns Returned to the Consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## See also

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
