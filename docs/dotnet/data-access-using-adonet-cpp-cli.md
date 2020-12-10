---
description: "Learn more about: Data Access Using ADO.NET (C++/CLI)"
title: "Data Access Using ADO.NET (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["ADO.NET [C++]", ".NET Framework [C++], data access", "databases [C++], accessing in C++", "data access [C++], ADO.NET", "data [C++], ADO.NET", "native strings [C++]", "ADO.NET [C++], marshaling ANSI strings", "strings [C++], ADO.NET", "BSTRs, strings", "ADO.NET [C++], marshaling BSTR strings", "strings [C++], marshaling BSTR strings", "ADO.NET [C++], marshaling Unicode strings", "Unicode [C++], strings", "strings [C++], Unicode", "VARIANT, marshaling", "ADO.NET [C++], marshaling VARIANT types", "VARIANT", "SAFEARRAY, marshaling", "ADO.NET [C++], marshaling SAFEARRAY types"]
ms.assetid: b0cd987d-1ea7-4f76-ba01-cbd52503d06d
---
# Data Access Using ADO.NET (C++/CLI)

ADO.NET is the .NET Framework API for data access and provides power and ease of use unmatched by previous data access solutions. This section describes some of the issues involving ADO.NET that are unique to Visual C++ users, such as marshaling native types.

ADO.NET runs under the Common Language Runtime (CLR). Therefore, any application that interacts with ADO.NET must also target the CLR. However, that does not mean that native applications cannot use ADO.NET. These examples will demonstrate how to interact with an ADO.NET database from native code.

## <a name="marshal_ansi"></a> Marshal ANSI Strings for ADO.NET

Demonstrates how to add a native string (`char *`) to a database and how to marshal a <xref:System.String?displayProperty=fullName> from a database to a native string.

### Example

In this example, the class DatabaseClass is created to interact with an ADO.NET <xref:System.Data.DataTable> object. Note that this class is a native C++ **`class`** (as compared to a **`ref class`** or **`value class`**). This is necessary because we want to use this class from native code, and you cannot use managed types in native code. This class will be compiled to target the CLR, as is indicated by the `#pragma managed` directive preceding the class declaration. For more information on this directive, see [managed, unmanaged](../preprocessor/managed-unmanaged.md).

Note the private member of the DatabaseClass class: `gcroot<DataTable ^> table`. Since native types cannot contain managed types, the `gcroot` keyword is necessary. For more information on `gcroot`, see [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md).

The rest of the code in this example is native C++ code, as is indicated by the `#pragma unmanaged` directive preceding `main`. In this example, we are creating a new instance of DatabaseClass and calling its methods to create a table and populate some rows in the table. Note that native C++ strings are being passed as values for the database column StringCol. Inside DatabaseClass, these strings are marshaled to managed strings using the marshaling functionality found in the <xref:System.Runtime.InteropServices?displayProperty=fullName> namespace. Specifically, the method <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A> is used to marshal a `char *` to a <xref:System.String>, and the method <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> is used to marshal a <xref:System.String> to a `char *`.

> [!NOTE]
> The memory allocated by <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> must be deallocated by calling either <xref:System.Runtime.InteropServices.Marshal.FreeHGlobal%2A> or `GlobalFree`.

