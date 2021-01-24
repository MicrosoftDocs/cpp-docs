---
description: "Learn more about: TN065: Dual-Interface Support for OLE Automation Servers"
title: "TN065: Dual-Interface Support for OLE Automation Servers"
ms.date: "06/28/2018"
f1_keywords: ["vc.ole"]
helpviewer_keywords: ["dual interfaces [MFC], OLE Automation", "TN065 [MFC]", "ACDUAL sample [MFC]", "Automation servers [MFC], dual-interface support"]
ms.assetid: b5c8ed09-2f7f-483c-80fc-2a47ad896063
---
# TN065: Dual-Interface Support for OLE Automation Servers

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note discusses how to add dual-interface support to an MFC-based OLE Automation server application. The [ACDUAL](../overview/visual-cpp-samples.md) sample illustrates dual-interface support, and the example code in this note is taken from ACDUAL. The macros described in this note, such as DECLARE_DUAL_ERRORINFO, DUAL_ERRORINFO_PART, and IMPLEMENT_DUAL_ERRORINFO, are part of the ACDUAL sample and can be found in MFCDUAL.H.

## Dual Interfaces

Although OLE Automation allows you to implement an `IDispatch` interface, a VTBL interface, or a dual interface (which encompasses both), Microsoft strongly recommends that you implement dual interfaces for all exposed OLE Automation objects. Dual interfaces have significant advantages over `IDispatch`-only or VTBL-only interfaces:

- Binding can take place at compile time through the VTBL interface, or at run time through `IDispatch`.

- OLE Automation controllers that can use the VTBL interface may benefit from improved performance.

- Existing OLE Automation controllers that use the `IDispatch` interface will continue to work.

- The VTBL interface is easier to call from C++.

- Dual interfaces are required for compatibility with Visual Basic object support features.

## Adding Dual-Interface Support to a CCmdTarget-Based Class

A dual interface is really just a custom interface derived from `IDispatch`. The most straightforward way to implement dual-interface support in a `CCmdTarget`-based class is to first implement the normal dispatch interface on your class using MFC and ClassWizard, then add the custom interface later. For the most part, your custom interface implementation will simply delegate back to the MFC `IDispatch` implementation.

First, modify the ODL file for your server to define dual interfaces for your objects. To define a dual interface, you must use an interface statement, instead of the `DISPINTERFACE` statement that the Visual C++ wizards generate. Rather than removing the existing `DISPINTERFACE` statement, add a new interface statement. By retaining the `DISPINTERFACE` form, you can continue to use ClassWizard to add properties and methods to your object, but you must add the equivalent properties and methods to your interface statement.

An interface statement for a dual interface must have the *OLEAUTOMATION* and *DUAL* attributes, and the interface must be derived from `IDispatch`. You can use the [GUIDGEN](../overview/visual-cpp-samples.md) sample to create a **IID** for the dual interface:

```IDL
[ uuid(0BDD0E81-0DD7-11cf-BBA8-444553540000), // IID_IDualAClick
    oleautomation,
    dual
]
interface IDualAClick : IDispatch
    {
    };
```

Once you have the interface statement in place, start adding entries for the methods and properties. For dual interfaces, you need to rearrange the parameter lists so that your methods and property accessor functions in the dual interface return an **HRESULT** and pass their return values as parameters with the attributes `[retval,out]`. Remember that for properties, you will need to add both a read (`propget`) and write (`propput`) access function with the same id. For example:

```IDL
[propput, id(1)] HRESULT text([in] BSTR newText);
[propget, id(1)] HRESULT text([out, retval] BSTR* retval);
```

After your methods and properties are defined, you need to add a reference to the interface statement in your coclass statement. For example:

```IDL
[ uuid(4B115281-32F0-11cf-AC85-444553540000) ]
coclass Document
{
    dispinterface IAClick;
    [default] interface IDualAClick;
};
```

Once your ODL file has been updated, use MFC's interface map mechanism to define an implementation class for the dual interface in your object class and make the corresponding entries in MFC's `QueryInterface` mechanism. You need one entry in the `INTERFACE_PART` block for each entry in the interface statement of the ODL, plus the entries for a dispatch interface. Each ODL entry with the *propput* attribute needs a function named `put_propertyname`. Each entry with the *propget* attribute needs a function named `get_propertyname`.

