---
description: "Learn more about: TN038: MFC/OLE IUnknown Implementation"
title: "TN038: MFC-OLE IUnknown Implementation"
ms.date: "06/28/2018"
helpviewer_keywords: ["aggregation macros [MFC]", "COM interfaces, base interface", "IUnknown interface", "END_INTERFACE_MAP macro [MFC]", "TN038", "BEGIN_INTERFACE_PART macro [MFC]", "DECLARE_INTERFACE_MAP macro [MFC]", "BEGIN_INTERFACE_MAP macro [MFC]", "OLE [MFC], implementing IUnknown interface", "METHOD_PROLOGUE macro [MFC]", "STDMETHOD macro [MFC]", "END_INTERFACE_PART macro [MFC]", "INTERFACE_PART macro"]
ms.assetid: 19d946ba-beaf-4881-85c6-0b598d7f6f11
---
# TN038: MFC/OLE IUnknown Implementation

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

At the heart of OLE 2 is the "OLE Component Object Model", or COM. COM defines a standard for how cooperating objects communicate to one another. This includes the details of what an "object" looks like, including how methods are dispatched on an object. COM also defines a base class, from which all COM compatible classes are derived. This base class is [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown). Although the [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) interface is referred to as a C++ class, COM is not specific to any one language — it can be implemented in C, PASCAL, or any other language that can support the binary layout of a COM object.

OLE refers to all classes derived from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) as "interfaces." This is an important distinction, since an "interface" such as [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) carries with it no implementation. It simply defines the protocol by which objects communicate, not the specifics of what those implementations do. This is reasonable for a system that allows for maximum flexibility. It is MFC's job to implement a default behavior for MFC/C++ programs.

To understand MFC's implementation of [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) you must first understand what this interface is. A simplified version of [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) is defined below:

```cpp
class IUnknown
{
public:
    virtual HRESULT QueryInterface(REFIID iid, void** ppvObj) = 0;
    virtual ULONG AddRef() = 0;
    virtual ULONG Release() = 0;
};
```

> [!NOTE]
> Certain necessary calling convention details, such as **`__stdcall`** are left out for this illustration.

The [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) member functions control memory management of the object. COM uses a reference counting scheme to keep track of objects. An object is never referenced directly as you would in C++. Instead, COM objects are always referenced through a pointer. To release the object when the owner is done using it, the object's [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) member is called (as opposed to using operator delete, as would be done for a traditional C++ object). The reference counting mechanism allows for multiple references to a single object to be managed. An implementation of [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) maintains a reference count on the object — the object is not deleted until its reference count reaches zero.

[AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) are fairly straightforward from an implementation standpoint. Here is a trivial implementation:

```cpp
ULONG CMyObj::AddRef()
{
    return ++m_dwRef;
}

ULONG CMyObj::Release()
{
    if (--m_dwRef == 0)
    {
        delete this;
        return 0;
    }
    return m_dwRef;
}
```

The [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) member function is a little more interesting. It is not very interesting to have an object whose only member functions are [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) — it would be nice to tell the object to do more things than [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) provides. This is where [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) is useful. It allows you to obtain a different "interface" on the same object. These interfaces are usually derived from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) and add additional functionality by adding new member functions. COM interfaces never have member variables declared in the interface, and all member functions are declared as pure-virtual. For example,

```cpp
class IPrintInterface : public IUnknown
{
public:
    virtual void PrintObject() = 0;
};
```

To get an IPrintInterface if you only have an [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), call [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) using the `IID` of the `IPrintInterface`. An `IID` is a 128-bit number that uniquely identifies the interface. There is an `IID` for each interface that either you or OLE define. If *pUnk* is a pointer to an [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) object, the code to retrieve an IPrintInterface from it might be:

```cpp
IPrintInterface* pPrint = NULL;
if (pUnk->QueryInterface(IID_IPrintInterface, (void**)&pPrint) == NOERROR)
{
    pPrint->PrintObject();
    pPrint->Release();
    // release pointer obtained via QueryInterface
}
```

That seems fairly easy, but how would you implement an object supporting both the IPrintInterface and [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) interface In this case it is simple since the IPrintInterface is derived directly from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) — by implementing IPrintInterface, [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) is automatically supported. For example:

