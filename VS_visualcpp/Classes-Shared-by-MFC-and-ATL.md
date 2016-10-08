---
title: "Classes Shared by MFC and ATL"
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
ms.assetid: ca8b4b6b-744d-430b-b31f-d5b2f17bf210
caps.latest.revision: 6
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
# Classes Shared by MFC and ATL
<?xml version="1.0" encoding="utf-8"?>
<developerOrientationDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The following table lists the classes shared between MFC and ATL.</para>
    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
      <thead>
        <tr>
          <TD>
            <para>Class</para>
          </TD>
          <TD>
            <para>Description</para>
          </TD>
          <TD>
            <para>Header file</para>
          </TD>
        </tr>
      </thead>
      <tbody>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="1A358A65-1383-4124-B0D4-59B026E6860F">CFileTime</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Provides methods for managing the date and time values associated with a file.</para>
          </TD>
          <TD>
            <para>atltime.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="5856FB39-9C82-4027-8CCF-8760890491EC">CFileTimeSpan</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Provides methods for managing relative date and time values associated with a file.</para>
          </TD>
          <TD>
            <para>atltime.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="6D4171BA-3104-493A-A6CC-D515F4BA9A4B">CFixedStringT</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Represents a string object with a fixed character buffer.</para>
          </TD>
          <TD>
            <para>cstringt.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="52861E3D-BF7E-481F-A240-90E88F76C490">CImage</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Provides enhanced bitmap support, including the ability to load and save images in JPEG, GIF, BMP, and Portable Network Graphics (PNG) formats. </para>
          </TD>
          <TD>
            <para>atlimage.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="E718F294-16EC-4649-88B6-A4DBAE5178FB">COleDateTime</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Encapsulates the <legacyBold>DATE</legacyBold> data type used in OLE automation.</para>
          </TD>
          <TD>
            <para>atlcomtime.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="7441526D-A30A-4019-8FB3-3FEE6F897CBE">COleDateTimeSpan</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Represents a relative time, a time span. </para>
          </TD>
          <TD>
            <para>atlcomtime.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="A6D4DB93-35CC-444D-9221-C3E160F6EDAA">CPoint</legacyLink>
            </para>
          </TD>
          <TD>
            <para>A class similar to the Windows <legacyLink xlink:href="965736D8-4E53-41B6-9B8B-6961992DD21F">POINT</legacyLink> structure that also includes member functions to manipulate <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> and <legacyBold>POINT</legacyBold> structures. </para>
          </TD>
          <TD>
            <para>atltypes.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="DEE4E752-15D6-4DB4-B68F-1AD65B2ED6CA">CRect</legacyLink>
            </para>
          </TD>
          <TD>
            <para>A class similar to a Windows <legacyLink xlink:href="1B3160DE-64E9-40D1-89EB-AF3E0FD6ACF0">RECT</legacyLink> structure that also includes member functions to manipulate <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> objects and Windows <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structures.</para>
          </TD>
          <TD>
            <para>atltypes.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="15814FCB-5B8F-4425-A97E-3B61FC9B48D8">CSimpleStringT</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Represents a <unmanagedCodeEntityReference>CSimpleStringT</unmanagedCodeEntityReference> object.</para>
          </TD>
          <TD>
            <para>atlsimpstr.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="FB2CF85A-0BC1-46F8-892B-309C108B52AE">CSize</legacyLink>
            </para>
          </TD>
          <TD>
            <para>A class similar to the Windows SIZE structure, which implements a relative coordinate or position. </para>
          </TD>
          <TD>
            <para>atltypes.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="6B50FA8F-87E8-4ED4-A229-157CE128710F">CStrBufT</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Provides automatic resource cleanup for <unmanagedCodeEntityReference>GetBuffer</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ReleaseBuffer</unmanagedCodeEntityReference> calls on a existing <unmanagedCodeEntityReference>CStringT</unmanagedCodeEntityReference> object.</para>
          </TD>
          <TD>
            <para>atlsimpstr.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="4E31B5CA-3DBE-4FD5-B692-8211FBFB2593">CStringData</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Represents the data of a string object.</para>
          </TD>
          <TD>
            <para>atlsimpstr.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="7CACC59C-425F-40F1-8F5B-6DB921318EC9">CStringT</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Represents a <unmanagedCodeEntityReference>CStringT</unmanagedCodeEntityReference> object.</para>
          </TD>
          <TD>
            <para>cstringt.h (MFC dependent) atlstr.h (MFC independent)</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="0A299544-485B-48DC-9D3C-FDC30F57D612">CTime</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Represents an absolute time and date.</para>
          </TD>
          <TD>
            <para>atltime.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="EE1E42F6-1839-477A-8435-FB26AD475140">CTimeSpan</legacyLink>
            </para>
          </TD>
          <TD>
            <para>An amount of time, which is internally stored as the number of seconds in the time span. </para>
          </TD>
          <TD>
            <para>atltime.h</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <legacyLink xlink:href="722F0346-A770-4AA7-8F94-177BE8DBA823">IAtlStringMgr</legacyLink>
            </para>
          </TD>
          <TD>
            <para>Represents the interface to a <unmanagedCodeEntityReference>CStringT</unmanagedCodeEntityReference> memory manager.</para>
          </TD>
          <TD>
            <para>atlsimpstr.h</para>
          </TD>
        </tr>
      </tbody>
    </table>
  </introduction>
  <relatedTopics>
<link xlink:href="E13AAAC3-21EC-4F4D-8834-432B40FDE544">Shared Classes</link>
</relatedTopics>
</developerOrientationDocument>

