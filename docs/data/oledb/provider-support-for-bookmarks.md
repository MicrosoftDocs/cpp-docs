---
description: "Learn more about: Provider Support for Bookmarks"
title: "Provider Support for Bookmarks"
ms.date: "11/04/2016"
helpviewer_keywords: ["IRowsetLocate class, provider support for bookmarks", "OLE DB provider templates, bookmarks", "bookmarks, OLE DB", "IRowsetLocate class", "OLE DB providers, bookmark support"]
ms.assetid: 1b14ccff-4f76-462e-96ab-1aada815c377
---
# Provider Support for Bookmarks

The example in this topic adds the `IRowsetLocate` interface to the `CCustomRowset` class. In almost all cases, you start by adding an interface to an existing COM object. You can then test it by adding more calls from the consumer templates. The example demonstrates how to:

- Add an interface to a provider.

- Dynamically determine the columns to return to the consumer.

- Add bookmark support.

The `IRowsetLocate` interface inherits from the `IRowset` interface. To add the `IRowsetLocate` interface, inherit `CCustomRowset` from [IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md).

Adding the `IRowsetLocate` interface is a bit different from most interfaces. To make the VTABLEs line up, the OLE DB provider templates have a template parameter to handle the derived interface. The following code shows the new inheritance list:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.h

// CCustomRowset
class CCustomRowset : public CRowsetImpl< CCustomRowset,
      CTextData, CCustomCommand, CAtlArray<CTextData>,
      CSimpleRow,
          IRowsetLocateImpl<CCustomRowset, IRowsetLocate>>
```

The fourth, fifth, and sixth parameters are all added. This example uses the defaults for the fourth and fifth parameters but specify `IRowsetLocateImpl` as the sixth parameter. `IRowsetLocateImpl` is an OLE DB template class that takes two template parameters: these hook up the `IRowsetLocate` interface to the `CCustomRowset` class. To add most interfaces, you can skip this step and move to the next one. Only the `IRowsetLocate` and `IRowsetScroll` interfaces need to be handled in this way.

You then need to tell the `CCustomRowset` to call `QueryInterface` for the `IRowsetLocate` interface. Add the line `COM_INTERFACE_ENTRY(IRowsetLocate)` to the map. The interface map for `CCustomRowset` should appear as shown in the following code:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.h

typedef CRowsetImpl< CCustomRowset, CTextData, CCustomCommand, CAtlArray<CTextData>, CSimpleRow, IRowsetLocateImpl<CCustomRowset, IRowsetLocate>> _RowsetBaseClass;

BEGIN_COM_MAP(CCustomRowset)
   COM_INTERFACE_ENTRY(IRowsetLocate)
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)
END_COM_MAP()
```

You also need to hook your map into the `CRowsetImpl` class. Add in the COM_INTERFACE_ENTRY_CHAIN macro to hook in the `CRowsetImpl` map. Also, create a typedef called `RowsetBaseClass` that consists of the inheritance information. This typedef is arbitrary and can be ignored.

Finally, handle the `IColumnsInfo::GetColumnsInfo` call. You would normally use the PROVIDER_COLUMN_ENTRY macros to do this. However, a consumer might want to use bookmarks. You must be able to change the columns the provider returns depending on whether the consumer asks for a bookmark.

To handle the `IColumnsInfo::GetColumnsInfo` call, delete the PROVIDER_COLUMN map in the `CTextData` class. The PROVIDER_COLUMN_MAP macro defines a function `GetColumnInfo`. Define your own `GetColumnInfo` function. The function declaration should look like this:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.H

class CTextData
{
   ...
     // NOTE: Be sure you removed the PROVIDER_COLUMN_MAP!
   static ATLCOLUMNINFO* GetColumnInfo(CCustomRowset* pThis,
        ULONG* pcCols);
   static ATLCOLUMNINFO* GetColumnInfo(CCustomCommand* pThis,
        ULONG* pcCols);
...
};
```

Then, implement the `GetColumnInfo` function in the *Custom*RS.cpp file as follows:

```cpp
////////////////////////////////////////////////////////////////////
// CustomRS.cpp

template <class TInterface>
ATLCOLUMNINFO* CommonGetColInfo(IUnknown* pPropsUnk, ULONG* pcCols)
{
   static ATLCOLUMNINFO _rgColumns[5];
   ULONG ulCols = 0;

   CComQIPtr<TInterface> spProps = pPropsUnk;

   CDBPropIDSet set(DBPROPSET_ROWSET);
   set.AddPropertyID(DBPROP_BOOKMARKS);
   DBPROPSET* pPropSet = NULL;
   ULONG ulPropSet = 0;
   HRESULT hr;

   if (spProps)
      hr = spProps->GetProperties(1, &set, &ulPropSet, &pPropSet);

   // Check the property flag for bookmarks, if it is set, set the
// zero ordinal entry in the column map with the bookmark
// information.

   if (pPropSet)
   {
      CComVariant var = pPropSet->rgProperties[0].vValue;
      CoTaskMemFree(pPropSet->rgProperties);
      CoTaskMemFree(pPropSet);

      if ((SUCCEEDED(hr) && (var.boolVal == VARIANT_TRUE)))
      {
         ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0,
                     sizeof(DWORD), DBTYPE_BYTES,
            0, 0, GUID_NULL, CAgentMan, dwBookmark,
                        DBCOLUMNFLAGS_ISBOOKMARK)
         ulCols++;
      }
   }

   // Next set the other columns up.
   ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Field1"), 1, 16, DBTYPE_STR,
          0xFF, 0xFF, GUID_NULL, CTextData, szField1)
   ulCols++;
   ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Field2"), 2, 16, DBTYPE_STR,
       0xFF, 0xFF, GUID_NULL, CTextData, szField2)
   ulCols++;

   if (pcCols != NULL)
      *pcCols = ulCols;

   return _rgColumns;
}

