---
description: "Learn more about: Traversing a Simple Rowset"
title: "Traversing a Simple Rowset"
ms.date: "10/19/2018"
helpviewer_keywords: ["data access [C++], rowsets", "rowsets [C++], accessing", "simple rowsets", "OLE DB consumers [C++], database attributes", "accessors [C++], rowsets"]
ms.assetid: b45acf16-4029-429d-ab8d-b7fba98b9740
---
# Traversing a Simple Rowset

The following example shows quick and easy database access that doesn't involve commands. The following consumer code, in an ATL project, retrieves records from a table called *Artists* in a Microsoft Access database using the Microsoft OLE DB Provider for ODBC. The code creates a [CTable](../../data/oledb/ctable-class.md) table object with an accessor based on the user record class `CArtists`. It opens a connection, opens a session on the connection, and opens the table on the session.

```cpp
#include <atldbcli.h>
#include <iostream>

using namespace std;

int main()
{
    CDataSource connection;
    CSession session;
    CTable<CAccessor<CArtists>> artists;

    LPCSTR clsid; // Initialize CLSID_MSDASQL here
    LPCTSTR pName = L"NWind";

    // Open the connection, session, and table, specifying authentication
    // using Windows NT integrated security. Hard-coding a password is a major
    // security weakness.
    connection.Open(clsid, pName, NULL, NULL, DBPROP_AUTH_INTEGRATED);

    session.Open(connection);

    artists.Open(session, "Artists");

    // Get data from the rowset
    while (artists.MoveNext() == S_OK)
    {
       cout << artists.m_szFirstName;
       cout << artists.m_szLastName;
    }

    return 0;
}
```

The user record, `CArtists`, looks like this example:

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
};
```

## See also

[Working with OLE DB Consumer Templates](../../data/oledb/working-with-ole-db-consumer-templates.md)
