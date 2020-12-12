---
description: "Learn more about: Windows Sockets: Datagram Sockets"
title: "Windows Sockets: Datagram Sockets"
ms.date: "11/04/2016"
helpviewer_keywords: ["sockets [MFC], datagram", "Windows Sockets [MFC], bi-directional data flow", "datagram sockets [MFC]", "Windows Sockets [MFC], datagram", "sockets [MFC], bi-directional data flow"]
ms.assetid: bec16a1c-74c0-4ff9-8c18-c2d87897d264
---
# Windows Sockets: Datagram Sockets

This article describes datagram sockets, one of the two Windows Socket types available. (The other type is the [stream socket](../mfc/windows-sockets-stream-sockets.md).)

Datagram sockets support a bidirectional data flow that is not guaranteed to be sequenced or unduplicated. Datagrams also are not guaranteed to be reliable; they can fail to arrive. Datagram data may arrive out of order and possibly duplicated, but record boundaries in the data are preserved, as long as the records are smaller than the receiver's internal size limit. You are responsible for managing sequencing and reliability. (Reliability tends to be good on local-area networks [LAN] but less so on wide-area networks [WAN], such as the Internet.)

Datagrams are "connectionless", that is, no explicit connection is established; you send a datagram message to a specified socket and you can receive messages from a specified socket.

An example of a datagram socket is an application that keeps system clocks on the network synchronized. This illustrates an additional capability of datagram sockets in at least some settings: broadcasting messages to a large number of network addresses.

Datagram sockets are better than stream sockets for record-oriented data. For more information about datagram sockets, see the Windows Sockets specification, available in the Windows SDK.

## See also

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[Windows Sockets: Background](../mfc/windows-sockets-background.md)