```cpp
class CPrintObj : public CPrintInterface
{
    virtual HRESULT QueryInterface(REFIID iid, void** ppvObj);
    virtual ULONG AddRef();
    virtual ULONG Release();
    virtual void PrintObject();
};
```

The implementations of [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) would be exactly the same as those implemented above. `CPrintObj::QueryInterface` would look something like this:

```cpp
HRESULT CPrintObj::QueryInterface(REFIID iid, void FAR* FAR* ppvObj)
{
    if (iid == IID_IUnknown || iid == IID_IPrintInterface)
    {
        *ppvObj = this;
        AddRef();
        return NOERROR;
    }
    return E_NOINTERFACE;
}
```

As you can see, if the interface identifier (IID) is recognized, a pointer is returned to your object; otherwise an error occurs. Also note that a successful [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) results in an implied [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref). Of course, you'd also have to implement CEditObj::Print. That is simple because the IPrintInterface was directly derived from the [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) interface. However, if you wanted to support two different interfaces, both derived from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), consider the following:

```cpp
class IEditInterface : public IUnkown
{
public:
    virtual void EditObject() = 0;
};
```

Although there are a number of different ways to implement a class supporting both IEditInterface and IPrintInterface, including using C++ multiple inheritance, this note will concentrate on the use of nested classes to implement this functionality.

```cpp
class CEditPrintObj
{
public:
    CEditPrintObj();

    HRESULT QueryInterface(REFIID iid, void**);
    ULONG AddRef();
    ULONG Release();
    DWORD m_dwRef;

    class CPrintObj : public IPrintInterface
    {
    public:
        CEditPrintObj* m_pParent;
        virtual HRESULT QueryInterface(REFIID iid, void** ppvObj);
        virtual ULONG AddRef();
        virtual ULONG Release();
    } m_printObj;

    class CEditObj : public IEditInterface
    {
    public:
        CEditPrintObj* m_pParent;
        virtual ULONG QueryInterface(REFIID iid, void** ppvObj);
        virtual ULONG AddRef();
        virtual ULONG Release();
    } m_editObj;
};
```

The entire implementation is included below:

```cpp
CEditPrintObj::CEditPrintObj()
{
    m_editObj.m_pParent = this;
    m_printObj.m_pParent = this;
}

ULONG CEditPrintObj::AddRef()
{
    return ++m_dwRef;
}

CEditPrintObj::Release()
{
    if (--m_dwRef == 0)
    {
        delete this;
        return 0;
    }
    return m_dwRef;
}

HRESULT CEditPrintObj::QueryInterface(REFIID iid, void** ppvObj)
{
    if (iid == IID_IUnknown || iid == IID_IPrintInterface)
    {
        *ppvObj = &m_printObj;
        AddRef();
        return NOERROR;
    }
    else if (iid == IID_IEditInterface)
    {
        *ppvObj = &m_editObj;
        AddRef();
        return NOERROR;
    }
    return E_NOINTERFACE;
}

ULONG CEditPrintObj::CEditObj::AddRef()
{
    return m_pParent->AddRef();
}

ULONG CEditPrintObj::CEditObj::Release()
{
    return m_pParent->Release();
}

HRESULT CEditPrintObj::CEditObj::QueryInterface(REFIID iid, void** ppvObj)
{
    return m_pParent->QueryInterface(iid, ppvObj);
}

ULONG CEditPrintObj::CPrintObj::AddRef()
{
    return m_pParent->AddRef();
}

ULONG CEditPrintObj::CPrintObj::Release()
{
    return m_pParent->Release();
}

HRESULT CEditPrintObj::CPrintObj::QueryInterface(REFIID iid, void** ppvObj)
{
    return m_pParent->QueryInterface(iid, ppvObj);
}
```

