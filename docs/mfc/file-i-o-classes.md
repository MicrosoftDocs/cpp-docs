---
description: "Learn more about: File I/O Classes"
title: "File I-O Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.file"]
helpviewer_keywords: ["disk file classes [MFC]", "stdio classes [MFC]", "OLE streams [MFC]", "I/O [MFC], MFC classes", "translated stream classes [MFC]", "file I/O classes [MFC]", "I/O [MFC], classes", "sockets classes [MFC]", "stream classes [MFC]", "memory file classes [MFC]"]
ms.assetid: 92821c3f-d9e1-47f6-98c9-3b632d86e811
---
# File I/O Classes

These classes provide an interface to traditional disk files, in-memory files, Active streams, and Windows sockets. All of the classes derived from `CFile` can be used with a `CArchive` object to perform serialization.

Use the following classes, particularly `CArchive` and `CFile`, if you write your own input/output processing. Normally you do not need to derive from these classes. If you use the application framework, the default implementations of the **Open** and **Save** commands on the **File** menu will handle file I/O (using class `CArchive`), as long as you override your document's `Serialize` function to supply details about how a document serializes its contents. For more information about the file classes and serialization, see the article [Files in MFC](files-in-mfc.md) and the article [Serialization](serialization-in-mfc.md).

[CFile](reference/cfile-class.md)<br/>
Provides a file interface to binary disk files.

[CStdioFile](reference/cstdiofile-class.md)<br/>
Provides a `CFile` interface to buffered stream disk files, usually in text mode.

[CMemFile](reference/cmemfile-class.md)<br/>
Provides a `CFile` interface to in-memory files.

[CSharedFile](reference/csharedfile-class.md)<br/>
Provides a `CFile` interface to shared in-memory files.

[COleStreamFile](reference/colestreamfile-class.md)<br/>
Uses the COM `IStream` interface to provide `CFile` access to compound files.

[CSocketFile](reference/csocketfile-class.md)<br/>
Provides a `CFile` interface to a Windows Socket.

## Related Classes

[CArchive](reference/carchive-class.md)<br/>
Cooperates with a `CFile` object to implement persistent storage for objects through serialization (see [CObject::Serialize](reference/cobject-class.md#serialize)).

[CArchiveException](reference/carchiveexception-class.md)<br/>
An archive exception.

[CFileException](reference/cfileexception-class.md)<br/>
A file-oriented exception.

[CFileDialog](reference/cfiledialog-class.md)<br/>
Provides a standard dialog box for opening or saving a file.

[CRecentFileList](reference/crecentfilelist-class.md)<br/>
Maintains the most recently used (MRU) file list.

## See also

[Class Overview](class-library-overview.md)
