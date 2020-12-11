---
description: "Learn more about: Implementing a C++ Standard Library-Based Collection"
title: "Implementing a C++ Standard Library-Based Collection"
ms.date: "11/04/2016"
helpviewer_keywords: ["ICollectionOnSTLImpl interface"]
ms.assetid: 6d49f819-1957-4813-b074-3f12c494d8ca
---
# Implementing a C++ Standard Library-Based Collection

ATL provides the `ICollectionOnSTLImpl` interface to enable you to quickly implement C++ Standard Library-based collection interfaces on your objects. To understand how this class works, you will work through a simple example (below) that uses this class to implement a read-only collection aimed at Automation clients.

The sample code is from the [ATLCollections sample](../overview/visual-cpp-samples.md).

To complete this procedure, you will:

- [Generate a new Simple Object](#vccongenerating_an_object).

- [Edit the IDL file](#vcconedit_the_idl) for the generated interface.

- [Create five typedefs](#vcconstorage_and_exposure_typedefs) describing how the collection items are stored and how they will be exposed to clients via COM interfaces.

- [Create two typedefs for copy policy classes](#vcconcopy_classes).

- [Create typedefs for the enumerator and collection implementations](#vcconenumeration_and_collection).

- [Edit the wizard-generated C++ code to use the collection typedef](#vcconedit_the_generated_code).

- [Add code to populate the collection](#vcconpopulate_the_collection).

## <a name="vccongenerating_an_object"></a> Generating a New Simple Object

Create a new project, ensuring that the Attributes box under Application Settings is cleared. Use the ATL Add Class dialog box and Add Simple Object Wizard to generate a Simple Object called `Words`. Make sure that a dual interface called `IWords` is generated. Objects of the generated class will be used to represent a collection of words (that is, strings).

## <a name="vcconedit_the_idl"></a> Editing the IDL File

Now, open the IDL file and add the three properties necessary to turn `IWords` into a read-only collection interface, as shown below:

[!code-cpp[NVC_ATL_COM#24](../atl/codesnippet/cpp/implementing-an-stl-based-collection_1.idl)]

This is the standard form for a read-only collection interface designed with Automation clients in mind. The numbered comments in this interface definition correspond to the comments below:

1. Collection interfaces are usually dual because Automation clients accesses the `_NewEnum` property via `IDispatch::Invoke`. However, Automation clients can access the remaining methods via the vtable, so dual interfaces are preferable to dispinterfaces.

1. If a dual interface or dispinterface will not be extended at run time (that is, you won't provide extra methods or properties via `IDispatch::Invoke`), you should apply the **nonextensible** attribute to your definition. This attribute enables Automation clients to perform full code verification at compile time. In this case, the interface should not be extended.

1. The correct DISPID is important if you want Automation clients to be able to use this property. (Note that there is only one underscore in DISPID_NEWENUM.)

1. You can supply any value as the DISPID of the `Item` property. However, `Item` typically uses DISPID_VALUE to make it the default property of the collection. This allows Automation clients to refer to the property without naming it explicitly.

1. The data type used for the return value of the `Item` property is the type of the item stored in the collection as far as COM clients are concerned. The interface returns strings, so you should use the standard COM string type, BSTR. You can store the data in a different format internally as you'll see shortly.

1. The value used for the DISPID of the `Count` property is completely arbitrary. There's no standard DISPID for this property.

## <a name="vcconstorage_and_exposure_typedefs"></a> Creating Typedefs for Storage and Exposure

Once the collection interface is defined, you need to decide how the data will be stored, and how the data will be exposed via the enumerator.

The answers to these questions can be provided in the form of a number of typedefs, which you can add near the top of the header file for your newly created class:

[!code-cpp[NVC_ATL_COM#25](../atl/codesnippet/cpp/implementing-an-stl-based-collection_2.h)]

In this case, you will store the data as a **std::vector** of **std::string**s. **std::vector** is a C++ Standard Library container class that behaves like a managed array. **std::string** is the C++ Standard Library's string class. These classes make it easy to work with a collection of strings.

Since Visual Basic support is vital to the success of this interface, the enumerator returned by the `_NewEnum` property must support the `IEnumVARIANT` interface. This is the only enumerator interface understood by Visual Basic.

## <a name="vcconcopy_classes"></a> Creating Typedefs for Copy Policy Classes

The typedefs you have created so far provide all the information you need to create further typedefs for the copy classes that will be used by the enumerator and collection:

[!code-cpp[NVC_ATL_COM#26](../atl/codesnippet/cpp/implementing-an-stl-based-collection_3.h)]

In this example, you can use the custom `GenericCopy` class defined in VCUE_Copy.h and VCUE_CopyString.h from the [ATLCollections](../overview/visual-cpp-samples.md) sample. You can use this class in other code, but you may need to define further specializations of `GenericCopy` to support data types used in your own collections. For more information, see [ATL Copy Policy Classes](../atl/atl-copy-policy-classes.md).

## <a name="vcconenumeration_and_collection"></a> Creating Typedefs for Enumeration and Collection

Now all the template parameters necessary to specialize the `CComEnumOnSTL` and `ICollectionOnSTLImpl` classes for this situation have been provided in the form of typedefs. To simplify the use of the specializations, create two more typedefs as shown below:

[!code-cpp[NVC_ATL_COM#27](../atl/codesnippet/cpp/implementing-an-stl-based-collection_4.h)]

Now `CollectionType` is a synonym for a specialization of `ICollectionOnSTLImpl` that implements the `IWords` interface defined earlier and provides an enumerator that supports `IEnumVARIANT`.

## <a name="vcconedit_the_generated_code"></a> Editing the Wizard-Generated Code

Now you must derive `CWords` from the interface implementation represented by the `CollectionType` typedef rather than `IWords`, as shown below:

[!code-cpp[NVC_ATL_COM#28](../atl/codesnippet/cpp/implementing-an-stl-based-collection_5.h)]

## <a name="vcconpopulate_the_collection"></a> Adding Code to Populate the Collection

The only thing that remains is to populate the vector with data. In this simple example, you can add a few words to the collection in the constructor for the class:

[!code-cpp[NVC_ATL_COM#29](../atl/codesnippet/cpp/implementing-an-stl-based-collection_6.h)]

Now, you can test the code with the client of your choice.

## See also

[Collections and Enumerators](../atl/atl-collections-and-enumerators.md)<br/>
[ATLCollections Sample](../overview/visual-cpp-samples.md)<br/>
[ATL Copy Policy Classes](../atl/atl-copy-policy-classes.md)
