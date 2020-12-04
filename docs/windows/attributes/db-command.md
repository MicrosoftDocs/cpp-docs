---
description: "Learn more about: db_command"
title: "db_command (C++ COM Attribute)"
ms.date: "07/10/2018"
f1_keywords: ["vc-attr.db_command"]
helpviewer_keywords: ["db_command attribute"]
ms.assetid: 714c3e15-85d7-408b-9a7c-88505c3e5d24
---
# db_command

Creates an OLE DB command.

## Syntax

```cpp
[ db_command(command, name, source_name, hresult, bindings, bulk_fetch)
]
```

### Parameters

*command*<br/>
A command string containing the text of an OLE DB command. A simple example is:

```cpp
[ db_command ( command = "Select * from Products" ) ]
```

The *command* syntax is as follows:

> binding parameter block 1\
> &nbsp;&nbsp;OLE DB command\
> binding parameter block 2\
> &nbsp;&nbsp;continuation of OLE DB command\
> binding parameter block 3\
> ...

A *binding parameter block* is defined as follows:

> **(\[** *bindtype* **]** *szVar1* \[, *szVar2* \[, *nVar3* \[, ...]]] **)**

where:

- **(** marks the start of the data binding block.

- **\[** *bindtype* **]** is one of the following case-insensitive strings:

  - **\[db_column]** binds each of the member variables to a column in a rowset.

  - **\[bindto]** (same as **\[db_column]**).

  - **\[in]** binds member variables as input parameters.

  - **\[out]** binds member variables as output parameters.

  - **\[in,out]** binds member variables as input/output parameters.

- *szVarX*, *nVarX* resolves to a member variable within the current scope.

- **)** marks the end of the data binding block.

If the command string contains one or more specifiers such as \[in], \[out], or \[in/out], **db_command** builds a parameter map.

If the command string contains one or more parameters such as \[db_column] or \[bindto], **db_command** generates a rowset and an accessor map to service these bound variables. See [db_accessor](db-accessor.md) for more information.

> [!NOTE]
> \[*bindtype*] syntax and the *bindings* parameter are not valid when using **db_command** at the class level.

Here are some examples of binding parameter blocks. The following example binds the `m_au_fname` and `m_au_lname` data members to the `au_fname` and `au_lname` columns, respectively, of the authors table in the pubs database:

```cpp
TCHAR m_au_fname[21];
TCHAR m_au_lname[41];
TCHAR m_state[3] = 'CA';

[db_command (command = "SELECT au_fname([bindto]m_au_fname), au_lname([bindto]m_au_lname) " \
   "FROM dbo.authors " \
   "WHERE state = ?([in]m_state)")
]
```

*name*<br/>
(Optional) The name of the handle you use to work with the rowset. If you specify *name*, **db_command** generates a class with the specified *name*, which can be used to traverse the rowset or to execute multiple action queries. If you do not specify *name*, it will not be possible to return more than one row of results to the user.

*source_name*<br/>
(Optional) The `CSession` variable or instance of a class that has the `db_source` attribute applied to it on which the command executes. See [db_source](db-source.md).

**db_command** checks to ensure that the variable used for *source_name* is valid, so the specified variable should be in function or global scope.

*hresult*<br/>
(Optional) Identifies the variable that will receive the HRESULT of this database command. If the variable does not exist, it will be automatically injected by the attribute.

*bindings*<br/>
(Optional) Allows you to separate the binding parameters from the OLE DB command.

If you specify a value for *bindings*, **db_command** will parse the associated value and will not parse the \[*bindtype*] parameter. This usage allows you to use OLE DB provider syntax. To disable parsing, without binding parameters, specify `Bindings=""`.

If you do not specify a value for *bindings*, **db_command** will parse the binding parameter block, looking for '**(**', followed by **\[**_bindtype_**]** in brackets, followed by one or more previously declared C++ member variables, followed by '**)**'. All text between the parentheses will be stripped from the resulting command, and these parameters will be used to construct column and parameter bindings for this command.

*bulk_fetch*<br/>
(Optional) An integer value that specifies the number of rows to fetch.

The default value is 1, which specifies single row fetching (the rowset will be of type [CRowset](../../data/oledb/crowset-class.md)).

A value greater than 1 specifies bulk row fetching. Bulk row fetching refers to the ability of bulk rowsets to fetch multiple row handles (the rowset will be of type [CBulkRowset](../../data/oledb/cbulkrowset-class.md) and will call `SetRows` with the specified number of rows).