To define an implementation class for your dual interface, add a `DUAL_INTERFACE_PART` block to your object class definition. For example:

```cpp
BEGIN_DUAL_INTERFACE_PART(DualAClick, IDualAClick)
    STDMETHOD(put_text)(THIS_ BSTR newText);
    STDMETHOD(get_text)(THIS_ BSTR FAR* retval);
    STDMETHOD(put_x)(THIS_ short newX);
    STDMETHOD(get_x)(THIS_ short FAR* retval);
    STDMETHOD(put_y)(THIS_ short newY);
    STDMETHOD(get_y)(THIS_ short FAR* retval);
    STDMETHOD(put_Position)(THIS_ IDualAutoClickPoint FAR* newPosition);
    STDMETHOD(get_Position)(THIS_ IDualAutoClickPoint FAR* FAR* retval);
    STDMETHOD(RefreshWindow)(THIS);
    STDMETHOD(SetAllProps)(THIS_ short x, short y, BSTR text);
    STDMETHOD(ShowWindow)(THIS);
END_DUAL_INTERFACE_PART(DualAClick)
```

To connect the dual interface to MFC's [QueryInterface](/windows/win32/com/queryinterface--navigating-in-an-object) mechanism, add an `INTERFACE_PART` entry to the interface map:

```cpp
BEGIN_INTERFACE_MAP(CAutoClickDoc, CDocument)
    INTERFACE_PART(CAutoClickDoc, DIID_IAClick, Dispatch)
    INTERFACE_PART(CAutoClickDoc, IID_IDualAClick, DualAClick)
END_INTERFACE_MAP()
```

Next, you need to fill in the implementation of the interface. For the most part, you will be able to delegate to the existing MFC `IDispatch` implementation. For example:

```cpp
STDMETHODIMP_(ULONG) CAutoClickDoc::XDualAClick::AddRef()
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    return pThis->ExternalAddRef();
}

STDMETHODIMP_(ULONG) CAutoClickDoc::XDualAClick::Release()
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    return pThis->ExternalRelease();
}

STDMETHODIMP CAutoClickDoc::XDualAClick::QueryInterface(
    REFIID iid,
    LPVOID* ppvObj)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    return pThis->ExternalQueryInterface(&iid, ppvObj);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::GetTypeInfoCount(
    UINT FAR* pctinfo)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);
    return lpDispatch->GetTypeInfoCount(pctinfo);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::GetTypeInfo(
    UINT itinfo,
    LCID lcid,
    ITypeInfo FAR* FAR* pptinfo)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);

    return lpDispatch->GetTypeInfo(itinfo, lcid, pptinfo);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::GetIDsOfNames(
    REFIID riid,
    OLECHAR FAR* FAR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID FAR* rgdispid)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);

    return lpDispatch->GetIDsOfNames(riid, rgszNames, cNames, lcid, rgdispid);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::Invoke(
    DISPID dispidMember,
    REFIID riid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS FAR* pdispparams,
    VARIANT FAR* pvarResult,
    EXCEPINFO FAR* pexcepinfo,
    UINT FAR* puArgErr)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);

    return lpDispatch->Invoke(dispidMember, riid, lcid,
        wFlags, pdispparams, pvarResult, pexcepinfo, puArgErr);
}
```

For your object's methods and property accessor functions, you need to fill in the implementation. Your method and property functions can generally delegate back to the methods generated using ClassWizard. However, if you set up properties to access variables directly, you need to write the code to get/put the value into the variable. For example:

```cpp
STDMETHODIMP CAutoClickDoc::XDualAClick::put_text(BSTR newText)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    // MFC automatically converts from Unicode BSTR to
    // Ansi CString, if necessary...
    pThis->m_str = newText;
    return NOERROR;
}

STDMETHODIMP CAutoClickDoc::XDualAClick::get_text(BSTR* retval)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    // MFC automatically converts from Ansi CString to
    // Unicode BSTR, if necessary...
    pThis->m_str.SetSysString(retval);
    return NOERROR;
}
```

