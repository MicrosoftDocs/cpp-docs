---
description: "Learn more about: Record Views  (MFC Data Access)"
title: "Record Views  (MFC Data Access)"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC [C++], record views", "ODBC recordsets [C++], record views", "databases [C++], record views", "record views [C++]", "forms [C++], data access tasks"]
ms.assetid: 562122d9-01d8-4284-acf6-ea109ab0408d
---
# Record Views  (MFC Data Access)

This section applies only to the MFC ODBC classes. For information about OLE DB record views, see [COleDBRecordView](../mfc/reference/coledbrecordview-class.md) and [Using OLE DB Record Views](../data/oledb/using-ole-db-record-views.md).

To support form-based data-access applications, the class library provides class [CRecordView](../mfc/reference/crecordview-class.md). A record view is a form view object whose controls are mapped directly to the field data members of a [recordset](../data/odbc/recordset-odbc.md) object (and indirectly to the corresponding columns in a query result or table on the data source). Like its base class [CFormView](../mfc/reference/cformview-class.md), `CRecordView` is based on a dialog template resource.

## Form Uses

Forms are useful for a variety of data-access tasks:

- Entering data

- Performing read-only examination of data

- Updating data

## Further Reading About Record Views

The material in topics applies to both the ODBC-based and the DAO-based classes. Use `CRecordView` for ODBC and `CDaoRecordView` for DAO.

Topics include:

- [Features of Record View Classes](../data/features-of-record-view-classes-mfc-data-access.md)

- [Data Exchange for Record Views](../data/data-exchange-for-record-views-mfc-data-access.md)

- [Your Role in Working with a Record View](../data/your-role-in-working-with-a-record-view-mfc-data-access.md)

- [Designing and Creating a Record View](../data/designing-and-creating-a-record-view-mfc-data-access.md)

- [Using a Record View](../data/using-a-record-view-mfc-data-access.md)

## See also

[Data Access Programming (MFC/ATL)](../data/data-access-programming-mfc-atl.md)<br/>
[ODBC Driver List](../data/odbc/odbc-driver-list.md)