```cpp
// adonet_marshal_string_native.cpp
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll
#include <comdef.h>
#include <gcroot.h>
#include <iostream>
using namespace std;

#using <System.Data.dll>
using namespace System;
using namespace System::Data;
using namespace System::Runtime::InteropServices;

#define MAXCOLS 100

#pragma managed
class DatabaseClass
{
public:
    DatabaseClass() : table(nullptr) { }

    void AddRow(char *stringColValue)
    {
        // Add a row to the table.
        DataRow ^row = table->NewRow();
        row["StringCol"] = Marshal::PtrToStringAnsi(
            (IntPtr)stringColValue);
        table->Rows->Add(row);
    }

    void CreateAndPopulateTable()
    {
        // Create a simple DataTable.
        table = gcnew DataTable("SampleTable");

        // Add a column of type String to the table.
        DataColumn ^column1 = gcnew DataColumn("StringCol",
            Type::GetType("System.String"));
        table->Columns->Add(column1);
    }

    int GetValuesForColumn(char *dataColumn, char **values,
        int valuesLength)
    {
        // Marshal the name of the column to a managed
        // String.
        String ^columnStr = Marshal::PtrToStringAnsi(
                (IntPtr)dataColumn);

        // Get all rows in the table.
        array<DataRow ^> ^rows = table->Select();
        int len = rows->Length;
        len = (len > valuesLength) ? valuesLength : len;
        for (int i = 0; i < len; i++)
        {
            // Marshal each column value from a managed string
            // to a char *.
            values[i] = (char *)Marshal::StringToHGlobalAnsi(
                (String ^)rows[i][columnStr]).ToPointer();
        }

        return len;
    }

private:
    // Using gcroot, you can use a managed type in
    // a native class.
    gcroot<DataTable ^> table;
};

#pragma unmanaged
int main()
{
    // Create a table and add a few rows to it.
    DatabaseClass *db = new DatabaseClass();
    db->CreateAndPopulateTable();
    db->AddRow("This is string 1.");
    db->AddRow("This is string 2.");

    // Now retrieve the rows and display their contents.
    char *values[MAXCOLS];
    int len = db->GetValuesForColumn(
        "StringCol", values, MAXCOLS);
    for (int i = 0; i < len; i++)
    {
        cout << "StringCol: " << values[i] << endl;

        // Deallocate the memory allocated using
        // Marshal::StringToHGlobalAnsi.
        GlobalFree(values[i]);
    }

    delete db;

    return 0;
}
```

```Output
StringCol: This is string 1.
StringCol: This is string 2.
```

### Compiling the Code

- To compile the code from the command line, save the code example in a file named adonet_marshal_string_native.cpp and enter the following statement:

    ```
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_native.cpp
    ```

## <a name="marshal_bstr"></a> Marshal BSTR Strings for ADO.NET

Demonstrates how to add a COM string (`BSTR`) to a database and how to marshal a <xref:System.String?displayProperty=fullName> from a database to a `BSTR`.

### Example

In this example, the class DatabaseClass is created to interact with an ADO.NET <xref:System.Data.DataTable> object. Note that this class is a native C++ **`class`** (as compared to a **`ref class`** or **`value class`**). This is necessary because we want to use this class from native code, and you cannot use managed types in native code. This class will be compiled to target the CLR, as is indicated by the `#pragma managed` directive preceding the class declaration. For more information on this directive, see [managed, unmanaged](../preprocessor/managed-unmanaged.md).

Note the private member of the DatabaseClass class: `gcroot<DataTable ^> table`. Since native types cannot contain managed types, the `gcroot` keyword is necessary. For more information on `gcroot`, see [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md).

The rest of the code in this example is native C++ code, as is indicated by the `#pragma unmanaged` directive preceding `main`. In this example, we are creating a new instance of DatabaseClass and calling its methods to create a table and populate some rows in the table. Note that COM strings are being passed as values for the database column StringCol. Inside DatabaseClass, these strings are marshaled to managed strings using the marshaling functionality found in the <xref:System.Runtime.InteropServices?displayProperty=fullName> namespace. Specifically, the method <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> is used to marshal a `BSTR` to a <xref:System.String>, and the method <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> is used to marshal a <xref:System.String> to a `BSTR`.

> [!NOTE]
> The memory allocated by <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> must be deallocated by calling either <xref:System.Runtime.InteropServices.Marshal.FreeBSTR%2A> or `SysFreeString`.

