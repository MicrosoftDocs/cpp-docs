---
description: "Learn more about: Files in MFC"
title: "Files in MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["serialization [MFC], MFC files", "I/O [MFC], MFC classes", "files [MFC], MFC", "files [MFC], serialization", "binary access, binary file operations in MFC", "file I/O classes [MFC]", "I/O [MFC]", "persistence [MFC]", "MFC, file operations", "files [MFC], manipulating", "binary access [MFC]"]
ms.assetid: ae25e2c5-2859-4679-ab97-438824e93ce1
---
# Files in MFC

In the Microsoft Foundation Class Library (MFC), class [CFile](reference/cfile-class.md) handles normal file I/O operations. This family of articles explains how to open and close files as well as read and write data to those files. It also discusses file status operations. For a description of how to use the object-based serialization features of MFC as an alternative way of reading and writing data in files, see the article [Serialization](serialization-in-mfc.md).

> [!NOTE]
> When you use MFC `CDocument` objects, the framework does much of the serialization work for you. In particular, the framework creates and uses the `CFile` object. You only have to write code in your override of the `Serialize` member function of class `CDocument`.

The `CFile` class provides an interface for general-purpose binary file operations. The `CStdioFile` and `CMemFile` classes derived from `CFile` and the `CSharedFile` class derived from `CMemFile` supply more specialized file services.

For more information about alternatives to MFC file handling, see [File Handling](../c-runtime-library/file-handling.md) in the *Run-Time Library Reference*.

For information about derived `CFile` classes, see the [MFC hierarchy chart](hierarchy-chart.md).

## What do you want to do

*Use CFile*

- [Open a file with CFile](opening-files.md)

- [Read and write a file with CFile](reading-and-writing-files.md)

- [Close a file with CFile](closing-files.md)

- [Access file status with CFile](accessing-file-status.md)

*Use MFC Serialization (Object Persistence)*

- [Create a serializable class](serialization-making-a-serializable-class.md)

- [Serialize an object via a CArchive object](serialization-serializing-an-object.md)

- [Create a CArchive object](two-ways-to-create-a-carchive-object.md)

- [Use CArchive <\< and >> operators](using-the-carchive-output-and-input-operators.md)

- [Store and load CObjects and CObject-derived objects via an archive](storing-and-loading-cobjects-via-an-archive.md)

## See also

[Concepts](mfc-concepts.md)<br/>
[General MFC Topics](general-mfc-topics.md)<br/>
[CArchive Class](reference/carchive-class.md)<br/>
[CObject Class](reference/cobject-class.md)
