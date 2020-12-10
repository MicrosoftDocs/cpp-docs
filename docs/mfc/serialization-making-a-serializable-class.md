---
description: "Learn more about: Serialization: Making a Serializable Class"
title: "Serialization: Making a Serializable Class"
ms.date: "11/04/2016"
helpviewer_keywords: ["serializable class [MFC]", "DECLARE_SERIAL macro [MFC]", "default constructor [MFC]", "VERSIONABLE_SCHEMA macro [MFC]", "classes [MFC], derived", "IMPLEMENT_SERIAL macro [MFC]", "no-arguments constructor [MFC]", "Serialize method, overriding", "defaults [MFC], constructor", "CObject class [MFC], deriving serializable classes", "constructors [MFC], defining with no arguments", "serialization [MFC], serializable classes", "no default constructor"]
ms.assetid: 59a14d32-1cc8-4275-9829-99639beee27c
---
# Serialization: Making a Serializable Class

Five main steps are required to make a class serializable. They are listed below and explained in the following sections:

1. [Deriving your class from CObject](#_core_deriving_your_class_from_cobject) (or from some class derived from `CObject`).

1. [Overriding the Serialize member function](#_core_overriding_the_serialize_member_function).

1. [Using the DECLARE_SERIAL macro](#_core_using_the_declare_serial_macro) in the class declaration.

1. [Defining a constructor that takes no arguments](#_core_defining_a_constructor_with_no_arguments).

1. [Using the IMPLEMENT_SERIAL macro in the implementation file](#_core_using_the_implement_serial_macro_in_the_implementation_file) for your class.

If you call `Serialize` directly rather than through the >> and << operators of [CArchive](../mfc/reference/carchive-class.md), the last three steps are not required for serialization.

## <a name="_core_deriving_your_class_from_cobject"></a> Deriving Your Class from CObject

The basic serialization protocol and functionality are defined in the `CObject` class. By deriving your class from `CObject` (or from a class derived from `CObject`), as shown in the following declaration of class `CPerson`, you gain access to the serialization protocol and functionality of `CObject`.

## <a name="_core_overriding_the_serialize_member_function"></a> Overriding the Serialize Member Function

The `Serialize` member function, which is defined in the `CObject` class, is responsible for actually serializing the data necessary to capture an object's current state. The `Serialize` function has a `CArchive` argument that it uses to read and write the object data. The [CArchive](../mfc/reference/carchive-class.md) object has a member function, `IsStoring`, which indicates whether `Serialize` is storing (writing data) or loading (reading data). Using the results of `IsStoring` as a guide, you either insert your object's data in the `CArchive` object with the insertion operator (**<\<**) or extract data with the extraction operator (**>>**).

Consider a class that is derived from `CObject` and has two new member variables, of types `CString` and **WORD**. The following class declaration fragment shows the new member variables and the declaration for the overridden `Serialize` member function:

[!code-cpp[NVC_MFCSerialization#1](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_1.h)]

#### To override the Serialize member function

1. Call your base class version of `Serialize` to make sure that the inherited portion of the object is serialized.

1. Insert or extract the member variables specific to your class.

   The insertion and extraction operators interact with the archive class to read and write the data. The following example shows how to implement `Serialize` for the `CPerson` class declared above:

   [!code-cpp[NVC_MFCSerialization#2](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_2.cpp)]

You can also use the [CArchive::Read](../mfc/reference/carchive-class.md#read) and [CArchive::Write](../mfc/reference/carchive-class.md#write) member functions to read and write large amounts of untyped data.

## <a name="_core_using_the_declare_serial_macro"></a> Using the DECLARE_SERIAL Macro

The DECLARE_SERIAL macro is required in the declaration of classes that will support serialization, as shown here:

[!code-cpp[NVC_MFCSerialization#3](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_3.h)]

## <a name="_core_defining_a_constructor_with_no_arguments"></a> Defining a Constructor with No Arguments

MFC requires a default constructor when it re-creates your objects as they are deserialized (loaded from disk). The deserialization process will fill in all member variables with the values required to re-create the object.

This constructor can be declared public, protected, or private. If you make it protected or private, you help make sure that it will only be used by the serialization functions. The constructor must put the object in a state that allows it to be deleted if necessary.

> [!NOTE]
> If you forget to define a constructor with no arguments in a class that uses the DECLARE_SERIAL and IMPLEMENT_SERIAL macros, you will get a "no default constructor available" compiler warning on the line where the IMPLEMENT_SERIAL macro is used.

## <a name="_core_using_the_implement_serial_macro_in_the_implementation_file"></a> Using the IMPLEMENT_SERIAL Macro in the Implementation File

The IMPLEMENT_SERIAL macro is used to define the various functions needed when you derive a serializable class from `CObject`. You use this macro in the implementation file (.CPP) for your class. The first two arguments to the macro are the name of the class and the name of its immediate base class.

The third argument to this macro is a schema number. The schema number is essentially a version number for objects of the class. Use an integer greater than or equal to 0 for the schema number. (Don't confuse this schema number with database terminology.)

The MFC serialization code checks the schema number when reading objects into memory. If the schema number of the object on disk does not match the schema number of the class in memory, the library will throw a `CArchiveException`, preventing your program from reading an incorrect version of the object.

If you want your `Serialize` member function to be able to read multiple versions — that is, files written with different versions of the application — you can use the value *VERSIONABLE_SCHEMA* as an argument to the IMPLEMENT_SERIAL macro. For usage information and an example, see the `GetObjectSchema` member function of class `CArchive`.

The following example shows how to use IMPLEMENT_SERIAL for a class, `CPerson`, that is derived from `CObject`:

[!code-cpp[NVC_MFCSerialization#4](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_4.cpp)]

Once you have a serializable class, you can serialize objects of the class, as discussed in the article [Serialization: Serializing an Object](../mfc/serialization-serializing-an-object.md).

## See also

[Serialization](../mfc/serialization-in-mfc.md)
