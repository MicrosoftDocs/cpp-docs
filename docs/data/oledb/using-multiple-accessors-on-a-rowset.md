---
description: "Learn more about: Using Multiple Accessors on a Rowset"
title: "Using Multiple Accessors on a Rowset"
ms.date: "10/24/2018"
helpviewer_keywords: ["BEGIN_ACCESSOR macro", "BEGIN_ACCESSOR macro, multiple accessors", "rowsets [C++], multiple accessors", "accessors [C++], rowsets"]
ms.assetid: 80d4dc5d-4940-4a28-a4ee-d8602f71d2a6
---
# Using Multiple Accessors on a Rowset

There are three basic scenarios in which you need to use multiple accessors:

- **Multiple read/write rowsets.** In this scenario, you have a table with a primary key. You want to be able to read all the columns in the row, including the primary key. You also want to be able to write data to all the columns except the primary key (because you can't write to the primary key column). In this case, you set up two accessors:

  - Accessor 0 contains all columns.

  - Accessor 1 contains all columns except the primary key.

- **Performance.** In this scenario, one or more columns have a large amount of data, for example, graphics, sound, or video files. Every time you move to a row, you probably don't want to retrieve the column with the large data file, because doing so would slow down your application's performance.

  You can set up separate accessors in which the first accessor contains all columns except the one with large data, and it retrieves data from these columns automatically; the first accessor is the auto accessor. The second accessor retrieves only the column holding large data, but it doesn't retrieve data from this column automatically. You can have other methods update or fetch the large data on demand.

  - Accessor 0 is an automatic accessor; it retrieves all the columns except the one with large data.

  - Accessor 1 isn't an automatic accessor; it retrieves the column with large data.

  Use the auto argument to specify whether the accessor is an auto accessor.

- **Multiple ISequentialStream columns.** In this scenario, you've more than one column holding `ISequentialStream` data. However, each accessor is limited to one `ISequentialStream` data stream. To solve this problem, set up several accessors, each having one `ISequentialStream` pointer.

You normally create accessors using the [BEGIN_ACCESSOR](./macros-and-global-functions-for-ole-db-consumer-templates.md#begin_accessor) and [END_ACCESSOR](./macros-and-global-functions-for-ole-db-consumer-templates.md#end_accessor) macros. You can also use the [db_accessor](../../windows/attributes/db-accessor.md) attribute. (Accessors are described further in [User Records](../../data/oledb/user-records.md).) The macros or the attribute specify whether an accessor is an automatic or a non-automatic accessor:

- In an automatic accessor, move methods such as `MoveFirst`, `MoveLast`, `MoveNext`, and `MovePrev` retrieve data for all specified columns automatically. Accessor 0 should be the automatic accessor.

- In a non-automatic accessor, the retrieval doesn't occur until you explicitly call a method such as `Update`, `Insert`, `Fetch`, or `Delete`. In the scenarios described above, you might not want to retrieve all the columns on every move. You can place one or more columns in a separate accessor and make that a non-automatic accessor, as shown below.

The following example uses multiple accessors to read and write to the jobs table of the SQL Server pubs database using multiple accessors. This example is the most common use of multiple accessors; see the "multiple read/write rowsets" scenario above.

The user record class is as follows. It sets up two accessors: accessor 0 contains only the primary key column (ID) and accessor 1 contains other columns.

```cpp
class CJobs
{
public:
    enum {
        sizeOfDescription = 51
    };

    short nID;
    char szDescription[ sizeOfDescription ];
    short nMinLvl;
    short nMaxLvl;

    DWORD dwID;
    DWORD dwDescription;
    DWORD dwMinLvl;
    DWORD dwMaxLvl;

BEGIN_ACCESSOR_MAP(CJobs, 2)
    // Accessor 0 is the automatic accessor
    BEGIN_ACCESSOR(0, true)
        COLUMN_ENTRY_STATUS(1, nID, dwID)
    END_ACCESSOR()
    // Accessor 1 is the non-automatic accessor
    BEGIN_ACCESSOR(1, true)
        COLUMN_ENTRY_STATUS(2, szDescription, dwDescription)
        COLUMN_ENTRY_STATUS(3, nMinLvl, dwMinLvl)
        COLUMN_ENTRY_STATUS(4, nMaxLvl, dwMaxLvl)
    END_ACCESSOR()
END_ACCESSOR_MAP()
};
```

The main code is as follows. Calling `MoveNext` automatically retrieves data from the primary key column ID using accessor 0. Note how the `Insert` method near the end uses accessor 1 to avoid writing to the primary key column.

```cpp
int main(int argc, char* argv[])
{
    // Initialize COM
    ::CoInitialize(NULL);

    // Create instances of the data source and session
    CDataSource source;
    CSession session;
    HRESULT hr = S_OK;

    // Set initialization properties
    CDBPropSet dbinit(DBPROPSET_DBINIT);
    dbinit.AddProperty(DBPROP_AUTH_USERID, OLESTR("my_user_id"));
    dbinit.AddProperty(DBPROP_INIT_CATALOG, OLESTR("pubs"));
    dbinit.AddProperty(DBPROP_INIT_DATASOURCE, OLESTR("(local)"));

    hr = source.Open("SQLOLEDB.1", &dbinit);
    if (hr == S_OK)
    {
        hr = session.Open(source);
        if (hr == S_OK)
        {
            // Ready to fetch/access data
            CTable<CAccessor<CJobs>> jobs;

            // Set properties for making the rowset a read/write cursor
            CDBPropSet dbRowset(DBPROPSET_ROWSET);
            dbRowset.AddProperty(DBPROP_CANFETCHBACKWARDS, true);
            dbRowset.AddProperty(DBPROP_CANSCROLLBACKWARDS, true);
            dbRowset.AddProperty(DBPROP_IRowsetChange, true);
            dbRowset.AddProperty(DBPROP_UPDATABILITY,
                DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE |
                DBPROPVAL_UP_DELETE);

            hr = jobs.Open(session, "jobs", &dbRowset);
            if (hr == S_OK)
            {
                // Calling MoveNext automatically retrieves ID
                // (using accessor 0)
                while(jobs.MoveNext() == S_OK)
                   printf_s("Description = %s\n", jobs.szDescription);

                hr = jobs.MoveFirst();
                if (hr == S_OK)
                {
                    jobs.nID = 25;
                    strcpy_s(&jobs.szDescription[0],
                             jobs.sizeOfDescription,
                             "Developer");
                    jobs.nMinLvl = 10;
                    jobs.nMaxLvl = 20;

                    jobs.dwDescription = DBSTATUS_S_OK;
                    jobs.dwID = DBSTATUS_S_OK;
                    jobs.dwMaxLvl = DBSTATUS_S_OK;
                    jobs.dwMinLvl = DBSTATUS_S_OK;

                    // Insert method uses accessor 1
                    // (to avoid writing to the primary key column)
                    hr = jobs.Insert(1);
                }
                jobs.Close();
            }
            session.Close();
        }
        source.Close();
    }

    // Uninitialize COM
    ::CoUninitialize();
    return 0;
}
```

## See also

[Using Accessors](../../data/oledb/using-accessors.md)<br/>
[User Records](../../data/oledb/user-records.md)
