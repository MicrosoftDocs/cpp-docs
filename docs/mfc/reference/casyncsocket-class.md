---
description: "Learn more about: CAsyncSocket Class"
title: "CAsyncSocket Class"
ms.date: "06/25/2020"
f1_keywords: ["CAsyncSocket", "AFXSOCK/CAsyncSocket", "AFXSOCK/CAsyncSocket::CAsyncSocket", "AFXSOCK/CAsyncSocket::Accept", "AFXSOCK/CAsyncSocket::AsyncSelect", "AFXSOCK/CAsyncSocket::Attach", "AFXSOCK/CAsyncSocket::Bind", "AFXSOCK/CAsyncSocket::Close", "AFXSOCK/CAsyncSocket::Connect", "AFXSOCK/CAsyncSocket::Create", "AFXSOCK/CAsyncSocket::Detach", "AFXSOCK/CAsyncSocket::FromHandle", "AFXSOCK/CAsyncSocket::GetLastError", "AFXSOCK/CAsyncSocket::GetPeerName", "AFXSOCK/CAsyncSocket::GetPeerNameEx", "AFXSOCK/CAsyncSocket::GetSockName", "AFXSOCK/CAsyncSocket::GetSockNameEx", "AFXSOCK/CAsyncSocket::GetSockOpt", "AFXSOCK/CAsyncSocket::IOCtl", "AFXSOCK/CAsyncSocket::Listen", "AFXSOCK/CAsyncSocket::Receive", "AFXSOCK/CAsyncSocket::ReceiveFrom", "AFXSOCK/CAsyncSocket::ReceiveFromEx", "AFXSOCK/CAsyncSocket::Send", "AFXSOCK/CAsyncSocket::SendTo", "AFXSOCK/CAsyncSocket::SendToEx", "AFXSOCK/CAsyncSocket::SetSockOpt", "AFXSOCK/CAsyncSocket::ShutDown", "AFXSOCK/CASyncSocket::Socket", "AFXSOCK/CAsyncSocket::OnAccept", "AFXSOCK/CAsyncSocket::OnClose", "AFXSOCK/CAsyncSocket::OnConnect", "AFXSOCK/CAsyncSocket::OnOutOfBandData", "AFXSOCK/CAsyncSocket::OnReceive", "AFXSOCK/CAsyncSocket::OnSend", "AFXSOCK/CAsyncSocket::m_hSocket"]
helpviewer_keywords: ["CAsyncSocket [MFC], CAsyncSocket", "CAsyncSocket [MFC], Accept", "CAsyncSocket [MFC], AsyncSelect", "CAsyncSocket [MFC], Attach", "CAsyncSocket [MFC], Bind", "CAsyncSocket [MFC], Close", "CAsyncSocket [MFC], Connect", "CAsyncSocket [MFC], Create", "CAsyncSocket [MFC], Detach", "CAsyncSocket [MFC], FromHandle", "CAsyncSocket [MFC], GetLastError", "CAsyncSocket [MFC], GetPeerName", "CAsyncSocket [MFC], GetPeerNameEx", "CAsyncSocket [MFC], GetSockName", "CAsyncSocket [MFC], GetSockNameEx", "CAsyncSocket [MFC], GetSockOpt", "CAsyncSocket [MFC], IOCtl", "CAsyncSocket [MFC], Listen", "CAsyncSocket [MFC], Receive", "CAsyncSocket [MFC], ReceiveFrom", "CAsyncSocket [MFC], ReceiveFromEx", "CAsyncSocket [MFC], Send", "CAsyncSocket [MFC], SendTo", "CAsyncSocket [MFC], SendToEx", "CAsyncSocket [MFC], SetSockOpt", "CAsyncSocket [MFC], ShutDown", "CASyncSocket [MFC], Socket", "CAsyncSocket [MFC], OnAccept", "CAsyncSocket [MFC], OnClose", "CAsyncSocket [MFC], OnConnect", "CAsyncSocket [MFC], OnOutOfBandData", "CAsyncSocket [MFC], OnReceive", "CAsyncSocket [MFC], OnSend", "CAsyncSocket [MFC], m_hSocket"]
ms.assetid: cca4d5a1-aa0f-48bd-843e-ef0e2d7fc00b
---
# CAsyncSocket Class

Represents a Windows Socket — an endpoint of network communication.

## Syntax

```
class CAsyncSocket : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAsyncSocket::CAsyncSocket](#casyncsocket)|Constructs a `CAsyncSocket` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAsyncSocket::Accept](#accept)|Accepts a connection on the socket.|
|[CAsyncSocket::AsyncSelect](#asyncselect)|Requests event notification for the socket.|
|[CAsyncSocket::Attach](#attach)|Attaches a socket handle to a `CAsyncSocket` object.|
|[CAsyncSocket::Bind](#bind)|Associates a local address with the socket.|
|[CAsyncSocket::Close](#close)|Closes the socket.|
|[CAsyncSocket::Connect](#connect)|Establishes a connection to a peer socket.|
|[CAsyncSocket::Create](#create)|Creates a socket.|
|[CAsyncSocket::CreateEx](#createex)|Creates a socket with advanced options.|
|[CAsyncSocket::Detach](#detach)|Detaches a socket handle from a `CAsyncSocket` object.|
|[CAsyncSocket::FromHandle](#fromhandle)|Returns a pointer to a `CAsyncSocket` object, given a socket handle.|
|[CAsyncSocket::GetLastError](#getlasterror)|Gets the error status for the last operation that failed.|
|[CAsyncSocket::GetPeerName](#getpeername)|Gets the address of the peer socket to which the socket is connected.|
|[CAsyncSocket::GetPeerNameEx](#getpeernameex)|Gets the address of the peer socket to which the socket is connected (handles IPv6 addresses).|
|[CAsyncSocket::GetSockName](#getsockname)|Gets the local name for a socket.|
|[CAsyncSocket::GetSockNameEx](#getsocknameex)|Gets the local name for a socket (handles IPv6 addresses).|
|[CAsyncSocket::GetSockOpt](#getsockopt)|Retrieves a socket option.|
|[CAsyncSocket::IOCtl](#ioctl)|Controls the mode of the socket.|
|[CAsyncSocket::Listen](#listen)|Establishes a socket to listen for incoming connection requests.|
|[CAsyncSocket::Receive](#receive)|Receives data from the socket.|
|[CAsyncSocket::ReceiveFrom](#receivefrom)|Receives a datagram and stores the source address.|
|[CAsyncSocket::ReceiveFromEx](#receivefromex)|Receives a datagram and stores the source address (handles IPv6 addresses).|
|[CAsyncSocket::Send](#send)|Sends data to a connected socket.|
|[CAsyncSocket::SendTo](#sendto)|Sends data to a specific destination.|
|[CAsyncSocket::SendToEx](#sendtoex)|Sends data to a specific destination (handles IPv6 addresses).|
|[CAsyncSocket::SetSockOpt](#setsockopt)|Sets a socket option.|
|[CAsyncSocket::ShutDown](#shutdown)|Disables `Send` and/or `Receive` calls on the socket.|
|[CASyncSocket::Socket](#socket)|Allocates a socket handle.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CAsyncSocket::OnAccept](#onaccept)|Notifies a listening socket that it can accept pending connection requests by calling `Accept`.|
|[CAsyncSocket::OnClose](#onclose)|Notifies a socket that the socket connected to it has closed.|
|[CAsyncSocket::OnConnect](#onconnect)|Notifies a connecting socket that the connection attempt is complete, whether successfully or in error.|
|[CAsyncSocket::OnOutOfBandData](#onoutofbanddata)|Notifies a receiving socket that there is out-of-band data to be read on the socket, usually an urgent message.|
|[CAsyncSocket::OnReceive](#onreceive)|Notifies a listening socket that there is data to be retrieved by calling `Receive`.|
|[CAsyncSocket::OnSend](#onsend)|Notifies a socket that it can send data by calling `Send`.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAsyncSocket::operator =](#operator_eq)|Assigns a new value to a `CAsyncSocket` object.|
|[CAsyncSocket::operator SOCKET](#operator_socket)|Use this operator to retrieve the SOCKET handle of the `CAsyncSocket` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CAsyncSocket::m_hSocket](#m_hsocket)|Indicates the SOCKET handle attached to this `CAsyncSocket` object.|

## Remarks

Class `CAsyncSocket` encapsulates the Windows Socket Functions API, providing an object-oriented abstraction for programmers who want to use Windows Sockets in conjunction with MFC.

This class is based on the assumption that you understand network communications. You are responsible for handling blocking, byte-order differences, and conversions between Unicode and multibyte character set (MBCS) strings. If you want a more convenient interface that manages these issues for you, see class [CSocket](../../mfc/reference/csocket-class.md).

To use a `CAsyncSocket` object, call its constructor, then call the [Create](#create) function to create the underlying socket handle (type `SOCKET`), except on accepted sockets. For a server socket call the [Listen](#listen) member function, and for a client socket call the [Connect](#connect) member function. The server socket should call the [Accept](#accept) function upon receiving a connection request. Use the remaining `CAsyncSocket` functions to carry out communications between sockets. Upon completion, destroy the `CAsyncSocket` object if it was created on the heap; the destructor automatically calls the [Close](#close) function. The SOCKET data type is described in the article [Windows Sockets: Background](../../mfc/windows-sockets-background.md).

> [!NOTE]
> When using MFC sockets in secondary threads in a statically linked MFC application, you must call `AfxSocketInit` in each thread that uses sockets to initialize the socket libraries. By default, `AfxSocketInit` is called only in the primary thread.

For more information, see [Windows Sockets: Using Class CAsyncSocket](../../mfc/windows-sockets-using-class-casyncsocket.md) and related articles., as well as [Windows Sockets 2 API](/windows/win32/WinSock/windows-sockets-start-page-2).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CAsyncSocket`

