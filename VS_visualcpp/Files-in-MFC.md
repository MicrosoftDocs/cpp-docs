---
title: "Files in MFC"
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
ms.assetid: ae25e2c5-2859-4679-ab97-438824e93ce1
caps.latest.revision: 9
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
# Files in MFC
In the Microsoft Foundation Class Library (MFC), class [CFile](../VS_visualcpp/CFile-Class.md) handles normal file I/O operations. This family of articles explains how to open and close files as well as read and write data to those files. It also discusses file status operations. For a description of how to use the object-based serialization features of MFC as an alternative way of reading and writing data in files, see the article [Serialization](../VS_visualcpp/Serialization-in-MFC.md).  
  
> [!NOTE]
>  When you use MFC **CDocument** objects, the framework does much of the serialization work for you. In particular, the framework creates and uses the `CFile` object. You only have to write code in your override of the `Serialize` member function of class **CDocument**.  
  
 The `CFile` class provides an interface for general-purpose binary file operations. The `CStdioFile` and `CMemFile` classes derived from `CFile` and the `CSharedFile` class derived from `CMemFile` supply more specialized file services.  
  
 For more information about alternatives to MFC file handling, see [File Handling](../VS_visualcpp/File-Handling.md) in the *Run-Time Library Reference*.  
  
 For information about derived `CFile` classes, see the [MFC hierarchy chart](../VS_visualcpp/Hierarchy-Chart.md).  
  
## What do you want to do?  
 *Use CFile*  
  
-   [Open a file with CFile](../VS_visualcpp/Opening-Files.md)  
  
-   [Read and write a file with CFile](../VS_visualcpp/Reading-and-Writing-Files.md)  
  
-   [Close a file with CFile](../VS_visualcpp/Closing-Files.md)  
  
-   [Access file status with CFile](../VS_visualcpp/Accessing-File-Status.md)  
  
 *Use MFC Serialization (Object Persistence)*  
  
-   [Create a serializable class](../VS_visualcpp/Serialization--Making-a-Serializable-Class.md)  
  
-   [Serialize an object via a CArchive object](../VS_visualcpp/Serialization--Serializing-an-Object.md)  
  
-   [Create a CArchive object](../VS_visualcpp/Two-Ways-to-Create-a-CArchive-Object.md)  
  
-   [Use CArchive << and >> operators](../VS_visualcpp/Using-the-CArchive----and----Operators.md)  
  
-   [Store and load CObjects and CObject-derived objects via an archive](../VS_visualcpp/Storing-and-Loading-CObjects-via-an-Archive.md)  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)   
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)   
 [CArchive Class](../VS_visualcpp/CArchive-Class.md)   
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [How Do I: Use the CFile Class?](http://go.microsoft.com/fwlink/?LinkId=128046)