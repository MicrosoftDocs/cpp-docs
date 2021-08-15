---
description: "Learn more about: CCustomWindowsFile"
title: "CCustomWindowsFile"
ms.date: "10/22/2018"
f1_keywords: ["cmyproviderwindowsfile", "ccustomwindowsfile"]
helpviewer_keywords: ["CMyProviderWindowsFile class", "OLE DB providers, wizard-generated files", "CCustomWindowsFile class"]
ms.assetid: 0e9e72ac-1e1e-445f-a7ac-690c20031f9d
---
# CCustomWindowsFile

The wizard creates a class that has one row of data; in this case, it's called `CCustomWindowsFile`. The following code for `CCustomWindowsFile` is wizard generated and lists all the files in a directory by using the `WIN32_FIND_DATA` structure. `CCustomWindowsFile` inherits from the `WIN32_FIND_DATA` structure:

```cpp
/////////////////////////////////////////////////////////////////////
// CustomRS.H

class CCustomWindowsFile:
   public WIN32_FIND_DATA
{
public:
BEGIN_PROVIDER_COLUMN_MAP(CCustomWindowsFile)
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)
END_PROVIDER_COLUMN_MAP()
};
```

`CCustomWindowsFile` is called the [user record class](../../data/oledb/user-record.md) because it also has a map describing the columns in the provider's rowset. The provider column map contains one entry for each field in the rowset using the PROVIDER_COLUMN_ENTRY macros. The macros specify column name, ordinal, and offset to a structure entry. The provider column entries in the above code contain offsets into the `WIN32_FIND_DATA` structure. When the consumer calls `IRowset::GetData`, data is transferred in one contiguous buffer. Rather than making you do pointer arithmetic, the map allows you to specify a data member.

The `CCustomRowset` class also contains the `Execute` method. `Execute` is what actually reads the data in from the native source. The following code shows the wizard-generated `Execute` method. The function uses the Win32 `FindFirstFile` and `FindNextFile` APIs to retrieve information about the files in the directory and place them in instances of the `CCustomWindowsFile` class.

```cpp
/////////////////////////////////////////////////////////////////////
// CustomRS.H

HRESULT Execute(DBPARAMS * pParams, LONG* pcRowsAffected)
{
   USES_CONVERSION;
   BOOL bFound = FALSE;
   HANDLE hFile;
   LPTSTR  szDir = (m_strCommandText == _T("")) ? _T("*.*") :
       OLE2T(m_strCommandText);
   CCustomWindowsFile wf;
   hFile = FindFirstFile(szDir, &wf);
   if (hFile == INVALID_HANDLE_VALUE)
      return DB_E_ERRORSINCOMMAND;
   LONG cFiles = 1;
   BOOL bMoreFiles = TRUE;
   while (bMoreFiles)
   {
      if (!m_rgRowData.Add(wf))
         return E_OUTOFMEMORY;
      bMoreFiles = FindNextFile(hFile, &wf);
      cFiles++;
   }
   FindClose(hFile);
   if (pcRowsAffected != NULL)
      *pcRowsAffected = cFiles;
   return S_OK;
}
```

The directory to search is shown by `m_strCommandText`; this contains the text represented by the `ICommandText` interface in the command object. If no directory is specified, it uses the current directory.

The method creates one entry for each file (corresponding to a row) and places it in the `m_rgRowData` data member. The `CRowsetImpl` class defines the `m_rgRowData` data member. The data in this array is shown the entire table and is used throughout the templates.

## See also

[Provider Wizard-Generated Files](../../data/oledb/provider-wizard-generated-files.md)<br/>
