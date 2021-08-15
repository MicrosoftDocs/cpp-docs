---
description: "Learn more about: Creating an Updatable Provider"
title: "Creating an Updatable Provider"
ms.date: "08/16/2018"
helpviewer_keywords: ["OLE DB providers, updatable", "notifications, support in providers", "OLE DB providers, creating"]
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
---
# Creating an Updatable Provider

Visual C++ supports updatable providers or providers that can update (write to) the data store. This topic discusses how to create updatable providers using OLE DB templates.

This topic assumes that you are starting with a workable provider. There are two steps to creating an updatable provider. You must first decide how the provider will make changes to the data store; specifically, whether changes are to be done immediately or deferred until an update command is issued. The section "[Making Providers Updatable](#vchowmakingprovidersupdatable)" describes the changes and settings you need to do in the provider code.

Next, you must make sure your provider contains all the functionality to support anything the consumer might request of it. If the consumer wants to update the data store, the provider has to contain code that persists data to the data store. For example, you might use the C Run-Time Library or MFC to perform such operations on your data source. The section "[Writing to the Data Source](#vchowwritingtothedatasource)" describes how to write to the data source, deal with NULL and default values, and set column flags.

> [!NOTE]
> [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) is an example of an updatable provider. UpdatePV is the same as MyProv but with updatable support.

## <a name="vchowmakingprovidersupdatable"></a> Making Providers Updatable

The key to making a provider updatable is understanding what operations you want your provider to perform on the data store and how you want the provider to carry out those operations. Specifically, the major issue is whether updates to the data store are to be done immediately or deferred (batched) until an update command is issued.

You must first decide whether to inherit from `IRowsetChangeImpl` or `IRowsetUpdateImpl` in your rowset class. Depending on which of these you choose to implement, the functionality of three methods will be affected: `SetData`, `InsertRows`, and `DeleteRows`.

- If you inherit from [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), calling these three methods immediately changes the data store.

- If you inherit from [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), the methods defer changes to the data store until you call `Update`, `GetOriginalData`, or `Undo`. If the update involves several changes, they are performed in batch mode (note that batching changes can add considerable memory overhead).

Note that `IRowsetUpdateImpl` derives from `IRowsetChangeImpl`. Thus, `IRowsetUpdateImpl` gives you change capability plus batch capability.

### To support updatability in your provider

1. In your rowset class, inherit from `IRowsetChangeImpl` or `IRowsetUpdateImpl`. These classes provide appropriate interfaces for changing the data store:

   **Adding IRowsetChange**

   Add `IRowsetChangeImpl` to your inheritance chain using this form:

    ```cpp
    IRowsetChangeImpl< rowset-name, storage-name >
    ```

   Also add `COM_INTERFACE_ENTRY(IRowsetChange)` to the `BEGIN_COM_MAP` section in your rowset class.

   **Adding IRowsetUpdate**

   Add `IRowsetUpdate` to your inheritance chain using this form:

    ```cpp
    IRowsetUpdateImpl< rowset-name, storage>
    ```

   > [!NOTE]
   > You should remove the `IRowsetChangeImpl` line from your inheritance chain. This one exception to the directive previously mentioned must include the code for `IRowsetChangeImpl`.

1. Add the following to your COM map (`BEGIN_COM_MAP ... END_COM_MAP`):

   |  If you implement   |           Add to COM map             |
   |---------------------|--------------------------------------|
   | `IRowsetChangeImpl` | `COM_INTERFACE_ENTRY(IRowsetChange)` |
   | `IRowsetUpdateImpl` | `COM_INTERFACE_ENTRY(IRowsetUpdate)` |

   | If you implement | Add to property set map |
   |----------------------|-----------------------------|
   | `IRowsetChangeImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)` |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. In your command, add the following to your property set map (`BEGIN_PROPSET_MAP ... END_PROPSET_MAP`):

   |  If you implement   |                                             Add to property set map                                              |
   |---------------------|------------------------------------------------------------------------------------------------------------------|
   | `IRowsetChangeImpl` |                            `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`                             |
   | `IRowsetUpdateImpl` | `PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)` |

