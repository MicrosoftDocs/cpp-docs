---
description: "Learn more about: ATL and the Free Threaded Marshaler"
title: "ATL and the Free Threaded Marshaler"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL, free threaded marshaler", "free threaded marshaler", "threading [C++], marshaler in ATL", "threading [ATL], free threaded marshaler", "FTM in ATL"]
ms.assetid: 2db88a13-2217-4ebc-aa7e-432d5da902eb
---
# ATL and the Free Threaded Marshaler

The ATL Simple Object Wizard's Attributes page provides an option that allows your class to aggregate the free threaded marshaler (FTM).

The wizard generates code to create an instance of the free threaded marshaler in `FinalConstruct` and release that instance in `FinalRelease`. A COM_INTERFACE_ENTRY_AGGREGATE macro is automatically added to the COM map to ensure that `QueryInterface` requests for [IMarshal](/windows/win32/api/objidlbase/nn-objidlbase-imarshal) are handled by the free threaded marshaler.

The free threaded marshaler allows direct access to interfaces on your object from any thread in the same process, speeding up cross-apartment calls. This option is intended for classes that use the Both threading model.

When using this option, classes must take responsibility for the thread-safety of their data. In addition, objects that aggregate the free threaded marshaler and need to use interface pointers obtained from other objects must take extra steps to ensure that the interfaces are correctly marshaled. Typically this involves storing the interface pointers in the global interface table (GIT) and getting the pointer from the GIT each time it is used. ATL provides the class [CComGITPtr](../atl/reference/ccomgitptr-class.md) to help you use interface pointers stored in the GIT.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)<br/>
[CoCreateFreeThreadedMarshaler](/windows/win32/api/combaseapi/nf-combaseapi-cocreatefreethreadedmarshaler)<br/>
[IMarshal](/windows/win32/api/objidlbase/nn-objidlbase-imarshal)<br/>
[When to Use the Global Interface Table](/windows/win32/com/when-to-use-the-global-interface-table)<br/>
[In-Process Server Threading Issues](/windows/win32/com/in-process-server-threading-issues)
