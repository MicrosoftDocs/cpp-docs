---
description: "Learn more about: Serialization in MFC"
title: "Serialization in MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["collection classes [MFC], serialization", "bypassing serialization [MFC]", "MFC, serialization", "serialization [MFC], MFC", "serialization [MFC], bypassing"]
ms.assetid: fb596a18-4522-47e0-96e0-192732d24c12
---
# Serialization in MFC

This article explains the serialization mechanism provided in the Microsoft Foundation Class Library (MFC) to allow objects to persist between runs of your program.

Serialization is the process of writing or reading an object to or from a persistent storage medium such as a disk file. Serialization is ideal for situations where it is desired to maintain the state of structured data (such as C++ classes or structures) during or after execution of a program. Using the serialization objects provided by MFC allows this to occur in a standard and consistent manner, relieving the user from the need to perform file operations by hand.

MFC supplies built-in support for serialization in the class `CObject`. Thus, all classes derived from `CObject` can take advantage of `CObject`'s serialization protocol.

The basic idea of serialization is that an object should be able to write its current state, usually indicated by the value of its member variables, to persistent storage. Later, the object can be re-created by reading, or deserializing, the object's state from the storage. Serialization handles all the details of object pointers and circular references to objects that are used when you serialize an object. A key point is that the object itself is responsible for reading and writing its own state. Thus, for a class to be serializable, it must implement the basic serialization operations. As shown in the Serialization group of articles, it is easy to add this functionality to a class.

MFC uses an object of the `CArchive` class as an intermediary between the object to be serialized and the storage medium. This object is always associated with a `CFile` object, from which it obtains the necessary information for serialization, including the file name and whether the requested operation is a read or write. The object that performs a serialization operation can use the `CArchive` object without regard to the nature of the storage medium.

A `CArchive` object uses overloaded insertion (**<\<**) and extraction (**>>**) operators to perform writing and reading operations. For more information, see [Storing and Loading CObjects via an Archive](../mfc/storing-and-loading-cobjects-via-an-archive.md) in the article Serialization: Serializing an Object.

> [!NOTE]
> Do not confuse the `CArchive` class with general-purpose iostream classes, which are for formatted text only. The `CArchive` class is for binary-format serialized objects.

If you want, you can bypass MFC serialization to create your own mechanism for persistent data storage. You will need to override the class member functions that initiate serialization at the user's command. See the discussion in [Technical Note 22](../mfc/tn022-standard-commands-implementation.md) of the ID_FILE_OPEN, ID_FILE_SAVE, and ID_FILE_SAVE_AS standard commands.

The following articles cover the two main tasks required for serialization:

- [Serialization: Making a Serializable Class](../mfc/serialization-making-a-serializable-class.md)

- [Serialization: Serializing an Object](../mfc/serialization-serializing-an-object.md)

The article [Serialization: Serialization vs. Database Input/Output](../mfc/serialization-serialization-vs-database-input-output.md) describes when serialization is an appropriate input/output technique in database applications.

## See also

[Concepts](../mfc/mfc-concepts.md)<br/>
[General MFC Topics](../mfc/general-mfc-topics.md)<br/>
[CArchive Class](../mfc/reference/carchive-class.md)<br/>
[CObject Class](../mfc/reference/cobject-class.md)<br/>
[CDocument Class](../mfc/reference/cdocument-class.md)<br/>
[CFile Class](../mfc/reference/cfile-class.md)
