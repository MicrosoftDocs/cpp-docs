---
description: "Learn more about: Data Objects and Data Sources: Manipulation"
title: "Data Objects and Data Sources: Manipulation"
ms.date: "11/04/2016"
helpviewer_keywords: ["data objects [MFC], manipulating", "data sources [MFC], data operations", "data sources [MFC], inserting data", "Clipboard [MFC], determining available formats", "OLE [MFC], data objects", "Clipboard [MFC], passing format information", "data sources [MFC], determining available formats", "delayed rendering [MFC]", "OLE [MFC], data sources"]
ms.assetid: f7f27e77-bb5d-4131-b819-d71bf929ebaf
---
# Data Objects and Data Sources: Manipulation

After a data object or data source has been created, you can perform a number of common operations on the data, such as inserting and removing data, enumerating the formats the data is in, and more. This article describes the techniques necessary to complete the most common operations. Topics include:

- [Inserting data into a data source](#_core_inserting_data_into_a_data_source)

- [Determining the formats available in a data object](#_core_determining_the_formats_available_in_a_data_object)

- [Retrieving data from a data object](#_core_retrieving_data_from_a_data_object)

## <a name="_core_inserting_data_into_a_data_source"></a> Inserting Data into a Data Source

How data is inserted into a data source depends on whether the data is supplied immediately or on demand, and in which medium it is supplied. The possibilities are as follows.

### Supplying Data Immediately (Immediate Rendering)

- Call `COleDataSource::CacheGlobalData` repeatedly for every Clipboard format in which you are supplying data. Pass the Clipboard format to be used, a handle to the memory containing the data and, optionally, a **FORMATETC** structure describing the data.

     -or-

- If you want to work directly with **STGMEDIUM** structures, you call `COleDataSource::CacheData` instead of `COleDataSource::CacheGlobalData` in the option above.

### Supplying Data on Demand (Delayed Rendering)

This is an advanced topic.

- Call `COleDataSource::DelayRenderData` repeatedly for every Clipboard format in which you are supplying data. Pass the Clipboard format to be used and, optionally, a **FORMATETC** structure describing the data. When the data is requested, the framework will call `COleDataSource::OnRenderData`, which you must override.

     -or-

- If you use a `CFile` object to supply the data, call `COleDataSource::DelayRenderFileData` instead of `COleDataSource::DelayRenderData` in the previous option. When the data is requested, the framework will call `COleDataSource::OnRenderFileData`, which you must override.

## <a name="_core_determining_the_formats_available_in_a_data_object"></a> Determining the Formats Available in a Data Object

Before an application allows the user to paste data into it, it needs to know if there are formats on the Clipboard that it can handle. To do this, your application should do the following:

1. Create a `COleDataObject` object and a **FORMATETC** structure.

1. Call the data object's `AttachClipboard` member function to associate the data object with the data on the Clipboard.

1. Do one of the following:

   - Call the data object's `IsDataAvailable` member function if there are only one or two formats you need. This will save you time in cases where the data on the Clipboard supports significantly more formats than your application.

     \-or-

   - Call the data object's `BeginEnumFormats` member function to start enumerating the formats available on the Clipboard. Then call `GetNextFormat` until the Clipboard returns a format your application supports or there are no more formats.

If you are using **ON_UPDATE_COMMAND_UI**, you can now enable the Paste and, possibly, Paste Special items on the Edit menu. To do this, call either `CMenu::EnableMenuItem` or `CCmdUI::Enable`. For more information about what container applications should do with menu items and when, see [Menus and Resources: Container Additions](menus-and-resources-container-additions.md).

## <a name="_core_retrieving_data_from_a_data_object"></a> Retrieving Data from a Data Object

Once you have decided on a data format, all that remains is to retrieve the data from the data object. To do this, the user decides where to put the data, and the application calls the appropriate function. The data will be available in one of the following mediums:

|Medium|Function to call|
|------------|----------------------|
|Global Memory (`HGLOBAL`)|`COleDataObject::GetGlobalData`|
|File (`CFile`)|`COleDataObject::GetFileData`|
|**STGMEDIUM** structure (`IStorage`)|`COleDataObject::GetData`|

Commonly, the medium will be specified along with its Clipboard format. For example, a **CF_EMBEDDEDSTRUCT** object is always in an `IStorage` medium that requires an **STGMEDIUM** structure. Therefore, you would use `GetData` because it is the only one of these functions that can accept an **STGMEDIUM** structure.

For cases where the Clipboard format is in an `IStream` or `HGLOBAL` medium, the framework can provide a `CFile` pointer that references the data. The application can then use file read to get the data in much the same way as it might import data from a file. Essentially, this is the client-side interface to the `OnRenderData` and `OnRenderFileData` routines in the data source.

The user can now insert data into the document just like for any other data in the same format.

### What do you want to know more about

- [Drag and drop](drag-and-drop-ole.md)

- [Clipboard](clipboard.md)

## See also

[Data Objects and Data Sources (OLE)](data-objects-and-data-sources-ole.md)<br/>
[COleDataObject Class](reference/coledataobject-class.md)<br/>
[COleDataSource Class](reference/coledatasource-class.md)
