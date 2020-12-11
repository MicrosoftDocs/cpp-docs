---
description: "Learn more about: Opening Files"
title: "Opening Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["Open member functions [MFC]", "CFile class [MFC], variable", "opening files, in MFC", "Open calls [MFC]", "Open method, CFile class [MFC]", "examples [MFC], opening files", "opening files, handling exceptions", "exception handling [MFC], when opening files", "files [MFC], opening", "file objects [MFC]", "MFC, file operations", "opening files [MFC]", "exception handling [MFC], opening files"]
ms.assetid: a991b8ec-b04a-4766-b47e-7485b5dd0b01
---
# Opening Files

In MFC, the most common way to open a file is a two-stage process.

#### To open a file

1. Create the file object without specifying a path or permission flags.

   You usually create a file object by declaring a [CFile](reference/cfile-class.md) variable on the stack frame.

1. Call the [Open](reference/cfile-class.md#open) member function for the file object, supplying a path and permission flags.

   The return value for `Open` will be nonzero if the file was opened successfully or 0 if the specified file could not be opened. The `Open` member function is prototyped as follows:

   `virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );`

   The open flags specify which permissions, such as read-only, you want for the file. The possible flag values are defined as enumerated constants within the `CFile` class, so they are qualified with "`CFile::`" as in `CFile::modeRead`. Use the `CFile::modeCreate` flag if you want to create the file.

The following example shows how to create a new file with read/write permission (replacing any previous file with the same path):

[!code-cpp[NVC_MFCFiles#1](../atl-mfc-shared/reference/codesnippet/cpp/opening-files_1.cpp)]

> [!NOTE]
> This example creates and opens a file. If there are problems, the `Open` call can return a `CFileException` object in its last parameter, as shown here. The TRACE macro prints both the file name and a code indicating the reason for failure. You can call the `AfxThrowFileException` function if you require more detailed error reporting.

## See also

[CFile Class](reference/cfile-class.md)<br/>
[CFile::Open](reference/cfile-class.md#open)<br/>
[Files](files-in-mfc.md)
