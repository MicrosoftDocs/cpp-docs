---
description: "Learn more about: TN071: MFC IOleCommandTarget Implementation"
title: "TN071: MFC IOleCommandTarget Implementation"
ms.date: "06/28/2018"
helpviewer_keywords: ["TN071 [MFC]", "IOleCommandTarget interface [MFC]"]
ms.assetid: 3eef571e-6357-444d-adbb-6f734a0c3161
---
# TN071: MFC IOleCommandTarget Implementation

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

The `IOleCommandTarget` interface enables objects and their containers to dispatch commands to each other. For example, an object's toolbars may contain buttons for commands such as `Print`, `Print Preview`, `Save`, `New`, and `Zoom`. If such an object were embedded in a container that supports `IOleCommandTarget`, the object could enable its buttons and forward the commands to the container for processing when the user clicked them. If a container wanted the embedded object to print itself, it could make this request by sending a command through the `IOleCommandTarget` interface of the embedded object.

`IOleCommandTarget` is an Automation-like interface in that it is used by a client to invoke methods on a server. However, using `IOleCommandTarget` saves the overhead of making calls via Automation interfaces because programmers don't have to use the typically expensive `Invoke` method of `IDispatch`.

In MFC, the `IOleCommandTarget` interface is used by Active document servers to allow Active document containers to dispatch commands to the server. The Active document server class, `CDocObjectServerItem`, uses MFC interface maps (see [TN038: MFC/OLE IUnknown Implementation](../mfc/tn038-mfc-ole-iunknown-implementation.md)) to implement the `IOleCommandTarget` interface.

`IOleCommandTarget` is also implemented in the `COleFrameHook` class. `COleFrameHook` is an undocumented MFC class that implements the frame window functionality of in-place editing containers. `COleFrameHook` also uses MFC interface maps to implement the `IOleCommandTarget` interface. `COleFrameHook`'s implementation of `IOleCommandTarget` forwards OLE commands to `COleDocObjectItem`-derived Active document containers. This allows any MFC Active document container to receive messages from contained Active document servers.

## MFC OLE Command Maps

MFC developers can take advantage of `IOleCommandTarget` by using MFC OLE command maps. OLE command maps are like message maps because they can be used to map OLE commands to member functions of the class that contains the command map. To make this work, place macros in the command map to specify the OLE command group of the command you want to handle, the OLE command, and the command ID of the [WM_COMMAND](/windows/win32/menurc/wm-command) message that will be sent when the OLE command is received. MFC also provides a number of predefined macros for standard OLE commands. For a list of the standard OLE commands that were originally designed for use with Microsoft Office applications, see the OLECMDID enumeration, which is defined in docobj.h.

When an OLE command is received by an MFC application that contains an OLE command map, MFC tries to find the command ID and command group for the requested command in the OLE command map of the application. If a match is found, a WM_COMMAND message is dispatched to the application containing the command map with the ID of the requested command. (See the description of `ON_OLECMD` below.) In this way, OLE commands dispatched to an application are turned into WM_COMMAND messages by MFC. The WM_COMMAND messages are then routed through the application's message maps using the MFC standard [command routing](../mfc/command-routing.md) architecture.

Unlike message maps, MFC OLE command maps are not supported by ClassWizard. MFC developers must add OLE command map support and OLE command map entries by hand. OLE command maps can be added to MFC Active document servers in any class that is in the WM_COMMAND message-routing chain at the time the Active document is in-place active in a container. These classes include the application's classes derived from [CWinApp](../mfc/reference/cwinapp-class.md), [CView](../mfc/reference/cview-class.md), [CDocument](../mfc/reference/cdocument-class.md), and [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md). In Active document containers, OLE command maps can only be added to the [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)-derived class. Also, in Active document containers, the WM_COMMAND messages will only be dispatched to the message map in the `COleDocObjectItem`-derived class.

## OLE Command Map Macros

Use the following macros to add command map functionality to your class:

```cpp
DECLARE_OLECMD_MAP ()
```

This macro goes in the class declaration (typically in the header file) of the class that contains the command map.

