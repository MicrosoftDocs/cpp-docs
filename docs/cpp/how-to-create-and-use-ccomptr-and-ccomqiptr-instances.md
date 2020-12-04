---
description: "Learn more about: How to: Create and use CComPtr and CComQIPtr instances"
title: "How to: Create and use CComPtr and CComQIPtr instances"
ms.custom: "how-to"
ms.date: "11/19/2019"
ms.topic: "conceptual"
ms.assetid: b0356cfb-12cc-4ee8-b988-8311ed1ab5e0
---
# How to: Create and use CComPtr and CComQIPtr instances

In classic Windows programming, libraries are often implemented as COM objects (or more precisely, as COM servers). Many Windows operating system components are implemented as COM servers, and many contributors provide libraries in this form. For information about the basics of COM, see [Component Object Model (COM)](/windows/win32/com/component-object-model--com--portal).

When you instantiate a Component Object Model (COM) object, store the interface pointer in a COM smart pointer, which performs the reference counting by using calls to `AddRef` and `Release` in the destructor. If you are using the Active Template Library (ATL) or the Microsoft Foundation Class Library (MFC), then use the `CComPtr` smart pointer. If you are not using ATL or MFC, then use `_com_ptr_t`. Because there is no COM equivalent to `std::unique_ptr`, use these smart pointers for both single-owner and multiple-owner scenarios. Both `CComPtr` and `ComQIPtr` support move operations that have rvalue references.

## Example: CComPtr

The following example shows how to use `CComPtr` to instantiate a COM object and obtain pointers to its interfaces. Notice that the `CComPtr::CoCreateInstance` member function is used to create the COM object, instead of the Win32 function that has the same name.

[!code-cpp[COM_smart_pointers#01](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_1.cpp)]

`CComPtr` and its relatives are part of the ATL and are defined in \<atlcomcli.h>. `_com_ptr_t` is declared in \<comip.h>. The compiler creates specializations of `_com_ptr_t` when it generates wrapper classes for type libraries.

## Example: CComQIPt

ATL also provides `CComQIPtr`, which has a simpler syntax for querying a COM object to retrieve an additional interface. However, we recommend `CComPtr` because it does everything that `CComQIPtr` can do and is semantically more consistent with raw COM interface pointers. If you use a `CComPtr` to query for an interface, the new interface pointer is placed in an out parameter. If the call fails, an HRESULT is returned, which is the typical COM pattern. With `CComQIPtr`, the return value is the pointer itself, and if the call fails, the internal HRESULT return value cannot be accessed. The following two lines show how the error handling mechanisms in `CComPtr` and `CComQIPtr` differ.

[!code-cpp[COM_smart_pointers#02](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_2.cpp)]

## Example: IDispatch

`CComPtr` provides a specialization for IDispatch that enables it to store pointers to COM automation components and invoke the methods on the interface by using late binding. `CComDispatchDriver` is a typedef for `CComQIPtr<IDispatch, &IIDIDispatch>`, which is implicitly convertible to `CComPtr<IDispatch>`. Therefore, when any of these three names appears in code, it is equivalent to `CComPtr<IDispatch>`. The following example shows how to obtain a pointer to the Microsoft Word object model by using a `CComPtr<IDispatch>`.

[!code-cpp[COM_smart_pointers#03](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_3.cpp)]

## See also

[Smart Pointers (Modern C++)](../cpp/smart-pointers-modern-cpp.md)