## Requirements

**Header:** afxsock.h

## <a name="accept"></a> CAsyncSocket::Accept

Call this member function to accept a connection on a socket.

```
virtual BOOL Accept(
    CAsyncSocket& rConnectedSocket,
    SOCKADDR* lpSockAddr = NULL,
    int* lpSockAddrLen = NULL);
```

### Parameters

*rConnectedSocket*<br/>
A reference identifying a new socket that is available for connection.

*lpSockAddr*<br/>
A pointer to a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure that receives the address of the connecting socket, as known on the network. The exact format of the *lpSockAddr* argument is determined by the address family established when the socket was created. If *lpSockAddr* and/or *lpSockAddrLen* are equal to NULL, then no information about the remote address of the accepted socket is returned.

*lpSockAddrLen*<br/>
A pointer to the length of the address in *lpSockAddr* in bytes. The *lpSockAddrLen* is a value-result parameter: it should initially contain the amount of space pointed to by *lpSockAddr*; on return it will contain the actual length (in bytes) of the address returned.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpSockAddrLen* argument is too small (less than the size of a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure).

- WSAEINPROGRESS A blocking Windows Sockets call is in progress.

- WSAEINVAL `Listen` was not invoked prior to accept.

- WSAEMFILE The queue is empty upon entry to accept and there are no descriptors available.

- WSAENOBUFS No buffer space is available.

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP The referenced socket is not a type that supports connection-oriented service.

- WSAEWOULDBLOCK The socket is marked as nonblocking and no connections are present to be accepted.

### Remarks

This routine extracts the first connection in the queue of pending connections, creates a new socket with the same properties as this socket, and attaches it to *rConnectedSocket*. If no pending connections are present on the queue, `Accept` returns zero and `GetLastError` returns an error. The accepted socket ( *rConnectedSocket)* cannot be used to accept more connections. The original socket remains open and listening.

The argument *lpSockAddr* is a result parameter that is filled in with the address of the connecting socket, as known to the communications layer. `Accept` is used with connection-based socket types such as SOCK_STREAM.

## <a name="asyncselect"></a> CAsyncSocket::AsyncSelect

Call this member function to request event notification for a socket.

