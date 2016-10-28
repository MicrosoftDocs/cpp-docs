---
title: "File I-O Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.classes.file"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "disk file classes"
  - "stdio classes"
  - "OLE streams"
  - "I/O [C++], MFC classes"
  - "translated stream classes"
  - "file I/O classes [C++]"
  - "I/O [MFC], classes"
  - "sockets classes"
  - "stream classes"
  - "memory file classes"
ms.assetid: 92821c3f-d9e1-47f6-98c9-3b632d86e811
caps.latest.revision: 8
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
# File I/O Classes
These classes provide an interface to traditional disk files, in-memory files, Active streams, and Windows sockets. All of the classes derived from `CFile` can be used with a `CArchive` object to perform serialization.  
  
 Use the following classes, particularly `CArchive` and `CFile`, if you write your own input/output processing. Normally you do not need to derive from these classes. If you use the application framework, the default implementations of the **Open** and **Save** commands on the **File** menu will handle file I/O (using class `CArchive`), as long as you override your document's `Serialize` function to supply details about how a document serializes its contents. For more information about the file classes and serialization, see the article [Files in MFC](../mfc/files-in-mfc.md) and the article [Serialization](../mfc/serialization-in-mfc.md).  
  
 [CFile](../mfcref/cfile-class.md)  
 Provides a file interface to binary disk files.  
  
 [CStdioFile](../mfcref/cstdiofile-class.md)  
 Provides a `CFile` interface to buffered stream disk files, usually in text mode.  
  
 [CMemFile](../mfcref/cmemfile-class.md)  
 Provides a `CFile` interface to in-memory files.  
  
 [CSharedFile](../mfcref/csharedfile-class.md)  
 Provides a `CFile` interface to shared in-memory files.  
  
 [COleStreamFile](../mfcref/colestreamfile-class.md)  
 Uses the COM `IStream` interface to provide `CFile` access to compound files.  
  
 [CSocketFile](../mfcref/csocketfile-class.md)  
 Provides a `CFile` interface to a Windows Socket.  
  
## Related Classes  
 [CArchive](../mfcref/carchive-class.md)  
 Cooperates with a `CFile` object to implement persistent storage for objects through serialization (see [CObject::Serialize](../Topic/CObject::Serialize.md)).  
  
 [CArchiveException](../mfcref/carchiveexception-class.md)  
 An archive exception.  
  
 [CFileException](../mfcref/cfileexception-class.md)  
 A file-oriented exception.  
  
 [CFileDialog](../mfcref/cfiledialog-class.md)  
 Provides a standard dialog box for opening or saving a file.  
  
 [CRecentFileList](../mfcref/crecentfilelist-class.md)  
 Maintains the most recently used (MRU) file list.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)