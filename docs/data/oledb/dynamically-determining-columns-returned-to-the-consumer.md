---
description: "Learn more about: Dynamically Determining Columns Returned to the Consumer"
title: "Dynamically Determining Columns Returned to the Consumer"
ms.date: "10/26/2018"
helpviewer_keywords: ["bookmarks [C++], dynamically determining columns", "dynamically determining columns [C++]"]
ms.assetid: 58522b7a-894e-4b7d-a605-f80e900a7f5f
---
# Dynamically Determining Columns Returned to the Consumer

The PROVIDER_COLUMN_ENTRY macros normally handle the `IColumnsInfo::GetColumnsInfo` call. However, because a consumer might choose to use bookmarks, the provider must be able to change the columns returned depending on whether the consumer asks for a bookmark.

To handle the `IColumnsInfo::GetColumnsInfo` call, delete the PROVIDER_COLUMN_MAP, which defines a function `GetColumnInfo`, from the `CCustomWindowsFile` user record in *Custom*RS.h and replace it with the definition for your own `GetColumnInfo` function:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.H
class CCustomWindowsFile
{
public:
   DWORD dwBookmark;
   static const int iSize = 256;
   TCHAR szCommand[iSize];
   TCHAR szText[iSize];
   TCHAR szCommand2[iSize];
   TCHAR szText2[iSize];
  
   static ATLCOLUMNINFO* GetColumnInfo(void* pThis, ULONG* pcCols);
   bool operator==(const CCustomWindowsFile& am)
   {
      return (lstrcmpi(szCommand, am.szCommand) == 0);
   }
};
```

Next, implement the `GetColumnInfo` function in *Custom*RS.cpp, as shown in the following code.

`GetColumnInfo` checks first to see if the OLE DB property `DBPROP_BOOKMARKS` is set. To get the property, `GetColumnInfo` uses a pointer (`pRowset`) to the rowset object. The `pThis` pointer represents the class that created the rowset, which is the class where the property map is stored. `GetColumnInfo` typecasts the `pThis` pointer to an `RCustomRowset` pointer.

To check for the `DBPROP_BOOKMARKS` property, `GetColumnInfo` uses the `IRowsetInfo` interface, which you can get by calling `QueryInterface` on the `pRowset` interface. As an alternative, you can use an ATL [CComQIPtr](../../atl/reference/ccomqiptr-class.md) method instead.

```cpp
////////////////////////////////////////////////////////////////////
// CustomRS.cpp
ATLCOLUMNINFO* CCustomWindowsFile::GetColumnInfo(void* pThis, ULONG* pcCols)
{
   static ATLCOLUMNINFO _rgColumns[5];
   ULONG ulCols = 0;
  
   // Check the property flag for bookmarks; if it is set, set the zero
   // ordinal entry in the column map with the bookmark information.
   CCustomRowset* pRowset = (CCustomRowset*) pThis;
   CComQIPtr<IRowsetInfo, &IID_IRowsetInfo> spRowsetProps = pRowset;
  
   CDBPropIDSet set(DBPROPSET_ROWSET);
   set.AddPropertyID(DBPROP_BOOKMARKS);
   DBPROPSET* pPropSet = NULL;
   ULONG ulPropSet = 0;
   HRESULT hr;
  
   if (spRowsetProps)
      hr = spRowsetProps->GetProperties(1, &set, &ulPropSet, &pPropSet);
  
   if (pPropSet)
   {
      CComVariant var = pPropSet->rgProperties[0].vValue;
      CoTaskMemFree(pPropSet->rgProperties);
      CoTaskMemFree(pPropSet);
  
      if (SUCCEEDED(hr) && (var.boolVal == VARIANT_TRUE))
      {
         ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0, sizeof(DWORD),
         DBTYPE_BYTES, 0, 0, GUID_NULL, CCustomWindowsFile, dwBookmark,
         DBCOLUMNFLAGS_ISBOOKMARK)
         ulCols++;
      }
   }
  
   // Next, set the other columns up.
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Command"), 1, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szCommand)
   ulCols++;
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Text"), 2, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szText)
   ulCols++;
  
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Command2"), 3, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szCommand2)
   ulCols++;
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Text2"), 4, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szText2)
   ulCols++;
  
   if (pcCols != NULL)
      *pcCols = ulCols;
  
   return _rgColumns;
}
```

This example uses a static array to hold the column information. If the consumer doesn't want the bookmark column, one entry in the array is unused. To handle the information, you create two array macros: ADD_COLUMN_ENTRY and ADD_COLUMN_ENTRY_EX. ADD_COLUMN_ENTRY_EX takes an extra parameter, *flags*, that is needed if you designate a bookmark column.

```cpp
////////////////////////////////////////////////////////////////////////  
// CustomRS.h  
  
#define ADD_COLUMN_ENTRY(ulCols, name, ordinal, colSize, type, precision, scale, guid, dataClass, member) \  
   _rgColumns[ulCols].pwszName = (LPOLESTR)name; \  
   _rgColumns[ulCols].pTypeInfo = (ITypeInfo*)NULL; \  
   _rgColumns[ulCols].iOrdinal = (ULONG)ordinal; \  
   _rgColumns[ulCols].dwFlags = 0; \  
   _rgColumns[ulCols].ulColumnSize = (ULONG)colSize; \  
   _rgColumns[ulCols].wType = (DBTYPE)type; \  
   _rgColumns[ulCols].bPrecision = (BYTE)precision; \  
   _rgColumns[ulCols].bScale = (BYTE)scale; \  
   _rgColumns[ulCols].cbOffset = offsetof(dataClass, member);  
  
#define ADD_COLUMN_ENTRY_EX(ulCols, name, ordinal, colSize, type, precision, scale, guid, dataClass, member, flags) \  
   _rgColumns[ulCols].pwszName = (LPOLESTR)name; \  
   _rgColumns[ulCols].pTypeInfo = (ITypeInfo*)NULL; \  
   _rgColumns[ulCols].iOrdinal = (ULONG)ordinal; \  
   _rgColumns[ulCols].dwFlags = flags; \  
   _rgColumns[ulCols].ulColumnSize = (ULONG)colSize; \  
   _rgColumns[ulCols].wType = (DBTYPE)type; \  
   _rgColumns[ulCols].bPrecision = (BYTE)precision; \  
   _rgColumns[ulCols].bScale = (BYTE)scale; \  
   _rgColumns[ulCols].cbOffset = offsetof(dataClass, member); \  
   memset(&(_rgColumns[ulCols].columnid), 0, sizeof(DBID)); \  
   _rgColumns[ulCols].columnid.uName.pwszName = (LPOLESTR)name;  
```

In the `GetColumnInfo` function, the bookmark macro is used like this:

```cpp
ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0, sizeof(DWORD),
   DBTYPE_BYTES, 0, 0, GUID_NULL, CAgentMan, dwBookmark,
   DBCOLUMNFLAGS_ISBOOKMARK)
```

You can now compile and run the enhanced provider. To test the provider, modify the test consumer as described in [Implementing a Simple Consumer](../../data/oledb/implementing-a-simple-consumer.md). Run the test consumer with the provider and verify that the test consumer retrieves the proper strings from the provider.

## See also

[Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md)<br/>