ATLCOLUMNINFO* CTextData::GetColumnInfo(CCustomCommand* pThis,
     ULONG* pcCols)
{
   return CommonGetColInfo<ICommandProperties>(pThis->GetUnknown(),
        pcCols);
}

ATLCOLUMNINFO* CAgentMan::GetColumnInfo(RUpdateRowset* pThis, ULONG* pcCols)
{
   return CommonGetColInfo<IRowsetInfo>(pThis->GetUnknown(), pcCols);
}
```

`GetColumnInfo` first checks to see whether a property called `DBPROP_IRowsetLocate` is set. OLE DB has properties for each of the optional interfaces off the rowset object. If the consumer wants to use one of these optional interfaces, it sets a property to true. The provider can then check this property and take special action based on it.

In your implementation, you get the property by using the pointer to the command object. The `pThis` pointer represents the rowset or command class. Because you use templates here, you have to pass this in as a **`void`** pointer or the code doesn't compile.

Specify a static array to hold the column information. If the consumer doesn't want the bookmark column, an entry in the array is wasted. You can dynamically allocate this array, but you would need to make sure to destroy it properly. This example defines and uses the macros ADD_COLUMN_ENTRY and ADD_COLUMN_ENTRY_EX to insert the information into the array. You can add the macros to the *Custom*RS.H file as shown in the following code:

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

To test the code in the consumer, you need to make a few changes to the `OnRun` handler. The first change to the function is that you add code to add a property to the property set. The code sets the `DBPROP_IRowsetLocate` property to true, thus telling the provider that you want the bookmark column. The `OnRun` handler code should appear as follows:

```cpp
//////////////////////////////////////////////////////////////////////
// TestProv Consumer Application in TestProvDlg.cpp

void CTestProvDlg::OnRun()
{
   CCommand<CAccessor<CProvider>> table;
   CDataSource source;
   CSession   session;

   if (source.Open("Custom.Custom.1", NULL, NULL, NULL,
          NULL) != S_OK)
      return;

   if (session.Open(source) != S_OK)
      return;

   CDBPropSet propset(DBPROPSET_ROWSET);
   propset.AddProperty(DBPROP_IRowsetLocate, true);
   if (table.Open(session, _T("c:\\public\\testprf2\\myData.txt"),
          &propset) != S_OK)
      return;

   CBookmark<4> tempBookmark;
   ULONG ulCount=0;
   while (table.MoveNext() == S_OK)
   {

      DBCOMPARE compare;
      if (ulCount == 2)
         tempBookmark = table.bookmark;

HRESULT hr = table.Compare(table.dwBookmark, table.dwBookmark,
                 &compare);
      if (FAILED(hr))
         ATLTRACE(_T("Compare failed: 0x%X\n"), hr);
      else
         _ASSERTE(compare == DBCOMPARE_EQ);

      m_ctlString1.AddString(table.szField1);
      m_ctlString2.AddString(table.szField2);
      ulCount++;
   }

   table.MoveToBookmark(tempBookmark);
   m_ctlString1.AddString(table.szField1);
   m_ctlString2.AddString(table.szField2);
}
```

The **`while`** loop contains code to call the `Compare` method in the `IRowsetLocate` interface. The code you have should always pass because you're comparing the exact same bookmarks. Also, store one bookmark in a temporary variable so that you can use it after the **`while`** loop finishes to call the `MoveToBookmark` function in the consumer templates. The `MoveToBookmark` function calls the `GetRowsAt` method in `IRowsetLocate`.

You also need to update the user record in the consumer. Add an entry in the class to handle a bookmark and an entry in the COLUMN_MAP:

```cpp
///////////////////////////////////////////////////////////////////////
// TestProvDlg.cpp

class CProvider
{
// Attributes
public:
   CBookmark<4>    bookmark;  // Add this line
   char   szCommand[16];
   char   szText[256];

   // Binding Maps
BEGIN_ACCESSOR_MAP(CProvider, 1)
   BEGIN_ACCESSOR(0, true)   // auto accessor
      BOOKMARK_ENTRY(bookmark)  // Add this line
      COLUMN_ENTRY(1, szField1)
      COLUMN_ENTRY(2, szField2)
   END_ACCESSOR()
END_ACCESSOR_MAP()
};
```

When you've updated the code, you should be able to build and execute the provider with the `IRowsetLocate` interface.

## See also

[Advanced Provider Techniques](../../data/oledb/advanced-provider-techniques.md)
