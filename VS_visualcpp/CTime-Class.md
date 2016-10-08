---
title: "CTime Class"
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
ms.assetid: 0a299544-485b-48dc-9d3c-fdc30f57d612
caps.latest.revision: 23
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
# CTime Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Represents an absolute time and date.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CTime</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__ctime">CTime::CTime</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> objects in various ways.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__format">CTime::Format</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts a                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object into a formatted string — based on the local time zone.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__formatgmt">CTime::FormatGmt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts a                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object into a formatted string — based on UTC.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getasdbtimestamp">CTime::GetAsDBTIMESTAMP</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts the time information stored in the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object to a Win32-compatible                                         <codeEntityReference autoUpgrade="true">F:System.Data.OleDb.OleDbType.DBTimeStamp</codeEntityReference> structure.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getassystemtime">CTime::GetAsSystemTime</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts the time information stored in the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object to a Win32-compatible                                         <externalLink>                                            <linkText>SYSTEMTIME</linkText>
                                            <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms724950</linkUri>
                                        </externalLink> structure.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getcurrenttime">CTime::GetCurrentTime</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object that represents the current time (static member function).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getday">CTime::GetDay</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the day represent by the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getdayofweek">CTime::GetDayOfWeek</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the day of the week represented by the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getgmttm">CTime::GetGmtTm</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Breaks down a                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object into components — based on UTC.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__gethour">CTime::GetHour</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the hour represented by the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getlocaltm">CTime::GetLocalTm</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Breaks down a                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object into components — based on the local time zone.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getminute">CTime::GetMinute</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the minute represented by the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getmonth">CTime::GetMonth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the month represented by the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getsecond">CTime::GetSecond</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the second represented by the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__gettime">CTime::GetTime</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a                                         <legacyBold>__time64_t</legacyBold> value for the given                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__getyear">CTime::GetYear</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the year represented by the                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#ctime__serialize64">CTime::Serialize64</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes data to or from an archive.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Operators</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para>
                                        <legacyLink xlink:href="#ctime__operator__add_-">operator + –</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>These operators add and subtract                                         <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> and                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> objects.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <legacyLink xlink:href="#ctime__operator__add_eq_-_eq">operator +=, –=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>These operators add and subtract a                                         <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> object to and from this                                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <legacyLink xlink:href="#ctime__operator__eq">operator =</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The assignment operator.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <legacyLink xlink:href="#ctime_comparison_operators">operator ==, &lt; , etc.</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Comparison operators.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>
                <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> does not have a base class.</para>
            <para>
                <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> values are based on coordinated universal time (UTC), which is equivalent to Coordinated Universal time (Greenwich Mean Time, GMT). See                 <link xlink:href="93599220-c011-45d5-978f-12182abfdd2f">Time Management</link> for information about how the time zone is determined.</para>
            <para>When you create a                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object, set the                 <parameterReference>nDST</parameterReference> parameter to 0 to indicate that standard time is in effect, or to a value larger than 0 to indicate that daylight saving time is in effect, or to a value less than zero to have the C run-time library code compute whether standard time or daylight saving time is in effect.                 <parameterReference>tm_isdst</parameterReference> is a required field. If not set, its value is undefined and the return value from                 <legacyLink xlink:href="284ed5d4-7064-48a2-bd50-15effdae32cf">mktime</legacyLink> is unpredictable. If                 <unmanagedCodeEntityReference>timeptr</unmanagedCodeEntityReference> points to a tm structure returned by a previous call to                 <legacyLink xlink:href="17ad9b2b-a459-465d-976a-42822897688a">asctime_s</legacyLink>,                 <legacyLink xlink:href="261c7df0-2b0c-44ba-ba61-cb83efaec60f">_gmtime_s</legacyLink>, or                 <legacyLink xlink:href="842d1dc7-d6f8-41d3-b340-108d4b90df54">localtime_s</legacyLink>, the                 <parameterReference>tm_isdst</parameterReference> field contains the correct value.</para>
            <para>A companion class,                 <legacyLink xlink:href="ee1e42f6-1839-477a-8435-fb26ad475140">CTimeSpan</legacyLink>, represents a time interval.</para>
            <para>The                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> and                 <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> classes are not designed for derivation. Because there are no virtual functions, the size of                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> and                 <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> objects is exactly 8 bytes. Most member functions are inline.</para>
            <alert class="note">
                <para>The upper date limit is 12/31/3000. The lower limit is 1/1/1970 12:00:00 AM GMT.</para>
            </alert>
            <para>For more information about using                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference>, see the articles                 <legacyLink xlink:href="ecf56dc5-d418-4603-ad3e-af7e205a6403">Date and Time</legacyLink>, and                 <legacyLink xlink:href="93599220-c011-45d5-978f-12182abfdd2f">Time Management</legacyLink> in the Run-Time Library Reference.</para>
            <alert class="note">
                <para>The                     <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> structure changed from MFC 7.1 to MFC 8.0. If you serialize a                     <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> structure by using the                     <unmanagedCodeEntityReference>operator &lt;&lt;</unmanagedCodeEntityReference> under MFC 8.0 or a later version, the resulting file will not be readable on older versions of MFC.</para>
            </alert>
        </content>
    </languageReferenceRemarks>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> atltime.h</para>
        </content>
    </requirements>
    <section address="ctime_comparison_operators">
        <!--cbd8b0ff-4c44-4bdd-bcd3-f56d2586be77-->
        <title>CTime Comparison Operators</title>
        <content>
            <para>Comparison operators.</para>
            <legacySyntax>
                <legacyBold>bool</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>==(</legacyBold>
                <legacyBold>   CTime</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
                <legacyBold>bool</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>!=(</legacyBold>
                <legacyBold>   CTime</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
                <legacyBold>bool</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>&lt;(</legacyBold>
                <legacyBold>   CTime</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
                <legacyBold>bool</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>&gt;(</legacyBold>
                <legacyBold>   CTime</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
                <legacyBold>bool</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>&lt;=(</legacyBold>
                <legacyBold>   CTime</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
                <legacyBold>bool</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>&gt;=(</legacyBold>
                <legacyBold>   CTime</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>time</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object to be compared.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>These operators compare two absolute times and return                         <legacyBold>true</legacyBold> if the condition is true; otherwise                         <legacyBold>false</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#161</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__ctime">
        <!--61e1df48-a59f-44cd-a3ad-f2a1308da3da-->
        <title>CTime::CTime</title>
        <content>
            <para>Creates a new                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object initialized with the specified time.</para>
            <legacySyntax>
                <legacyBold>CTime(</legacyBold>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CTime(</legacyBold>
                <legacyBold>   __time64_t</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CTime(</legacyBold>
                <legacyBold>   int</legacyBold>
                <parameterReference>nYear</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int</legacyBold>
                <parameterReference>nMonth</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int</legacyBold>
                <parameterReference>nDay</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int</legacyBold>
                <parameterReference>nHour</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int</legacyBold>
                <parameterReference>nMin</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int</legacyBold>
                <parameterReference>nSec</parameterReference>,
                   <legacyBold>int </legacyBold>
                <parameterReference>nDST</parameterReference>
                <legacyBold> = -1 </legacyBold>
                <legacyBold>);</legacyBold>
                <legacyBold>CTime(</legacyBold>
                <legacyBold>   WORD</legacyBold>
                <parameterReference>wDosDate</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   WORD</legacyBold>
                <parameterReference>wDosTime</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int </legacyBold>
                <parameterReference>nDST</parameterReference>
                <legacyBold> = -1 </legacyBold>
                <legacyBold>);</legacyBold>
                <legacyBold>CTime(</legacyBold>
                <legacyBold>   const SYSTEMTIME&amp; </legacyBold>
                <parameterReference>st</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int </legacyBold>
                <parameterReference>nDST</parameterReference>
                <legacyBold> = - 1 </legacyBold>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CTime(</legacyBold>
                <legacyBold>   const FILETIME&amp; </legacyBold>
                <parameterReference>ft</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int </legacyBold>
                <parameterReference>nDST</parameterReference>
                <legacyBold> = - 1 </legacyBold>
                <legacyBold>);</legacyBold>
                <legacyBold>CTime(</legacyBold>
                <legacyBold>   const DBTIMESTAMP&amp; </legacyBold>
                <parameterReference>dbts</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int </legacyBold>
                <parameterReference>nDST</parameterReference>
                <legacyBold> = -1</legacyBold>
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>timeSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object that already exists.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>time</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <legacyBold>__time64_t</legacyBold> time value, which is the number of seconds after January 1, 1970 UTC. Note that this will be adjusted to your local time. For example, if you are in New York and create a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object by passing a parameter of 0,                                 <legacyLink xlink:href="#ctime__getmonth">CTime::GetMonth</legacyLink> will return 12.</para>
                            <para>In Visual C++ versions 6.0 and earlier,                                 <parameterReference>time</parameterReference> was a value of                                 <unmanagedCodeEntityReference>time_t</unmanagedCodeEntityReference>. Visual C++ .NET and later converts a                                 <unmanagedCodeEntityReference>time_t</unmanagedCodeEntityReference> parameter to                                 <legacyBold>__time64_t</legacyBold>. </para>
                        </definition>
                        <definedTerm>
                            <parameterReference>nYear</parameterReference>,                             <parameterReference>nMonth</parameterReference>,                             <parameterReference>nDay</parameterReference>,                             <parameterReference>nHour</parameterReference>,                             <parameterReference>nMin</parameterReference>,                             <parameterReference>nSec</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the date and time values to be copied into the new                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>nDST</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether daylight savings time is in effect. Can have one of three values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para>
                                        <parameterReference>nDST</parameterReference> set to 0   Standard time is in effect.</para>
                                </listItem>
                                <listItem>
                                    <para>
                                        <parameterReference>nDST</parameterReference> set to a value greater than 0   Daylight savings time is in effect.</para>
                                </listItem>
                                <listItem>
                                    <para>
                                        <parameterReference>nDST</parameterReference> set to a value less than 0   The default. Automatically computes whether standard time or daylight savings time is in effect.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm>
                            <parameterReference>wDosDate</parameterReference>,                             <parameterReference>wDosTime</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>MS-DOS date and time values to be converted to a date/time value and copied into the new                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>st</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 "SYSTEMTIME" structure to be converted to a date/time value and copied into the new                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>ft</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 "FILETIME" structure to be converted to a date/time value and copied into the new                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm>dbts </definedTerm>
                        <definition>
                            <para>A reference to a                                 <codeEntityReference autoUpgrade="true">F:System.Data.OleDb.OleDbType.DBTimeStamp</codeEntityReference> structure containing the current local time.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Each constructor is described below:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>
                                <legacyBold>CTime( );</legacyBold>   Constructs an uninitialized                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object. This constructor allows you to define                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object arrays. You should initialize such arrays with valid times before using.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>CTime( const CTime&amp; );</legacyBold>   Constructs a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object from another                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> value.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>CTime( __time64_t );</legacyBold>   Constructs a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object from a                                 <legacyBold>__time64_t</legacyBold> type. This constructor expects a UTC time and converts the result to a local time before storing the result.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>CTime( int, int,</legacyBold>                                 <legacyBold>...);</legacyBold>   Constructs a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object from local time components with each component constrained to the following ranges:</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>Component</para>
                                        </TD>
                                        <TD>
                                            <para>Range</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para>
                                                <parameterReference>nYear</parameterReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>1970–3000</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>
                                                <parameterReference>nMonth</parameterReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>1–12</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>
                                                <parameterReference>nDay</parameterReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>1–31</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>
                                                <parameterReference>nHour</parameterReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>0-23</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>
                                                <parameterReference>nMin</parameterReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>0-59</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>
                                                <parameterReference>nSec</parameterReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>0-59</para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                            <para>This constructor makes the appropriate conversion to UTC. The Debug version of the Microsoft Foundation Class Library asserts if one or more of the time components are out of range. You must validate the arguments before calling. This constructor expects a local time. </para>
                        </listItem>
                        <listItem>
                            <para>
                                <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference>(                                 <legacyBold>WORD, WORD</legacyBold> )                                <legacyBold>;</legacyBold>   Constructs a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object from the specified MS-DOS date and time values. This constructor expects a local time.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference>(                                 <legacyBold>const SYSTEMTIME&amp;</legacyBold> )                                <legacyBold>;</legacyBold>   Constructs a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object from a                                 <unmanagedCodeEntityReference>SYSTEMTIME</unmanagedCodeEntityReference> structure. This constructor expects a local time.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference>(                                 <legacyBold>const FILETIME&amp;</legacyBold> )                                <legacyBold>;</legacyBold>   Constructs a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object from a                                 <unmanagedCodeEntityReference>FILETIME</unmanagedCodeEntityReference> structure. You most likely will not use                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference>                                 <unmanagedCodeEntityReference>FILETIME</unmanagedCodeEntityReference> initialization directly. If you use a                                 <unmanagedCodeEntityReference>CFile</unmanagedCodeEntityReference> object to manipulate a file,                                 <unmanagedCodeEntityReference>CFile::GetStatus</unmanagedCodeEntityReference> retrieves the file time stamp for you through a                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object initialized with a                                 <unmanagedCodeEntityReference>FILETIME</unmanagedCodeEntityReference> structure. This constructor assumes a time based on UTC and automatically converts the value to local time before storing the result. </para>
                            <alert class="note">
                                <para>The constructor using                                     <legacyBold>DBTIMESTAMP</legacyBold> parameter is only available when OLEDB.h is included.</para>
                            </alert>
                        </listItem>
                    </list>
                    <para>For more information, see the                         <externalLink>                            <linkText>SYSTEMTIME</linkText>
                            <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms724950</linkUri>
                        </externalLink> and                         <externalLink>                            <linkText>FILETIME</linkText>
                            <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms724284</linkUri>
                        </externalLink> structure in the                         <token>winSDK</token>. Also see the                         <externalLink>                            <linkText>MS-DOS Date and Time</linkText>
                            <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms724503</linkUri>
                        </externalLink> entry in the                         <token>winsdkshort</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#148</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__format">
        <!--a1f2be7d-c1fd-4ec6-aa73-dd572da8ccf0-->
        <title>CTime::Format</title>
        <content>
            <para>Call this member function to create a formatted representation of the date-time value.</para>
            <legacySyntax>CString Format(
   LPCTSTR                 <parameterReference>pszFormat</parameterReference> 
) const;
CString Format(
   UINT                 <parameterReference>nFormatID</parameterReference> 
) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>pszFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A formatting string similar to the                                 <unmanagedCodeEntityReference>printf</unmanagedCodeEntityReference> formatting string. Formatting codes, preceded by a percent (                                <languageKeyword>%</languageKeyword>) sign, are replaced by the corresponding                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> component. Other characters in the formatting string are copied unchanged to the returned string. See the run-time function                                 <legacyLink xlink:href="6330ff20-4729-4c4a-82af-932915d893ea">strftime</legacyLink> for a list of formatting codes.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>nFormatID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of the string that identifies this format.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> that contains the formatted time.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the status of this                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object is null, the return value is an empty string.</para>
                    <para>This method throws an exception if the date-time value to format does not range from midnight, January 1, 1970 through December 31, 3000 Universal Coordinated Time (UTC).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#149</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__formatgmt">
        <!--4853b29f-fee6-4b61-a8d5-6994bf86ab61-->
        <title>CTime::FormatGmt</title>
        <content>
            <para>Generates a formatted string that corresponds to this                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CString FormatGmt(
   LPCTSTR                 <parameterReference>pszFormat</parameterReference> 
) const;
CString FormatGmt(
   UINT                 <parameterReference>nFormatID</parameterReference> 
) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>pszFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a formatting string similar to the                                 <unmanagedCodeEntityReference>printf</unmanagedCodeEntityReference> formatting string. See the run-time function                                 <legacyLink xlink:href="6330ff20-4729-4c4a-82af-932915d893ea">strftime</legacyLink> for details.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>nFormatID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of the string that identifies this format. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> that contains the formatted time.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The time value is not converted and thus reflects UTC.</para>
                    <para>This method throws an exception if the date-time value to format does not range from midnight, January 1, 1970 through December 31, 3000 Universal Coordinated Time (UTC).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                   
                            <para>See the example for                                 <legacyLink xlink:href="#ctime__format">CTime::Format</legacyLink>.</para>
                      
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getasdbtimestamp">
        <!--1c547d69-a47d-476b-bb74-1f7e1f916b72-->
        <title>CTime::GetAsDBTIMESTAMP</title>
        <content>
            <para>Call this member function to convert the time information stored in the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object to a Win32–compatible                 <codeEntityReference autoUpgrade="true">F:System.Data.OleDb.OleDbType.DBTimeStamp</codeEntityReference> structure.</para>
            <legacySyntax>bool GetAsDBTIMESTAMP(
   DBTIMESTAMP&amp;                 <parameterReference>dbts</parameterReference>
) const throw( );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>dbts</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a                                 <codeEntityReference autoUpgrade="true">F:System.Data.OleDb.OleDbType.DBTimeStamp</codeEntityReference> structure containing the current local time.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Stores the resulting time in the referenced                         <parameterReference>dbts</parameterReference> structure. The                         <legacyBold>DBTIMESTAMP</legacyBold> data structure initialized by this function will have its                         <legacyBold>fraction</legacyBold> member set to zero.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#150</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getassystemtime">
        <!--544c79fd-12af-4c80-a83c-2a8909126fff-->
        <title>CTime::GetAsSystemTime</title>
        <content>
            <para>Call this member function to convert the time information stored in the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object to a Win32–compatible                 <externalLink>                    <linkText>SYSTEMTIME</linkText>
                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms724950</linkUri>
                </externalLink> structure.</para>
            <legacySyntax>
                <legacyBold>bool GetAsSystemTime(</legacyBold>
                <legacyBold>   SYSTEMTIME&amp; </legacyBold>
                <parameterReference>st</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>timeDest</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A reference to a                                 <externalLink>                                    <linkText>SYSTEMTIME</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms724950</linkUri>
                                </externalLink> structure that will hold the converted date/time value of the                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>True if successful; otherwise false.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        <unmanagedCodeEntityReference>GetAsSystemTime</unmanagedCodeEntityReference> stores the resulting time in the referenced                         <legacyItalic>timeDest</legacyItalic> structure. The                         <unmanagedCodeEntityReference>SYSTEMTIME</unmanagedCodeEntityReference> data structure initialized by this function will have its                         <legacyBold>wMilliseconds</legacyBold> member set to zero.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#151</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getcurrenttime">
        <!--17a539d6-6f01-4cee-beeb-c9ea7b036adb-->
        <title>CTime::GetCurrentTime</title>
        <content>
            <para>Returns a                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object that represents the current time.</para>
            <legacySyntax>
                <legacyBold>static</legacyBold>
                <legacyBold>CTime</legacyBold>
                <legacyBold>WINAPI</legacyBold>
                <legacyBold>GetCurrentTime(</legacyBold>
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Returns the current system date and time in Coordinated Universal Time (UTC).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#152</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getday">
        <!--777193bd-7420-4492-b925-8e881d2d60f4-->
        <title>CTime::GetDay</title>
        <content>
            <para>Returns the day represent by the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>int</legacyBold>
                <legacyBold>GetDay(</legacyBold>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the day of the month, based on local time, in the range 1 through 31.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function calls                         <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference>, which uses an internal, statically allocated buffer. The data in this buffer is overwritten because of calls to other                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#153</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getdayofweek">
        <!--a43c6a79-082a-480c-b451-5894e5ff097a-->
        <title>CTime::GetDayOfWeek</title>
        <content>
            <para>Returns the day of the week represented by the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>int</legacyBold>
                <legacyBold>GetDayOfWeek(</legacyBold>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the day of the week based on local time; 1 = Sunday, 2 = Monday, to 7 = Saturday.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function calls                         <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference>, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#154</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getgmttm">
        <!--2aed9533-496b-4f2c-9a72-b21af9eb5360-->
        <title>CTime::GetGmtTm</title>
        <content>
            <para>Gets a                 <legacyBold>struct tm</legacyBold> that contains a decomposition of the time contained in this                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>struct</legacyBold>
                <legacyBold>tm*</legacyBold>
                <legacyBold>GetGmtTm(</legacyBold>
                <legacyBold>   struct</legacyBold>
                <legacyBold>tm*</legacyBold>
                <parameterReference>ptm</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>ptm</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer that will receive the time data. If this pointer is                                 <legacyBold>NULL</legacyBold>, an exception is thrown.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a filled-in                         <legacyBold>struct tm</legacyBold> as defined in the include file TIME.H. See                         <link xlink:href="315501f3-477e-475d-a414-ef100ee0db27">gmtime, _gmtime32, _gmtime64</link> for the structure layout.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        <unmanagedCodeEntityReference>GetGmtTm</unmanagedCodeEntityReference> returns UTC.</para>
                    <para>
                        <parameterReference>ptm</parameterReference> cannot be                         <languageKeyword>NULL</languageKeyword>. If you want to revert to the old behavior, in which                         <parameterReference>ptm</parameterReference> could be                         <languageKeyword>NULL</languageKeyword> to indicate that an internal, statically allocated buffer should be used, then undefine                         <languageKeyword>_SECURE_ATL</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#155</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__gethour">
        <!--916d0ee0-52e8-44b6-9035-093f1acd4151-->
        <title>CTime::GetHour</title>
        <content>
            <para>Returns the hour represented by the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>int</legacyBold>
                <legacyBold>GetHour(</legacyBold>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the hour, based on local time, in the range 0 through 23.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function calls                         <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference>, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#156</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getlocaltm">
        <!--30aed7e9-326d-48ec-bc85-9a3ba7ae5f11-->
        <title>CTime::GetLocalTm</title>
        <content>
            <para>Gets a                 <legacyBold>struct tm</legacyBold> containing a decomposition of the time contained in this                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>struct</legacyBold>
                <legacyBold>tm*</legacyBold>
                <legacyBold>GetLocalTm(</legacyBold>
                <legacyBold>   struct</legacyBold>
                <legacyBold>tm*</legacyBold>
                <parameterReference>ptm</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>ptm</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer that will receive the time data. If this pointer is                                 <legacyBold>NULL</legacyBold>, an exception is thrown.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a filled-in                         <legacyBold>struct tm</legacyBold> as defined in the include file TIME.H. See                         <link xlink:href="315501f3-477e-475d-a414-ef100ee0db27">gmtime, _gmtime32, _gmtime64</link> for the structure layout.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference> returns local time.</para>
                    <para>
                        <parameterReference>ptm</parameterReference> cannot be                         <languageKeyword>NULL</languageKeyword>. If you want to revert to the old behavior, in which                         <parameterReference>ptm</parameterReference> could be                         <languageKeyword>NULL</languageKeyword> to indicate that an internal, statically allocated buffer should be used, then undefine                         <languageKeyword>_SECURE_ATL</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#157</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getminute">
        <!--c8ff0ec1-3521-4e49-9887-05f8a77f2c9c-->
        <title>CTime::GetMinute</title>
        <content>
            <para>Returns the minute represented by the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>int</legacyBold>
                <legacyBold>GetMinute(</legacyBold>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the minute, based on local time, in the range 0 through 59.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function calls                         <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference>, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                 
                            <para>See the example for                                 <legacyLink xlink:href="#ctime__gethour">GetHour</legacyLink>.</para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getmonth">
        <!--b2b71fb9-b57b-4d2d-880d-a62ebbc4fd41-->
        <title>CTime::GetMonth</title>
        <content>
            <para>Returns the month represented by the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>int</legacyBold>
                <legacyBold>GetMonth(</legacyBold>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the month, based on local time, in the range 1 through 12 (1 = January).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function calls                         <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference>, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                   
                            <para>See the example for                                 <legacyLink xlink:href="#ctime__getday">GetDay</legacyLink>.</para>
                        </content>
                   
            </section>
        </sections>
    </section>
    <section address="ctime__getsecond">
        <!--ff58c967-9d21-4b99-ae45-c49571cba60a-->
        <title>CTime::GetSecond</title>
        <content>
            <para>Returns the second represented by the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>int</legacyBold>
                <legacyBold>GetSecond(</legacyBold>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the second, based on local time, in the range 0 through 59.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function calls                         <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference>, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    
                            <para>See the example for                                 <legacyLink xlink:href="#ctime__gethour">GetHour</legacyLink>.</para>
                        </content>
                    
            </section>
        </sections>
    </section>
    <section address="ctime__gettime">
        <!--82e9dc7e-c7d3-492b-a26c-c129613b4a81-->
        <title>CTime::GetTime</title>
        <content>
            <para>Returns a                 <legacyBold>__time64_t</legacyBold> value for the given                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>__time64_t</legacyBold>
                <legacyBold>GetTime(</legacyBold>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        <legacyBold>GetTime</legacyBold> will return the number of seconds between the current                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object and January 1, 1970.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#158</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__getyear">
        <!--f7f203a7-9356-45ff-9838-5af0480d1f83-->
        <title>CTime::GetYear</title>
        <content>
            <para>Returns the year represented by the                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>int GetYear( );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the year, based on local time, in the range January 1,1970, to January 18, 2038 (inclusive).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function calls                         <unmanagedCodeEntityReference>GetLocalTm</unmanagedCodeEntityReference>, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    
                            <para>See the example for                                 <legacyLink xlink:href="#ctime__getday">GetDay</legacyLink>.</para>
                       
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__operator__eq">
        <!--5cddcd43-9598-4020-b3da-045efb395fb4-->
        <title>CTime::operator =</title>
        <content>
            <para>The assignment operator.</para>
            <legacySyntax>
                <legacyBold>CTime&amp; operator =(</legacyBold>
                <legacyBold>   __time64_t </legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>time</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new date/time value.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The updated                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This overloaded assignment operator copies the source time into this                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object. The internal time storage in a                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object is independent of time zone. Time zone conversion is not necessary during assignment.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__operator__add_-">
        <!--af3087f8-61ac-4987-b573-bff0fc13def3-->
        <title>CTime::operator +, -</title>
        <content>
            <para>These operators add and subtract                 <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> and                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> objects.</para>
            <legacySyntax>
                <legacyBold>CTime</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>+(</legacyBold>
                <legacyBold>   CTimeSpan</legacyBold>
                <parameterReference>timeSpan</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
                <legacyBold>CTime</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>-(</legacyBold>
                <legacyBold>   CTimeSpan</legacyBold>
                <parameterReference>timeSpan</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
                <legacyBold>CTimeSpan</legacyBold>
                <legacyBold>operator</legacyBold>
                <legacyBold>-(</legacyBold>
                <legacyBold>   CTime</legacyBold>
                <parameterReference>time</parameterReference>
                <legacyBold>)</legacyBold>
                <legacyBold>const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>timeSpan</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The                                 <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> object to be added or subtracted.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>time</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The                                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object to be subtracted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> or                         <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> object representing the result of the operation.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> objects represent absolute time,                         <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> objects represent relative time. The first two operators allow you to add and subtract                         <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> objects to and from                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> objects. The third operator allows you to subtract one                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object from another to yield a                         <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#159</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__operator__add_eq_-_eq">
        <!--703dd5e5-f15f-4ed7-a472-aae968d2948a-->
        <title>CTime::operator +=, -=</title>
        <content>
            <para>These operators add and subtract a                 <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> object to and from this                 <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>CTime&amp; operator +=(</legacyBold>
                <legacyBold>   CTimeSpan </legacyBold>
                <parameterReference>span</parameterReference>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CTime&amp; operator -=(</legacyBold>
                <legacyBold>   CTimeSpan </legacyBold>
                <parameterReference>span</parameterReference>
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>span</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The                                 <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> object to be added or subtracted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The updated                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>These operators allow you to add and subtract a                         <unmanagedCodeEntityReference>CTimeSpan</unmanagedCodeEntityReference> object to and from this                         <unmanagedCodeEntityReference>CTime</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#160</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctime__serialize64">
        <!--0aed2160-3a0f-413c-bbb9-f838af551c96-->
        <title>CTime::Serialize64</title>
        <content>
            <alert class="note">
                <para>This method is only available in MFC projects.</para>
            </alert>
            <para>Serializes the data associated with the member variable to or from an archive.</para>
            <legacySyntax>CArchive&amp; Serialize64(
   CArchive&amp;                 <parameterReference>ar</parameterReference>
                <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>ar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The                                 <unmanagedCodeEntityReference>CArchive</unmanagedCodeEntityReference> object that you want to update.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The updated                         <unmanagedCodeEntityReference>CArchive</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics>
        <link xlink:href="17ad9b2b-a459-465d-976a-42822897688a">asctime_s, _wasctime_s</link>
        <link xlink:href="d03080d9-a520-45be-aa65-504bdb197e8b">_ftime_s, _ftime32_s, _ftime64_s</link>
        <link xlink:href="261c7df0-2b0c-44ba-ba61-cb83efaec60f">_gmtime_s, _gmtime32_s, _gmtime64_s</link>
        <link xlink:href="842d1dc7-d6f8-41d3-b340-108d4b90df54">localtime_s, _localtime32_s, _localtime64_s</link>
        <link xlink:href="6330ff20-4729-4c4a-82af-932915d893ea">strftime</link>
        <link xlink:href="280e00f2-2b93-4ece-94cd-e048484c6cc7">time</link>
        <link xlink:href="ee1e42f6-1839-477a-8435-fb26ad475140">CTimeSpan Class</link>
        <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
        <link xlink:href="e13aaac3-21ec-4f4d-8834-432b40fde544">Shared Classes</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>

