---
description: "Learn more about: Sequence of Operations for Creating Database Applications"
title: "Sequence of Operations for Creating Database Applications"
ms.date: "11/04/2016"
helpviewer_keywords: ["applications [MFC], database", "database applications [MFC]", "database applications [MFC], creating", "MFC, database applications"]
ms.assetid: 9371da59-8536-43cd-8314-706ad320e2ec
---
# Sequence of Operations for Creating Database Applications

The following table shows your role and the framework's role in writing database applications.

> [!NOTE]
> The Visual C++ environment and wizards do not support DAO (although the DAO classes are included and you can still use them). Microsoft recommends that you use ODBC for new MFC projects. You should only use DAO in maintaining existing applications.

### Creating Database Applications

|Task|You do|The framework does|
|----------|------------|------------------------|
|Decide whether to use the MFC ODBC or DAO classes.|Use ODBC for new MFC projects. Use DAO only to maintain existing applications. For general information, see the article [Data Access Programming](../data/data-access-programming-mfc-atl.md).|The framework supplies classes that support database access.|
|Create your skeleton application with database options.|Run the MFC Application Wizard. Select options on the Database Support page. If you choose an option that creates a record view, also specify:<br /><br />- Data source and table name or names<br />- Query name or names.|The MFC Application Wizard creates files and specifies the necessary includes. Depending on the options you specify, the files can include a recordset class.|
|Design your database form or forms.|Use the Visual C++ dialog editor to place controls on the dialog template resources for your record view classes.|The MFC Application Wizard creates an empty dialog template resource for you to fill in.|
|Create additional record view and recordset classes as needed.|Use Class View to create the classes and the dialog editor to design the views.|Class View creates additional files for your new classes.|
|Create recordset objects as needed in your code. Use each recordset to manipulate records...|Your recordsets are based on the classes derived from [CRecordset](../mfc/reference/crecordset-class.md) with the wizards.|ODBC uses record field exchange (RFX) to exchange data between the database and your recordset's field data members. If you are using a record view, dialog data exchange (DDX) exchanges data between the recordset and the controls on the record view.|
|...or create an explicit [CDatabase](../mfc/reference/cdatabase-class.md) in your code for each database you want to open.|Base your recordset objects on the database objects.|The database object provides an interface to the data source.|
|Bind data columns to your recordset dynamically.|In ODBC, add code to your derived recordset class to manage the binding. See the article [Recordset: Dynamically Binding Data Columns (ODBC)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||

## See also

[Building on the Framework](../mfc/building-on-the-framework.md)<br/>
[Sequence of Operations for Building MFC Applications](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequence of Operations for Creating OLE Applications](../mfc/sequence-of-operations-for-creating-ole-applications.md)<br/>
[Sequence of Operations for Creating ActiveX Controls](../mfc/sequence-of-operations-for-creating-activex-controls.md)