``` cpp
// adonet_marshal_string_bstr.cpp
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll
#include <comdef.h>
#include <gcroot.h>
#include <iostream>
using namespace std;

#using <System.Data.dll>
using namespace System;
using namespace System::Data;
using namespace System::Runtime::InteropServices;

#define MAXCOLS 100

#pragma managed
class DatabaseClass
{
public:
    DatabaseClass() : table(nullptr) { }

    void AddRow(BSTR stringColValue)
    {
        // Add a row to the table.
        DataRow ^row = table->NewRow();
        row["StringCol"] = Marshal::PtrToStringBSTR(
            (IntPtr)stringColValue);
        table->Rows->Add(row);
    }

    void CreateAndPopulateTable()
    {
        // Create a simple DataTable.
        table = gcnew DataTable("SampleTable");

        // Add a column of type String to the table.
        DataColumn ^column1 = gcnew DataColumn("StringCol",
            Type::GetType("System.String"));
        table->Columns->Add(column1);
    }

    int GetValuesForColumn(BSTR dataColumn, BSTR *values,
        int valuesLength)
    {
        // Marshal the name of the column to a managed
        // String.
        String ^columnStr = Marshal::PtrToStringBSTR(
                (IntPtr)dataColumn);

        // Get all rows in the table.
        array<DataRow ^> ^rows = table->Select();
        int len = rows->Length;
        len = (len > valuesLength) ? valuesLength : len;
        for (int i = 0; i < len; i++)
        {
            // Marshal each column value from a managed string
            // to a BSTR.
            values[i] = (BSTR)Marshal::StringToBSTR(
                (String ^)rows[i][columnStr]).ToPointer();
        }

        return len;
    }

private:
    // Using gcroot, you can use a managed type in
    // a native class.
    gcroot<DataTable ^> table;
};

#pragma unmanaged
int main()
{
    // Create a table and add a few rows to it.
    DatabaseClass *db = new DatabaseClass();
    db->CreateAndPopulateTable();

    BSTR str1 = SysAllocString(L"This is string 1.");
    db->AddRow(str1);

    BSTR str2 = SysAllocString(L"This is string 2.");
    db->AddRow(str2);

    // Now retrieve the rows and display their contents.
    BSTR values[MAXCOLS];
    BSTR str3 = SysAllocString(L"StringCol");
    int len = db->GetValuesForColumn(
        str3, values, MAXCOLS);
    for (int i = 0; i < len; i++)
    {
        wcout << "StringCol: " << values[i] << endl;

        // Deallocate the memory allocated using
        // Marshal::StringToBSTR.
        SysFreeString(values[i]);
    }

    SysFreeString(str1);
    SysFreeString(str2);
    SysFreeString(str3);
    delete db;

    return 0;
}
```

```Output
StringCol: This is string 1.
StringCol: This is string 2.
```

### Compiling the Code

- To compile the code from the command line, save the code example in a file named adonet_marshal_string_native.cpp and enter the following statement:

    ```
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_native.cpp
    ```

## <a name="marshal_unicode"></a> Marshal Unicode Strings for ADO.NET

Demonstrates how to add a native Unicode string (`wchar_t *`) to a database and how to marshal a <xref:System.String?displayProperty=fullName> from a database to a native Unicode string.

### Example

In this example, the class DatabaseClass is created to interact with an ADO.NET <xref:System.Data.DataTable> object. Note that this class is a native C++ **`class`** (as compared to a **`ref class`** or **`value class`**). This is necessary because we want to use this class from native code, and you cannot use managed types in native code. This class will be compiled to target the CLR, as is indicated by the `#pragma managed` directive preceding the class declaration. For more information on this directive, see [managed, unmanaged](../preprocessor/managed-unmanaged.md).

Note the private member of the DatabaseClass class: `gcroot<DataTable ^> table`. Since native types cannot contain managed types, the `gcroot` keyword is necessary. For more information on `gcroot`, see [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md).

The rest of the code in this example is native C++ code, as is indicated by the `#pragma unmanaged` directive preceding `main`. In this example, we are creating a new instance of DatabaseClass and calling its methods to create a table and populate some rows in the table. Note that Unicode C++ strings are being passed as values for the database column StringCol. Inside DatabaseClass, these strings are marshaled to managed strings using the marshaling functionality found in the <xref:System.Runtime.InteropServices?displayProperty=fullName> namespace. Specifically, the method <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A> is used to marshal a `wchar_t *` to a <xref:System.String>, and the method <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalUni%2A> is used to marshal a <xref:System.String> to a `wchar_t *`.

> [!NOTE]
> The memory allocated by <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalUni%2A> must be deallocated by calling either <xref:System.Runtime.InteropServices.Marshal.FreeHGlobal%2A> or `GlobalFree`.