If *bulk_fetch* is less than one, `SetRows` will return zero.

## Remarks

**db_command** creates a [CCommand](../../data/oledb/ccommand-class.md) object, which is used by an OLE DB consumer to execute a command.

You can use **db_command** with either class or function scope; the main difference is the scope of the `CCommand` object. With function scope, data such as bindings terminate at function end. Both class and function scope usages involve the OLE DB Consumer Template class `CCommand<>`, but the template arguments differ for the function and class cases. In the function case, bindings will be made to an `Accessor` that comprises local variables, while the class usage will infer a `CAccessor`-derived class as the argument. When used as a class attribute, **db_command** works in conjunction with **db_column**.

**db_command** can be used to execute commands that do not return a result set.

When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to \_*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName*, which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.

## Examples

This sample defines a command that selects the first and last names from a table where the state column matches 'CA'. **db_command** creates and reads a rowset on which you can call wizard-generated functions such as [OpenAll and CloseAll](../../data/oledb/consumer-wizard-generated-methods.md), as well as `CRowset` member functions such as [MoveNext](../../data/oledb/crowset-class.md#movenext).

Note that this code requires you to provide your own connection string that connects to the pubs database. For information on how to do this in the development environment, see [How to: Connect to a Database and Browse Existing Objects](/sql/ssdt/how-to-connect-to-a-database-and-browse-existing-objects) and [Add new connections](/visualstudio/data-tools/add-new-connections).

```cpp
// db_command.h
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

#pragma once

[  db_source(L"your connection string"), db_command(L" \
      SELECT au_lname, au_fname \
      FROM dbo.authors \
      WHERE state = 'CA'")  ]

struct CAuthors {
   // In order to fix several issues with some providers, the code below may bind
   // columns in a different order than reported by the provider

   DBSTATUS m_dwau_lnameStatus;
   DBSTATUS m_dwau_fnameStatus;
   DBLENGTH m_dwau_lnameLength;
   DBLENGTH m_dwau_fnameLength;

   [ db_column("au_lname", status="m_dwau_lnameStatus", length="m_dwau_lnameLength") ] TCHAR m_au_lname[41];
   [ db_column("au_fname", status="m_dwau_fnameStatus", length="m_dwau_fnameLength") ] TCHAR m_au_fname[21];

   [ db_param("7", paramtype="DBPARAMIO_INPUT") ] TCHAR m_state[3];

   void GetRowsetProperties(CDBPropSet* pPropSet) {
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   }
};
```

```cpp
// db_command.cpp
// compile with: /c
#include "db_command.h"

int main(int argc, _TCHAR* argv[]) {
   HRESULT hr = CoInitialize(NULL);

   // Instantiate rowset
   CAuthors rs;

   // Open rowset and move to first row
   strcpy_s(rs.m_state, sizeof(rs.m_state), _T("CA"));
   hr = rs.OpenAll();
   hr = rs.MoveFirst();

   // Iterate through the rowset
   while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET ) {
      // Print out the column information for each row
      printf("First Name: %s, Last Name: %s\n", rs.m_au_fname, rs.m_au_lname);
      hr = rs.MoveNext();
   }

   rs.CloseAll();
   CoUninitialize();
}
```

This sample uses `db_source` on a data source class `CMySource`, and `db_command` on command classes `CCommand1` and `CCommand2`.

```cpp
// db_command_2.cpp
// compile with: /c
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>
// class usage for both db_source and db_command

[  db_source(L"your connection string"), db_command(L" \
      SELECT au_lname, au_fname \
      FROM dbo.authors \
      WHERE state = 'CA'")  ]
struct CMySource {
   HRESULT OpenDataSource() {
      return S_OK;
   }
};

[db_command(command = "SELECT * FROM Products")]
class CCommand1 {};

[db_command(command = "SELECT FNAME, LNAME FROM Customers")]
class CCommand2 {};

int main() {
   CMySource s;
   HRESULT hr = s.OpenDataSource();
   if (SUCCEEDED(hr)) {
      CCommand1 c1;
      hr = c1.Open(s);

      CCommand2 c2;
      hr = c2.Open(s);
   }

   s.CloseDataSource();
}
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**, member, method, local|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[OLE DB Consumer Attributes](ole-db-consumer-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)
