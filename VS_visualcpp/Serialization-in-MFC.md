---
title: "Serialization in MFC"
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
ms.assetid: fb596a18-4522-47e0-96e0-192732d24c12
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
# Serialization in MFC
This article explains the serialization mechanism provided in the Microsoft Foundation Class Library (MFC) to allow objects to persist between runs of your program.  
  
 Serialization is the process of writing or reading an object to or from a persistent storage medium such as a disk file. Serialization is ideal for situations where it is desired to maintain the state of structured data (such as C++ classes or structures) during or after execution of a program. Using the serialization objects provided by MFC allows this to occur in a standard and consistent manner, relieving the user from the need to perform file operations by hand.  
  
 MFC supplies built-in support for serialization in the class `CObject`. Thus, all classes derived from `CObject` can take advantage of `CObject`'s serialization protocol.  
  
 The basic idea of serialization is that an object should be able to write its current state, usually indicated by the value of its member variables, to persistent storage. Later, the object can be re-created by reading, or deserializing, the object's state from the storage. Serialization handles all the details of object pointers and circular references to objects that are used when you serialize an object. A key point is that the object itself is responsible for reading and writing its own state. Thus, for a class to be serializable, it must implement the basic serialization operations. As shown in the Serialization group of articles, it is easy to add this functionality to a class.  
  
 MFC uses an object of the `CArchive` class as an intermediary between the object to be serialized and the storage medium. This object is always associated with a `CFile` object, from which it obtains the necessary information for serialization, including the file name and whether the requested operation is a read or write. The object that performs a serialization operation can use the `CArchive` object without regard to the nature of the storage medium.  
  
 A `CArchive` object uses overloaded insertion (**<<**) and extraction (**>>**) operators to perform writing and reading operations. For more information, see [Storing and Loading CObjects via an Archive](../VS_visualcpp/Storing-and-Loading-CObjects-via-an-Archive.md) in the article Serialization: Serializing an Object.  
  
> [!NOTE]
>  Do not confuse the `CArchive` class with general-purpose iostream classes, which are for formatted text only. The `CArchive` class is for binary-format serialized objects.  
  
 If you want, you can bypass MFC serialization to create your own mechanism for persistent data storage. You will need to override the class member functions that initiate serialization at the user's command. See the discussion in [Technical Note 22](../VS_visualcpp/TN022--Standard-Commands-Implementation.md) of the `ID_FILE_OPEN`, **ID_FILE_SAVE**, and **ID_FILE_SAVE_AS** standard commands.  
  
 The following articles cover the two main tasks required for serialization:  
  
-   [Serialization: Making a Serializable Class](../VS_visualcpp/Serialization--Making-a-Serializable-Class.md)  
  
-   [Serialization: Serializing an Object](../VS_visualcpp/Serialization--Serializing-an-Object.md)  
  
 The article [Serialization: Serialization vs. Database Input/Output](../VS_visualcpp/Serialization--Serialization-vs.-Database-Input-Output.md) describes when serialization is an appropriate input/output technique in database applications.  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)   
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)   
 [CArchive Class](../VS_visualcpp/CArchive-Class.md)   
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [CDocument Class](../VS_visualcpp/CDocument-Class.md)   
 [CFile Class](../VS_visualcpp/CFile-Class.md)