```
BOOL AsyncSelect(long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### Parameters

*lEvent*<br/>
A bitmask which specifies a combination of network events in which the application is interested.

- FD_READ Want to receive notification of readiness for reading.

- FD_WRITE Want to receive notification when data is available to be read.

- FD_OOB Want to receive notification of the arrival of out-of-band data.

- FD_ACCEPT Want to receive notification of incoming connections.

- FD_CONNECT Want to receive notification of connection results.

- FD_CLOSE Want to receive notification when a socket has been closed by a peer.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEINVAL Indicates that one of the specified parameters was invalid.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

### Remarks

This function is used to specify which MFC callback notification functions will be called for the socket. `AsyncSelect` automatically sets this socket to nonblocking mode. For more information, see the article [Windows Sockets: Socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

## <a name="attach"></a> CAsyncSocket::Attach

Call this member function to attach the *hSocket* handle to an `CAsyncSocket` object.

```
BOOL Attach(
    SOCKET hSocket, long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### Parameters

*hSocket*<br/>
Contains a handle to a socket.

*lEvent*<br/>
A bitmask which specifies a combination of network events in which the application is interested.

- FD_READ Want to receive notification of readiness for reading.

- FD_WRITE Want to receive notification when data is available to be read.

- FD_OOB Want to receive notification of the arrival of out-of-band data.

- FD_ACCEPT Want to receive notification of incoming connections.

- FD_CONNECT Want to receive notification of connection results.

- FD_CLOSE Want to receive notification when a socket has been closed by a peer.

### Return Value

Nonzero if the function is successful.

### Remarks

The SOCKET handle is stored in the object's [m_hSocket](#m_hsocket) data member.

## <a name="bind"></a> CAsyncSocket::Bind

Call this member function to associate a local address with the socket.

```
BOOL Bind(
    UINT nSocketPort,
    LPCTSTR lpszSocketAddress = NULL);

BOOL Bind (
    const SOCKADDR* lpSockAddr,
    int nSockAddrLen);
```

### Parameters

*nSocketPort*<br/>
The port identifying the socket application.

*lpszSocketAddress*<br/>
The network address, a dotted number such as "128.56.22.8". Passing the NULL string for this parameter indicates the `CAsyncSocket` instance should listen for client activity on all network interfaces.

*lpSockAddr*<br/>
A pointer to a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure that contains the address to assign to this socket.

*nSockAddrLen*<br/>
The length of the address in *lpSockAddr* in bytes.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following list covers a few of the errors that might be returned. For a complete list, see [Windows Sockets Error Codes](/windows/win32/winsock/windows-sockets-error-codes-2).

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEADDRINUSE The specified address is already in use. (See the SO_REUSEADDR socket option under [SetSockOpt](#setsockopt).)

- WSAEFAULT The *nSockAddrLen* argument is too small (less than the size of a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure).

- WSAEINPROGRESS A blocking Windows Sockets call is in progress.

- WSAEAFNOSUPPORT The specified address family is not supported by this port.

- WSAEINVAL The socket is already bound to an address.

- WSAENOBUFS Not enough buffers available, too many connections.

- WSAENOTSOCK The descriptor is not a socket.

### Remarks

This routine is used on an unconnected datagram or stream socket, before subsequent `Connect` or `Listen` calls. Before it can accept connection requests, a listening server socket must select a port number and make it known to Windows Sockets by calling `Bind`. `Bind` establishes the local association (host address/port number) of the socket by assigning a local name to an unnamed socket.

## <a name="casyncsocket"></a> CAsyncSocket::CAsyncSocket

Constructs a blank socket object.

```
CAsyncSocket();
```

### Remarks

After constructing the object, you must call its `Create` member function to create the SOCKET data structure and bind its address. (On the server side of a Windows Sockets communication, when the listening socket creates a socket to use in the `Accept` call, you do not call `Create` for that socket.)

## <a name="close"></a> CAsyncSocket::Close

Closes the socket.

```
virtual void Close();
```

### Remarks

This function releases the socket descriptor so that further references to it will fail with the error WSAENOTSOCK. If this is the last reference to the underlying socket, the associated naming information and queued data are discarded. The socket object's destructor calls `Close` for you.

For `CAsyncSocket`, but not for `CSocket`, the semantics of `Close` are affected by the socket options SO_LINGER and SO_DONTLINGER. For further information, see member function `GetSockOpt`.

## <a name="connect"></a> CAsyncSocket::Connect

Call this member function to establish a connection to an unconnected stream or datagram socket.

```
BOOL Connect(
    LPCTSTR lpszHostAddress,
    UINT nHostPort);

BOOL Connect(
    const SOCKADDR* lpSockAddr,
    int nSockAddrLen);
```

### Parameters

*lpszHostAddress*<br/>
The network address of the socket to which this object is connected: a machine name such as "ftp.microsoft.com", or a dotted number such as "128.56.22.8".

*nHostPort*<br/>
The port identifying the socket application.

*lpSockAddr*<br/>
A pointer to a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure that contains the address of the connected socket.

*nSockAddrLen*<br/>
The length of the address in *lpSockAddr* in bytes.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). If this indicates an error code of WSAEWOULDBLOCK, and your application is using the overridable callbacks, your application will receive an `OnConnect` message when the connect operation is complete. The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEADDRINUSE The specified address is already in use.

- WSAEINPROGRESS A blocking Windows Sockets call is in progress.

- WSAEADDRNOTAVAIL The specified address is not available from the local machine.

- WSAEAFNOSUPPORT Addresses in the specified family cannot be used with this socket.

- WSAECONNREFUSED The attempt to connect was rejected.

- WSAEDESTADDRREQ A destination address is required.

- WSAEFAULT The *nSockAddrLen* argument is incorrect.

- WSAEINVAL Invalid host address.

- WSAEISCONN The socket is already connected.

- WSAEMFILE No more file descriptors are available.

- WSAENETUNREACH The network cannot be reached from this host at this time.

- WSAENOBUFS No buffer space is available. The socket cannot be connected.

- WSAENOTSOCK The descriptor is not a socket.

- WSAETIMEDOUT Attempt to connect timed out without establishing a connection.

- WSAEWOULDBLOCK The socket is marked as nonblocking and the connection cannot be completed immediately.

### Remarks

If the socket is unbound, unique values are assigned to the local association by the system, and the socket is marked as bound. Note that if the address field of the name structure is all zeroes, `Connect` will return zero. To get extended error information, call the `GetLastError` member function.

For stream sockets (type SOCK_STREAM), an active connection is initiated to the foreign host. When the socket call completes successfully, the socket is ready to send/receive data.

For a datagram socket (type SOCK_DGRAM), a default destination is set, which will be used on subsequent `Send` and `Receive` calls.

## <a name="create"></a> CAsyncSocket::Create

Call the `Create` member function after constructing a socket object to create the Windows socket and attach it.

```
BOOL Create(
    UINT nSocketPort = 0,
    int nSocketType = SOCK_STREAM,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,
    LPCTSTR lpszSocketAddress = NULL);
```

### Parameters

*nSocketPort*<br/>
A well-known port to be used with the socket, or 0 if you want Windows Sockets to select a port.

*nSocketType*<br/>
SOCK_STREAM or SOCK_DGRAM.

*lEvent*<br/>
A bitmask which specifies a combination of network events in which the application is interested.

- FD_READ Want to receive notification of readiness for reading.

- FD_WRITE Want to receive notification of readiness for writing.

- FD_OOB Want to receive notification of the arrival of out-of-band data.

- FD_ACCEPT Want to receive notification of incoming connections.

- FD_CONNECT Want to receive notification of completed connection.

- FD_CLOSE Want to receive notification of socket closure.

*lpszSockAddress*<br/>
A pointer to a string containing the network address of the connected socket, a dotted number such as "128.56.22.8".Passing the NULL string for this parameter indicates the `CAsyncSocket` instance should listen for client activity on all network interfaces.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEAFNOSUPPORT The specified address family is not supported.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEMFILE No more file descriptors are available.

- WSAENOBUFS No buffer space is available. The socket cannot be created.

- WSAEPROTONOSUPPORT The specified port is not supported.

- WSAEPROTOTYPE The specified port is the wrong type for this socket.

- WSAESOCKTNOSUPPORT The specified socket type is not supported in this address family.

### Remarks

`Create` calls [Socket](#socket) and if successful, it calls [Bind](#bind) to bind the socket to the specified address. The following socket types are supported:

- SOCK_STREAM Provides sequenced, reliable, full-duplex, connection-based byte streams. Uses the Transmission Control Protocol (TCP) for the Internet address family.

- SOCK_DGRAM Supports datagrams, which are connectionless, unreliable packets of a fixed (typically small) maximum length. Uses the User Datagram Protocol (UDP) for the Internet address family.

    > [!NOTE]
    >  The `Accept` member function takes a reference to a new, empty `CSocket` object as its parameter. You must construct this object before you call `Accept`. Keep in mind that if this socket object goes out of scope, the connection closes. Do not call `Create` for this new socket object.

> [!IMPORTANT]
> `Create` is **not** thread-safe.  If you are calling it in a multi-threaded environment where it could be invoked simultaneously by different threads, be sure to protect each call with a mutex or other synchronization lock.

For more information about stream and datagram sockets, see the articles [Windows Sockets: Background](../../mfc/windows-sockets-background.md) and [Windows Sockets: Ports and Socket Addresses](../../mfc/windows-sockets-ports-and-socket-addresses.md) and [Windows Sockets 2 API](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="createex"></a> CAsyncSocket::CreateEx

Call the `CreateEx` member function after constructing a socket object to create the Windows socket and attach it.

Use this function when you need to supply advanced options such as the socket type.

```
BOOL CreateEx(
    ADDRINFOT* pAI,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### Parameters

*pAI*<br/>
A pointer to a [ADDRINFOT](/windows/win32/api/ws2def/ns-ws2def-addrinfoa) to hold socket info such as the family and socket type.

*lEvent*<br/>
A bitmask which specifies a combination of network events in which the application is interested.

- FD_READ Want to receive notification of readiness for reading.

- FD_WRITE Want to receive notification of readiness for writing.

- FD_OOB Want to receive notification of the arrival of out-of-band data.

- FD_ACCEPT Want to receive notification of incoming connections.

- FD_CONNECT Want to receive notification of completed connection.

- FD_CLOSE Want to receive notification of socket closure.

### Return Value

See the return value for [Create()](#return-value-5).

### Remarks

See the remarks for [Create()](#remarks-8).

## <a name="detach"></a> CAsyncSocket::Detach

Call this member function to detach the SOCKET handle in the *m_hSocket* data member from the `CAsyncSocket` object and set *m_hSocket* to NULL.

```
SOCKET Detach();
```

## <a name="fromhandle"></a> CAsyncSocket::FromHandle

Returns a pointer to a `CAsyncSocket` object.

```
static CAsyncSocket* PASCAL FromHandle(SOCKET hSocket);
```

### Parameters

*hSocket*<br/>
Contains a handle to a socket.

### Return Value

A pointer to an `CAsyncSocket` object, or NULL if there is no `CAsyncSocket` object attached to *hSocket*.

### Remarks

When given a SOCKET handle, if a `CAsyncSocket` object is not attached to the handle, the member function returns NULL.

## <a name="getlasterror"></a> CAsyncSocket::GetLastError

Call this member function to get the error status for the last operation that failed.

```
static int PASCAL GetLastError();
```

### Return Value

The return value indicates the error code for the last Windows Sockets API routine performed by this thread.

### Remarks

When a particular member function indicates that an error has occurred, `GetLastError` should be called to retrieve the appropriate error code. See the individual member function descriptions for a list of applicable error codes.

For more information about the error codes, see [Windows Sockets 2 API](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="getpeername"></a> CAsyncSocket::GetPeerName

Call this member function to get the address of the peer socket to which this socket is connected.

```
BOOL GetPeerName(
    CString& rPeerAddress,
    UINT& rPeerPort);

BOOL GetPeerName(
    SOCKADDR* lpSockAddr,
    int* lpSockAddrLen);
```

### Parameters

*rPeerAddress*<br/>
Reference to a `CString` object that receives a dotted number IP address.

*rPeerPort*<br/>
Reference to a UINT that stores a port.

*lpSockAddr*<br/>
A pointer to the [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure that receives the name of the peer socket.

*lpSockAddrLen*<br/>
A pointer to the length of the address in *lpSockAddr* in bytes. On return, the *lpSockAddrLen* argument contains the actual size of *lpSockAddr* returned in bytes.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpSockAddrLen* argument is not large enough.

- WSAEINPROGRESS A blocking Windows Sockets call is in progress.

- WSAENOTCONN The socket is not connected.

- WSAENOTSOCK The descriptor is not a socket.

### Remarks

To handle IPv6 addresses, use [CAsyncSocket::GetPeerNameEx](#getpeernameex).

## <a name="getpeernameex"></a> CAsyncSocket::GetPeerNameEx

Call this member function to get the address of the peer socket to which this socket is connected (handles IPv6 addresses).

```
BOOL GetPeerNameEx(
    CString& rPeerAddress,
    UINT& rPeerPort);
```

### Parameters

*rPeerAddress*<br/>
Reference to a `CString` object that receives a dotted number IP address.

*rPeerPort*<br/>
Reference to a UINT that stores a port.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpSockAddrLen* argument is not large enough.

- WSAEINPROGRESS A blocking Windows Sockets call is in progress.

- WSAENOTCONN The socket is not connected.

- WSAENOTSOCK The descriptor is not a socket.

### Remarks

This function is the same as [CAsyncSocket::GetPeerName](#getpeername) except that it handles IPv6 addresses as well as older protocols.

## <a name="getsockname"></a> CAsyncSocket::GetSockName

Call this member function to get the local name for a socket.

```
BOOL GetSockName(
    CString& rSocketAddress,
    UINT& rSocketPort);

BOOL GetSockName(
    SOCKADDR* lpSockAddr,
    int* lpSockAddrLen);
```

### Parameters

*rSocketAddress*<br/>
Reference to a `CString` object that receives a dotted number IP address.

*rSocketPort*<br/>
Reference to a UINT that stores a port.

*lpSockAddr*<br/>
A pointer to a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure that receives the address of the socket.

*lpSockAddrLen*<br/>
A pointer to the length of the address in *lpSockAddr* in bytes.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpSockAddrLen* argument is not large enough.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAENOTSOCK The descriptor is not a socket.

- WSAEINVAL The socket has not been bound to an address with `Bind`.

### Remarks

This call is especially useful when a `Connect` call has been made without doing a `Bind` first; this call provides the only means by which you can determine the local association which has been set by the system.

To handle IPv6 addresses, use [CAsyncSocket::GetSockNameEx](#getsocknameex)

## <a name="getsocknameex"></a> CAsyncSocket::GetSockNameEx

Call this member function to get the local name for a socket (handles IPv6 addresses).

```
BOOL GetSockNameEx(
    CString& rSocketAddress,
    UINT& rSocketPort);
```

### Parameters

*rSocketAddress*<br/>
Reference to a `CString` object that receives a dotted number IP address.

*rSocketPort*<br/>
Reference to a UINT that stores a port.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpSockAddrLen* argument is not large enough.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAENOTSOCK The descriptor is not a socket.

- WSAEINVAL The socket has not been bound to an address with `Bind`.

### Remarks

This call is the same as [CAsyncSocket::GetSockName](#getsockname) except that it handles IPv6 addresses as well as older protocols.

This call is especially useful when a `Connect` call has been made without doing a `Bind` first; this call provides the only means by which you can determine the local association which has been set by the system.

## <a name="getsockopt"></a> CAsyncSocket::GetSockOpt

Call this member function to retrieve a socket option.

```
BOOL GetSockOpt(
    int nOptionName,
    void* lpOptionValue,
    int* lpOptionLen,
    int nLevel = SOL_SOCKET);
```

### Parameters

*nOptionName*<br/>
The socket option for which the value is to be retrieved.

*lpOptionValue*<br/>
A pointer to the buffer in which the value for the requested option is to be returned. The value associated with the selected option is returned in the buffer *lpOptionValue*. The integer pointed to by *lpOptionLen* should originally contain the size of this buffer in bytes; and on return, it will be set to the size of the value returned. For SO_LINGER, this will be the size of a `LINGER` structure; for all other options it will be the size of a BOOL or an **`int`**, depending on the option. See the list of options and their sizes in the Remarks section.

*lpOptionLen*<br/>
A pointer to the size of the *lpOptionValue* buffer in bytes.

*nLevel*<br/>
The level at which the option is defined; the only supported levels are SOL_SOCKET and IPPROTO_TCP.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). If an option was never set with `SetSockOpt`, then `GetSockOpt` returns the default value for the option. The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpOptionLen* argument was invalid.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAENOPROTOOPT The option is unknown or unsupported. In particular, SO_BROADCAST is not supported on sockets of type SOCK_STREAM, while SO_ACCEPTCONN, SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER, and SO_OOBINLINE are not supported on sockets of type SOCK_DGRAM.

- WSAENOTSOCK The descriptor is not a socket.

### Remarks

`GetSockOpt` retrieves the current value for a socket option associated with a socket of any type, in any state, and stores the result in *lpOptionValue*. Options affect socket operations, such as the routing of packets, out-of-band data transfer, and so on.

The following options are supported for `GetSockOpt`. The Type identifies the type of data addressed by *lpOptionValue*. The TCP_NODELAY option uses level IPPROTO_TCP; all other options use level SOL_SOCKET.

|Value|Type|Meaning|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Socket is listening.|
|SO_BROADCAST|BOOL|Socket is configured for the transmission of broadcast messages.|
|SO_DEBUG|BOOL|Debugging is enabled.|
|SO_DONTLINGER|BOOL|If true, the SO_LINGER option is disabled.|
|SO_DONTROUTE|BOOL|Routing is disabled.|
|SO_ERROR|**`int`**|Retrieve error status and clear.|
|SO_KEEPALIVE|BOOL|Keep-alives are being sent.|
|SO_LINGER|`struct LINGER`|Returns the current linger options.|
|SO_OOBINLINE|BOOL|Out-of-band data is being received in the normal data stream.|
|SO_RCVBUF|int|Buffer size for receives.|
|SO_REUSEADDR|BOOL|The socket can be bound to an address which is already in use.|
|SO_SNDBUF|**`int`**|Buffer size for sends.|
|SO_TYPE|**`int`**|The type of the socket (for example, SOCK_STREAM).|
|TCP_NODELAY|BOOL|Disables the Nagle algorithm for send coalescing.|

Berkeley Software Distribution (BSD) options not supported for `GetSockOpt` are:

|Value|Type|Meaning|
|-----------|----------|-------------|
|SO_RCVLOWAT|**`int`**|Receive low water mark.|
|SO_RCVTIMEO|**`int`**|Receive timeout.|
|SO_SNDLOWAT|**`int`**|Send low water mark.|
|SO_SNDTIMEO|**`int`**|Send timeout.|
|IP_OPTIONS||Get options in IP header.|
|TCP_MAXSEG|**`int`**|Get TCP maximum segment size.|

Calling `GetSockOpt` with an unsupported option will result in an error code of WSAENOPROTOOPT being returned from `GetLastError`.

## <a name="ioctl"></a> CAsyncSocket::IOCtl

Call this member function to control the mode of a socket.

```
BOOL IOCtl(
    long lCommand,
    DWORD* lpArgument);
```

### Parameters

*lCommand*<br/>
The command to perform on the socket.

*lpArgument*<br/>
A pointer to a parameter for *lCommand*.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEINVAL *lCommand* is not a valid command, or *lpArgument* is not an acceptable parameter for *lCommand*, or the command is not applicable to the type of socket supplied.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAENOTSOCK The descriptor is not a socket.

### Remarks

This routine can be used on any socket in any state. It is used to get or retrieve operating parameters associated with the socket, independent of the protocol and communications subsystem. The following commands are supported:

- FIONBIO Enable or disable nonblocking mode on the socket. The *lpArgument* parameter points at a `DWORD`, which is nonzero if nonblocking mode is to be enabled and zero if it is to be disabled. If `AsyncSelect` has been issued on a socket, then any attempt to use `IOCtl` to set the socket back to blocking mode will fail with WSAEINVAL. To set the socket back to blocking mode and prevent the WSAEINVAL error, an application must first disable `AsyncSelect` by calling `AsyncSelect` with the *lEvent* parameter equal to 0, then call `IOCtl`.

- FIONREAD Determine the maximum number of bytes that can be read with one `Receive` call from this socket. The *lpArgument* parameter points at a `DWORD` in which `IOCtl` stores the result. If this socket is of type SOCK_STREAM, FIONREAD returns the total amount of data which can be read in a single `Receive`; this is normally the same as the total amount of data queued on the socket. If this socket is of type SOCK_DGRAM, FIONREAD returns the size of the first datagram queued on the socket.

- SIOCATMARK Determine whether all out-of-band data has been read. This applies only to a socket of type SOCK_STREAM which has been configured for in-line reception of any out-of-band data ( SO_OOBINLINE). If no out-of-band data is waiting to be read, the operation returns nonzero. Otherwise it returns 0, and the next `Receive` or `ReceiveFrom` performed on the socket will retrieve some or all of the data preceding the "mark"; the application should use the SIOCATMARK operation to determine whether any data remains. If there is any normal data preceding the "urgent" (out-of-band) data, it will be received in order. (Note that a `Receive` or `ReceiveFrom` will never mix out-of-band and normal data in the same call.) The *lpArgument* parameter points at a `DWORD` in which `IOCtl` stores the result.

This function is a subset of `ioctl()` as used in Berkeley sockets. In particular, there is no command which is equivalent to FIOASYNC, while SIOCATMARK is the only socket-level command which is supported.

## <a name="listen"></a> CAsyncSocket::Listen

Call this member function to listen for incoming connection requests.

```
BOOL Listen(int nConnectionBacklog = 5);
```

### Parameters

*nConnectionBacklog*<br/>
The maximum length to which the queue of pending connections can grow. Valid range is from 1 to 5.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEADDRINUSE An attempt has been made to listen on an address in use.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEINVAL The socket has not been bound with `Bind` or is already connected.

- WSAEISCONN The socket is already connected.

- WSAEMFILE No more file descriptors are available.

- WSAENOBUFS No buffer space is available.

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP The referenced socket is not of a type that supports the `Listen` operation.

### Remarks

To accept connections, the socket is first created with `Create`, a backlog for incoming connections is specified with `Listen`, and then the connections are accepted with `Accept`. `Listen` applies only to sockets that support connections, that is, those of type SOCK_STREAM. This socket is put into "passive" mode where incoming connections are acknowledged and queued pending acceptance by the process.

This function is typically used by servers (or any application that wants to accept connections) that could have more than one connection request at a time: if a connection request arrives with the queue full, the client will receive an error with an indication of WSAECONNREFUSED.

`Listen` attempts to continue to function rationally when there are no available ports (descriptors). It will accept connections until the queue is emptied. If ports become available, a later call to `Listen` or `Accept` will refill the queue to the current or most recent "backlog," if possible, and resume listening for incoming connections.

## <a name="m_hsocket"></a> CAsyncSocket::m_hSocket

Contains the SOCKET handle for the socket encapsulated by this `CAsyncSocket` object.

```
SOCKET m_hSocket;
```

## <a name="onaccept"></a> CAsyncSocket::OnAccept

Called by the framework to notify a listening socket that it can accept pending connection requests by calling the [Accept](#accept) member function.

```
virtual void OnAccept(int nErrorCode);
```

### Parameters

*nErrorCode*<br/>
The most recent error on a socket. The following error codes applies to the `OnAccept` member function:

- **0** The function executed successfully.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

### Remarks

For more information, see [Windows Sockets: Socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

## <a name="onclose"></a> CAsyncSocket::OnClose

Called by the framework to notify this socket that the connected socket is closed by its process.

```
virtual void OnClose(int nErrorCode);
```

### Parameters

*nErrorCode*<br/>
The most recent error on a socket. The following error codes apply to the `OnClose` member function:

- **0** The function executed successfully.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAECONNRESET The connection was reset by the remote side.

- WSAECONNABORTED The connection was aborted due to timeout or other failure.

### Remarks

For more information, see [Windows Sockets: Socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

## <a name="onconnect"></a> CAsyncSocket::OnConnect

Called by the framework to notify this connecting socket that its connection attempt is completed, whether successfully or in error.

```
virtual void OnConnect(int nErrorCode);
```

### Parameters

*nErrorCode*<br/>
The most recent error on a socket. The following error codes apply to the `OnConnect` member function:

- **0** The function executed successfully.

- WSAEADDRINUSE The specified address is already in use.

- WSAEADDRNOTAVAIL The specified address is not available from the local machine.

- WSAEAFNOSUPPORT Addresses in the specified family cannot be used with this socket.

- WSAECONNREFUSED The attempt to connect was forcefully rejected.

- WSAEDESTADDRREQ A destination address is required.

- WSAEFAULT The *lpSockAddrLen* argument is incorrect.

- WSAEINVAL The socket is already bound to an address.

- WSAEISCONN The socket is already connected.

- WSAEMFILE No more file descriptors are available.

- WSAENETUNREACH The network cannot be reached from this host at this time.

- WSAENOBUFS No buffer space is available. The socket cannot be connected.

- WSAENOTCONN The socket is not connected.

- WSAENOTSOCK The descriptor is a file, not a socket.

- WSAETIMEDOUT The attempt to connect timed out without establishing a connection.

### Remarks

> [!NOTE]
> In [CSocket](../../mfc/reference/csocket-class.md), the `OnConnect` notification function is never called. For connections, you simply call `Connect`, which will return when the connection is completed (either successfully or in error). How connection notifications are handled is an MFC implementation detail.

For more information, see [Windows Sockets: Socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

### Example

[!code-cpp[NVC_MFCAsyncSocket#1](../../mfc/reference/codesnippet/cpp/casyncsocket-class_1.cpp)]

## <a name="onoutofbanddata"></a> CAsyncSocket::OnOutOfBandData

Called by the framework to notify the receiving socket that the sending socket has out-of-band data to send.

```
virtual void OnOutOfBandData(int nErrorCode);
```

### Parameters

*nErrorCode*<br/>
The most recent error on a socket. The following error codes apply to the `OnOutOfBandData` member function:

- **0** The function executed successfully.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

### Remarks

Out-of-band data is a logically independent channel that is associated with each pair of connected sockets of type SOCK_STREAM. The channel is generally used to send urgent data.

MFC supports out-of-band data, but users of class `CAsyncSocket` are discouraged from using it. The easier way is to create a second socket for passing such data. For more information about out-of-band data, see [Windows Sockets: Socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

## <a name="onreceive"></a> CAsyncSocket::OnReceive

Called by the framework to notify this socket that there is data in the buffer that can be retrieved by calling the `Receive` member function.

```
virtual void OnReceive(int nErrorCode);
```

### Parameters

*nErrorCode*<br/>
The most recent error on a socket. The following error codes apply to the `OnReceive` member function:

- **0** The function executed successfully.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

### Remarks

For more information, see [Windows Sockets: Socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

### Example

[!code-cpp[NVC_MFCAsyncSocket#2](../../mfc/reference/codesnippet/cpp/casyncsocket-class_2.cpp)]

## <a name="onsend"></a> CAsyncSocket::OnSend

Called by the framework to notify the socket that it can now send data by calling the `Send` member function.

```
virtual void OnSend(int nErrorCode);
```

### Parameters

*nErrorCode*<br/>
The most recent error on a socket. The following error codes apply to the `OnSend` member function:

- **0** The function executed successfully.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

### Remarks

For more information, see [Windows Sockets: Socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

### Example

[!code-cpp[NVC_MFCAsyncSocket#3](../../mfc/reference/codesnippet/cpp/casyncsocket-class_3.cpp)]

## <a name="operator_eq"></a> CAsyncSocket::operator =

Assigns a new value to a `CAsyncSocket` object.

```cpp
void operator=(const CAsyncSocket& rSrc);
```

### Parameters

*rSrc*<br/>
A reference to an existing `CAsyncSocket` object.

### Remarks

Call this function to copy an existing `CAsyncSocket` object to another `CAsyncSocket` object.

## <a name="operator_socket"></a> CAsyncSocket::operator SOCKET

Use this operator to retrieve the SOCKET handle of the `CAsyncSocket` object.

```
operator SOCKET() const;
```

### Return Value

If successful, the handle of the SOCKET object; otherwise, NULL.

### Remarks

You can use the handle to call Windows APIs directly.

## <a name="receive"></a> CAsyncSocket::Receive

Call this member function to receive data from a socket.

```
virtual int Receive(
    void* lpBuf,
    int nBufLen,
    int nFlags = 0);
```

### Parameters

*lpBuf*<br/>
A buffer for the incoming data.

*nBufLen*<br/>
The length of *lpBuf* in bytes.

*nFlags*<br/>
Specifies the way in which the call is made. The semantics of this function are determined by the socket options and the *nFlags* parameter. The latter is constructed by combining any of the following values with the C++ **OR** operator:

- MSG_PEEK Peek at the incoming data. The data is copied into the buffer but is not removed from the input queue.

- MSG_OOB Process out-of-band data.

### Return Value

If no error occurs, `Receive` returns the number of bytes received. If the connection has been closed, it returns 0. Otherwise, a value of SOCKET_ERROR is returned, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAENOTCONN The socket is not connected.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP MSG_OOB was specified, but the socket is not of type SOCK_STREAM.

- WSAESHUTDOWN The socket has been shut down; it is not possible to call `Receive` on a socket after `ShutDown` has been invoked with *nHow* set to 0 or 2.

- WSAEWOULDBLOCK The socket is marked as nonblocking and the `Receive` operation would block.

- WSAEMSGSIZE The datagram was too large to fit into the specified buffer and was truncated.

- WSAEINVAL The socket has not been bound with `Bind`.

- WSAECONNABORTED The virtual circuit was aborted due to timeout or other failure.

- WSAECONNRESET The virtual circuit was reset by the remote side.

### Remarks

This function is used for connected stream or datagram sockets and is used to read incoming data.

For sockets of type SOCK_STREAM, as much information as is currently available up to the size of the buffer supplied is returned. If the socket has been configured for in-line reception of out-of-band data (socket option SO_OOBINLINE) and out-of-band data is unread, only out-of-band data will be returned. The application can use the `IOCtlSIOCATMARK` option or [OnOutOfBandData](#onoutofbanddata) to determine whether any more out-of-band data remains to be read.

For datagram sockets, data is extracted from the first enqueued datagram, up to the size of the buffer supplied. If the datagram is larger than the buffer supplied, the buffer is filled with the first part of the datagram, the excess data is lost, and `Receive` returns a value of SOCKET_ERROR with the error code set to WSAEMSGSIZE. If no incoming data is available at the socket, a value of SOCKET_ERROR is returned with the error code set to WSAEWOULDBLOCK. The [OnReceive](#onreceive) callback function can be used to determine when more data arrives.

If the socket is of type SOCK_STREAM and the remote side has shut down the connection gracefully, a `Receive` will complete immediately with 0 bytes received. If the connection has been reset, a `Receive` will fail with the error WSAECONNRESET.

`Receive` should be called only once for each time [CAsyncSocket::OnReceive](#onreceive) is called.

### Example

  See the example for [CAsyncSocket::OnReceive](#onreceive).

## <a name="receivefrom"></a> CAsyncSocket::ReceiveFrom

Call this member function to receive a datagram and store the source address in the [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure or in *rSocketAddress*.

```
int ReceiveFrom(
    void* lpBuf,
    int nBufLen,
    CString& rSocketAddress,
    UINT& rSocketPort,
    int nFlags = 0);

int ReceiveFrom(
    void* lpBuf,
    int nBufLen,
    SOCKADDR* lpSockAddr,
    int* lpSockAddrLen,
    int nFlags = 0);
```

### Parameters

*lpBuf*<br/>
A buffer for the incoming data.

*nBufLen*<br/>
The length of *lpBuf* in bytes.

*rSocketAddress*<br/>
Reference to a `CString` object that receives a dotted number IP address.

*rSocketPort*<br/>
Reference to a UINT that stores a port.

*lpSockAddr*<br/>
A pointer to a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure that holds the source address upon return.

*lpSockAddrLen*<br/>
A pointer to the length of the source address in *lpSockAddr* in bytes.

*nFlags*<br/>
Specifies the way in which the call is made. The semantics of this function are determined by the socket options and the *nFlags* parameter. The latter is constructed by combining any of the following values with the C++ **OR** operator:

- MSG_PEEK Peek at the incoming data. The data is copied into the buffer but is not removed from the input queue.

- MSG_OOB Process out-of-band data.

### Return Value

If no error occurs, `ReceiveFrom` returns the number of bytes received. If the connection has been closed, it returns 0. Otherwise, a value of SOCKET_ERROR is returned, and a specific error code can be retrieved by calling `GetLastError`. The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpSockAddrLen* argument was invalid: the *lpSockAddr* buffer was too small to accommodate the peer address.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEINVAL The socket has not been bound with `Bind`.

- WSAENOTCONN The socket is not connected ( SOCK_STREAM only).

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP MSG_OOB was specified, but the socket is not of type SOCK_STREAM.

- WSAESHUTDOWN The socket has been shut down; it is not possible to call `ReceiveFrom` on a socket after `ShutDown` has been invoked with *nHow* set to 0 or 2.

- WSAEWOULDBLOCK The socket is marked as nonblocking and the `ReceiveFrom` operation would block.

- WSAEMSGSIZE The datagram was too large to fit into the specified buffer and was truncated.

- WSAECONNABORTED The virtual circuit was aborted due to timeout or other failure.

- WSAECONNRESET The virtual circuit was reset by the remote side.

### Remarks

This function is used to read incoming data on a (possibly connected) socket and capture the address from which the data was sent.

To handle IPv6 addresses, use [CAsyncSocket::ReceiveFromEx](#receivefromex).

For sockets of type SOCK_STREAM, as much information as is currently available up to the size of the buffer supplied is returned. If the socket has been configured for in-line reception of out-of-band data (socket option SO_OOBINLINE) and out-of-band data is unread, only out-of-band data will be returned. The application can use the `IOCtlSIOCATMARK` option or `OnOutOfBandData` to determine whether any more out-of-band data remains to be read. The *lpSockAddr* and *lpSockAddrLen* parameters are ignored for SOCK_STREAM sockets.

For datagram sockets, data is extracted from the first enqueued datagram, up to the size of the buffer supplied. If the datagram is larger than the buffer supplied, the buffer is filled with the first part of the message, the excess data is lost, and `ReceiveFrom` returns a value of SOCKET_ERROR with the error code set to WSAEMSGSIZE.

If *lpSockAddr* is nonzero, and the socket is of type SOCK_DGRAM, the network address of the socket which sent the data is copied to the corresponding [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure. The value pointed to by *lpSockAddrLen* is initialized to the size of this structure, and is modified on return to indicate the actual size of the address stored there. If no incoming data is available at the socket, the `ReceiveFrom` call waits for data to arrive unless the socket is nonblocking. In this case, a value of SOCKET_ERROR is returned with the error code set to WSAEWOULDBLOCK. The `OnReceive` callback can be used to determine when more data arrives.

If the socket is of type SOCK_STREAM and the remote side has shut down the connection gracefully, a `ReceiveFrom` will complete immediately with 0 bytes received.

## <a name="receivefromex"></a> CAsyncSocket::ReceiveFromEx

Call this member function to receive a datagram and store the source address in the [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure or in *rSocketAddress* (handles IPv6 addresses).

```
int ReceiveFromEx(
    void* lpBuf,
    int nBufLen,
    CString& rSocketAddress,
    UINT& rSocketPort,
    int nFlags = 0);
```

### Parameters

*lpBuf*<br/>
A buffer for the incoming data.

*nBufLen*<br/>
The length of *lpBuf* in bytes.

*rSocketAddress*<br/>
Reference to a `CString` object that receives a dotted number IP address.

*rSocketPort*<br/>
Reference to a UINT that stores a port.

*nFlags*<br/>
Specifies the way in which the call is made. The semantics of this function are determined by the socket options and the *nFlags* parameter. The latter is constructed by combining any of the following values with the C++ **OR** operator:

- MSG_PEEK Peek at the incoming data. The data is copied into the buffer but is not removed from the input queue.

- MSG_OOB Process out-of-band data.

### Return Value

If no error occurs, `ReceiveFromEx` returns the number of bytes received. If the connection has been closed, it returns 0. Otherwise, a value of SOCKET_ERROR is returned, and a specific error code can be retrieved by calling `GetLastError`. The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT The *lpSockAddrLen* argument was invalid: the *lpSockAddr* buffer was too small to accommodate the peer address.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEINVAL The socket has not been bound with `Bind`.

- WSAENOTCONN The socket is not connected ( SOCK_STREAM only).

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP MSG_OOB was specified, but the socket is not of type SOCK_STREAM.

- WSAESHUTDOWN The socket has been shut down; it is not possible to call `ReceiveFromEx` on a socket after `ShutDown` has been invoked with *nHow* set to 0 or 2.

- WSAEWOULDBLOCK The socket is marked as nonblocking and the `ReceiveFromEx` operation would block.

- WSAEMSGSIZE The datagram was too large to fit into the specified buffer and was truncated.

- WSAECONNABORTED The virtual circuit was aborted due to timeout or other failure.

- WSAECONNRESET The virtual circuit was reset by the remote side.

### Remarks

This function is used to read incoming data on a (possibly connected) socket and capture the address from which the data was sent.

This function is the same as [CAsyncSocket::ReceiveFrom](#receivefrom) except that it handles IPv6 addresses as well as older protocols.

For sockets of type SOCK_STREAM, as much information as is currently available up to the size of the buffer supplied is returned. If the socket has been configured for in-line reception of out-of-band data (socket option SO_OOBINLINE) and out-of-band data is unread, only out-of-band data will be returned. The application can use the `IOCtlSIOCATMARK` option or `OnOutOfBandData` to determine whether any more out-of-band data remains to be read. The *lpSockAddr* and *lpSockAddrLen* parameters are ignored for SOCK_STREAM sockets.

For datagram sockets, data is extracted from the first enqueued datagram, up to the size of the buffer supplied. If the datagram is larger than the buffer supplied, the buffer is filled with the first part of the message, the excess data is lost, and `ReceiveFromEx` returns a value of SOCKET_ERROR with the error code set to WSAEMSGSIZE.

If *lpSockAddr* is nonzero, and the socket is of type SOCK_DGRAM, the network address of the socket which sent the data is copied to the corresponding [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure. The value pointed to by *lpSockAddrLen* is initialized to the size of this structure, and is modified on return to indicate the actual size of the address stored there. If no incoming data is available at the socket, the `ReceiveFromEx` call waits for data to arrive unless the socket is nonblocking. In this case, a value of SOCKET_ERROR is returned with the error code set to WSAEWOULDBLOCK. The `OnReceive` callback can be used to determine when more data arrives.

If the socket is of type SOCK_STREAM and the remote side has shut down the connection gracefully, a `ReceiveFromEx` will complete immediately with 0 bytes received.

## <a name="send"></a> CAsyncSocket::Send

Call this member function to send data on a connected socket.

```
virtual int Send(
    const void* lpBuf,
    int nBufLen,
    int nFlags = 0);
```

### Parameters

*lpBuf*<br/>
A buffer containing the data to be transmitted.

*nBufLen*<br/>
The length of the data in *lpBuf* in bytes.

*nFlags*<br/>
Specifies the way in which the call is made. The semantics of this function are determined by the socket options and the *nFlags* parameter. The latter is constructed by combining any of the following values with the C++ **OR** operator:

- MSG_DONTROUTE Specifies that the data should not be subject to routing. A Windows Sockets supplier can choose to ignore this flag.

- MSG_OOB Send out-of-band data (SOCK_STREAM only).

### Return Value

If no error occurs, `Send` returns the total number of characters sent. (Note that this can be less than the number indicated by *nBufLen*.) Otherwise, a value of SOCKET_ERROR is returned, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEACCES The requested address is a broadcast address, but the appropriate flag was not set.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEFAULT The *lpBuf* argument is not in a valid part of the user address space.

- WSAENETRESET The connection must be reset because the Windows Sockets implementation dropped it.

- WSAENOBUFS The Windows Sockets implementation reports a buffer deadlock.

- WSAENOTCONN The socket is not connected.

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP MSG_OOB was specified, but the socket is not of type SOCK_STREAM.

- WSAESHUTDOWN The socket has been shut down; it is not possible to call `Send` on a socket after `ShutDown` has been invoked with *nHow* set to 1 or 2.

- WSAEWOULDBLOCK The socket is marked as nonblocking and the requested operation would block.

- WSAEMSGSIZE The socket is of type SOCK_DGRAM, and the datagram is larger than the maximum supported by the Windows Sockets implementation.

- WSAEINVAL The socket has not been bound with `Bind`.

- WSAECONNABORTED The virtual circuit was aborted due to timeout or other failure.

- WSAECONNRESET The virtual circuit was reset by the remote side.

### Remarks

`Send` is used to write outgoing data on connected stream or datagram sockets. For datagram sockets, care must be taken not to exceed the maximum IP packet size of the underlying subnets, which is given by the `iMaxUdpDg` element in the [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) structure returned by `AfxSocketInit`. If the data is too long to pass atomically through the underlying protocol, the error WSAEMSGSIZE is returned via `GetLastError`, and no data is transmitted.

Note that for a datagram socket the successful completion of a `Send` does not indicate that the data was successfully delivered.

On `CAsyncSocket` objects of type SOCK_STREAM, the number of bytes written can be between 1 and the requested length, depending on buffer availability on both the local and foreign hosts.

### Example

  See the example for [CAsyncSocket::OnSend](#onsend).

## <a name="sendto"></a> CAsyncSocket::SendTo

Call this member function to send data to a specific destination.

```
int SendTo(
    const void* lpBuf,
    int nBufLen,
    UINT nHostPort,
    LPCTSTR lpszHostAddress = NULL,
    int nFlags = 0);

int SendTo(
    const void* lpBuf,
    int nBufLen,
    const SOCKADDR* lpSockAddr,
    int nSockAddrLen,
    int nFlags = 0);
```

### Parameters

*lpBuf*<br/>
A buffer containing the data to be transmitted.

*nBufLen*<br/>
The length of the data in *lpBuf* in bytes.

*nHostPort*<br/>
The port identifying the socket application.

*lpszHostAddress*<br/>
The network address of the socket to which this object is connected: a machine name such as "ftp.microsoft.com," or a dotted number such as "128.56.22.8".

*nFlags*<br/>
Specifies the way in which the call is made. The semantics of this function are determined by the socket options and the *nFlags* parameter. The latter is constructed by combining any of the following values with the C++ **OR** operator:

- MSG_DONTROUTE Specifies that the data should not be subject to routing. A Windows Sockets supplier can choose to ignore this flag.

- MSG_OOB Send out-of-band data (SOCK_STREAM only).

*lpSockAddr*<br/>
A pointer to a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure that contains the address of the target socket.

*nSockAddrLen*<br/>
The length of the address in *lpSockAddr* in bytes.

### Return Value

If no error occurs, `SendTo` returns the total number of characters sent. (Note that this can be less than the number indicated by *nBufLen*.) Otherwise, a value of SOCKET_ERROR is returned, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEACCES The requested address is a broadcast address, but the appropriate flag was not set.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEFAULT The *lpBuf* or *lpSockAddr* parameters are not part of the user address space, or the *lpSockAddr* argument is too small (less than the size of a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure).

- WSAEINVAL The host name is invalid.

- WSAENETRESET The connection must be reset because the Windows Sockets implementation dropped it.

- WSAENOBUFS The Windows Sockets implementation reports a buffer deadlock.

- WSAENOTCONN The socket is not connected (SOCK_STREAM only).

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP MSG_OOB was specified, but the socket is not of type SOCK_STREAM.

- WSAESHUTDOWN The socket has been shut down; it is not possible to call `SendTo` on a socket after `ShutDown` has been invoked with *nHow* set to 1 or 2.

- WSAEWOULDBLOCK The socket is marked as nonblocking and the requested operation would block.

- WSAEMSGSIZE The socket is of type SOCK_DGRAM, and the datagram is larger than the maximum supported by the Windows Sockets implementation.

- WSAECONNABORTED The virtual circuit was aborted due to timeout or other failure.

- WSAECONNRESET The virtual circuit was reset by the remote side.

- WSAEADDRNOTAVAIL The specified address is not available from the local machine.

- WSAEAFNOSUPPORT Addresses in the specified family cannot be used with this socket.

- WSAEDESTADDRREQ A destination address is required.

- WSAENETUNREACH The network cannot be reached from this host at this time.

### Remarks

`SendTo` is used on datagram or stream sockets and is used to write outgoing data on a socket. For datagram sockets, care must be taken not to exceed the maximum IP packet size of the underlying subnets, which is given by the `iMaxUdpDg` element in the [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) structure filled out by [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). If the data is too long to pass atomically through the underlying protocol, the error WSAEMSGSIZE is returned, and no data is transmitted.

Note that the successful completion of a `SendTo` does not indicate that the data was successfully delivered.

`SendTo` is only used on a SOCK_DGRAM socket to send a datagram to a specific socket identified by the *lpSockAddr* parameter.

To send a broadcast (on a SOCK_DGRAM only), the address in the *lpSockAddr* parameter should be constructed using the special IP address INADDR_BROADCAST (defined in the Windows Sockets header file WINSOCK.H) together with the intended port number. Or, if the *lpszHostAddress* parameter is NULL, the socket is configured for broadcast. It is generally inadvisable for a broadcast datagram to exceed the size at which fragmentation can occur, which implies that the data portion of the datagram (excluding headers) should not exceed 512 bytes.

To handle IPv6 addresses, use [CAsyncSocket::SendToEx](#sendtoex).

## <a name="sendtoex"></a> CAsyncSocket::SendToEx

Call this member function to send data to a specific destination (handles IPv6 addresses).

```
int SendToEx(
    const void* lpBuf,
    int nBufLen,
    UINT nHostPort,
    LPCTSTR lpszHostAddress = NULL,
    int nFlags = 0);
```

### Parameters

*lpBuf*<br/>
A buffer containing the data to be transmitted.

*nBufLen*<br/>
The length of the data in *lpBuf* in bytes.

*nHostPort*<br/>
The port identifying the socket application.

*lpszHostAddress*<br/>
The network address of the socket to which this object is connected: a machine name such as "ftp.microsoft.com," or a dotted number such as "128.56.22.8".

*nFlags*<br/>
Specifies the way in which the call is made. The semantics of this function are determined by the socket options and the *nFlags* parameter. The latter is constructed by combining any of the following values with the C++ **OR** operator:

- MSG_DONTROUTE Specifies that the data should not be subject to routing. A Windows Sockets supplier can choose to ignore this flag.

- MSG_OOB Send out-of-band data (SOCK_STREAM only).

### Return Value

If no error occurs, `SendToEx` returns the total number of characters sent. (Note that this can be less than the number indicated by *nBufLen*.) Otherwise, a value of SOCKET_ERROR is returned, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEACCES The requested address is a broadcast address, but the appropriate flag was not set.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEFAULT The *lpBuf* or *lpSockAddr* parameters are not part of the user address space, or the *lpSockAddr* argument is too small (less than the size of a [SOCKADDR](/windows/win32/winsock/sockaddr-2) structure).

- WSAEINVAL The host name is invalid.

- WSAENETRESET The connection must be reset because the Windows Sockets implementation dropped it.

- WSAENOBUFS The Windows Sockets implementation reports a buffer deadlock.

- WSAENOTCONN The socket is not connected (SOCK_STREAM only).

- WSAENOTSOCK The descriptor is not a socket.

- WSAEOPNOTSUPP MSG_OOB was specified, but the socket is not of type SOCK_STREAM.

- WSAESHUTDOWN The socket has been shut down; it is not possible to call `SendToEx` on a socket after `ShutDown` has been invoked with *nHow* set to 1 or 2.

- WSAEWOULDBLOCK The socket is marked as nonblocking and the requested operation would block.

- WSAEMSGSIZE The socket is of type SOCK_DGRAM, and the datagram is larger than the maximum supported by the Windows Sockets implementation.

- WSAECONNABORTED The virtual circuit was aborted due to timeout or other failure.

- WSAECONNRESET The virtual circuit was reset by the remote side.

- WSAEADDRNOTAVAIL The specified address is not available from the local machine.

- WSAEAFNOSUPPORT Addresses in the specified family cannot be used with this socket.

- WSAEDESTADDRREQ A destination address is required.

- WSAENETUNREACH The network cannot be reached from this host at this time.

### Remarks

This method is the same as [CAsyncSocket::SendTo](#sendto) except that it handles IPv6 addresses as well as older protocols.

`SendToEx` is used on datagram or stream sockets and is used to write outgoing data on a socket. For datagram sockets, care must be taken not to exceed the maximum IP packet size of the underlying subnets, which is given by the `iMaxUdpDg` element in the [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) structure filled out by [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). If the data is too long to pass atomically through the underlying protocol, the error WSAEMSGSIZE is returned, and no data is transmitted.

Note that the successful completion of a `SendToEx` does not indicate that the data was successfully delivered.

`SendToEx` is only used on a SOCK_DGRAM socket to send a datagram to a specific socket identified by the *lpSockAddr* parameter.

To send a broadcast (on a SOCK_DGRAM only), the address in the *lpSockAddr* parameter should be constructed using the special IP address INADDR_BROADCAST (defined in the Windows Sockets header file WINSOCK.H) together with the intended port number. Or, if the *lpszHostAddress* parameter is NULL, the socket is configured for broadcast. It is generally inadvisable for a broadcast datagram to exceed the size at which fragmentation can occur, which implies that the data portion of the datagram (excluding headers) should not exceed 512 bytes.

## <a name="setsockopt"></a> CAsyncSocket::SetSockOpt

Call this member function to set a socket option.

```
BOOL SetSockOpt(
    int nOptionName,
    const void* lpOptionValue,
    int nOptionLen,
    int nLevel = SOL_SOCKET);
```

### Parameters

*nOptionName*<br/>
The socket option for which the value is to be set.

*lpOptionValue*<br/>
A pointer to the buffer in which the value for the requested option is supplied.

*nOptionLen*<br/>
The size of the *lpOptionValue* buffer in bytes.

*nLevel*<br/>
The level at which the option is defined; the only supported levels are SOL_SOCKET and IPPROTO_TCP.

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEFAULT *lpOptionValue* is not in a valid part of the process address space.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAEINVAL *nLevel* is not valid, or the information in *lpOptionValue* is not valid.

- WSAENETRESET Connection has timed out when SO_KEEPALIVE is set.

- WSAENOPROTOOPT The option is unknown or unsupported. In particular, SO_BROADCAST is not supported on sockets of type SOCK_STREAM, while SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER, and SO_OOBINLINE are not supported on sockets of type SOCK_DGRAM.

- WSAENOTCONN Connection has been reset when SO_KEEPALIVE is set.

- WSAENOTSOCK The descriptor is not a socket.

### Remarks

`SetSockOpt` sets the current value for a socket option associated with a socket of any type, in any state. Although options can exist at multiple protocol levels, this specification only defines options that exist at the uppermost "socket" level. Options affect socket operations, such as whether expedited data is received in the normal data stream, whether broadcast messages can be sent on the socket, and so on.

There are two types of socket options: Boolean options that enable or disable a feature or behavior, and options which require an integer value or structure. To enable a Boolean option, *lpOptionValue* points to a nonzero integer. To disable the option *lpOptionValue* points to an integer equal to zero. *nOptionLen* should be equal to `sizeof(BOOL)` for Boolean options. For other options, *lpOptionValue* points to the integer or structure that contains the desired value for the option, and *nOptionLen* is the length of the integer or structure.

SO_LINGER controls the action taken when unsent data is queued on a socket and the `Close` function is called to close the socket.

By default, a socket cannot be bound (see [Bind](#bind)) to a local address which is already in use. On occasion, however, it may be desirable to "reuse" an address in this way. Since every connection is uniquely identified by the combination of local and remote addresses, there is no problem with having two sockets bound to the same local address as long as the remote addresses are different.

To inform the Windows Sockets implementation that a `Bind` call on a socket should not be disallowed because the desired address is already in use by another socket, the application should set the SO_REUSEADDR socket option for the socket before issuing the `Bind` call. Note that the option is interpreted only at the time of the `Bind` call: it is therefore unnecessary (but harmless) to set the option on a socket which is not to be bound to an existing address, and setting or resetting the option after the `Bind` call has no effect on this or any other socket.

An application can request that the Windows Sockets implementation enable the use of "keep-alive" packets on Transmission Control Protocol (TCP) connections by turning on the SO_KEEPALIVE socket option. A Windows Sockets implementation need not support the use of keep-alives: if it does, the precise semantics are implementation-specific but should conform to section 4.2.3.6 of RFC 1122: "Requirements for Internet Hosts — Communication Layers." If a connection is dropped as the result of "keep-alives" the error code WSAENETRESET is returned to any calls in progress on the socket, and any subsequent calls will fail with WSAENOTCONN.

The TCP_NODELAY option disables the Nagle algorithm. The Nagle algorithm is used to reduce the number of small packets sent by a host by buffering unacknowledged send data until a full-size packet can be sent. However, for some applications this algorithm can impede performance, and TCP_NODELAY can be used to turn it off. Application writers should not set TCP_NODELAY unless the impact of doing so is well-understood and desired, since setting TCP_NODELAY can have a significant negative impact on network performance. TCP_NODELAY is the only supported socket option which uses level IPPROTO_TCP; all other options use level SOL_SOCKET.

Some implementations of Windows Sockets supply output debug information if the SO_DEBUG option is set by an application.

The following options are supported for `SetSockOpt`. The Type identifies the type of data addressed by *lpOptionValue*.

|Value|Type|Meaning|
|-----------|----------|-------------|
|SO_BROADCAST|BOOL|Allow transmission of broadcast messages on the socket.|
|SO_DEBUG|BOOL|Record debugging information.|
|SO_DONTLINGER|BOOL|Don't block `Close` waiting for unsent data to be sent. Setting this option is equivalent to setting SO_LINGER with `l_onoff` set to zero.|
|SO_DONTROUTE|BOOL|Don't route: send directly to interface.|
|SO_KEEPALIVE|BOOL|Send keep-alives.|
|SO_LINGER|`struct LINGER`|Linger on `Close` if unsent data is present.|
|SO_OOBINLINE|BOOL|Receive out-of-band data in the normal data stream.|
|SO_RCVBUF|**`int`**|Specify buffer size for receives.|
|SO_REUSEADDR|BOOL|Allow the socket to be bound to an address which is already in use. (See [Bind](#bind).)|
|SO_SNDBUF|**`int`**|Specify buffer size for sends.|
|TCP_NODELAY|BOOL|Disables the Nagle algorithm for send coalescing.|

Berkeley Software Distribution (BSD) options not supported for `SetSockOpt` are:

|Value|Type|Meaning|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Socket is listening|
|SO_ERROR|**`int`**|Get error status and clear.|
|SO_RCVLOWAT|**`int`**|Receive low water mark.|
|SO_RCVTIMEO|**`int`**|Receive timeout|
|SO_SNDLOWAT|**`int`**|Send low water mark.|
|SO_SNDTIMEO|**`int`**|Send timeout.|
|SO_TYPE|**`int`**|Type of the socket.|
|IP_OPTIONS||Set options field in IP header.|

## <a name="shutdown"></a> CAsyncSocket::ShutDown

Call this member function to disable sends, receives, or both on the socket.

```
BOOL ShutDown(int nHow = sends);
```

### Parameters

*nHow*<br/>
A flag that describes what types of operation will no longer be allowed, using the following enumerated values:

- **receives = 0**

- **sends = 1**

- **both = 2**

### Return Value

Nonzero if the function is successful; otherwise 0, and a specific error code can be retrieved by calling [GetLastError](#getlasterror). The following errors apply to this member function:

- WSANOTINITIALISED A successful [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) must occur before using this API.

- WSAENETDOWN The Windows Sockets implementation detected that the network subsystem failed.

- WSAEINVAL *nHow* is not valid.

- WSAEINPROGRESS A blocking Windows Sockets operation is in progress.

- WSAENOTCONN The socket is not connected (SOCK_STREAM only).

- WSAENOTSOCK The descriptor is not a socket.

### Remarks

`ShutDown` is used on all types of sockets to disable reception, transmission, or both. If *nHow* is 0, subsequent receives on the socket will be disallowed. This has no effect on the lower protocol layers.

For Transmission Control Protocol (TCP), the TCP window is not changed and incoming data will be accepted (but not acknowledged) until the window is exhausted. For User Datagram Protocol (UDP), incoming datagrams are accepted and queued. In no case will an ICMP error packet be generated. If *nHow* is 1, subsequent sends are disallowed. For TCP sockets, a FIN will be sent. Setting *nHow* to 2 disables both sends and receives as described above.

Note that `ShutDown` does not close the socket, and resources attached to the socket will not be freed until `Close` is called. An application should not rely on being able to reuse a socket after it has been shut down. In particular, a Windows Sockets implementation is not required to support the use of `Connect` on such a socket.

### Example

  See the example for [CAsyncSocket::OnReceive](#onreceive).

## <a name="socket"></a> CASyncSocket::Socket

Allocates a socket handle.

```
BOOL Socket(
    int nSocketType = SOCK_STREAM,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,
    int nProtocolType = 0,
    int nAddressFormat = PF_INET);
```

### Parameters

*nSocketType*<br/>
Specifies `SOCK_STREAM` or `SOCK_DGRAM`.

*lEvent*<br/>
A bitmask that specifies a combination of network events in which the application is interested.

- `FD_READ`: Want to receive notification of readiness for reading.

- `FD_WRITE`: Want to receive notification of readiness for writing.

- `FD_OOB`: Want to receive notification of the arrival of out-of-band data.

- `FD_ACCEPT`: Want to receive notification of incoming connections.

- `FD_CONNECT`: Want to receive notification of completed connection.

- `FD_CLOSE`: Want to receive notification of socket closure.

*nProtocolType*<br/>
Protocol to be used with the socket that is specific to the indicated address family.

*nAddressFormat*<br/>
Address family specification.

### Return Value

Returns `TRUE` on success, `FALSE` on failure.

### Remarks

This method allocates a socket handle. It does not call [CAsyncSocket::Bind](#bind) to bind the socket to a specified address, so you need to call `Bind` later to bind the socket to a specified address. You can use [CAsyncSocket::SetSockOpt](#setsockopt) to set the socket option before it is bound.

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CSocket Class](../../mfc/reference/csocket-class.md)<br/>
[CSocketFile Class](../../mfc/reference/csocketfile-class.md)
