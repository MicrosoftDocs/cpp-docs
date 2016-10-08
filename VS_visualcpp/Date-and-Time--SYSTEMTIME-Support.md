---
title: "Date and Time: SYSTEMTIME Support"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 201528e4-2ffa-48fc-af8f-203aa86d942a
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Date and Time: SYSTEMTIME Support
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The <legacyLink xlink:href="0A299544-485B-48DC-9D3C-FDC30F57D612">CTime</legacyLink> class has constructors that accept system and file times from Win32. If you use <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> objects for these purposes, you must modify their initialization accordingly, as described in this article.</para>
    <para>For information about the SYSTEMTIME structure, see <legacyLink xlink:href="9aaef4d6-de79-4fa1-8158-86b245ef5bff">SYSTEMTIME</legacyLink>. For information about the FILETIME structure, see FILETIME.</para>
    <para>MFC still provides <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> constructors that take time arguments in the MS-DOS style, but, starting in MFC version 3.0, the <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> class also supports a constructor that takes a Win32 <unmanagedCodeEntityReference>SYSTEMTIME</unmanagedCodeEntityReference> structure and another that takes a Win32 <unmanagedCodeEntityReference>FILETIME</unmanagedCodeEntityReference> structure.</para>
    <para>The new <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> constructors are:  </para>
    <list class="bullet">
      <listItem>
        <para>CTime(const SYSTEMTIME&amp; <parameterReference>sysTime</parameterReference>);</para>
      </listItem>
      <listItem>
        <para>CTime(const FILETIME&amp; <parameterReference>fileTime</parameterReference>);</para>
      </listItem>
    </list>
    <para>The <parameterReference>fileTime</parameterReference> parameter is a reference to a Win32 <unmanagedCodeEntityReference>FILETIME</unmanagedCodeEntityReference> structure, which represents time as a 64-bit value, a more convenient format for internal storage than a <unmanagedCodeEntityReference>SYSTEMTIME</unmanagedCodeEntityReference> structure and the format used by Win32 to represent the time of file creation.</para>
    <para>If your code contains a <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object initialized with the system time, you should use the <unmanagedCodeEntityReference>SYSTEMTIME</unmanagedCodeEntityReference> constructor in Win32.</para>
    <para>You most likely will not use <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> <unmanagedCodeEntityReference>FILETIME</unmanagedCodeEntityReference> initialization directly. If you use a <unmanagedCodeEntityReference>CFile</unmanagedCodeEntityReference> object to manipulate a file, <legacyLink xlink:href="1B0D6BBF-8468-4801-8953-292F099FDE68">CFile::GetStatus</legacyLink> retrieves the file timestamp for you via a <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object initialized with a <unmanagedCodeEntityReference>FILETIME</unmanagedCodeEntityReference> structure.</para>
  </introduction>
  <section>
    <title>What do you want to know more about?</title>
    <content>
      <list class="bullet">
        <listItem>
          <para>
            <legacyLink xlink:href="ECF56DC5-D418-4603-AD3E-AF7E205A6403">General date and time programming in MFC</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="6EEE94C4-943D-4FFC-BF7C-BDDA89337AB0">Automation support of date and time programming</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="B8115D7F-428A-4C41-9970-18502F2CACA2">General-purpose classes for date and time programming</legacyLink>
          </para>
        </listItem>
      </list>
    </content>
  </section>
  <relatedTopics>
<link xlink:href="ECF56DC5-D418-4603-AD3E-AF7E205A6403">Date and Time</link>
</relatedTopics>
</developerConceptualDocument>