## Passing Dual-Interface Pointers

Passing your dual-interface pointer isn't straightforward, especially if you need to call `CCmdTarget::FromIDispatch`. `FromIDispatch` only works on MFC's `IDispatch` pointers. One way to work around this is to query for the original `IDispatch` pointer set up by MFC and pass that pointer to functions that need it. For example:

```
STDMETHODIMP CAutoClickDoc::XDualAClick::put_Position(
    IDualAutoClickPoint FAR* newPosition)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDisp = NULL;
    newPosition->QueryInterface(IID_IDispatch, (LPVOID*)&lpDisp);
    pThis->SetPosition(lpDisp);
    lpDisp->Release();
    return NOERROR;
}
```

Before passing a pointer back through the dual-interface method, you might need to convert it from the MFC `IDispatch` pointer to your dual-interface pointer. For example:

```
STDMETHODIMP CAutoClickDoc::XDualAClick::get_Position(
    IDualAutoClickPoint FAR* FAR* retval)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDisp;
    lpDisp = pThis->GetPosition();
    lpDisp->QueryInterface(IID_IDualAutoClickPoint, (LPVOID*)retval);
    return NOERROR;
}
```

## Registering the Application's Type Library

AppWizard does not generate code to register an OLE Automation server application's type library with the system. While there are other ways to register the type library, it is convenient to have the application register the type library when it is updating its OLE type information, that is, whenever the application is run stand-alone.

To register the application's type library whenever the application is run stand alone:

- Include AFXCTL.H in your standard includes header file, STDAFX.H, to access the definition of the `AfxOleRegisterTypeLib` function.

- In your application's `InitInstance` function, locate the call to `COleObjectFactory::UpdateRegistryAll`. Following this call, add a call to `AfxOleRegisterTypeLib`, specifying the **LIBID** corresponding to your type library, along with the name of your type library:

    ```cpp
    // When a server application is launched stand-alone, it is a good idea
    // to update the system registry in case it has been damaged.
    m_server.UpdateRegistry(OAT_DISPATCH_OBJECT);

    COleObjectFactory::UpdateRegistryAll();

    // DUAL_SUPPORT_START
        // Make sure the type library is registered or dual interface won't work.
        AfxOleRegisterTypeLib(AfxGetInstanceHandle(),
            LIBID_ACDual,
            _T("AutoClik.TLB"));
    // DUAL_SUPPORT_END
    ```

## Modifying Project Build Settings to Accommodate Type Library Changes

To modify a project's build settings so that a header file containing **UUID** definitions is generated by MkTypLib whenever the type library is rebuilt:

1. On the **Build** menu, click **Settings**, and then select the ODL file from the file list for each configuration.

2. Click the **OLE Types** tab and specify a filename in the **Output header** filename field. Use a filename that is not already used by your project, because MkTypLib will overwrite any existing file. Click **OK** to close the **Build Settings** dialog box.

To add the **UUID** definitions from the MkTypLib-generated header file to your project:

1. Include the MkTypLib-generated header file in your standard includes header file, *stdafx.h*.

2. Create a new file, INITIIDS.CPP, and add it to your project. In this file, include your MkTypLib-generated header file after including OLE2.H and INITGUID.H:

    ```cpp
    // initIIDs.c: defines IIDs for dual interfaces
    // This must not be built with precompiled header.
    #include <ole2.h>
    #include <initguid.h>
    #include "acdual.h"
    ```

3. On the **Build** menu, click **Settings**, and then select INITIIDS.CPP from the file list for each configuration.

4. Click the **C++** tab, click category **Precompiled Headers**, and select the **Not using precompiled headers** radio button. Click OK to close the **Build Settings** dialog box.

## Specifying the Correct Object Class Name in the Type Library

The wizards shipped with Visual C++ incorrectly use the implementation class name to specify the coclass in the server's ODL file for OLE-creatable classes. While this will work, the implementation class name is probably not the class name you want users of your object to use. To specify the correct name, open the ODL file, locate each coclass statement, and replace the implementation class name with the correct external name.

Note that when the coclass statement is changed, the variable names of **CLSID**s in the MkTypLib-generated header file will change accordingly. You will need to update your code to use the new variable names.

