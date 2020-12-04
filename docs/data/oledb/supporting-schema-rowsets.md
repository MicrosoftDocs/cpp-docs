---
description: "Learn more about: Supporting Schema Rowsets"
title: "Supporting Schema Rowsets"
ms.date: "11/04/2016"
helpviewer_keywords: ["schema rowsets", "OLE DB consumer templates, schema rowsets", "OLE DB providers, schema rowsets", "OLE DB, schema rowsets"]
ms.assetid: 71c5e14b-6e33-4502-a2d9-a1dc6d6e9ba0
---
# Supporting Schema Rowsets

Schema rowsets allow consumers to get information about a data store without knowing its underlying structure, or schema. For example, a data store might have tables organized into a user-defined hierarchy, so there would be no way to ensure knowledge of the schema except by reading it. (As another example, the Visual C++ wizards use schema rowsets to generate accessors for the consumer.) To allow the consumer to do this, the provider's session object exposes methods on the [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) interface. In Visual C++ applications, you use the [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) class to implement `IDBSchemaRowset`.

`IDBSchemaRowsetImpl` supports the following methods:

- [CheckRestrictions](./idbschemarowsetimpl-class.md#checkrestrictions) checks the validity of restrictions against a schema rowset.

- [CreateSchemaRowset](./idbschemarowsetimpl-class.md#createschemarowset) implements a COM object creator function for the object specified by the template parameter.

- [SetRestrictions](./idbschemarowsetimpl-class.md#setrestrictions) specifies which restrictions you support on a particular schema rowset.

- [IDBSchemaRowset::GetRowset](./idbschemarowsetimpl-class.md#getrowset) returns a schema rowset (inherited from interface).

- [GetSchemas](./idbschemarowsetimpl-class.md#getschemas) returns a list of schema rowsets accessible by `IDBSchemaRowsetImpl::GetRowset` (inherited from interface).

## ATL OLE DB Provider Wizard Support

::: moniker range="msvc-160"

The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

The **ATL OLE DB Provider Wizard** creates three schema classes in the session header file:

- **C**<em>ShortName</em>**SessionTRSchemaRowset**

- **C**<em>ShortName</em>**SessionColSchemaRowset**

- **C**<em>ShortName</em>**SessionPTSchemaRowset**

These classes respond to consumer requests for schema information; note that the OLE DB specification requires that these three schema rowsets be supported:

- **C**<em>ShortName</em>**SessionTRSchemaRowset** handles requests for table information (the DBSCHEMA_TABLES schema rowset).

- **C**<em>ShortName</em>**SessionColSchemaRowset** handles requests for column information (the DBSCHEMA_COLUMNS schema rowset). The wizard supplies sample implementations for these classes, which return schema information for a DOS provider.

- **C**<em>ShortName</em>**SessionPTSchemaRowset** handles requests for schema information about the provider type (the DBSCHEMA_PROVIDER_TYPES schema rowset). The default implementation provided by the wizard returns S_OK.

You can customize these classes to handle schema information appropriate to your provider:

- In **C**<em>ShortName</em>**SessionTRSchemaRowset**, you must fill out the catalog, table, and description fields (`trData.m_szType`, `trData.m_szTable`, and `trData.m_szDesc`). The wizard-generated example uses only one row (table). Other providers might return more than one table.

- In **C**<em>ShortName</em>**SessionColSchemaRowset**, you pass the name of the table as a `DBID`.

::: moniker-end

## Setting Restrictions

An important concept in schema rowset support is setting restrictions, which you do using `SetRestrictions`. Restrictions allow consumers to fetch only matching rows (for example, find all the columns in the table "MyTable"). Restrictions are optional, and in the case in which none are supported (the default), all data is always returned. For an example of a provider that does support restrictions, see the [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) sample.

## Setting up the Schema Map

Set up a schema map such as this one in Session.h in UpdatePV:

```cpp
BEGIN_SCHEMA_MAP(CUpdateSession)
    SCHEMA_ENTRY(DBSCHEMA_TABLES, CUpdateSessionTRSchemaRowset)
    SCHEMA_ENTRY(DBSCHEMA_COLUMNS, CUpdateSessionColSchemaRowset)
    SCHEMA_ENTRY(DBSCHEMA_PROVIDER_TYPES, CUpdateSessionPTSchemaRowset)
END_SCHEMA_MAP()
```

To support `IDBSchemaRowset`, you must support DBSCHEMA_TABLES, DBSCHEMA_COLUMNS, and DBSCHEMA_PROVIDER_TYPES. You can add additional schema rowsets at your discretion.

Declare a schema rowset class with an `Execute` method such as `CUpdateSessionTRSchemaRowset` in `UpdatePV`:

```cpp
class CUpdateSessionTRSchemaRowset :
    public CSchemaRowsetImpl < CUpdateSessionTRSchemaRowset,
                              CTABLESRow, CUpdateSession >
...
// Execute looks like this; what pointers does the consumer use?
    HRESULT Execute(DBROWCOUNT* pcRowsAffected,
                    ULONG cRestrictions, const VARIANT* rgRestrictions)
```

`CUpdateSession` inherits from `IDBSchemaRowsetImpl`, so it has all the restriction handling methods. Using `CSchemaRowsetImpl`, declare three child classes (listed in the schema map above): `CUpdateSessionTRSchemaRowset`, `CUpdateSessionColSchemaRowset`, and `CUpdateSessionPTSchemaRowset`. Each of these child classes has an `Execute` method that handles its respective set of restrictions (search criteria). Each `Execute` method compares the values of the *cRestrictions* and *rgRestrictions* parameters. See the description of these parameters in [SetRestrictions](./idbschemarowsetimpl-class.md#setrestrictions).

For more information about which restrictions correspond to a particular schema rowset, see the table of schema rowset GUIDs in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the **OLE DB Programmer's Reference** in the Windows SDK.

For example, if you supported the TABLE_NAME restriction on DBSCHEMA_TABLES, you would do the following:

First, look up DBSCHEMA_TABLES and see that it supports four restrictions (in order).

|Schema rowset restriction|Restriction value|
|-------------------------------|-----------------------|
|TABLE_CATALOG|0x1 (binary 1)|
|TABLE_SCHEMA|0x2 (binary 10)|
|TABLE_NAME|0x4 (binary 100)|
|TABLE_TYPE|0x8 (binary 1000)|

Next, there's one bit for each restriction. Because you want to support TABLE_NAME only, you would return 0x4 in the `rgRestrictions` element. If you supported TABLE_CATALOG and TABLE_NAME, you would return 0x5 (binary 101).

By default, the implementation returns 0 (doesn't support any restrictions) for any request. UpdatePV is an example of a provider that does support restrictions.

### Example

This code is taken from the [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) sample. `UpdatePv` supports the three required schema rowsets: DBSCHEMA_TABLES, DBSCHEMA_COLUMNS, and DBSCHEMA_PROVIDER_TYPES. As an example of how to implement schema support in your provider, this topic takes you through implementing the DBSCHEMA_TABLE rowset.

> [!NOTE]
> The sample code might differ from what is listed here; you should regard the sample code as the more up-to-date version.

The first step in adding schema support is to determine which restrictions you're going to support. To determine which restrictions are available for your schema rowset, look at the OLE DB specification for the definition of `IDBSchemaRowset`. Following the main definition, you see a table holding the schema rowset name, the number of restrictions, and the restriction columns. Select the schema rowset you want to support and make a note of the number of restrictions and restriction columns. For example, DBSCHEMA_TABLES supports four restrictions (TABLE_CATALOG, TABLE_SCHEMA, TABLE_NAME, and TABLE_TYPE):

```cpp
void SetRestrictions(ULONG cRestrictions, GUID* rguidSchema,
   ULONG* rgRestrictions)
{
    for (ULONG l=0; l<cRestrictions; l++)
    {
        if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))
            rgRestrictions[l] = 0x0C;
        else if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_COLUMNS))
                 rgRestrictions[l] = 0x04;
             else if (InlineIsEqualGUID(rguidSchema[l],
                                        DBSCHEMA_PROVIDER_TYPES))
                      rgRestrictions[l] = 0x00;
   }
}
```

A bit represents each restriction column. If you want to support a restriction (that is, you can query by it), set that bit to a 1. If you don't want to support a restriction, set that bit to zero. From the line of code above, `UpdatePV` supports the TABLE_NAME and TABLE_TYPE restrictions on the DBSCHEMA_TABLES rowset. These are the third (bit mask 100) and fourth (bit mask 1000) restrictions. Therefore, the bitmask for `UpdatePv` is 1100 (or 0x0C):

```cpp
if (InlineIsEqualGUID(rguidSchema[l], DBSCHEMA_TABLES))
    rgRestrictions[l] = 0x0C;
```

The following `Execute` function is similar to those in regular rowsets. You have three arguments: *pcRowsAffected*, *cRestrictions*, and *rgRestrictions*. The *pcRowsAffected* variable is an output parameter that the provider can return the count of rows in the schema rowset. The *cRestrictions* parameter is an input parameter holding the number of restrictions passed by the consumer to the provider. The *rgRestrictions* parameter is an array of VARIANT values that hold the restriction values.

```cpp
HRESULT Execute(DBROWCOUNT* pcRowsAffected, ULONG cRestrictions,
                const VARIANT* rgRestrictions)
```

The *cRestrictions* variable is based on the total number of restrictions for a schema rowset, regardless of whether the provider supports them. Because UpdatePv supports two restrictions (the third and fourth), this code only looks for a *cRestrictions* value greater than or equal to three.

The value for the TABLE_NAME restriction is stored in *rgRestrictions[2]* (again, the third restriction in a zero-based array is 2). Check that the restriction isn't VT_EMPTY to actually support it. Note that VT_NULL isn't equal to VT_EMPTY. VT_NULL specifies a valid restriction value.

The `UpdatePv` definition of a table name is a fully qualified path name to a text file. Extract the restriction value and then try to open the file to ensure that the file does actually exist. If the file doesn't exist, return S_OK. This might seem a bit backwards but what the code is really telling the consumer is that there were no supported tables by the name specified. The S_OK return means that the code executed correctly.

```cpp
USES_CONVERSION;
enum {
            sizeOfszFile = 255
};
CTABLESRow  trData;
FILE        *pFile = NULL;
TCHAR       szFile[ sizeOfszFile ];
errcode     err = 0;

// Handle any restrictions sent to us. This only handles
// the TABLE_NAME & TABLE_TYPE restictions (the 3rd and 4th
// restrictions in DBSCHEMA_TABLES...look in IDBSchemaRowsets
// in part 2 of the prog. ref) so your restrictions are 0x08 & 0x04
// for a total of (0x0C)
if (cRestrictions >= 3 && rgRestrictions[2].vt != VT_EMPTY)
{
    CComBSTR bstrName = rgRestrictions[2].bstrVal;
    if ((rgRestrictions[2].vt == VT_BSTR) && (bstrName != (BSTR)NULL))
    {
        // Check to see if the file exists
        _tcscpy_s(&szFile[0], sizeOfszFile, OLE2T(bstrName));
        if (szFile[0] == _T('\0') ||
           ((err = _tfopen(&pFile, &szFile[0], _T("r"))) == 0))
        {
            return S_OK;// Their restriction was invalid return no data
        }
        else
        {
            fclose(pFile);
        }
    }
}
```

Supporting the fourth restriction (TABLE_TYPE) is similar to the third restriction. Check to see that the value isn't VT_EMPTY. This restriction only returns the table type, TABLE. To determine the valid values for the DBSCHEMA_TABLES, look in **Appendix B** of the **OLE DB Programmer's Reference** in the TABLES rowset section.

```cpp
// TABLE_TYPE restriction:
if (cRestrictions >=4 && rgRestrictions[3].vt != VT_EMPTY)
{
    CComBSTR bstrType = rgRestrictions[3].bstrVal;
    if ((rgRestrictions[3].vt == VT_BSTR) && (bstrType != (BSTR)NULL))
    {
        // This is kind of a blind restriction.
        // This only actually supports
        // TABLES so if you get anything else,
        // just return an empty rowset.
        if (_tcscmp(_T("TABLE"), OLE2T(bstrType)) != 0)
            return S_OK;
    }
}
```

This is where you actually create a row entry for the rowset. The variable `trData` corresponds to `CTABLESRow`, a structure defined in the OLE DB provider templates. `CTABLESRow` corresponds to the TABLES rowset definition in **Appendix B** of the OLE DB specification. You only have one row to add because you can only support one table at a time.

```cpp
// Bring over the data:
wcspy_s(trData.m_szType, OLESTR("TABLE"), 5);

wcspy_s(trData.m_szDesc, OLESTR("The Directory Table"), 19);

wcsncpy_s(trData.m_szTable, T2OLE(szFile), _TRUNCATE());
```

`UpdatePV` sets only three columns: TABLE_NAME, TABLE_TYPE, and DESCRIPTION. Make a note of the columns for which you return information, because you need this information when you implement `GetDBStatus`:

```cpp
    _ATLTRY
    {
        m_rgRowData.Add(trData);
    }
    _ATLCATCHALL()
    {
        return E_OUTOFMEMORY;
    }
    //if (!m_rgRowData.Add(trData))
    //    return E_OUTOFMEMORY;
    *pcRowsAffected = 1;
    return S_OK;
}
```

The `GetDBStatus` function is important to the correct operation of the schema rowset. Because you don't return data for every column in the TABLES rowset, you need to specify which columns you return data for and which you do not.

```cpp
virtual DBSTATUS GetDBStatus(CSimpleRow* , ATLCOLUMNINFO* pColInfo)
{
    ATLASSERT(pColInfo != NULL);

    switch(pColInfo->iOrdinal)
    {
    case 3:     // TABLE_NAME
    case 4:     // TABLE_TYPE
    case 6:     // DESCRIPTION
        return DBSTATUS_S_OK;
        break;
    default:
        return DBSTATUS_S_ISNULL;
    break;
    }
}
```

Because your `Execute` function returns data for the TABLE_NAME, TABLE_TYPE, and DESCRIPTION fields from the TABLES rowset, you can look in **Appendix B** of the OLE DB specification and determine (by counting from the top down) that they're ordinals 3, 4, and 6. For each of those columns, return DBSTATUS_S_OK. For all the other columns, return DBSTATUS_S_ISNULL. It's important to return this status, because a consumer might not understand that the value you return is NULL or something else. Again, note that NULL isn't equivalent to empty.

For more information about the OLE DB schema rowset interface, see the [IDBSchemaRowset](../../data/oledb/idbschemarowsetimpl-class.md) interface in the **OLE DB Programmer's Reference**.

For information about how consumers can use `IDBSchemaRowset` methods, see [Obtaining Metadata with Schema Rowsets](../../data/oledb/obtaining-metadata-with-schema-rowsets.md).

For an example of a provider that supports schema rowsets, see the [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) sample.

## See also

[Advanced Provider Techniques](../../data/oledb/advanced-provider-techniques.md)
