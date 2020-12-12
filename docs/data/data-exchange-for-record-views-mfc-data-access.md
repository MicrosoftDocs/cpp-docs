---
description: "Learn more about: Data Exchange for Record Views   (MFC Data Access)"
title: "Data Exchange for Record Views   (MFC Data Access)"
ms.date: "11/19/2018"
helpviewer_keywords: ["RFX (record field exchange), data exchange mechanism", "RFX (record field exchange), record views", "record views, data exchange", "DDX (dialog data exchange), record views", "RFX (record field exchange)"]
ms.assetid: abc52ca7-6997-47a7-98f3-f347f52b1f72
---
# Data Exchange for Record Views   (MFC Data Access)

When you use [Add Class](../mfc/reference/adding-an-mfc-odbc-consumer.md) to map the controls in a record view's dialog template resource to the fields of a recordset, the framework manages data exchange in both directions — from recordset to controls and from controls to recordset. Using the DDX mechanism means that you do not have to write the code to transfer data back and forth yourself.

DDX for record views works in conjunction with [RFX](../data/odbc/record-field-exchange-rfx.md) for recordsets of class `CRecordset` (ODBC).  RFX moves data between the current record of the data source and the field data members of a recordset object. DDX moves the data from the field data members to the controls in the form. This combination fills the form controls initially and as the user moves from record to record. It can also move updated data back to the recordset and then to the data source.

The following figure shows the relationship between DDX and RFX for record views.

![Dialog&#45;data exchange and record&#45;field exchange](../data/media/vc37xt1.gif "Dialog&#45;data exchange and record&#45;field exchange")<br/>
Dialog Data Exchange and Record Field Exchange

For more information about DDX, see [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md). For more information about RFX, see [Record Field Exchange (RFX)](../data/odbc/record-field-exchange-rfx.md).

## See also

[Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)<br/>
[ODBC Driver List](../data/odbc/odbc-driver-list.md)