## Handling Exceptions and the Automation Error Interfaces

Your automation object's methods and property accessor functions may throw exceptions. If so, you should handle them in your dual-interface implementation and pass information about the exception back to the controller through the OLE Automation error-handling interface, `IErrorInfo`. This interface provides for detailed, contextual error information through both `IDispatch` and VTBL interfaces. To indicate that an error handler is available, you should implement the `ISupportErrorInfo` interface.

To illustrate the error-handling mechanism, assume that the ClassWizard-generated functions used to implement the standard dispatch support throw exceptions. MFC's implementation of `IDispatch::Invoke` typically catches these exceptions and converts them into an EXCEPTINFO structure that is returned through the `Invoke` call. However, when VTBL interface is used, you are responsible for catching the exceptions yourself. As an example of protecting your dual-interface methods:

```cpp
STDMETHODIMP CAutoClickDoc::XDualAClick::put_text(BSTR newText)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    TRY_DUAL(IID_IDualAClick)
    {
        // MFC automatically converts from Unicode BSTR to
        // Ansi CString, if necessary...
        pThis->m_str = newText;
        return NOERROR;
    }
    CATCH_ALL_DUAL
}
```

`CATCH_ALL_DUAL` takes care of returning the correct error code when an exception occurs. `CATCH_ALL_DUAL` converts an MFC exception into OLE Automation error-handling information using the `ICreateErrorInfo` interface. (An example `CATCH_ALL_DUAL` macro is in the file MFCDUAL.H in the [ACDUAL](../overview/visual-cpp-samples.md) sample. The function it calls to handle exceptions, `DualHandleException`, is in the file MFCDUAL.CPP.) `CATCH_ALL_DUAL` determines the error code to return based on the type of exception that occurred:

- [COleDispatchException](../mfc/reference/coledispatchexception-class.md) - In this case, `HRESULT` is constructed using the following code:

    ```cpp
    hr = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, (e->m_wCode + 0x200));
    ```

   This creates an `HRESULT` specific to the interface that caused the exception. The error code is offset by 0x200 to avoid any conflicts with system-defined `HRESULT`s for standard OLE interfaces.

- [CMemoryException](../mfc/reference/cmemoryexception-class.md) - In this case, `E_OUTOFMEMORY` is returned.

- Any other exception - In this case, `E_UNEXPECTED` is returned.

To indicate that the OLE Automation error handler is used, you should also implement the `ISupportErrorInfo` interface.

First, add code to your automation class definition to show it supports `ISupportErrorInfo`.

Second, add code to your automation class's interface map to associate the `ISupportErrorInfo` implementation class with MFC's `QueryInterface` mechanism. The `INTERFACE_PART` statement matches the class defined for `ISupportErrorInfo`.

Finally, implement the class defined to support `ISupportErrorInfo`.

(The [ACDUAL](../overview/visual-cpp-samples.md) sample contains three macros to help do these three steps, `DECLARE_DUAL_ERRORINFO`, `DUAL_ERRORINFO_PART`, and `IMPLEMENT_DUAL_ERRORINFO`, all contained in MFCDUAL.H.)

The following example implements a class defined to support `ISupportErrorInfo`. `CAutoClickDoc` is the name of your automation class and `IID_IDualAClick` is the **IID** for the interface that is the source of errors reported through the OLE Automation error object:

```cpp
STDMETHODIMP_(ULONG) CAutoClickDoc::XSupportErrorInfo::AddRef()
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return pThis->ExternalAddRef();
}

STDMETHODIMP_(ULONG) CAutoClickDoc::XSupportErrorInfo::Release()
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return pThis->ExternalRelease();
}

STDMETHODIMP CAutoClickDoc::XSupportErrorInfo::QueryInterface(
    REFIID iid,
    LPVOID* ppvObj)
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return pThis->ExternalQueryInterface(&iid, ppvObj);
}

STDMETHODIMP CAutoClickDoc::XSupportErrorInfo::InterfaceSupportsErrorInfo(
    REFIID iid)
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return (iid == IID_IDualAClick) S_OK : S_FALSE;
}
```

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