1. In your property set map, you should also include all of the following settings as they appear below:

    ```cpp
    PROPERTY_INFO_ENTRY_VALUE(UPDATABILITY, DBPROPVAL_UP_CHANGE |
      DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE)
    PROPERTY_INFO_ENTRY_VALUE(CHANGEINSERTEDROWS, VARIANT_TRUE)
    PROPERTY_INFO_ENTRY_VALUE(IMMOBILEROWS, VARIANT_TRUE)

    PROPERTY_INFO_ENTRY_EX(OWNINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(OWNUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(OTHERINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(OTHERUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)
    PROPERTY_INFO_ENTRY_EX(REMOVEDELETED, VT_BOOL, DBPROPFLAGS_ROWSET |
      DBPROPFLAGS_READ, VARIANT_FALSE, 0)
    ```

   You can find the values used in these macro calls by looking in Atldb.h for the property IDs and values (if Atldb.h differs from the online documentation, Atldb.h supersedes the documentation).

   > [!NOTE]
   > Many of the `VARIANT_FALSE` and `VARIANT_TRUE` settings are required by the OLE DB templates; the OLE DB specification says they can be read/write, but the OLE DB templates can only support one value.

   **If you implement IRowsetChangeImpl**

   If you implement `IRowsetChangeImpl`, you must set the following properties on your provider. These properties are primarily used to request interfaces through `ICommandProperties::SetProperties`.

   - `DBPROP_IRowsetChange`: Setting this automatically sets `DBPROP_IRowsetChange`.

   - `DBPROP_UPDATABILITY`: A bitmask specifying the supported methods on `IRowsetChange`: `SetData`, `DeleteRows`, or `InsertRow`.

   - `DBPROP_CHANGEINSERTEDROWS`: Consumer can call `IRowsetChange::DeleteRows` or `SetData` for newly inserted rows.

   - `DBPROP_IMMOBILEROWS`: Rowset will not reorder inserted or updated rows.

   **If you implement IRowsetUpdateImpl**

   If you implement `IRowsetUpdateImpl`, you must set the following properties on your provider, in addition to setting all the properties for `IRowsetChangeImpl` previously listed:

   - `DBPROP_IRowsetUpdate`.

   - `DBPROP_OWNINSERT`: Must be READ_ONLY AND VARIANT_TRUE.

   - `DBPROP_OWNUPDATEDELETE`: Must be READ_ONLY AND VARIANT_TRUE.

   - `DBPROP_OTHERINSERT`: Must be READ_ONLY AND VARIANT_TRUE.

   - `DBPROP_OTHERUPDATEDELETE`: Must be READ_ONLY AND VARIANT_TRUE.

   - `DBPROP_REMOVEDELETED`: Must be READ_ONLY AND VARIANT_TRUE.

   - `DBPROP_MAXPENDINGROWS`.

   > [!NOTE]
   > If you support notifications, you might also have some other properties as well; see the section on `IRowsetNotifyCP` for this list.

## <a name="vchowwritingtothedatasource"></a> Writing to the Data Source

To read from the data source, call the `Execute` function. To write to the data source, call the `FlushData` function. (In a general sense, flush means to save modifications you make to a table or index to disk.)

```cpp
FlushData(HROW, HACCESSOR);
```

The row handle (HROW) and accessor handle (HACCESSOR) arguments allow you to specify the region to write. Typically, you write a single data field at a time.

The `FlushData` method writes data in the format in which it was originally stored. If you do not override this function, your provider will function correctly but changes will not be flushed to the data store.

### When to Flush

The provider templates call FlushData whenever data needs to be written to the data store; this usually (but not always) occurs as a result of calls to the following functions:

- `IRowsetChange::DeleteRows`

- `IRowsetChange::SetData`

- `IRowsetChange::InsertRows` (if there is new data to insert in the row)

- `IRowsetUpdate::Update`

### How It Works

The consumer makes a call that requires a flush (such as Update) and this call is passed to the provider, which always does the following:

- Calls `SetDBStatus` whenever you have a status value bound.

- Checks column flags.

- Calls `IsUpdateAllowed`.

These three steps help provide security. Then the provider calls `FlushData`.

### How to Implement FlushData

To implement `FlushData`, you need to take into account several issues:

Making sure that the data store can handle changes.

Handling NULL values.

### Handling default values.

To implement your own `FlushData` method, you need to:

- Go to your rowset class.

- In the rowset class put the declaration of:

   ```cpp
   HRESULT FlushData(HROW, HACCESSOR)
   {
      // Insert your implementation here and return an HRESULT.
   }
   ```

- Provide an implementation of `FlushData`.

A good implementation of `FlushData` stores only the rows and columns that are actually updated. You can use the HROW and HACCESSOR parameters to determine the current row and column being stored for optimization.

