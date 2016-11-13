---
title: "Using ADO Databinding in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bound controls [C++], ADO"
  - "ADO [C++], data binding"
  - "data binding [C++], RDO"
  - "data binding [C++], ADO"
  - "bound controls [C++], RDO"
ms.assetid: ad193919-3437-41ee-b41c-9d353f6274e5
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Using ADO Databinding in Visual C++
Using ADO databinding in Visual C++ requires the following steps:  
  
-   Add an ADO data control.  
  
-   Point to a data source.  
  
-   Specify the record source (SQL query or data retrieval language).  
  
-   Add an ADO data-bound control.  
  
-   Connect the data-bound control to an ADO data control.  
  
-   Select the fields to bind to the ADO data control's record source.  
  
### To use ADO databinding in Visual C++  
  
1.  Create an MFC dialog application or MFC Formview application using the MFC Application Wizard.  
  
2.  Add the Microsoft ADO data control to the dialog box; see [Inserting the Control into a Visual C++ Application](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md).  
  
3.  Point the ADO data control to your OLE DB data source.  
  
    1.  Right-click the ADO data control, and then click **Properties**.  
  
    2.  On the **Control** tab, click **Use Connection String**. You can use the supplied provider or you can delete it.  
  
    3.  Click **Build**. If you deleted the provider from **Use Connection String**, you are now able to define one. After you define the provider, access the properties of the ADO data control again, and then select **Build** again to continue.  
  
         If a provider is defined in **Use Connection String** before you select **Build**, you are able to define the data link properties. This displays the DataLink Wizard.  
  
    4.  Change the **Provider** if necessary, and define **Location** and **Data Source** values, as appropriate for your provider. For example, if you are using a SQL Server provider, **Location** specifies the database server and **Data Source** specifies the database. If you are using an ODBC provider, the **Data Source** corresponds to the ODBC DSN.  
  
    5.  Click the **Authentication** tab, and then set values for **User Name** and **Password**, if required by the data source.  
  
    6.  Click the **Connection** tab, and then click **Test Connection** to test the data source. Scroll to the end of the Results window to see if the test passed. If it failed, check the configuration of your data source. Common errors include invalid passwords and incorrect values for the **Location** and **Data Source** fields.  
  
    7.  Exit the DataLink Wizard and return to the property sheet for the ADO data control.  
  
4.  On the `RecordSource` tab, enter a query into **Command Text (SQL)**. The data-bound controls can bind to the results of this query. The query is usually SQL. However, some OLE DB providers do not use SQL.  
  
5.  Set any other ADO data control properties as needed and close the property sheet for the ADO data control.  
  
6.  Add a data-bound control. For example, add the DataGrid control, which is different from the RDO DBGrid control.)  
  
7.  Set the DataGrid's properties.  
  
    1.  Right-click the DataGrid, and then click **Properties**.  
  
    2.  Click the **All** tab, and then set the **DataSource** property to the ADO data control. Click the **DataSource** drop-down list and find the ID of the ADO data control. The default ID name is IDC_ADODC1.  
  
8.  To run in test mode, press CTRL+T. You are able to scroll through the data. Press the Esc key or close the dialog box to end test mode.  
  
 If you compile and run the program, you are able to scroll through the data as well.  
  
## See Also  
 [ADO Databinding](../../data/ado-rdo/ado-databinding.md)   
 [Databinding with ActiveX Controls in Visual C++](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)