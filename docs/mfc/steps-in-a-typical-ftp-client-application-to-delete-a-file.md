---
description: "Learn more about: Steps in a Typical FTP Client Application to Delete a File"
title: "Steps in a Typical FTP Client Application to Delete a File"
ms.date: "11/04/2016"
helpviewer_keywords: ["Internet client applications [MFC], FTP delete", "WinInet classes [MFC], FTP", "FTP (File Transfer Protocol) [MFC], client applications", "Internet applications [MFC], FTP client applications"]
ms.assetid: 2c347a96-c0a4-4827-98fe-668406e552bc
---
# Steps in a Typical FTP Client Application to Delete a File

The following table shows the steps you might perform in a typical FTP client application that deletes a file.

|Your goal|Actions you take|Effects|
|---------------|----------------------|-------------|
|Begin an FTP session.|Create a [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Initializes WinInet and connects to server.|
|Connect to an FTP server.|Use [CInternetSession::GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection).|Returns a [CFtpConnection](../mfc/reference/cftpconnection-class.md) object.|
|Check to make sure you're in the right directory on the FTP server.|Use [CFtpConnection::GetCurrentDirectory](../mfc/reference/cftpconnection-class.md#getcurrentdirectory) or [CFtpConnection::GetCurrentDirectoryAsURL](../mfc/reference/cftpconnection-class.md#getcurrentdirectoryasurl).|Returns the name or URL of the directory you are currently connected to on the server, depending on the member function selected.|
|Change to a new FTP directory on the server.|Use [CFtpConnection::SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|Changes the directory you are currently connected to on the server.|
|Find the first file in the FTP directory.|Use [CFtpFileFind::FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|Finds the first file. Returns FALSE if no files are found.|
|Find the next file in the FTP directory.|Use [CFtpFileFind::FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Finds the next file. Returns FALSE if the file is not found.|
|Delete the file found by `FindFile` or `FindNextFile`.|Use [CFtpConnection::Remove](../mfc/reference/cftpconnection-class.md#remove), using the file name returned by `FindFile` or `FindNextFile`.|Deletes the file on the server for reading or writing.|
|Handle exceptions.|Use the [CInternetException](../mfc/reference/cinternetexception-class.md) class.|Handles all common Internet exception types.|
|End the FTP session.|Dispose of the [CInternetSession](../mfc/reference/cinternetsession-class.md) object.|Automatically cleans up open file handles and connections.|

## See also

[Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
