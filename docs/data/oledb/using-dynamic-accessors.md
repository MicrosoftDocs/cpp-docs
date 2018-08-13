---
title: "Using Dynamic Accessors | Microsoft Docs"
ms.custom: ""
ms.date: "02/14/2018"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["accessors [C++], dynamic", "dynamic accessors"]
ms.assetid: e5d5bfa6-2b1d-49d0-8ced-914666422431
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Using Dynamic Accessors

Dynamic accessors allow you to access a data source when you have no knowledge of the database schema (underlying structure). The OLE DB Templates library provides several classes to help you do this.

The [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) sample shows how to use the dynamic accessor classes to obtain column information and dynamically create accessors.

## Using CDynamicAccessor

[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) allows you to access a data source when you have no knowledge of the database schema (the database's underlying structure). `CDynamicAccessor` methods obtain column information such as column names, count, and data type. You use this column information to create an accessor dynamically at run time. The column information is stored in a buffer that is created and managed by this class. Obtain data from the buffer using the [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md) method.

## Example

### Code

```cpp
// Using_Dynamic_Accessors.cpp
// compile with: /c /EHsc
#include <stdio.h>
#include <objbase.h>
#include <atldbcli.h>

int main(int argc, char* argv[] )
{
    HRESULT hr = CoInitialize(NULL );

    CDataSource ds;
    CSession ss;

    CTable<CDynamicAccessor> rs;

    // The following is an example initialization string:
    hr = ds.OpenFromInitializationString(L"Provider=SQLOLEDB.1;"
      L"Integrated Security=SSPI;Persist Security Info=False;"
      L"Initial Catalog=Loginname;Data Source=your_data_source;"
      L"Use Procedure for Prepare=1;Auto Translate=True;"
      L"Packet Size=4096;Workstation ID=LOGINNAME01;"
      L"Use Encryption for Data=False;"
      L"Tag with column collation when possible=False");

    hr = ss.Open(ds );
    hr = rs.Open(ss, "Shippers" );

    hr = rs.MoveFirst();
    while(SUCCEEDED(hr ) && hr != DB_S_ENDOFROWSET )
    {
        for(size_t i = 1; i <= rs.GetColumnCount(); i++ )
        {
            DBTYPE type;
            rs.GetColumnType(i, &type );
            printf_s( "Column %d [%S] is of type %d\n",
                      i, rs.GetColumnName(i ), type );

            switch(type )
            {
                case DBTYPE_WSTR:
                    printf_s( "value is %S\n",
                              (WCHAR*)rs.GetValue(i ) );
                break;
                case DBTYPE_STR:
                    printf_s( "value is %s\n",
                              (CHAR*)rs.GetValue(i ) );
                default:
                    printf_s( "value is %d\n",
                              *(long*)rs.GetValue(i ) );
            }
        }
        hr = rs.MoveNext();
    }

    rs.Close();
    ss.Close();
    ds.Close();
    CoUninitialize();

    return 0;
}
```

## Using CDynamicStringAccessor

[CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md) works like [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), except in one important way. While `CDynamicAccessor` requests data in the native format reported by the provider, `CDynamicStringAccessor` requests that the provider fetch all data accessed from the data store as string data. This is especially useful for simple tasks that do not require calculation of values in the data store, such as displaying or printing the data store's contents.

Use `CDynamicStringAccessor` methods to obtain column information. You use this column information to create an accessor dynamically at run time. The column information is stored in a buffer created and managed by this class. Obtain data from the buffer using [CDynamicStringAccessor::GetString](../../data/oledb/cdynamicstringaccessor-getstring.md) or store it to the buffer using [CDynamicStringAccessor::SetString](../../data/oledb/cdynamicstringaccessor-setstring.md).

## Example

### Code

```cpp
// Using_Dynamic_Accessors_b.cpp
// compile with: /c /EHsc
#include <stdio.h>
#include <objbase.h>
#include <atldbcli.h>

int main(int argc, char* argv[] )
{
    HRESULT hr = CoInitialize(NULL );
    if (hr != S_OK)
    {
        exit (-1);
    }

    CDataSource ds;
    CSession ss;

    CTable<CDynamicStringAccessor> rs;

    // The following is an example initialization string:
    hr = ds.OpenFromInitializationString(L"Provider=SQLOLEDB.1;"
      L"Integrated Security=SSPI;Persist Security Info=False;"
      L"Initial Catalog=Loginname;Data Source=your_data_source;"
      L"Use Procedure for Prepare=1;Auto Translate=True;"
      L"Packet Size=4096;Workstation ID=LOGINNAME01;"
      L"Use Encryption for Data=False;"
      L"Tag with column collation when possible=False");

    hr = ss.Open(ds );
    hr = rs.Open(ss, "Shippers" );

    hr = rs.MoveFirst();
    while(SUCCEEDED(hr ) && hr != DB_S_ENDOFROWSET )
    {
        for(size_t i = 1; i <= rs.GetColumnCount(); i++ )
        {
            printf_s( "column %d value is %s\n",
                      i, rs.GetString(i ) );
        }
        hr = rs.MoveNext();
    }

    rs.Close();
    ss.Close();
    ds.Close();
    CoUninitialize();

   return 0;
}
```

## Using CDynamicParameterAccessor

[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) is similar to [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), except that `CDynamicParameterAccessor` obtains parameter information to be set by calling the [ICommandWithParameters](/sql/relational-databases/native-client-ole-db-interfaces/icommandwithparameters) interface. The provider must support `ICommandWithParameters` for the consumer to use this class.

The parameter information is stored in a buffer created and managed by this class. Obtain parameter data from the buffer by using [CDynamicParameterAccessor::GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) and [CDynamicParameterAccessor::GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).

For an example demonstrating how to use this class to execute a SQL Server stored procedure and get the output parameter values, see the [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) sample code in the [Microsoft VCSamples](https://github.com/Microsoft/VCSamples) repository on GitHub.

## See also

[Using Accessors](../../data/oledb/using-accessors.md)  
[CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)  
[CDynamicStringAccessor Class](../../data/oledb/cdynamicstringaccessor-class.md)  
[CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)  
[DynamicConsumer Sample](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer)  