```cpp
BEGIN_OLECMD_MAP(theClass, baseClass)
```

*theClass*<br/>
Name of the class that contains the command map.

*baseClass*<br/>
Name of the base class of the class that contains the command map.

This macro marks the beginning of the command map. Use this macro in the implementation file for the class that contains the command map.

```
END_OLECMD_MAP()
```

This macro marks the end of the command map. Use this macro in the implementation file for the class that contains the command map. This macro must always follow the BEGIN_OLECMD_MAP macro.

```
ON_OLECMD(pguid, olecmdid, id)
```

*pguid*<br/>
Pointer to the GUID of the OLE command's command group. This parameter is **NULL** for the standard OLE command group.

*olecmdid*<br/>
OLE command ID of the command to be invoked.

*id*<br/>
ID of the WM_COMMAND message to be sent to the application containing the command map when this OLE command is invoked.

Use the ON_OLECMD macro in the command map to add entries for the OLE commands you want to handle. When the OLE commands are received, they will be converted to the specified WM_COMMAND message and routed through the application's message map using the standard MFC command-routing architecture.

## Example

The following example shows how to add OLE command-handling capability to an MFC Active document server to handle the [OLECMDID_PRINT](/windows/win32/api/docobj/ne-docobj-olecmdid) OLE command. This example assumes that you used AppWizard to generate an MFC application that is an Active document server.

1. In your `CView`-derived class's header file, add the DECLARE_OLECMD_MAP macro to the class declaration.

    > [!NOTE]
    > Use the `CView`-derived class because it is one of the classes in the Active document server that is in the WM_COMMAND message-routing chain.

    ```cpp
    class CMyServerView : public CView
    {
    protected: // create from serialization only
        CMyServerView();
        DECLARE_DYNCREATE(CMyServerView)
        DECLARE_OLECMD_MAP()
        // . . .
    };
    ```

2. In the implementation file for the `CView`-derived class, add the BEGIN_OLECMD_MAP and END_OLECMD_MAP macros:

    ```cpp
    BEGIN_OLECMD_MAP(CMyServerView, CView)

    END_OLECMD_MAP()
    ```

3. To handle the standard OLE print command, add an [ON_OLECMD](reference/message-map-macros-mfc.md#on_olecmd) macro to the command map specifying the OLE command ID for the standard print command and **ID_FILE_PRINT** for the WM_COMMAND ID. **ID_FILE_PRINT** is the standard print command ID used by AppWizard-generated MFC applications:

    ```
    BEGIN_OLECMD_MAP(CMyServerView, CView)
        ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)
    END_OLECMD_MAP()
    ```

Note that one of the standard OLE command macros, defined in afxdocob.h, could be used in place of the ON_OLECMD macro because **OLECMDID_PRINT** is a standard OLE command ID. The ON_OLECMD_PRINT macro will accomplish the same task as the ON_OLECMD macro shown above.

When a container application sends this server an **OLECMDID_PRINT** command through the server's `IOleCommandTarget` interface, the MFC printing command handler will be invoked in the server, causing the server to print the application. The Active document container's code to invoke the print command added in the steps above would look something like this:

```cpp
void CContainerCntrItem::DoOleCmd()
{
    IOleCommandTarget *pCmd = NULL;
    HRESULT hr = E_FAIL;
    OLECMD ocm={OLECMDID_PRINT, 0};

    hr = m_lpObject->QueryInterface(
        IID_IOleCommandTarget,reinterpret_cast<void**>(&pCmd));

    if (FAILED(hr))
        return;

    hr = pCmd->QueryStatus(NULL, 1, &ocm, NULL);

    if (SUCCEEDED(hr) && (ocm.cmdf& OLECMDF_ENABLED))
    {
        //Command is available and enabled so call it
        COleVariant vIn;
        COleVariant vOut;
        hr = pCmd->Exec(NULL, OLECMDID_PRINT,
            OLECMDEXECOPT_DODEFAULT, &vIn, &vOut);
        ASSERT(SUCCEEDED(hr));
    }
    pCmd->Release();
}
```

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
