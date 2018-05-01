---
title: "Bypassing the Serialization Mechanism | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "archive objects [C++]"
  - "bypassing serialization"
  - "archives [C++], serialization"
  - "serialization [C++], bypassing"
  - "archives [C++]"
  - "serialization [C++], role of framework"
  - "serialization [C++], overriding"
ms.assetid: 48d4a279-b51c-4ba5-81cd-ed043312b582
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Bypassing the Serialization Mechanism
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Bypassing the Serialization Mechanism](https://docs.microsoft.com/cpp/mfc/bypassing-the-serialization-mechanism).  
  
  
As you have seen, the framework provides a default way to read and write data to and from files. Serializing through an archive object suits the needs of a great many applications. Such an application reads a file entirely into memory, lets the user update the file, and then writes the updated version to disk again.  
  
 However, some applications operate on data very differently, and for these applications serialization through an archive is not suitable. Examples include database programs, programs that edit only parts of large files, programs that write text-only files, and programs that share data files.  
  
 In these cases, you can override the [Serialize](../mfc/reference/cobject-class.md#serialize) function in a different way to mediate file actions through a [CFile](../mfc/reference/cfile-class.md) object rather than a [CArchive](../mfc/reference/carchive-class.md) object.  
  
 You can use the **Open**, **Read**, **Write**, **Close**, and `Seek` member functions of class `CFile` to open a file, move the file pointer (seek) to a specific point in the file, read a record (a specified number of bytes) at that point, let the user update the record, then seek to the same point again and write the record back to the file. The framework will open the file for you, and you can use the `GetFile` member function of class `CArchive` to obtain a pointer to the `CFile` object. For even more sophisticated and flexible use, you can override the [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) and [OnSaveDocument](../mfc/reference/cdocument-class.md#onsavedocument) member functions of class `CWinApp`. For more information, see class [CFile](../mfc/reference/cfile-class.md) in the *MFC Reference*.  
  
 In this scenario, your `Serialize` override does nothing, unless, for example, you want to have it read and write a file header to keep it up to date when the document closes.  
  
## See Also  
 [Using Documents](../mfc/using-documents.md)





