---
description: "Learn more about: CSocketFile Class"
title: "CSocketFile Class"
ms.date: "11/04/2016"
f1_keywords: ["CSocketFile", "AFXSOCK/CSocketFile", "AFXSOCK/CSocketFile::CSocketFile"]
helpviewer_keywords: ["CSocketFile [MFC], CSocketFile"]
ms.assetid: 7924c098-5f72-40d6-989d-42800a47958f
---
# CSocketFile Class

A `CFile` object used for sending and receiving data across a network via Windows Sockets.

## Syntax

```
class CSocketFile : public CFile
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSocketFile::CSocketFile](#csocketfile)|Constructs a `CSocketFile` object.|

## Remarks

You can attach the `CSocketFile` object to a `CSocket` object for this purpose. You also can, and usually do, attach the `CSocketFile` object to a `CArchive` object to simplify sending and receiving data using MFC serialization.

To serialize (send) data, you insert it into the archive, which calls `CSocketFile` member functions to write data to the `CSocket` object. To deserialize (receive) data, you extract from the archive. This causes the archive to call `CSocketFile` member functions to read data from the `CSocket` object.

> [!TIP]
> Besides using `CSocketFile` as described here, you can use it as a stand-alone file object, just as you can with `CFile`, its base class. You can also use `CSocketFile` with any archive-based MFC serialization functions. Because `CSocketFile` does not support all of `CFile`'s functionality, some default MFC serialize functions are not compatible with `CSocketFile`. This is particularly true of the `CEditView` class. You should not try to serialize `CEditView` data through a `CArchive` object attached to a `CSocketFile` object using `CEditView::SerializeRaw`; use `CEditView::Serialize` instead. The `SerializeRaw` function expects the file object to have functions, such as `Seek`, that `CSocketFile` does not have.

When you use `CArchive` with `CSocketFile` and `CSocket`, you might encounter a situation where `CSocket::Receive` enters a loop (by `PumpMessages(FD_READ)`) waiting for the requested amount of bytes. This is because Windows sockets allow only one recv call per FD_READ notification, but `CSocketFile` and `CSocket` allow multiple recv calls per FD_READ. If you get an FD_READ when there is no data to read, the application hangs. If you never get another FD_READ, the application stops communicating over the socket.

You can resolve this problem as follows. In the `OnReceive` method of your socket class, call `CAsyncSocket::IOCtl(FIONREAD, ...)` before you call the `Serialize` method of your message class when the expected data to be read from the socket exceeds the size of one TCP packet (maximum transmission unit of the network medium, usually at least 1096 bytes). If the size of the available data is less than needed, wait for all the data to be received and only then start the read operation.

In the following example, `m_dwExpected` is the approximate number of bytes that the user expects to receive. It is assumed that you declare it elsewhere in your code.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocketfile-class_1.cpp)]

For more information, see [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md), as well as [Windows Sockets 2 API](/windows/win32/WinSock/windows-sockets-start-page-2).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CSocketFile`

## Requirements

**Header:** afxsock.h

## <a name="csocketfile"></a> CSocketFile::CSocketFile

Constructs a `CSocketFile` object.

```
explicit CSocketFile(
    CSocket* pSocket,
    BOOL bArchiveCompatible = TRUE);
```

### Parameters

*pSocket*<br/>
The socket to attach to the `CSocketFile` object.

*bArchiveCompatible*<br/>
Specifies whether the file object is for use with a `CArchive` object. Pass FALSE only if you want to use the `CSocketFile` object in a stand-alone manner as you would a stand-alone `CFile` object, with certain limitations. This flag changes how the `CArchive` object attached to the `CSocketFile` object manages its buffer for reading.

### Remarks

The object's destructor disassociates itself from the socket object when the object goes out of scope or is deleted.

> [!NOTE]
> A `CSocketFile` can also be used as a (limited) file without a `CArchive` object. By default, the `CSocketFile` constructor's *bArchiveCompatible* parameter is TRUE. This specifies that the file object is for use with an archive. To use the file object without an archive, pass FALSE in the *bArchiveCompatible* parameter.

In its "archive compatible" mode, a `CSocketFile` object provides better performance and reduces the danger of a "deadlock." A deadlock occurs when both the sending and receiving sockets are waiting on each other, or for a common resource. This situation might occur if the `CArchive` object worked with the `CSocketFile` the way it does with a `CFile` object. With `CFile`, the archive can assume that if it receives fewer bytes than it requested, the end of file has been reached.

With `CSocketFile`, however, data is message based; the buffer can contain multiple messages, so receiving fewer than the number of bytes requested does not imply end of file. The application does not block in this case as it might with `CFile`, and it can continue reading messages from the buffer until the buffer is empty. The [CArchive::IsBufferEmpty](../../mfc/reference/carchive-class.md#isbufferempty) function is useful for monitoring the state of the archive's buffer in such a case.

For more information on the use of `CSocketFile`, see the articles [Windows Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md) and [Windows Sockets: Example of Sockets Using Archives](../../mfc/windows-sockets-example-of-sockets-using-archives.md).

## See also

[CFile Class](../../mfc/reference/cfile-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CAsyncSocket Class](../../mfc/reference/casyncsocket-class.md)<br/>
[CSocket Class](../../mfc/reference/csocket-class.md)
