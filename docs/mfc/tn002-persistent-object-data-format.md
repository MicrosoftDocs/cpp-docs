---
description: "Learn more about: TN002: Persistent Object Data Format"
title: "TN002: Persistent Object Data Format"
ms.date: "11/04/2016"
helpviewer_keywords: ["VERSIONABLE_SCHEMA macro [MFC]", "persistent object data", "CArchive class [MFC], support for persistent data", "persistent C++ objects [MFC]", "TN002"]
ms.assetid: 553fe01d-c587-4c8d-a181-3244a15c2be9
---
# TN002: Persistent Object Data Format

This note describes the MFC routines that support persistent C++ objects and the format of the object data when it is stored in a file. This applies only to classes with the [DECLARE_SERIAL](../mfc/reference/run-time-object-model-services.md#declare_serial) and [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) macros.

## The Problem

The MFC implementation for persistent data stores data for many objects in a single contiguous part of a file. The object's `Serialize` method translates the object's data into a compact binary format.

The implementation guarantees that all data is saved in the same format by using the [CArchive Class](../mfc/reference/carchive-class.md). It uses a `CArchive` object as a translator. This object persists from the time it is created until you call [CArchive::Close](../mfc/reference/carchive-class.md#close). This method can be called either explicitly by the programmer or implicitly by the destructor when the program exits the scope that contains the `CArchive`.

This note describes the implementation of the `CArchive` members [CArchive::ReadObject](../mfc/reference/carchive-class.md#readobject) and [CArchive::WriteObject](../mfc/reference/carchive-class.md#writeobject). You will find the code for these functions in Arcobj.cpp, and the main implementation for `CArchive` in Arccore.cpp. User code does not call `ReadObject` and `WriteObject` directly. Instead, these objects are used by class-specific type-safe insertion and extraction operators that are generated automatically by the DECLARE_SERIAL and IMPLEMENT_SERIAL macros. The following code shows how `WriteObject` and `ReadObject` are implicitly called:

```
class CMyObject : public CObject
{
    DECLARE_SERIAL(CMyObject)
};

IMPLEMENT_SERIAL(CMyObj, CObject, 1)

// example usage (ar is a CArchive&)
CMyObject* pObj;
CArchive& ar;
ar <<pObj;        // calls ar.WriteObject(pObj)
ar>> pObj;        // calls ar.ReadObject(RUNTIME_CLASS(CObj))
```

## Saving Objects to the Store (CArchive::WriteObject)

The method `CArchive::WriteObject` writes header data that is used to reconstruct the object. This data consists of two parts: the type of the object and the state of the object. This method is also responsible for maintaining the identity of the object being written out, so that only a single copy is saved, regardless of the number of pointers to that object (including circular pointers).

Saving (inserting) and restoring (extracting) objects relies on several "manifest constants." These are values that are stored in binary and provide important information to the archive (note the "w" prefix indicates 16-bit quantities):

|Tag|Description|
|---------|-----------------|
|wNullTag|Used for NULL object pointers (0).|
|wNewClassTag|Indicates class description that follows is new to this archive context (-1).|
|wOldClassTag|Indicates class of the object being read has been seen in this context (0x8000).|

When storing objects, the archive maintains a [CMapPtrToPtr](../mfc/reference/cmapptrtoptr-class.md) (the *m_pStoreMap*) which is a mapping from a stored object to a 32-bit persistent identifier (PID). A PID is assigned to every unique object and every unique class name that is saved in the context of the archive. These PIDs are handed out sequentially starting at 1. These PIDs have no significance outside the scope of the archive and, in particular, are not to be confused with record numbers or other identity items.

In the `CArchive` class, PIDs are 32-bit, but they are written out as 16-bit unless they are larger than 0x7FFE. Large PIDs are written as 0x7FFF followed by the 32-bit PID. This maintains compatibility with projects that were created in earlier versions.

When a request is made to save an object to an archive (usually by using the global insertion operator), a check is made for a NULL [CObject](../mfc/reference/cobject-class.md) pointer. If the pointer is NULL, the *wNullTag* is inserted into the archive stream.

If the pointer is not NULL and can be serialized (the class is a `DECLARE_SERIAL` class), the code checks the *m_pStoreMap* to see whether the object has been saved already. If it has, the code inserts the 32-bit PID associated with that object into the archive stream.

If the object has not been saved before, there are two possibilities to consider: either both the object and the exact type (that is, class) of the object are new to this archive context, or the object is of an exact type already seen. To determine whether the type has been seen, the code queries the *m_pStoreMap* for a [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) object that matches the `CRuntimeClass` object associated with the object being saved. If there is a match, `WriteObject` inserts a tag that is the bit-wise `OR` of *wOldClassTag* and this index. If the `CRuntimeClass` is new to this archive context, `WriteObject` assigns a new PID to that class and inserts it into the archive, preceded by the *wNewClassTag* value.

The descriptor for this class is then inserted into the archive using the `CRuntimeClass::Store` method. `CRuntimeClass::Store` inserts the schema number of the class (see below) and the ASCII text name of the class. Note that the use of the ASCII text name does not guarantee uniqueness of the archive across applications. Therefore, you should tag your data files to prevent corruption. Following the insertion of the class information, the archive puts the object into the *m_pStoreMap* and then calls the `Serialize` method to insert class-specific data. Placing the object into the *m_pStoreMap* before calling `Serialize` prevents multiple copies of the object from being saved to the store.

When returning to the initial caller (usually the root of the network of objects), you must call [CArchive::Close](../mfc/reference/carchive-class.md#close). If you plan to perform other [CFile](../mfc/reference/cfile-class.md)operations, you must call the `CArchive` method [Flush](../mfc/reference/carchive-class.md#flush) to prevent corruption of the archive.

> [!NOTE]
> This implementation imposes a hard limit of 0x3FFFFFFE indices per archive context. This number represents the maximum number of unique objects and classes that can be saved in a single archive, but a single disk file can have an unlimited number of archive contexts.

## Loading Objects from the Store (CArchive::ReadObject)

Loading (extracting) objects uses the `CArchive::ReadObject` method and is the converse of `WriteObject`. As with `WriteObject`, `ReadObject` is not called directly by user code; user code should call the type-safe extraction operator that calls `ReadObject` with the expected `CRuntimeClass`. This insures the type integrity of the extract operation.

Since the `WriteObject` implementation assigned increasing PIDs, starting with 1 (0 is predefined as the NULL object), the `ReadObject` implementation can use an array to maintain the state of the archive context. When a PID is read from the store, if the PID is larger than the current upper bound of the *m_pLoadArray*, `ReadObject` knows that a new object (or class description) follows.

## Schema Numbers

The schema number, which is assigned to the class when the `IMPLEMENT_SERIAL` method of the class is encountered, is the "version" of the class implementation. The schema refers to the implementation of the class, not to the number of times a given object has been made persistent (usually referred to as the object version).

If you intend to maintain several different implementations of the same class over time, incrementing the schema as you revise your object's `Serialize` method implementation will enable you to write code that can load objects stored by using older versions of the implementation.

The `CArchive::ReadObject` method will throw a [CArchiveException](../mfc/reference/carchiveexception-class.md) when it encounters a schema number in the persistent store that differs from the schema number of the class description in memory. It is not easy to recover from this exception.

You can use `VERSIONABLE_SCHEMA` combined with (bitwise **OR**) your schema version to keep this exception from being thrown. By using `VERSIONABLE_SCHEMA`, your code can take the appropriate action in its `Serialize` function by checking the return value from [CArchive::GetObjectSchema](../mfc/reference/carchive-class.md#getobjectschema).

## Calling Serialize Directly

In many cases the overhead of the general object archive scheme of `WriteObject` and `ReadObject` is not necessary. This is the common case of serializing the data into a [CDocument](../mfc/reference/cdocument-class.md). In this case, the `Serialize` method of the `CDocument` is called directly, not with the extract or insert operators. The contents of the document may in turn use the more general object archive scheme.

Calling `Serialize` directly has the following advantages and disadvantages:

- No extra bytes are added to the archive before or after the object is serialized. This not only makes the saved data smaller, but allows you to implement `Serialize` routines that can handle any file formats.

- The MFC is tuned so the `WriteObject` and `ReadObject` implementations and related collections will not be linked into your application unless you need the more general object archive scheme for some other purpose.

- Your code does not have to recover from old schema numbers. This makes your document serialization code responsible for encoding schema numbers, file format version numbers, or whatever identifying numbers you use at the start of your data files.

- Any object that is serialized with a direct call to `Serialize` must not use `CArchive::GetObjectSchema` or must handle a return value of (UINT)-1 indicating that the version was unknown.

Because `Serialize` is called directly on your document, it is not usually possible for the sub-objects of the document to archive references to their parent document. These objects must be given a pointer to their container document explicitly or you must use [CArchive::MapObject](../mfc/reference/carchive-class.md#mapobject) function to map the `CDocument` pointer to a PID before these back pointers are archived.

As noted earlier, you should encode the version and class information yourself when you call `Serialize` directly, enabling you to change the format later while still maintaining backward compatibility with older files. The `CArchive::SerializeClass` function can be called explicitly before directly serializing an object or before calling a base class.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