```cpp
// adonet_marshal_string_wide.cpp
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll
#include <comdef.h>
#include <gcroot.h>
#include <iostream>
using namespace std;

#using <System.Data.dll>
using namespace System;
using namespace System::Data;
using namespace System::Runtime::InteropServices;

#define MAXCOLS 100

#pragma managed
class DatabaseClass
{
public:
    DatabaseClass() : table(nullptr) { }

    void AddRow(wchar_t *stringColValue)
    {
        // Add a row to the table.
        DataRow ^row = table->NewRow();
        row["StringCol"] = Marshal::PtrToStringUni(
            (IntPtr)stringColValue);
        table->Rows->Add(row);
    }

    void CreateAndPopulateTable()
    {
        // Create a simple DataTable.
        table = gcnew DataTable("SampleTable");

        // Add a column of type String to the table.
        DataColumn ^column1 = gcnew DataColumn("StringCol",
            Type::GetType("System.String"));
        table->Columns->Add(column1);
    }

    int GetValuesForColumn(wchar_t *dataColumn, wchar_t **values,
        int valuesLength)
    {
        // Marshal the name of the column to a managed
        // String.
        String ^columnStr = Marshal::PtrToStringUni(
                (IntPtr)dataColumn);

        // Get all rows in the table.
        array<DataRow ^> ^rows = table->Select();
        int len = rows->Length;
        len = (len > valuesLength) ? valuesLength : len;
        for (int i = 0; i < len; i++)
        {
            // Marshal each column value from a managed string
            // to a wchar_t *.
            values[i] = (wchar_t *)Marshal::StringToHGlobalUni(
                (String ^)rows[i][columnStr]).ToPointer();
        }

        return len;
    }

private:
    // Using gcroot, you can use a managed type in
    // a native class.
    gcroot<DataTable ^> table;
};

#pragma unmanaged
int main()
{
    // Create a table and add a few rows to it.
    DatabaseClass *db = new DatabaseClass();
    db->CreateAndPopulateTable();
    db->AddRow(L"This is string 1.");
    db->AddRow(L"This is string 2.");

    // Now retrieve the rows and display their contents.
    wchar_t *values[MAXCOLS];
    int len = db->GetValuesForColumn(
        L"StringCol", values, MAXCOLS);
    for (int i = 0; i < len; i++)
    {
        wcout << "StringCol: " << values[i] << endl;

        // Deallocate the memory allocated using
        // Marshal::StringToHGlobalUni.
        GlobalFree(values[i]);
    }

    delete db;

    return 0;
}
```

```Output
StringCol: This is string 1.
StringCol: This is string 2.
```

### Compiling the Code

- To compile the code from the command line, save the code example in a file named adonet_marshal_string_wide.cpp and enter the following statement:

    ```
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_string_wide.cpp
    ```

## <a name="marshal_variant"></a> Marshal a VARIANT for ADO.NET

Demonstrates how to add a native `VARIANT` to a database and how to marshal a <xref:System.Object?displayProperty=fullName> from a database to a native `VARIANT`.

### Example

In this example, the class DatabaseClass is created to interact with an ADO.NET <xref:System.Data.DataTable> object. Note that this class is a native C++ **`class`** (as compared to a **`ref class`** or **`value class`**). This is necessary because we want to use this class from native code, and you cannot use managed types in native code. This class will be compiled to target the CLR, as is indicated by the `#pragma managed` directive preceding the class declaration. For more information on this directive, see [managed, unmanaged](../preprocessor/managed-unmanaged.md).

Note the private member of the DatabaseClass class: `gcroot<DataTable ^> table`. Since native types cannot contain managed types, the `gcroot` keyword is necessary. For more information on `gcroot`, see [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md).

The rest of the code in this example is native C++ code, as is indicated by the `#pragma unmanaged` directive preceding `main`. In this example, we are creating a new instance of DatabaseClass and calling its methods to create a table and populate some rows in the table. Note that native `VARIANT` types are being passed as values for the database column ObjectCol. Inside DatabaseClass, these `VARIANT` types are marshaled to managed objects using the marshaling functionality found in the <xref:System.Runtime.InteropServices?displayProperty=fullName> namespace. Specifically, the method <xref:System.Runtime.InteropServices.Marshal.GetObjectForNativeVariant%2A> is used to marshal a `VARIANT` to an <xref:System.Object>, and the method <xref:System.Runtime.InteropServices.Marshal.GetNativeVariantForObject%2A> is used to marshal an <xref:System.Object> to a `VARIANT`.

