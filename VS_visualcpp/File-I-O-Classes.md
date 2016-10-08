---
title: "File I-O Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: File I/O Classes
ms.assetid: 92821c3f-d9e1-47f6-98c9-3b632d86e811
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# File I-O Classes
These classes provide an interface to traditional disk files, in-memory files, Active streams, and Windows sockets. All of the classes derived from `CFile` can be used with a `CArchive` object to perform serialization.  
  
 Use the following classes, particularly `CArchive` and `CFile`, if you write your own input/output processing. Normally you do not need to derive from these classes. If you use the application framework, the default implementations of the **Open** and **Save** commands on the **File** menu will handle file I/O (using class `CArchive`), as long as you override your document's `Serialize` function to supply details about how a document serializes its contents. For more information about the file classes and serialization, see the article [Files in MFC](../VS_visualcpp/Files-in-MFC.md) and the article [Serialization](../VS_visualcpp/Serialization-in-MFC.md).  
  
 [CFile](../VS_visualcpp/CFile-Class.md)  
 Provides a file interface to binary disk files.  
  
 [CStdioFile](../VS_visualcpp/CStdioFile-Class.md)  
 Provides a `CFile` interface to buffered stream disk files, usually in text mode.  
  
 [CMemFile](../VS_visualcpp/CMemFile-Class.md)  
 Provides a `CFile` interface to in-memory files.  
  
 [CSharedFile](../VS_visualcpp/CSharedFile-Class.md)  
 Provides a `CFile` interface to shared in-memory files.  
  
 [COleStreamFile](../VS_visualcpp/COleStreamFile-Class.md)  
 Uses the COM `IStream` interface to provide `CFile` access to compound files.  
  
 [CSocketFile](../VS_visualcpp/CSocketFile-Class.md)  
 Provides a `CFile` interface to a Windows Socket.  
  
## Related Classes  
 [CArchive](../VS_visualcpp/CArchive-Class.md)  
 Cooperates with a `CFile` object to implement persistent storage for objects through serialization (see [CObject::Serialize](../Topic/CObject::Serialize.md)).  
  
 [CArchiveException](../VS_visualcpp/CArchiveException-Class.md)  
 An archive exception.  
  
 [CFileException](../VS_visualcpp/CFileException-Class.md)  
 A file-oriented exception.  
  
 [CFileDialog](../VS_visualcpp/CFileDialog-Class.md)  
 Provides a standard dialog box for opening or saving a file.  
  
 [CRecentFileList](../VS_visualcpp/CRecentFileList-Class.md)  
 Maintains the most recently used (MRU) file list.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)