Notice that most of the [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) implementation is placed into the CEditPrintObj class rather than duplicating the code in CEditPrintObj::CEditObj and CEditPrintObj::CPrintObj. This reduces the amount of code and avoids bugs. The key point here is that from the IUnknown interface it is possible to call [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) to retrieve any interface the object might support, and from each of those interfaces it is possible to do the same. This means that all [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) functions available from each interface must behave exactly the same way. In order for these embedded objects to call the implementation in the "outer object", a back-pointer is used (m_pParent). The m_pParent pointer is initialized during the CEditPrintObj constructor. Then you would implement CEditPrintObj::CPrintObj::PrintObject and CEditPrintObj::CEditObj::EditObject as well. Quite a bit of code was added to add one feature — the ability to edit the object. Fortunately, it is quite uncommon for interfaces to have only a single member function (although it does happen) and in this case, EditObject and PrintObject would usually be combined into a single interface.

That's a lot of explanation and a lot of code for such a simple scenario. The MFC/OLE classes provide a simpler alternative. The MFC implementation uses a technique similar to the way Windows messages are wrapped with Message Maps. This facility is called *Interface Maps* and is discussed in the next section.

## MFC Interface Maps

MFC/OLE includes an implementation of "Interface Maps" similar to MFC's "Message Maps" and "Dispatch Maps" in concept and execution. The core features of MFC's Interface Maps are as follows:

- A standard implementation of [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), built into the `CCmdTarget` class.

- Maintenance of the reference count, modified by [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) and [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)

- Data driven implementation of [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q))

In addition, interface maps support the following advanced features:

- Support for creating aggregatable COM objects

- Support for using aggregate objects in the implementation of a COM object

- The implementation is hookable and extensible

For more information on aggregation, see the [Aggregation](/windows/win32/com/aggregation) topic.

MFC's interface map support is rooted in the `CCmdTarget` class. `CCmdTarget` "*has-a*" reference count as well as all the member functions associated with the [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) implementation (the reference count for example is in `CCmdTarget`). To create a class that supports OLE COM, you derive a class from `CCmdTarget` and use various macros as well as member functions of `CCmdTarget` to implement the desired interfaces. MFC's implementation uses nested classes to define each interface implementation much like the example above. This is made easier with a standard implementation of IUnknown as well as a number of macros that eliminate some of the repetitive code.

## Interface Map Basics

### To implement a class using MFC's interface maps

1. Derive a class either directly or indirectly from `CCmdTarget`.

2. Use the `DECLARE_INTERFACE_MAP` function in the derived class definition.

3. For each interface you wish to support, use the BEGIN_INTERFACE_PART and END_INTERFACE_PART macros in the class definition.

4. In the implementation file, use the BEGIN_INTERFACE_MAP and END_INTERFACE_MAP macros to define the class's interface map.

5. For each IID supported, use the INTERFACE_PART macro between the BEGIN_INTERFACE_MAP and END_INTERFACE_MAP macros to map that IID to a specific "part" of your class.

6. Implement each of the nested classes that represent the interfaces you support.

7. Use the METHOD_PROLOGUE macro to access the parent, `CCmdTarget`-derived object.

8. [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release), and [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) can delegate to the `CCmdTarget` implementation of these functions (`ExternalAddRef`, `ExternalRelease`, and `ExternalQueryInterface`).

The CPrintEditObj example above could be implemented as follows:

```cpp
class CPrintEditObj : public CCmdTarget
{
public:
    // member data and member functions for CPrintEditObj go here

// Interface Maps
protected:
    DECLARE_INTERFACE_MAP()

    BEGIN_INTERFACE_PART(EditObj, IEditInterface)
        STDMETHOD_(void, EditObject)();
    END_INTERFACE_PART(EditObj)

    BEGIN_INTERFACE_PART(PrintObj, IPrintInterface)
        STDMETHOD_(void, PrintObject)();
    END_INTERFACE_PART(PrintObj)
};
```

The above declaration creates a class derived from `CCmdTarget`. The DECLARE_INTERFACE_MAP macro tells the framework that this class will have a custom interface map. In addition, the BEGIN_INTERFACE_PART and END_INTERFACE_PART macros define nested classes, in this case with names CEditObj and CPrintObj (the X is used only to differentiate the nested classes from global classes which start with "C" and interface classes which start with "I"). Two nested members of these classes are created: m_CEditObj, and m_CPrintObj, respectively. The macros automatically declare the [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release), and [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) functions; therefore you only declare the functions specific to this interface: EditObject and PrintObject (the OLE macro STDMETHOD is used so that **_stdcall** and virtual keywords are provided as appropriate for the target platform).