```cpp
// adonet_marshal_variant.cpp
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll
#include <comdef.h>
#include <gcroot.h>
#include <iostream>
using namespace std;

#using <System.Data.dll>
using namespace System;
using namespace System::Data;
using namespace System::Runtime::InteropServices;

#define MAXCOLS 100

#pragma managed
class DatabaseClass
{
public:
    DatabaseClass() : table(nullptr) { }

    void AddRow(VARIANT *objectColValue)
    {
        // Add a row to the table.
        DataRow ^row = table->NewRow();
        row["ObjectCol"] = Marshal::GetObjectForNativeVariant(
            IntPtr(objectColValue));
        table->Rows->Add(row);
    }

    void CreateAndPopulateTable()
    {
        // Create a simple DataTable.
        table = gcnew DataTable("SampleTable");

        // Add a column of type String to the table.
        DataColumn ^column1 = gcnew DataColumn("ObjectCol",
            Type::GetType("System.Object"));
        table->Columns->Add(column1);
    }

    int GetValuesForColumn(wchar_t *dataColumn, VARIANT *values,
        int valuesLength)
    {
        // Marshal the name of the column to a managed
        // String.
        String ^columnStr = Marshal::PtrToStringUni(
                (IntPtr)dataColumn);

        // Get all rows in the table.
        array<DataRow ^> ^rows = table->Select();
        int len = rows->Length;
        len = (len > valuesLength) ? valuesLength : len;
        for (int i = 0; i < len; i++)
        {
            // Marshal each column value from a managed object
            // to a VARIANT.
            Marshal::GetNativeVariantForObject(
                rows[i][columnStr], IntPtr(&values[i]));
        }

        return len;
    }

private:
    // Using gcroot, you can use a managed type in
    // a native class.
    gcroot<DataTable ^> table;
};

#pragma unmanaged
int main()
{
    // Create a table and add a few rows to it.
    DatabaseClass *db = new DatabaseClass();
    db->CreateAndPopulateTable();

    BSTR bstr1 = SysAllocString(L"This is a BSTR in a VARIANT.");
    VARIANT v1;
    v1.vt = VT_BSTR;
    v1.bstrVal = bstr1;
    db->AddRow(&v1);

    int i = 42;
    VARIANT v2;
    v2.vt = VT_I4;
    v2.lVal = i;
    db->AddRow(&v2);

    // Now retrieve the rows and display their contents.
    VARIANT values[MAXCOLS];
    int len = db->GetValuesForColumn(
        L"ObjectCol", values, MAXCOLS);
    for (int i = 0; i < len; i++)
    {
        switch (values[i].vt)
        {
            case VT_BSTR:
                wcout << L"ObjectCol: " << values[i].bstrVal << endl;
                break;
            case VT_I4:
                cout << "ObjectCol: " << values[i].lVal << endl;
                break;
            default:
                break;
        }

    }

    SysFreeString(bstr1);
    delete db;

    return 0;
}
```

```Output
ObjectCol: This is a BSTR in a VARIANT.
ObjectCol: 42
```

### Compiling the Code

- To compile the code from the command line, save the code example in a file named adonet_marshal_variant.cpp and enter the following statement:

    ```
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_variant.cpp
    ```

## <a name="marshal_safearray"></a> Marshal a SAFEARRAY for ADO.NET

Demonstrates how to add a native `SAFEARRAY` to a database and how to marshal a managed array from a database to a native `SAFEARRAY`.

### Example

In this example, the class DatabaseClass is created to interact with an ADO.NET <xref:System.Data.DataTable> object. Note that this class is a native C++ **`class`** (as compared to a **`ref class`** or **`value class`**). This is necessary because we want to use this class from native code, and you cannot use managed types in native code. This class will be compiled to target the CLR, as is indicated by the `#pragma managed` directive preceding the class declaration. For more information on this directive, see [managed, unmanaged](../preprocessor/managed-unmanaged.md).

Note the private member of the DatabaseClass class: `gcroot<DataTable ^> table`. Since native types cannot contain managed types, the `gcroot` keyword is necessary. For more information on `gcroot`, see [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md).

The rest of the code in this example is native C++ code, as is indicated by the `#pragma unmanaged` directive preceding `main`. In this example, we are creating a new instance of DatabaseClass and calling its methods to create a table and populate some rows in the table. Note that native `SAFEARRAY` types are being passed as values for the database column ArrayIntsCol. Inside DatabaseClass, these `SAFEARRAY` types are marshaled to managed objects using the marshaling functionality found in the <xref:System.Runtime.InteropServices?displayProperty=fullName> namespace. Specifically, the method <xref:System.Runtime.InteropServices.Marshal.Copy%2A> is used to marshal a `SAFEARRAY` to a managed array of integers, and the method <xref:System.Runtime.InteropServices.Marshal.Copy%2A> is used to marshal a managed array of integers to a `SAFEARRAY`.

