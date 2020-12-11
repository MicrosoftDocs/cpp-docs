---
description: "Learn more about: Recommendations for Handling Input/Output"
title: "Recommendations for Handling Input-Output"
ms.date: "11/04/2016"
helpviewer_keywords: ["I/O [MFC], about I/O", "file-based I/O options", "I/O [MFC]", "I/O [MFC], options", "I/O [MFC], file-based options"]
ms.assetid: d664b175-3b4a-40c3-b14b-39de6b12e419
---
# Recommendations for Handling Input/Output

Whether you use file-based I/O or not depends on how you respond to the questions in the following decision tree:

**Does the primary data in your application reside in a disk file**

- Yes, the primary data resides in a disk file:

   **Does the application read the whole file into memory on File Open and write the whole file back to disk on File Save**

  - Yes: This is the default MFC document case. Use `CDocument` serialization.

  - No: This is typically the case of transaction-based updating of the file. You update the file on a per-transaction basis and don't need `CDocument` serialization.

- No, the primary data doesn't reside in a disk file:

   **Does the data reside in an ODBC data source**

  - Yes, the data resides in an ODBC data source:

      Use MFC's database support. The standard MFC implementation for this case includes a `CDatabase` object, as discussed in the article [MFC: Using Database Classes with Documents and Views](../data/mfc-using-database-classes-with-documents-and-views.md). The application might also read and write an auxiliary file — the purpose of the application wizard "both a database view and file support" option. In this case, you'd use serialization for the auxiliary file.

  - No, the data doesn't reside in an ODBC data source.

      Examples of this case: the data resides in a non-ODBC DBMS; the data is read via some other mechanism, such as OLE or DDE.

      In such cases, you won't use serialization, and your application won't have Open and Save menu items. You might still want to use a `CDocument` as a home base, just as an MFC ODBC application uses the document to store `CRecordset` objects. But you won't use the framework's default File Open/Save document serialization.

To support the Open, Save, and Save As commands on the File menu, the framework provides document serialization. Serialization reads and writes data, including objects derived from class `CObject`, to permanent storage, normally a disk file. Serialization is easy to use and serves many of your needs, but it may be inappropriate in many data-access applications. Data-access applications typically update data on a per-transaction basis. They update the records affected by the transaction rather than reading and writing a whole data file at once.

For information about serialization, see [Serialization](../mfc/serialization-in-mfc.md).

## See also

[Serialization: Serialization vs. Database Input/Output](../mfc/serialization-serialization-vs-database-input-output.md)
