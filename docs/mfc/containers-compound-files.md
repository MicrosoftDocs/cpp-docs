---
title: "Containers: Compound Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compound files"
  - "compound documents"
  - "containers [C++], compound files"
  - "OLE documents, compound files"
  - "performance [C++], compound files"
  - "files [C++], compound"
  - "standardized file structure compound files"
  - "documents [C++], compound"
  - "documents [C++], OLE"
  - "OLE containers, compound files"
  - "access modes for files [C++]"
ms.assetid: 8b83cb3e-76c8-4bbe-ba16-737092b36f49
caps.latest.revision: 9
author: "mikeblome"
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
# Containers: Compound Files
This article explains the components and implementation of compound files and the advantages and disadvantages of using compound files in your OLE applications.  
  
 Compound files are an integral part of OLE. They are used to facilitate data transfer and OLE document storage. Compound files are an implementation of the Active structured storage model. Consistent interfaces exist that support serialization to a storage, a stream, or a file object. Compound files are supported in the Microsoft Foundation Class Library by the classes `COleStreamFile` and `COleDocument`.  
  
> [!NOTE]
>  Using a compound file does not imply that the information comes from an OLE document or a compound document. Compound files are just one of the ways to store compound documents, OLE documents, and other data.  
  
##  <a name="_core_components_of_a_compound_file"></a> Components of a Compound File  
 The OLE implementation of compound files uses three object types: stream objects, storage objects, and `ILockBytes` objects. These objects are similar to the components of a standard file system in the following ways:  
  
-   Stream objects, like files, store data of any type.  
  
-   Storage objects, like directories, can contain other storage and stream objects.  
  
-   **LockBytes** objects represent the interface between the storage objects and the physical hardware. They determine how the actual bytes are written to whatever storage device the **LockBytes** object is accessing, such as a hard drive or an area of global memory. For more information about **LockBytes** objects and the `ILockBytes` interface, see the *OLE Programmer's Reference*.  
  
##  <a name="_core_advantages_and_disadvantages_of_compound_files"></a> Advantages and Disadvantages of Compound Files  
 Compound files provide benefits not available with earlier methods of file storage. They include:  
  
-   Incremental file accessing.  
  
-   File access modes.  
  
-   Standardization of file structure.  
  
 The potential disadvantages of compound files — large size and performance issues relating to storage on floppy discs — should be considered when deciding whether to use them in your application.  
  
###  <a name="_core_incremental_access_to_files"></a> Incremental Access to Files  
 Incremental access to files is an automatic benefit of using compound files. Because a compound file can be viewed as a "file system within a file," individual object types, such as stream or storage, can be accessed without the need to load the entire file. This can dramatically decrease the time an application needs to access new objects for editing by the user. Incremental updating, based on the same concept, offers similar benefits. Instead of saving the entire file just to save the changes made to one object, OLE saves only the stream or storage object edited by the user.  
  
###  <a name="_core_file_access_modes"></a> File Access Modes  
 Being able to determine when changes to objects in a compound file are committed to disk is another benefit of using compound files. The mode in which files are accessed, either transacted or direct, determines when changes are committed.  
  
-   Transacted mode uses a two-phase commit operation to make changes to objects in a compound file, thereby keeping both the old and the new copies of the document available until the user chooses to either save or undo the changes.  
  
-   Direct mode incorporates changes to the document as they are made, without the ability to later undo them.  
  
 For more information about access modes, see the *OLE Programmer's Reference*.  
  
###  <a name="_core_standardization"></a> Standardization  
 The standardized structure of compound files allows different OLE applications to browse through compound files created by your OLE application with no knowledge of the application that actually created the file.  
  
###  <a name="_core_size_and_performance_considerations"></a> Size and Performance Considerations  
 Because of the complexity of the compound file storage structure and the ability to save data incrementally, files using this format tend to be larger than other files using unstructured or "flat file" storage. If your application frequently loads and saves files, using compound files can cause the file size to increase much more quickly than noncompound files. Because compound files can get large, the access time for files stored on and loaded from floppy disks can also be affected, resulting in slower access to files.  
  
 Another issue that affects performance is compound-file fragmentation. The size of a compound file is determined by the difference between the first and last disk sectors used by the file. A fragmented file can contain many areas of free space that do not contain data, but are counted when calculating the size. During the lifetime of a compound file, these areas are created by the insertion or deletion of storage objects.  
  
##  <a name="_core_using_compound_files_format_for_your_data"></a> Using Compound Files Format for Your Data  
 After successfully creating an application that has a document class derived from `COleDocument`, ensure that your main document constructor calls `EnableCompoundFile`. When the application wizard creates OLE container applications, this call is inserted for you.  
  
 In the *OLE Programmer's Reference*, see [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034), [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015), and [ILockBytes](http://msdn.microsoft.com/library/windows/desktop/aa379238).  
  
## See Also  
 [Containers](../mfc/containers.md)   
 [Containers: User-Interface Issues](../mfc/containers-user-interface-issues.md)   
 [COleStreamFile Class](../mfc/reference/colestreamfile-class.md)   
 [COleDocument Class](../mfc/reference/coledocument-class.md)