```cpp
// adonet_marshal_safearray.cpp
// compile with: /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll
#include <comdef.h>
#include <gcroot.h>
#include <iostream>
using namespace std;

#using <System.Data.dll>
using namespace System;
using namespace System::Data;
using namespace System::Runtime::InteropServices;

#define MAXCOLS 100

#pragma managed
class DatabaseClass
{
public:
    DatabaseClass() : table(nullptr) { }

    void AddRow(SAFEARRAY *arrayIntsColValue)
    {
        // Add a row to the table.
        DataRow ^row = table->NewRow();
        int len = arrayIntsColValue->rgsabound[0].cElements;
        array<int> ^arr = gcnew array<int>(len);

        int *pData;
        SafeArrayAccessData(arrayIntsColValue, (void **)&pData);
        Marshal::Copy(IntPtr(pData), arr, 0, len);
        SafeArrayUnaccessData(arrayIntsColValue);

        row["ArrayIntsCol"] = arr;
        table->Rows->Add(row);
    }

    void CreateAndPopulateTable()
    {
        // Create a simple DataTable.
        table = gcnew DataTable("SampleTable");

        // Add a column of type String to the table.
        DataColumn ^column1 = gcnew DataColumn("ArrayIntsCol",
            Type::GetType("System.Int32[]"));
        table->Columns->Add(column1);
    }

    int GetValuesForColumn(wchar_t *dataColumn, SAFEARRAY **values,
        int valuesLength)
    {
        // Marshal the name of the column to a managed
        // String.
        String ^columnStr = Marshal::PtrToStringUni(
                (IntPtr)dataColumn);

        // Get all rows in the table.
        array<DataRow ^> ^rows = table->Select();
        int len = rows->Length;
        len = (len > valuesLength) ? valuesLength : len;
        for (int i = 0; i < len; i++)
        {
            // Marshal each column value from a managed array
            // of Int32s to a SAFEARRAY of type VT_I4.
            values[i] = SafeArrayCreateVector(VT_I4, 0, 10);
            int *pData;
            SafeArrayAccessData(values[i], (void **)&pData);
            Marshal::Copy((array<int> ^)rows[i][columnStr], 0,
                IntPtr(pData), 10);
            SafeArrayUnaccessData(values[i]);
        }

        return len;
    }

private:
    // Using gcroot, you can use a managed type in
    // a native class.
    gcroot<DataTable ^> table;
};

#pragma unmanaged
int main()
{
    // Create a table and add a few rows to it.
    DatabaseClass *db = new DatabaseClass();
    db->CreateAndPopulateTable();

    // Create a standard array.
    int originalArray[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Create a SAFEARRAY.
    SAFEARRAY *psa;
    psa = SafeArrayCreateVector(VT_I4, 0, 10);

    // Copy the data from the original array to the SAFEARRAY.
    int *pData;
    HRESULT hr = SafeArrayAccessData(psa, (void **)&pData);
    memcpy(pData, &originalArray, 40);
    SafeArrayUnaccessData(psa);
    db->AddRow(psa);

    // Now retrieve the rows and display their contents.
    SAFEARRAY *values[MAXCOLS];
    int len = db->GetValuesForColumn(
        L"ArrayIntsCol", values, MAXCOLS);
    for (int i = 0; i < len; i++)
    {
        int *pData;
        SafeArrayAccessData(values[i], (void **)&pData);
        for (int j = 0; j < 10; j++)
        {
            cout << pData[j] << " ";
        }
        cout << endl;
        SafeArrayUnaccessData(values[i]);

        // Deallocate the memory allocated using
        // SafeArrayCreateVector.
        SafeArrayDestroy(values[i]);
    }

    SafeArrayDestroy(psa);
    delete db;

    return 0;
}
```

```Output
0 1 2 3 4 5 6 7 8 9
```

### Compiling the Code

- To compile the code from the command line, save the code example in a file named adonet_marshal_safearray.cpp and enter the following statement:

    ```
    cl /clr /FU System.dll /FU System.Data.dll /FU System.Xml.dll adonet_marshal_safearray.cpp
    ```

## .NET Framework Security

For information on security issues involving ADO.NET, see [Securing ADO.NET Applications](/dotnet/framework/data/adonet/securing-ado-net-applications).

## Related Sections

|Section|Description|
|-------------|-----------------|
|[ADO.NET](/dotnet/framework/data/adonet/index)|Provides an overview of ADO.NET, a set of classes that expose data access services to the .NET programmer.|

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

[Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)

<xref:System.Runtime.InteropServices>

[Interoperability](/dotnet/framework/interop/index)
