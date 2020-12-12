---
description: "Learn more about: What Is a CArchive Object"
title: "What Is a CArchive Object"
ms.date: "11/04/2016"
helpviewer_keywords: ["archive objects [MFC]", "archives [MFC], for serialization", "buffers, serializable objects", "CArchive class [MFC], about CArchive class [MFC]", "buffering, serializable objects"]
ms.assetid: 843f1825-288d-4d89-a1fa-70e1f92d9b8b
---
# What Is a CArchive Object

A `CArchive` object provides a type-safe buffering mechanism for writing or reading serializable objects to or from a `CFile` object. Usually the `CFile` object represents a disk file; however, it can also be a memory file (`CSharedFile` object), perhaps representing the Clipboard.

A given `CArchive` object either stores (writes, serializes) data or loads (reads, deserializes) data, but never both. The life of a `CArchive` object is limited to one pass through writing objects to a file or reading objects from a file. Thus, two successively created `CArchive` objects are required to serialize data to a file and then deserialize it back from the file.

When an archive stores objects to a file, the archive attaches the `CRuntimeClass` name to the objects. Then, when another archive loads objects from a file to memory, the `CObject`-derived objects are dynamically reconstructed based on the `CRuntimeClass` of the objects. A given object may be referenced more than once as it is written to the file by the storing archive. The loading archive, however, will reconstruct the object only once. The details about how an archive attaches `CRuntimeClass` information to objects and reconstructs objects, taking into account possible multiple references, are described in [Technical Note 2](../mfc/tn002-persistent-object-data-format.md).

As data is serialized to an archive, the archive accumulates the data until its buffer is full. Then the archive writes its buffer to the `CFile` object pointed to by the `CArchive` object. Similarly, as you read data from an archive, it reads data from the file to its buffer and then from the buffer to your deserialized object. This buffering reduces the number of times a hard disk is physically read, thus improving your application's performance.

## See also

[Serialization: Serializing an Object](../mfc/serialization-serializing-an-object.md)