To implement the interface map for this class:

```cpp
BEGIN_INTERFACE_MAP(CPrintEditObj, CCmdTarget)
    INTERFACE_PART(CPrintEditObj, IID_IPrintInterface, PrintObj)
    INTERFACE_PART(CPrintEditObj, IID_IEditInterface, EditObj)
END_INTERFACE_MAP()
```

This connects the IID_IPrintInterface IID with m_CPrintObj and IID_IEditInterface with m_CEditObj respectively. The `CCmdTarget` implementation of [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) (`CCmdTarget::ExternalQueryInterface`) uses this map to return pointers to m_CPrintObj and m_CEditObj when requested. It is not necessary to include an entry for `IID_IUnknown`; the framework will use the first interface in the map (in this case, m_CPrintObj) when `IID_IUnknown` is requested.

Even though the BEGIN_INTERFACE_PART macro automatically declared the [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) and [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) functions for you, you still need to implement them:

```cpp
ULONG FAR EXPORT CEditPrintObj::XEditObj::AddRef()
{
    METHOD_PROLOGUE(CEditPrintObj, EditObj)
    return pThis->ExternalAddRef();
}

ULONG FAR EXPORT CEditPrintObj::XEditObj::Release()
{
    METHOD_PROLOGUE(CEditPrintObj, EditObj)
    return pThis->ExternalRelease();
}

HRESULT FAR EXPORT CEditPrintObj::XEditObj::QueryInterface(
    REFIID iid,
    void FAR* FAR* ppvObj)
{
    METHOD_PROLOGUE(CEditPrintObj, EditObj)
    return (HRESULT)pThis->ExternalQueryInterface(&iid, ppvObj);
}

void FAR EXPORT CEditPrintObj::XEditObj::EditObject()
{
    METHOD_PROLOGUE(CEditPrintObj, EditObj)
    // code to "Edit" the object, whatever that means...
}
```

The implementation for CEditPrintObj::CPrintObj, would be similar to the above definitions for CEditPrintObj::CEditObj. Although it would be possible to create a macro that could be used to automatically generate these functions (but earlier in MFC/OLE development this was the case), it becomes difficult to set break points when a macro generates more than one line of code. For this reason, this code is expanded manually.

By using the framework implementation of message maps, there are a number of things that were not necessary to do:

- Implement QueryInterface

- Implement AddRef and Release

- Declare either of these built-in methods on both of your interfaces

In addition, the framework uses message maps internally. This allows you to derive from a framework class, say `COleServerDoc`, that already supports certain interfaces and provides either replacements or additions to the interfaces provided by the framework. You can do this because the framework fully supports inheriting an interface map from a base class. That is the reason why BEGIN_INTERFACE_MAP takes as its second parameter the name of the base class.

> [!NOTE]
> It is generally not possible to reuse the implementation of MFC's built-in implementations of the OLE interfaces just by inheriting the embedded specialization of that interface from the MFC version. This is not possible because the use of the METHOD_PROLOGUE macro to get access to the containing `CCmdTarget`-derived object implies a *fixed offset* of the embedded object from the `CCmdTarget`-derived object. This means, for example, you cannot derive an embedded XMyAdviseSink from MFC's implementation in `COleClientItem::XAdviseSink`, because XAdviseSink relies on being at a specific offset from the top of the `COleClientItem` object.

> [!NOTE]
> You can, however, delegate to the MFC implementation for all of the functions that you want MFC's default behavior. This is done in the MFC implementation of `IOleInPlaceFrame` (XOleInPlaceFrame) in the `COleFrameHook` class (it delegates to m_xOleInPlaceUIWindow for many functions). This design was chosen to reduce the runtime size of objects which implement many interfaces; it eliminates the need for a back-pointer (such as the way m_pParent was used in the previous section).

### Aggregation and Interface Maps

In addition to supporting stand-alone COM objects, MFC also supports aggregation. Aggregation itself is too complex a topic to discuss here; refer to the [Aggregation](/windows/win32/com/aggregation) topic for more information on aggregation. This note will simply describe the support for aggregation built into the framework and interface maps.

