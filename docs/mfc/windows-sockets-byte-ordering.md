---
description: "Learn more about: Windows Sockets: Byte Ordering"
title: "Windows Sockets: Byte Ordering"
ms.date: "11/04/2016"
helpviewer_keywords: ["byte order issues in sockets programming", "sockets [MFC], byte order issues", "Windows Sockets [MFC], byte order issues"]
ms.assetid: 8a787a65-f9f4-4002-a02f-ac25a5dace5d
---
# Windows Sockets: Byte Ordering

This article and two companion articles explain several issues in Windows Sockets programming. This article covers byte ordering. The other issues are covered in the articles: [Windows Sockets: Blocking](../mfc/windows-sockets-blocking.md) and [Windows Sockets: Converting Strings](../mfc/windows-sockets-converting-strings.md).

If you use or derive from class [CAsyncSocket](../mfc/reference/casyncsocket-class.md), you will need to manage these issues yourself. If you use or derive from class [CSocket](../mfc/reference/csocket-class.md), MFC manages them for you.

## Byte Ordering

Different machine architectures sometimes store data using different byte orders. For example, Intel-based machines store data in the reverse order of Macintosh (Motorola) machines. The Intel byte order, called "little-Endian," is also the reverse of the network standard "big-Endian" order. The following table explains these terms.

### Big- and Little-Endian Byte Ordering

|Byte ordering|Meaning|
|-------------------|-------------|
|Big-Endian|The most significant byte is on the left end of a word.|
|Little-Endian|The most significant byte is on the right end of a word.|

Typically, you do not have to worry about byte-order conversion for data that you send and receive over the network, but there are situations in which you must convert byte orders.

## When You Must Convert Byte Orders

You need to convert byte orders in the following situations:

- You are passing information that needs to be interpreted by the network, as opposed to the data you are sending to another machine. For example, you might pass ports and addresses, which the network must understand.

- The server application with which you are communicating is not an MFC application (and you do not have source code for it). This calls for byte order conversions if the two machines do not share the same byte ordering.

## When You Do Not Have to Convert Byte Orders

You can avoid the work of converting byte orders in the following situations:

- The machines on both ends can agree not to swap bytes, and both machines use the same byte order.

- The server you are communicating with is an MFC application.

- You have source code for the server you're communicating with, so you can tell explicitly whether you must convert byte orders or not.

- You can port the server to MFC. This is fairly easy to do, and the result is usually smaller, faster code.

Working with [CAsyncSocket](../mfc/reference/casyncsocket-class.md), you must manage any necessary byte-order conversions yourself. Windows Sockets standardizes the "big-Endian" byte-order model and provides functions to convert between this order and others. [CArchive](../mfc/reference/carchive-class.md), however, which you use with [CSocket](../mfc/reference/csocket-class.md), uses the opposite ("little-Endian") order, but `CArchive` takes care of the details of byte-order conversions for you. By using this standard ordering in your applications, or using Windows Sockets byte-order conversion functions, you can make your code more portable.

The ideal case for using MFC sockets is when you are writing both ends of the communication: using MFC at both ends. If you are writing an application that will communicate with non-MFC applications, such as an FTP server, you will probably need to manage byte-swapping yourself before you pass data to the archive object, using the Windows Sockets conversion routines **ntohs**, **ntohl**, **htons**, and **htonl**. An example of these functions used in communicating with a non-MFC application appears later in this article.

> [!NOTE]
> When the other end of the communication is not an MFC application, you also must avoid streaming C++ objects derived from `CObject` into your archive because the receiver will not be able to handle them. See the note in [Windows Sockets: Using Sockets with Archives](../mfc/windows-sockets-using-sockets-with-archives.md).

For more information about byte orders, see the Windows Sockets specification, available in the Windows SDK.

## A Byte-Order Conversion Example

The following example shows a serialization function for a `CSocket` object that uses an archive. It also illustrates using the byte-order conversion functions in the Windows Sockets API.

This example presents a scenario in which you are writing a client that communicates with a non-MFC server application for which you have no access to the source code. In this scenario, you must assume that the non-MFC server uses standard network byte order. In contrast, your MFC client application uses a `CArchive` object with a `CSocket` object, and `CArchive` uses "little-Endian" byte order, the opposite of the network standard.

Suppose the non-MFC server with which you plan to communicate has an established protocol for a message packet like the following:

[!code-cpp[NVC_MFCSimpleSocket#5](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_1.cpp)]

In MFC terms, this would be expressed as follows:

[!code-cpp[NVC_MFCSimpleSocket#6](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_2.cpp)]

In C++, a **`struct`** is essentially the same thing as a class. The `Message` structure can have member functions, such as the `Serialize` member function declared above. The `Serialize` member function might look like this:

[!code-cpp[NVC_MFCSimpleSocket#7](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_3.cpp)]

This example calls for byte-order conversions of data because there is a clear mismatch between the byte ordering of the non-MFC server application on one end and the `CArchive` used in your MFC client application on the other end. The example illustrates several of the byte-order conversion functions that Windows Sockets supplies. The following table describes these functions.

### Windows Sockets Byte-Order Conversion Functions

|Function|Purpose|
|--------------|-------------|
|**ntohs**|Convert a 16-bit quantity from network byte order to host byte order (big-Endian to little-Endian).|
|**ntohl**|Convert a 32-bit quantity from network byte order to host byte order (big-Endian to little-Endian).|
|**Htons**|Convert a 16-bit quantity from host byte order to network byte order (little-Endian to big-Endian).|
|**Htonl**|Convert a 32-bit quantity from host byte order to network byte order (little-Endian to big-Endian).|

Another point of this example is that when the socket application on the other end of the communication is a non-MFC application, you must avoid doing something like the following:

`ar << pMsg;`

where `pMsg` is a pointer to a C++ object derived from class `CObject`. This will send extra MFC information associated with objects and the server will not understand it, as it would if it were an MFC application.

For more information, see:

- [Windows Sockets: Using Class CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Background](../mfc/windows-sockets-background.md)

- [Windows Sockets: Stream Sockets](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: Datagram Sockets](../mfc/windows-sockets-datagram-sockets.md)

## See also

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