Typically, the biggest challenge is working with your own native data store. If possible, try to:

- Keep the method of writing to your data store as simple as possible.

- Handle NULL values (optional but advised).

- Handle default values (optional but advised).

The best thing to do is to have actual specified values in your data store for NULL and default values. It is best if you can extrapolate this data. If not, you are advised not to allow NULL and default values.

The following example shows how `FlushData` is implemented in the `RUpdateRowset` class in the `UpdatePV` sample (see Rowset.h in the sample code):

```cpp
///////////////////////////////////////////////////////////////////////////
// class RUpdateRowset (in rowset.h)
...
HRESULT FlushData(HROW, HACCESSOR)
{
    ATLTRACE2(atlTraceDBProvider, 0, "RUpdateRowset::FlushData\n");

    USES_CONVERSION;
    enum {
        sizeOfString = 256,
        sizeOfFileName = MAX_PATH
    };
    FILE*    pFile = NULL;
    TCHAR    szString[sizeOfString];
    TCHAR    szFile[sizeOfFileName];
    errcode  err = 0;

    ObjectLock lock(this);

    // From a filename, passed in as a command text,
    // scan the file placing data in the data array.
    if (m_strCommandText == (BSTR)NULL)
    {
        ATLTRACE( "RRowsetUpdate::FlushData -- "
                  "No filename specified\n");
        return E_FAIL;
    }

    // Open the file
    _tcscpy_s(szFile, sizeOfFileName, OLE2T(m_strCommandText));
    if ((szFile[0] == _T('\0')) ||
        ((err = _tfopen_s(&pFile, &szFile[0], _T("w"))) != 0))
    {
        ATLTRACE("RUpdateRowset::FlushData -- Could not open file\n");
        return DB_E_NOTABLE;
    }

    // Iterate through the row data and store it.
    for (long l=0; l<m_rgRowData.GetSize(); l++)
    {
        CAgentMan am = m_rgRowData[l];

        _putw((int)am.dwFixed, pFile);

        if (_tcscmp(&am.szCommand[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szCommand);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);

        if (_tcscmp(&am.szText[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szText);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);

        if (_tcscmp(&am.szCommand2[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szCommand2);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);

        if (_tcscmp(&am.szText2[0], _T("")) != 0)
            _stprintf_s(&szString[0], _T("%s\n"), am.szText2);
        else
            _stprintf_s(&szString[0], _T("%s\n"), _T("NULL"));
        _fputts(szString, pFile);
    }

    if (fflush(pFile) == EOF || fclose(pFile) == EOF)
    {
        ATLTRACE("RRowsetUpdate::FlushData -- "
                 "Couldn't flush or close file\n");
    }

    return S_OK;
}
```

### Handling Changes

For your provider to handle changes, you first need to make sure your data store (such as a text file or video file) has facilities that enable you to make changes on it. If it does not, you should create that code separately from the provider project.

### Handling NULL Data

It is possible that an end user will send NULL data. When you write NULL values to fields in the data source, there can be potential problems. Imagine an order-taking application that accepts values for city and postal code; it could accept either or both values, but not neither, because in that case delivery would be impossible. You therefore have to restrict certain combinations of NULL values in fields that make sense for your application.

As the provider developer, you have to consider how you will store that data, how you will read that data from the data store, and how you specify that to the user. Specifically, you must consider how to change the data status of rowset data in the data source (for example, DataStatus = NULL). You decide what value to return when a consumer accesses a field containing a NULL value.

Look at the code in the UpdatePV sample; it illustrates how a provider can handle NULL data. In UpdatePV, the provider stores NULL data by writing the string "NULL" in the data store. When it reads NULL data from the data store, it sees that string and then empties the buffer, creating a NULL string. It also has an override of `IRowsetImpl::GetDBStatus` in which it returns DBSTATUS_S_ISNULL if that data value is empty.

### Marking Nullable Columns

If you also implement schema rowsets (see `IDBSchemaRowsetImpl`), your implementation should specify in the DBSCHEMA_COLUMNS rowset (usually marked in your provider by CxxxSchemaColSchemaRowset) that the column is nullable.

You also need to specify that all nullable columns contain the DBCOLUMNFLAGS_ISNULLABLE value in your version of the `GetColumnInfo`.

In the OLE DB templates implementation, if you fail to mark columns as nullable, the provider assumes that they must contain a value and will not allow the consumer to send it null values.