There are two ways to use aggregation: (1) using a COM object that supports aggregation, and (2) implementing an object that can be aggregated by another. These capabilities can be referred to as "using an aggregate object" and "making an object aggregatable". MFC supports both.

### Using an Aggregate Object

To use an aggregate object, there needs to be some way to tie the aggregate into the QueryInterface mechanism. In other words, the aggregate object must behave as though it is a native part of your object. So how does this tie into MFC's interface map mechanism In addition to the INTERFACE_PART macro, where a nested object is mapped to an IID, you can also declare an aggregate object as part of your `CCmdTarget` derived class. To do so, the INTERFACE_AGGREGATE macro is used. This allows you to specify a member variable (which must be a pointer to an [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) or derived class), which is to be integrated into the interface map mechanism. If the pointer is not NULL when `CCmdTarget::ExternalQueryInterface` is called, the framework will automatically call the aggregate object's [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) member function, if the `IID` requested is not one of the native `IID`s supported by the `CCmdTarget` object itself.

#### To use the INTERFACE_AGGREGATE macro

1. Declare a member variable (an `IUnknown*`) which will contain a pointer to the aggregate object.

2. Include an INTERFACE_AGGREGATE macro in your interface map, which refers to the member variable by name.

3. At some point (usually during `CCmdTarget::OnCreateAggregates`), initialize the member variable to something other than NULL.

For example:

```cpp
class CAggrExample : public CCmdTarget
{
public:
    CAggrExample();

protected:
    LPUNKNOWN m_lpAggrInner;
    virtual BOOL OnCreateAggregates();

    DECLARE_INTERFACE_MAP()
    // "native" interface part macros may be used here
};

CAggrExample::CAggrExample()
{
    m_lpAggrInner = NULL;
}

BOOL CAggrExample::OnCreateAggregates()
{
    // wire up aggregate with correct controlling unknown
    m_lpAggrInner = CoCreateInstance(CLSID_Example,
        GetControllingUnknown(), CLSCTX_INPROC_SERVER,
        IID_IUnknown, (LPVOID*)&m_lpAggrInner);

    if (m_lpAggrInner == NULL)
        return FALSE;
    // optionally, create other aggregate objects here
    return TRUE;
}

BEGIN_INTERFACE_MAP(CAggrExample, CCmdTarget)
    // native "INTERFACE_PART" entries go here
    INTERFACE_AGGREGATE(CAggrExample, m_lpAggrInner)
END_INTERFACE_MAP()
```

The m_lpAggrInner variable is initialized in the constructor to NULL. The framework ignores a NULL member variable in the default implementation of [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)). `OnCreateAggregates` is a good place to actually create your aggregate objects. You'll have to call it explicitly if you are creating the object outside of the MFC implementation of `COleObjectFactory`. The reason for creating aggregates in `CCmdTarget::OnCreateAggregates` as well as the usage of `CCmdTarget::GetControllingUnknown` will become apparent when creating aggregatable objects is discussed.

This technique will give your object all of the interfaces that the aggregate object supports plus its native interfaces. If you only want a subset of the interfaces that the aggregate supports, you can override `CCmdTarget::GetInterfaceHook`. This allows you very low-level hookability, similar to [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)). Usually, you want all the interfaces that the aggregate supports.

### Making an Object Implementation Aggregatable

For an object to be aggregatable, the implementation of [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release), and [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) must delegate to a "controlling unknown." In other words, for it to be part of the object, it must delegate [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release), and [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) to a different object, also derived from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown). This "controlling unknown" is provided to the object when it is created, that is, it is provided to the implementation of `COleObjectFactory`. Implementing this carries a small amount of overhead, and in some cases is not desirable, so MFC makes this optional. To enable an object to be aggregatable, you call `CCmdTarget::EnableAggregation` from the object's constructor.

If the object also uses aggregates, you must also be sure to pass the correct "controlling unknown" to the aggregate objects. Usually this [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) pointer is passed to the object when the aggregate is created. For example, the pUnkOuter parameter is the "controlling unknown" for objects created with `CoCreateInstance`. The correct "controlling unknown" pointer can be retrieved by calling `CCmdTarget::GetControllingUnknown`. The value returned from that function, however, is not valid during the constructor. For this reason, it is suggested that you create your aggregates only in an override of `CCmdTarget::OnCreateAggregates`, where the return value from `GetControllingUnknown` is reliable, even if created from the `COleObjectFactory` implementation.

