---
description: "Learn more about: Message Handling and Command Targets"
title: "Message Handling and Command Targets"
ms.date: "11/04/2016"
f1_keywords: ["IOleCommandTarget"]
helpviewer_keywords: ["command targets [MFC]", "message handling [MFC], active documents", "IOleCommandTarget interface [MFC]", "command routing [MFC], command targets"]
ms.assetid: e45ce14c-e6b6-4262-8f3b-4e891e0ec2a3
---
# Message Handling and Command Targets

The command dispatch interface `IOleCommandTarget` defines a simple and extensible mechanism to query and execute commands. This mechanism is simpler than Automation's `IDispatch` because it relies entirely on a standard set of commands; commands rarely have arguments, and no type information is involved (type safety is diminished for command arguments as well).

In the command dispatch interface design, each command belongs to a "command group" which is itself identified with a **GUID**. Therefore, anyone can define a new group and define all the commands within that group without any need to coordinate with Microsoft or any other vendor. (This is essentially the same means of definition as a **dispinterface** plus **dispIDs** in Automation. There is overlap here, although this command routing mechanism is only for command routing and not for scripting/programmability on a large scale as Automation handles.)

`IOleCommandTarget` handles the following scenarios:

- When an object is in-place activated, only the object's toolbars are typically displayed and the object's toolbars may have buttons for some of the container commands like **Print**, **Print Preview**, **Save**, **New**, **Zoom**, and others. (In-place activation standards recommend that objects remove such buttons from their toolbars, or at least disable them. This design allows those commands to be enabled and yet routed to the right handler.) Currently, there is no mechanism for the object to dispatch these commands to the container.

- When an active document is embedded in an active document container (such as Office Binder), the container may need to send commands such **Print**, **Page Setup**, **Properties**, and others to the contained active document.

This simple command routing could be handled through existing Automation standards and `IDispatch`. However, the overhead involved with `IDispatch` is more than is necessary here, so `IOleCommandTarget` provides a simpler means to achieve the same ends:

```
interface IOleCommandTarget : IUnknown
    {
    HRESULT QueryStatus(
        [in] GUID *pguidCmdGroup,
        [in] ULONG cCmds,
        [in,out][size_is(cCmds)] OLECMD *prgCmds,
        [in,out] OLECMDTEXT *pCmdText);
    HRESULT Exec(
        [in] GUID *pguidCmdGroup,
        [in] DWORD nCmdID,
        [in] DWORD nCmdExecOpt,
        [in] VARIANTARG *pvaIn,
        [in,out] VARIANTARG *pvaOut);
    }
```

The `QueryStatus` method here tests whether a particular set of commands, the set being identified with a **GUID**, is supported. This call fills an array of **OLECMD** values (structures) with the supported list of commands as well as returning text describing the name of a command and/or status information. When the caller wishes to invoke a command, it can pass the command (and the set **GUID**) to `Exec` along with options and arguments, getting back a return value.

## See also

[Active Document Containers](active-document-containers.md)
