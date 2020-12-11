---
description: "Learn more about: Serializing Data to and from Files"
title: "Serializing Data to and from Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["documents [MFC], serialization", "documents [MFC], saving", "saving documents", "deserialization [MFC]", "serialization [MFC], role of document", "serialization [MFC], role of data", "data [MFC]", "data [MFC], serializing", "document data [MFC]"]
ms.assetid: b42a0c68-4bc4-4012-9938-5433a26d2c24
---
# Serializing Data to and from Files

The basic idea of persistence is that an object should be able to write its current state, indicated by the values of its member variables, to persistent storage. Later, the object can be re-created by reading, or "deserializing," the object's state from persistent storage. A key point here is that the object itself is responsible for reading and writing its own state. Thus, for a class to be persistent, it must implement the basic serialization operations.

The framework provides a default implementation for saving documents to disk files in response to the Save and Save As commands on the File menu and for loading documents from disk files in response to the Open command. With very little work, you can implement a document's ability to write and read its data to and from a file. The main thing you must do is override the [Serialize](../mfc/reference/cobject-class.md#serialize) member function in your document class.

The MFC Application Wizard places a skeletal override of the `CDocument` member function `Serialize` in the document class it creates for you. After you have implemented your application's member variables, you can fill in your `Serialize` override with code that sends the data to an "archive object" connected to a file. A [CArchive](../mfc/reference/carchive-class.md) object is similar to the **cin** and **cout** input/output objects from the C++ iostream library. However, `CArchive` writes and reads binary format, not formatted text.

## What do you want to know more about

- [Serialization](../mfc/serialization-in-mfc.md)

- [The document's role in serialization](#_core_the_document.92.s_role_in_serialization)

- [The data's role in serialization](#_core_the_data.92.s_role_in_serialization)

- [Bypassing the serialization mechanism](../mfc/bypassing-the-serialization-mechanism.md)

## <a name="_core_the_document.92.s_role_in_serialization"></a> The Document's Role in Serialization

The framework responds automatically to the File menu's Open, Save, and Save As commands by calling the document's `Serialize` member function if it is implemented. An ID_FILE_OPEN command, for example, calls a handler function in the application object. During this process, the user sees and responds to the File Open dialog box and the framework obtains the filename the user chooses. The framework creates a `CArchive` object set up for loading data into the document and passes the archive to `Serialize`. The framework has already opened the file. The code in your document's `Serialize` member function reads the data in through the archive, reconstructing data objects as needed. For more information about serialization, see the article [Serialization](../mfc/serialization-in-mfc.md).

## <a name="_core_the_data.92.s_role_in_serialization"></a> The Data's Role in Serialization

In general, class-type data should be able to serialize itself. That is, when you pass an object to an archive, the object should know how to write itself to the archive and how to read itself from the archive. MFC provides support for making classes serializable in this way. If you design a class to define a data type and you intend to serialize data of that type, design for serialization.

## See also

[Using Documents](../mfc/using-documents.md)