It is also important that the object manipulate the correct reference count when adding or releasing artificial reference counts. To ensure this is the case, always call `ExternalAddRef` and `ExternalRelease` instead of `InternalRelease` and `InternalAddRef`. It is rare to call `InternalRelease` or `InternalAddRef` on a class that supports aggregation.

## Reference Material

Advanced usage of OLE, such as defining your own interfaces or overriding the framework's implementation of the OLE interfaces requires the use of the underlying interface map mechanism.

This section discusses each macro and the APIs which is used to implement these advanced features.

### CCmdTarget::EnableAggregation — Function Description

```cpp
void EnableAggregation();
```

#### Remarks

Call this function in the constructor of the derived class if you wish to support OLE aggregation for objects of this type. This prepares a special IUnknown implementation that is required for aggregatable objects.

### CCmdTarget::ExternalQueryInterface — Function Description

```cpp
DWORD ExternalQueryInterface(
    const void FAR* lpIID,
    LPVOIDFAR* ppvObj
);
```

#### Parameters

*lpIID*<br/>
A far pointer to an IID (the first argument to QueryInterface)

*ppvObj*<br/>
A pointer to an IUnknown* (second argument to QueryInterface)

#### Remarks

Call this function in your implementation of IUnknown for each interface your class implements. This function provides the standard data-driven implementation of QueryInterface based on your object's interface map. It is necessary to cast the return value to an HRESULT. If the object is aggregated, this function will call the "controlling IUnknown" instead of using the local interface map.

### CCmdTarget::ExternalAddRef — Function Description

```cpp
DWORD ExternalAddRef();
```

#### Remarks

Call this function in your implementation of IUnknown::AddRef for each interface your class implements. The return value is the new reference count on the CCmdTarget object. If the object is aggregated, this function will call the "controlling IUnknown" instead of manipulating the local reference count.

### CCmdTarget::ExternalRelease — Function Description

```cpp
DWORD ExternalRelease();
```

#### Remarks

Call this function in your implementation of IUnknown::Release for each interface your class implements. The return value indicates the new reference count on the object. If the object is aggregated, this function will call the "controlling IUnknown" instead of manipulating the local reference count.

### DECLARE_INTERFACE_MAP — Macro Description

```cpp
DECLARE_INTERFACE_MAP
```

#### Remarks

Use this macro in any class derived from `CCmdTarget` that will have an interface map. Used in much the same way as DECLARE_MESSAGE_MAP. This macro invocation should be placed in the class definition, usually in a header (.H) file. A class with DECLARE_INTERFACE_MAP must define the interface map in the implementation file (.CPP) with the BEGIN_INTERFACE_MAP and END_INTERFACE_MAP macros.

### BEGIN_INTERFACE_PART and END_INTERFACE_PART — Macro Descriptions

```cpp
BEGIN_INTERFACE_PART(localClass, iface);
END_INTERFACE_PART(localClass)
```

#### Parameters

*localClass*<br/>
The name of the class that implements the interface

*iface*<br/>
The name of the interface that this class implements

#### Remarks

For each interface that your class will implement, you need to have a BEGIN_INTERFACE_PART and END_INTERFACE_PART pair. These macros define a local class derived from the OLE interface that you define as well as an embedded member variable of that class. The [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release), and [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) members are declared automatically. You must include the declarations for the other member functions that are part of the interface being implemented (those declarations are placed between the BEGIN_INTERFACE_PART and END_INTERFACE_PART macros).

The *iface* argument is the OLE interface that you wish to implement, such as `IAdviseSink`, or `IPersistStorage` (or your own custom interface).

The *localClass* argument is the name of the local class that will be defined. An 'X' will automatically be prepended to the name. This naming convention is used to avoid collisions with global classes of the same name. In addition, the name of the embedded member, the same as the *localClass* name except it is prefixed by 'm_x'.

For example:

```cpp
BEGIN_INTERFACE_PART(MyAdviseSink, IAdviseSink)
    STDMETHOD_(void, OnDataChange)(LPFORMATETC, LPSTGMEDIUM);
    STDMETHOD_(void, OnViewChange)(DWORD, LONG);
    STDMETHOD_(void, OnRename)(LPMONIKER);
    STDMETHOD_(void, OnSave)();
    STDMETHOD_(void, OnClose)();
END_INTERFACE_PART(MyAdviseSink)
```

would define a local class called XMyAdviseSink derived from IAdviseSink, and a member of the class in which it is declared called m_xMyAdviseSink.Note:

> [!NOTE]
> The lines beginning with `STDMETHOD`_ are essentially copied from OLE2.H and modified slightly. Copying them from OLE2.H can reduce errors that are hard to resolve.

### BEGIN_INTERFACE_MAP and END_INTERFACE_MAP — Macro Descriptions

```cpp
BEGIN_INTERFACE_MAP(theClass, baseClass)
END_INTERFACE_MAP
```

#### Parameters

*theClass*<br/>
The class in which the interface map is to be defined

*baseClass*<br/>
The class from which *theClass* derives from.

#### Remarks

The BEGIN_INTERFACE_MAP and END_INTERFACE_MAP macros are used in the implementation file to actually define the interface map. For each interface that is implemented there is one or more INTERFACE_PART macro invocations. For each aggregate that the class uses, there is one INTERFACE_AGGREGATE macro invocation.

### INTERFACE_PART — Macro Description

```cpp
INTERFACE_PART(theClass, iid, localClass)
```

#### Parameters

*theClass*<br/>
The name of the class that contains the interface map.

*iid*<br/>
The `IID` that is to be mapped to the embedded class.

*localClass*<br/>
The name of the local class (less the 'X').

#### Remarks

This macro is used between the BEGIN_INTERFACE_MAP macro and the END_INTERFACE_MAP macro for each interface your object will support. It allows you to map an IID to a member of the class indicated by *theClass* and *localClass*. The 'm_x' will be added to the *localClass* automatically. Note that more than one `IID` may be associated with a single member. This is very useful when you are implementing only a "most derived" interface and wish to provide all intermediate interfaces as well. A good example of this is the `IOleInPlaceFrameWindow` interface. Its hierarchy looks like this:

```Hierarchy
IUnknown
    IOleWindow
        IOleUIWindow
            IOleInPlaceFrameWindow
```

If an object implements `IOleInPlaceFrameWindow`, a client may `QueryInterface` on any of these interfaces: `IOleUIWindow`, `IOleWindow`, or [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), besides the "most derived" interface `IOleInPlaceFrameWindow` (the one you are actually implementing). To handle this you can use more than one INTERFACE_PART macro to map each and every base interface to the `IOleInPlaceFrameWindow` interface:

in the class definition file:

```cpp
BEGIN_INTERFACE_PART(CMyFrameWindow, IOleInPlaceFrameWindow)
```

in the class implementation file:

```cpp
BEGIN_INTERFACE_MAP(CMyWnd, CFrameWnd)
    INTERFACE_PART(CMyWnd, IID_IOleWindow, MyFrameWindow)
    INTERFACE_PART(CMyWnd, IID_IOleUIWindow, MyFrameWindow)
    INTERFACE_PART(CMyWnd, IID_IOleInPlaceFrameWindow, MyFrameWindow)
END_INTERFACE_MAP
```

The framework takes care of IUnknown because it is always required.

### INTERFACE_PART — Macro Description

```cpp
INTERFACE_AGGREGATE(theClass, theAggr)
```

#### Parameters

*theClass*<br/>
The name of the class that contains the interface map,

*theAggr*<br/>
The name of the member variable that is to be aggregated.

#### Remarks

This macro is used to tell the framework that the class is using an aggregate object. It must appear between the BEGIN_INTERFACE_PART and END_INTERFACE_PART macros. An aggregate object is a separate object, derived from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown). By using an aggregate and the INTERFACE_AGGREGATE macro, you can make all the interfaces that the aggregate supports appear to be directly supported by the object. The *theAggr* argument is simply the name of a member variable of your class which is derived from [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) (either directly or indirectly). All INTERFACE_AGGREGATE macros must follow the INTERFACE_PART macros when placed in an interface map.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
