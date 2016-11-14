---
title: "Using RDO Databinding in Visual C++ | Microsoft Docs"
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
  - "RDO RemoteData control, binding data in Visual C++"
  - "data binding [C++], RDO"
  - "RemoteData control, binding data in Visual C++"
  - "RDO [C++], data binding"
ms.assetid: 02b9cfe7-7bbe-4a01-b075-e28d9536ac4b
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
# Using RDO Databinding in Visual C++
To use RDO databinding in Visual C++, you need to add an RDO RemoteData control and point to a data source and a record source (SQL query). You also need to add an RDO data-bound control, point it to an RDO RemoteData control, and select the fields to bind to the RDO RemoteData control's record source.  
  
### To use RDO databinding in Visual C++  
  
1.  Configure an [ODBC data source](../../data/ado-rdo/odbc-connections.md), if you have not already done so.  
  
2.  Create an MFC Dialog application or MFC Formview application using the MFC Application Wizard.  
  
3.  Add the Microsoft RemoteData control (RDO RemoteData control) to the dialog box; see [Inserting the Control into a Visual C++ Application](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md).  
  
4.  Point the RDO RemoteData control to your ODBC data source.  
  
    1.  Right-click the control, and then click **Properties**.  
  
    2.  Click the **Control** tab.  
  
    3.  Set **DataSource** to your ODBC data source.  
  
    4.  As needed, set the user name and password for your ODBC data source. Leave it blank if the data source does not require a user name or password.  
  
    5.  Enter an SQL query into the **SQL** property. The data-bound controls can bind to the results of this query.  
  
5.  Set any other RDO RemoteData control properties as needed.  
  
6.  Add a data-bound control. For example, add the **DBGrid Control** and set the data source as follows.  
  
    1.  Right-click the DBGrid, and then click **Properties**.  
  
    2.  Click the **All** tab.  
  
    3.  Set the **DataSource** property to the RDO RemoteData control. Click the drop-down combo box for the property and find the ID of the RDO RemoteData control. The default ID name is IDC_REMOTEDATACTL1.  
  
7.  To run in test mode, use CTRL+T. You are able to scroll through the data. Press the Esc key or close the dialog box to end test mode.  
  
 If you compile and run the program, you are able to scroll through the data as well.  
  
## See Also  
 [RDO Databinding](../../data/ado-rdo/rdo-databinding.md)   
 [Databinding with ActiveX Controls in Visual C++](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)