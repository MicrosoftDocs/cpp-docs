---
title: "Two Ways to Create a CArchive Object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CArchive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchive class, closing CArchive objects"
  - "CArchive objects, closing"
  - "I/O [MFC], creating CArchive objects"
  - "serialization [C++], CArchive class"
  - "CArchive objects"
  - "storage [C++], CArchive class"
  - "data storage [C++], CArchive class"
  - "CArchive class, constructor"
ms.assetid: aefa28ce-b55c-40dc-9e42-5f038030985d
caps.latest.revision: 10
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
# Two Ways to Create a CArchive Object
There are two ways to create a `CArchive` object:  
  
-   [Implicit creation of a CArchive object via the framework](#_core_implicit_creation_of_a_carchive_object_via_the_framework)  
  
-   [Explicit creation of a CArchive object](#_core_explicit_creation_of_a_carchive_object)  
  
##  <a name="_core_implicit_creation_of_a_carchive_object_via_the_framework"></a> Implicit Creation of a CArchive Object via the Framework  
 The most common, and easiest, way is to let the framework create a `CArchive` object for your document on behalf of the Save, Save As, and Open commands on the File menu.  
  
 Here is what the framework does when the user of your application issues the Save As command from the File menu:  
  
1.  Presents the **Save As** dialog box and gets the filename from the user.  
  
2.  Opens the file named by the user as a `CFile` object.  
  
3.  Creates a `CArchive` object that points to this `CFile` object. In creating the `CArchive` object, the framework sets the mode to "store" (write, serialize), as opposed to "load" (read, deserialize).  
  
4.  Calls the `Serialize` function defined in your **CDocument**-derived class, passing it a reference to the `CArchive` object.  
  
 Your document's `Serialize` function then writes data to the `CArchive` object, as explained shortly. Upon return from your `Serialize` function, the framework destroys the `CArchive` object and then the `CFile` object.  
  
 Thus, if you let the framework create the `CArchive` object for your document, all you have to do is implement the document's `Serialize` function that writes and reads to and from the archive. You also have to implement `Serialize` for any `CObject`-derived objects that the document's `Serialize` function in turn serializes directly or indirectly.  
  
##  <a name="_core_explicit_creation_of_a_carchive_object"></a> Explicit Creation of a CArchive Object  
 Besides serializing a document via the framework, there are other occasions when you may need a `CArchive` object. For example, you might want to serialize data to and from the Clipboard, represented by a `CSharedFile` object. Or, you may want to use a user interface for saving a file that is different from the one offered by the framework. In this case, you can explicitly create a `CArchive` object. You do this the same way the framework does, using the following procedure.  
  
#### To explicitly create a CArchive object  
  
1.  Construct a `CFile` object or an object derived from `CFile`.  
  
2.  Pass the `CFile` object to the constructor for `CArchive`, as shown in the following example:  
  
     [!code-cpp[NVC_MFCSerialization#5](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_1.cpp)]  
  
     The second argument to the `CArchive` constructor is an enumerated value that specifies whether the archive will be used for storing or loading data to or from the file. The `Serialize` function of an object checks this state by calling the `IsStoring` function for the archive object.  
  
 When you are finished storing or loading data to or from the `CArchive` object, close it. Although the `CArchive` (and `CFile`) objects will automatically close the archive (and file), it is good practice to explicitly do so since it makes recovery from errors easier. For more information about error handling, see the article [Exceptions: Catching and Deleting Exceptions](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
#### To close the CArchive object  
  
1.  The following example illustrates how to close the `CArchive` object:  
  
     [!code-cpp[NVC_MFCSerialization#6](../mfc/codesnippet/cpp/two-ways-to-create-a-carchive-object_2.cpp)]  
  
## See Also  
 [Serialization: Serializing an Object](../mfc/serialization-serializing-an-object.md)

