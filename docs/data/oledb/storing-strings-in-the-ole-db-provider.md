---
description: "Learn more about: Storing Strings in the OLE DB Provider"
title: "Storing Strings in the OLE DB Provider"
ms.date: "05/09/2019"
helpviewer_keywords: ["user records, editing"]
ms.assetid: 36cb9635-067c-4cad-8f85-962f28026f6a
---
# Storing Strings in the OLE DB Provider

> [!NOTE]
> The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

In *Custom*RS.h, the **ATL OLE DB Provider Wizard** creates a default user record called `CWindowsFile`. To handle the two strings, modify `CWindowsFile` as shown in the following code:

```cpp
////////////////////////////////////////////////////////////////////////
class CCustomWindowsFile:
   public WIN32_FIND_DATA
{
public:
DWORD dwBookmark;
static const int iSize = 256;    // Add this
TCHAR szCommand[iSize];          // Add this
TCHAR szText[iSize];             // Add this
TCHAR szCommand2[iSize];         // Add this
TCHAR szText2[iSize];            // Add this

BEGIN_PROVIDER_COLUMN_MAP(CCustomWindowsFile)
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)

   PROVIDER_COLUMN_ENTRY_STR("Command", 6, szCommand)    // Add this
   PROVIDER_COLUMN_ENTRY_STR("Text", 7, szText)          // Add this
   PROVIDER_COLUMN_ENTRY_STR("Command2", 8, szCommand2)  // Add this
   PROVIDER_COLUMN_ENTRY_STR("Text2", 9, szText2)        // Add this
END_PROVIDER_COLUMN_MAP()

   bool operator==(const CCustomWindowsFile& am) // This is optional
   {
      return (lstrcmpi(cFileName, am.cFileName) == 0);
   }
};
```

The data members `szCommand` and `szText` represent the two strings, with `szCommand2` and `szText2` with additional columns if needed. The data member `dwBookmark` isn't needed for this simple read-only provider but is used later to add an `IRowsetLocate` interface; see [Enhancing the Simple Read Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md). The `==` operator compares instances (implementing this operator is optional).

When this is done, you can add the functionality of [Reading Strings into the OLE DB Provider](../../data/oledb/reading-strings-into-the-ole-db-provider.md).

## See also

[Implementing the Simple Read-Only Provider](../../data/oledb/implementing-the-simple-read-only-provider.md)<br/>
