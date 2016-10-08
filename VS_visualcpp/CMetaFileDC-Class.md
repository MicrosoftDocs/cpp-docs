---
title: "CMetaFileDC Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: ffce60fa-4181-4d46-9832-25e46fad4db4
caps.latest.revision: 16
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
# CMetaFileDC Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Implements a Windows metafile, which contains a sequence of graphics device interface (GDI) commands that you can replay to create a desired image or text.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CMetaFileDC : public CDC</legacySyntax>
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
                                    <para> <link xlink:href="#cmetafiledc__cmetafiledc">CMetaFileDC::CMetaFileDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#cmetafiledc__close">CMetaFileDC::Close</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes the device context and creates a metafile handle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmetafiledc__closeenhanced">CMetaFileDC::CloseEnhanced</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes an enhanced-metafile device context and creates an enhanced-metafile handle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmetafiledc__create">CMetaFileDC::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the Windows metafile device context and attaches it to the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmetafiledc__createenhanced">CMetaFileDC::CreateEnhanced</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a metafile device context for an enhanced-format metafile.</para>
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
            <para>To implement a Windows metafile, first create a <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object. Invoke the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> constructor, then call the <legacyLink xlink:href="#cmetafiledc__create">Create</legacyLink> member function, which creates a Windows metafile device context and attaches it to the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object.</para>
            <para>Next send the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object the sequence of <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> GDI commands that you intend for it to replay. Only those GDI commands that create output, such as <unmanagedCodeEntityReference>MoveTo</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>LineTo</unmanagedCodeEntityReference>, can be used.</para>
            <para>After you have sent the desired commands to the metafile, call the <legacyBold>Close</legacyBold> member function, which closes the metafile device contexts and returns a metafile handle. Then dispose of the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object.</para>
            <para> <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2#cdc__playmetafile">CDC::PlayMetaFile</legacyLink> can then use the metafile handle to play the metafile repeatedly. The metafile can also be manipulated by Windows functions such as                 <externalLink> <linkText>CopyMetaFile</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183480</linkUri>
                </externalLink>, which copies a metafile to disk.</para>
            <para>When the metafile is no longer needed, delete it from memory with the                 <externalLink> <linkText>DeleteMetaFile</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183537</linkUri>
                </externalLink> Windows function.</para>
            <para>You can also implement the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object so that it can handle both output calls and attribute GDI calls such as <unmanagedCodeEntityReference>GetTextExtent</unmanagedCodeEntityReference>. Such a metafile is more flexible and can more easily reuse general GDI code, which often consists of a mix of output and attribute calls. The <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> class inherits two device contexts, <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>, from <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference>. The <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> device context handles all <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink> GDI output calls and the <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference> device context handles all <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> GDI attribute calls. Normally, these two device contexts refer to the same device. In the case of <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference>, the attribute DC is set to <legacyBold>NULL</legacyBold> by default. </para>
            <para>Create a second device context that points to the screen, a printer, or device other than a metafile, then call the <unmanagedCodeEntityReference>SetAttribDC</unmanagedCodeEntityReference> member function to associate the new device context with <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>. GDI calls for information will now be directed to the new <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>. Output GDI calls will go to <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>, which represents the metafile.</para>
            <para>For more information on <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference>, see <legacyLink xlink:href="d0cd51f1-f778-4c7e-bf50-d738d10433c7">Device Contexts</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxext.h</para>
        </content>
    </requirements>
    <section address="cmetafiledc__close">
        <!--8ff8095a-01e5-40fa-8f82-719ce2c19d5b-->
        <title>CMetaFileDC::Close</title>
        <content>
            <para>Closes the metafile device context and creates a Windows metafile handle that can be used to play the metafile by using the <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2#cdc__playmetafile">CDC::PlayMetaFile</legacyLink> member function.</para>
            <legacySyntax>HMETAFILE Close();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valid <legacyBold>HMETAFILE</legacyBold> if the function is successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The Windows metafile handle can also be used to manipulate the metafile with Windows functions such as                         <externalLink> <linkText>CopyMetaFile</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183480</linkUri>
                        </externalLink>.</para>
                    <para>Delete the metafile after use by calling the Windows                         <externalLink> <linkText>DeleteMetaFile</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183537</linkUri>
                        </externalLink> function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmetafiledc__closeenhanced">
        <!--444fe3c5-9682-422e-afbf-15d08dba6fab-->
        <title>CMetaFileDC::CloseEnhanced</title>
        <content>
            <para>Closes an enhanced-metafile device context and returns a handle that identifies an enhanced-format metafile.</para>
            <legacySyntax>HENHMETAFILE CloseEnhanced();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A handle of an enhanced metafile, if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An application can use the enhanced-metafile handle returned by this function to perform the following tasks:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>Display a picture stored in an enhanced metafile</para>
                        </listItem>
                        <listItem>
                            <para>Create copies of the enhanced metafile</para>
                        </listItem>
                        <listItem>
                            <para>Enumerate, edit, or copy individual records in the enhanced metafile</para>
                        </listItem>
                        <listItem>
                            <para>Retrieve an optional description of the metafile contents from the enhanced-metafile header</para>
                        </listItem>
                        <listItem>
                            <para>Retrieve a copy of the enhanced-metafile header</para>
                        </listItem>
                        <listItem>
                            <para>Retrieve a binary copy of the enhanced metafile</para>
                        </listItem>
                        <listItem>
                            <para>Enumerate the colors in the optional palette</para>
                        </listItem>
                        <listItem>
                            <para>Convert an enhanced-format metafile into a Windows-format metafile</para>
                        </listItem>
                    </list>
                    <para>When the application no longer needs the enhanced metafile handle, it should release the handle by calling the Win32 <legacyBold>DeleteEnhMetaFile</legacyBold> function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmetafiledc__cmetafiledc">
        <!--fa5879ac-e6ee-4522-8b09-6d92f50eee26-->
        <title>CMetaFileDC::CMetaFileDC</title>
        <content>
            <para>Construct a <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object in two steps.</para>
            <legacySyntax>CMetaFileDC();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>First, call <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference>, then call <legacyBold>Create</legacyBold>, which creates the Windows metafile device context and attaches it to the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmetafiledc__create">
        <!--44daa0fc-cabe-4d74-a5fc-c0810678cf8e-->
        <title>CMetaFileDC::Create</title>
        <content>
            <para>Construct a <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object in two steps.</para>
            <legacySyntax>BOOL Create( LPCTSTR lpszFilename = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpszFilename</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated character string. Specifies the filename of the metafile to create. If                                 <legacyItalic>lpszFilename</legacyItalic> is <legacyBold>NULL</legacyBold>, a new in-memory metafile is created.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>First, call the constructor <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference>, then call <legacyBold>Create</legacyBold>, which creates the Windows metafile device context and attaches it to the <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmetafiledc__createenhanced">
        <!--58eb24ee-ebd9-494d-9113-e0f91041dc30-->
        <title>CMetaFileDC::CreateEnhanced</title>
        <content>
            <para>Creates a device context for an enhanced-format metafile.</para>
            <legacySyntax>BOOL CreateEnhanced(
    CDC* pDCRef,
    LPCTSTR lpszFileName,
    LPCRECT lpBounds,
    LPCTSTR lpszDescription );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDCRef</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies a reference device for the enhanced metafile.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszFileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated character string. Specifies the filename for the enhanced metafile to be created. If this parameter is <legacyBold>NULL</legacyBold>, the enhanced metafile is memory based and its contents lost when the object is destroyed or when the Win32 <legacyBold>DeleteEnhMetaFile</legacyBold> function is called.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> data structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that specifies the dimensions in <legacyBold>HIMETRIC</legacyBold> units (in .01-millimeter increments) of the picture to be stored in the enhanced metafile. </para>
                        </definition>
                        <definedTerm> <parameterReference>lpszDescription</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a zero-terminated string that specifies the name of the application that created the picture, as well as the picture's title.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A handle of the device context for the enhanced metafile, if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This DC can be used to store a device-independent picture.</para>
                    <para>Windows uses the reference device identified by the <parameterReference>pDCRef</parameterReference> parameter to record the resolution and units of the device on which a picture originally appeared. If the <parameterReference>pDCRef</parameterReference> parameter is <legacyBold>NULL</legacyBold>, it uses the current display device for reference.</para>
                    <para>The left and top members of the <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> data structure pointed to by the <parameterReference>lpBounds</parameterReference> parameter must be smaller than the right and bottom members, respectively. Points along the edges of the rectangle are included in the picture. If <parameterReference>lpBounds</parameterReference> is <legacyBold>NULL</legacyBold>, the graphics device interface (GDI) computes the dimensions of the smallest rectangle that can enclose the picture drawn by the application. The <parameterReference>lpBounds</parameterReference> parameter should be supplied where possible.</para>
                    <para>The string pointed to by the <parameterReference>lpszDescription</parameterReference> parameter must contain a null character between the application name and the picture name and must terminate with two null characters —for example, "XYZ Graphics Editor\0Bald Eagle\0\0," where \0 represents the null character. If <parameterReference>lpszDescription</parameterReference> is <legacyBold>NULL</legacyBold>, there is no corresponding entry in the enhanced-metafile header.</para>
                    <para>Applications use the DC created by this function to store a graphics picture in an enhanced metafile. The handle identifying this DC can be passed to any GDI function.</para>
                    <para>After an application stores a picture in an enhanced metafile, it can display the picture on any output device by calling the <unmanagedCodeEntityReference>CDC::PlayMetaFile</unmanagedCodeEntityReference> function. When displaying the picture, Windows uses the rectangle pointed to by the <parameterReference>lpBounds</parameterReference> parameter and the resolution data from the reference device to position and scale the picture. The device context returned by this function contains the same default attributes associated with any new DC.</para>
                    <para>Applications must use the Win32 <legacyBold>GetWinMetaFileBits</legacyBold> function to convert an enhanced metafile to the older Windows metafile format.</para>
                    <para>The filename for the enhanced metafile should use the .EMF extension.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



