---
description: "Learn more about: Testing the Read-Only Provider"
title: "Testing the Read-Only Provider"
ms.date: "11/04/2016"
helpviewer_keywords: ["testing, OLE DB providers", "testing providers", "OLE DB providers, calling", "OLE DB providers, testing"]
ms.assetid: e4aa30c1-391b-41f8-ac73-5270e46fd712
---
# Testing the Read-Only Provider

To test a provider, you need a consumer. It helps if the consumer can match up with the provider. The OLE DB consumer templates are a thin wrapper around OLE DB and match with the provider COM objects. Because the source is shipped with the consumer templates, it is easy to debug a provider with them. The consumer templates are also a very small and fast way to develop consumer applications.

The example in this topic creates a default MFC Application Wizard application for a test consumer. The test application is a simple dialog with OLE DB consumer template code added.

## To create the test application

1. On the **File** menu, click **New**, and then click **Project**.

1. In the **Project Types** pane, select the **Installed** > **Visual C++** > **MFC/ATL** folder. In the **Templates** pane, select **MFC Application**.

1. For the project name, enter *TestProv*, and then click **OK**.

   The **MFC Application** wizard appears.

1. On the **Application Type** page, select **Dialog based**.

1. On the **Advanced Features** page, select **Automation**, and then click **Finish**.

> [!NOTE]
> The application does not require Automation support if you add `CoInitialize` in `CTestProvApp::InitInstance`.

You can view and edit the **TestProv** dialog box (IDD_TESTPROV_DIALOG) by selecting it in **Resource View**. Place two list boxes, one for each string in the rowset, in the dialog box. Turn off the sort property for both list boxes by pressing **Alt**+**Enter** when a list box is selected, and setting the **Sort** property to **False**. Also, place a **Run** button on the dialog box to fetch the file. The finished **TestProv** dialog box should have two list boxes labeled "String 1" and "String 2", respectively; it also has **OK**, **Cancel**, and **Run** buttons.

Open the header file for the dialog class (in this case TestProvDlg.h). Add the following code to the header file (outside of any class declarations):

```cpp
////////////////////////////////////////////////////////////////////////
// TestProvDlg.h
#include <atldbcli.h>  

class CProvider
{
// Attributes
public:
   char   szField1[16];
   char   szField2[16];

   // Binding Maps
BEGIN_COLUMN_MAP(CProvider)
   COLUMN_ENTRY(1, szField1)
   COLUMN_ENTRY(2, szField2)
END_COLUMN_MAP()
};
```

The code represents a user record that defines what columns will be in the rowset. When the client calls `IAccessor::CreateAccessor`, it uses these entries to specify which columns to bind. The OLE DB consumer templates also allow you to bind columns dynamically. The COLUMN_ENTRY macros are the client-side version of the PROVIDER_COLUMN_ENTRY macros. The two COLUMN_ENTRY macros specify the ordinal, type, length, and data member for the two strings.

Add a handler function for the **Run** button by pressing **Ctrl** and double-clicking the **Run** button. Place the following code in the function:

```cpp
///////////////////////////////////////////////////////////////////////
// TestProvDlg.cpp

void CTestProvDlg::OnRun()
{
   CCommand<CAccessor<CProvider>> table;
   CDataSource source;
   CSession session;

   if (source.Open("Custom.Custom.1", NULL) != S_OK)
      return;

   if (session.Open(source) != S_OK)
      return;

   if (table.Open(session, _T("c:\\samples\\myprov\\myData.txt")) != S_OK)
      return;

   while (table.MoveNext() == S_OK)
   {
      m_ctlString1.AddString(table.szField1);
      m_ctlString2.AddString(table.szField2);
   }
}
```

The `CCommand`, `CDataSource`, and `CSession` classes all belong to the OLE DB consumer templates. Each class mimics a COM object in the provider. The `CCommand` object takes the `CProvider` class, declared in the header file, as a template parameter. The `CProvider` parameter represents bindings that you use to access the data from the provider.

The lines to open each of the classes create each COM object in the provider. To locate the provider, use the `ProgID` of the provider. You can get the `ProgID` from the system registry or by looking in the Custom.rgs file (open the provider's directory and search for the `ProgID` key).

The MyData.txt file is included with the `MyProv` sample. To create a file of your own, use an editor and type an even number of strings, pressing **Enter** between each string. Change the path name if you move the file.

Pass in the string "c:\\\samples\\\myprov\\\MyData.txt" in the `table.Open` line. If you step into the `Open` call, you see that this string is passed to the `SetCommandText` method in the provider. Note that the `ICommandText::Execute` method used that string.

To fetch the data, call `MoveNext` on the table. `MoveNext` calls the `IRowset::GetNextRows`, `GetRowCount`, and `GetData` functions. When there are no more rows (that is, the current position in the rowset is greater than `GetRowCount`), the loop terminates.

When there are no more rows, providers return DB_S_ENDOFROWSET. The DB_S_ENDOFROWSET value is not an error. You should always check against S_OK to cancel a data fetch loop and not use the SUCCEEDED macro.

You should now be able to build and test the program.

## See also

[Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md)
