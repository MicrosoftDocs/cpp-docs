---
description: "Learn more about: Platform::DisconnectedException Class"
title: "Platform::DisconnectedException Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::DisconnectedException", "VCCORLIB/Platform::DisconnectedException::DisconnectedException"]
helpviewer_keywords: ["Platform::DisconnectedException"]
ms.assetid: c25e0d64-5bff-4c21-88e5-c4ec2776fa7f
---
# Platform::DisconnectedException Class

Thrown when a COM proxy object attempts to reference a COM server that no longer exists

## Syntax

```
public ref class DisconnectedException : COMException,    IException,    IPrintable,    IEquatable
```

### Remarks

When class A references another class (class B) that is in a separate process, class A requires a proxy object to communicate with the out-of-process COM server that holds class B. Sometimes the server can go out of memory without class A knowing about it. In that case the RPC_E_DISCONNECTED exception is thrown and it gets translated to Platform::DisconnectedException. One scenario in which is occurs is when an event source invokes a delegate that was passed to it, but the delegate has been destroyed at some point after it subscribed to the event. When this happens, the event source removes that delegate from its invocation list.

For more information, see the [COMException](../cppcx/platform-comexception-class.md) class.

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## See also

[Platform::COMException Class](../cppcx/platform-comexception-class.md)