The following example shows how the `CommonGetColInfo` function is implemented in CUpdateCommand (see UpProvRS.cpp) in UpdatePV. Note how the columns have this DBCOLUMNFLAGS_ISNULLABLE for nullable columns.

```cpp
/////////////////////////////////////////////////////////////////////////////
// CUpdateCommand (in UpProvRS.cpp)

ATLCOLUMNINFO* CommonGetColInfo(IUnknown* pPropsUnk, ULONG* pcCols, bool bBookmark)
{
    static ATLCOLUMNINFO _rgColumns[6];
    ULONG ulCols = 0;

    if (bBookmark)
    {
        ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0,
                            sizeof(DWORD), DBTYPE_BYTES,
                            0, 0, GUID_NULL, CAgentMan, dwBookmark,
                            DBCOLUMNFLAGS_ISBOOKMARK)
        ulCols++;
    }

    // Next set the other columns up.
    // Add a fixed length entry for OLE DB conformance testing purposes
    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Fixed"), 1, 4, DBTYPE_UI4,
                        10, 255, GUID_NULL, CAgentMan, dwFixed,
                        DBCOLUMNFLAGS_WRITE |
                        DBCOLUMNFLAGS_ISFIXEDLENGTH)
    ulCols++;

    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Command"), 2, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szCommand,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;
    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Text"), 3, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szText,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;

    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Command2"), 4, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szCommand2,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;
    ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Text2"), 5, 16, DBTYPE_STR,
                        255, 255, GUID_NULL, CAgentMan, szText2,
                        DBCOLUMNFLAGS_WRITE | DBCOLUMNFLAGS_ISNULLABLE)
    ulCols++;

    if (pcCols != NULL)
    {
        *pcCols = ulCols;
    }

    return _rgColumns;
}
```

### Default Values

As with NULL data, you have the responsibility to deal with changing default values.

The default of `FlushData` and `Execute` is to return S_OK. Therefore, if you do not override this function, the changes appear to succeed (S_OK will be returned), but they will not be transmitted to the data store.

In the `UpdatePV` sample (in Rowset.h), the `SetDBStatus` method handles default values as follows:

```cpp
virtual HRESULT SetDBStatus(DBSTATUS* pdbStatus, CSimpleRow* pRow,
                            ATLCOLUMNINFO* pColInfo)
{
    ATLASSERT(pRow != NULL && pColInfo != NULL && pdbStatus != NULL);

    void* pData = NULL;
    char* pDefaultData = NULL;
    DWORD* pFixedData = NULL;

    switch (*pdbStatus)
    {
        case DBSTATUS_S_DEFAULT:
            pData = (void*)&m_rgRowData[pRow->m_iRowset];
            if (pColInfo->wType == DBTYPE_STR)
            {
                pDefaultData = (char*)pData + pColInfo->cbOffset;
                strcpy_s(pDefaultData, "Default");
            }
            else
            {
                pFixedData = (DWORD*)((BYTE*)pData +
                                          pColInfo->cbOffset);
                *pFixedData = 0;
                return S_OK;
            }
            break;
        case DBSTATUS_S_ISNULL:
        default:
            break;
    }
    return S_OK;
}
```

### Column Flags

If you support default values on your columns, you need to set it using metadata in the \<provider class\>SchemaRowset class. Set `m_bColumnHasDefault = VARIANT_TRUE`.

You also have the responsibility to set the column flags, which are specified using the DBCOLUMNFLAGS enumerated type. The column flags describe column characteristics.

For example, in the `CUpdateSessionColSchemaRowset` class in `UpdatePV` (in Session.h), the first column is set up this way:

```cpp
// Set up column 1
trData[0].m_ulOrdinalPosition = 1;
trData[0].m_bIsNullable = VARIANT_FALSE;
trData[0].m_bColumnHasDefault = VARIANT_TRUE;
trData[0].m_nDataType = DBTYPE_UI4;
trData[0].m_nNumericPrecision = 10;
trData[0].m_ulColumnFlags = DBCOLUMNFLAGS_WRITE |
                            DBCOLUMNFLAGS_ISFIXEDLENGTH;
lstrcpyW(trData[0].m_szColumnDefault, OLESTR("0"));
m_rgRowData.Add(trData[0]);
```

This code specifies, among other things, that the column supports a default value of 0, that it be writeable, and that all data in the column have the same length. If you want the data in a column to have variable length, you would not set this flag.

## See also

[Creating an OLE DB Provider](creating-an-ole-db-provider.md)
