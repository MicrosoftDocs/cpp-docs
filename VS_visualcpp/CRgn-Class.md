---
title: "CRgn Class"
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
ms.assetid: d904da84-76aa-481e-8780-b09485f49e64
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
# CRgn Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Encapsulates a Windows graphics device interface (GDI) region. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CRgn : public CGdiObject</legacySyntax>
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
                                    <para> <link xlink:href="#crgn__crgn">CRgn::CRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Constructs a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                                    </para>
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
                                    <para> <link xlink:href="#crgn__combinergn">CRgn::CombineRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Sets a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object so that it is equivalent to the union of two specified <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> objects.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__copyrgn">CRgn::CopyRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Sets a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object so that it is a copy of a specified <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createellipticrgn">CRgn::CreateEllipticRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Initializes a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object with an elliptical region.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createellipticrgnindirect">CRgn::CreateEllipticRgnIndirect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Initializes a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object with an elliptical region defined by a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createfromdata">CRgn::CreateFromData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a region from the given region and transformation data.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createfrompath">CRgn::CreateFromPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a region from the path that is selected into the given device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createpolygonrgn">CRgn::CreatePolygonRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Initializes a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object with a polygonal region. The system closes the polygon automatically, if necessary, by drawing a line from the last vertex to the first.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createpolypolygonrgn">CRgn::CreatePolyPolygonRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Initializes a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object with a region consisting of a series of closed polygons. The polygons may be disjoint, or they may overlap.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createrectrgn">CRgn::CreateRectRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Initializes a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object with a rectangular region.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createrectrgnindirect">CRgn::CreateRectRgnIndirect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Initializes a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object with a rectangular region defined by a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__createroundrectrgn">CRgn::CreateRoundRectRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Initializes a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object with a rectangular region with rounded corners.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__equalrgn">CRgn::EqualRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Checks two <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> objects to determine whether they are equivalent.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__fromhandle">CRgn::FromHandle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Returns a pointer to a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object when given a handle to a Windows region.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__getregiondata">CRgn::GetRegionData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills the specified buffer with data describing the given region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__getrgnbox">CRgn::GetRgnBox</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Retrieves the coordinates of the bounding rectangle of a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__offsetrgn">CRgn::OffsetRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Moves a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object by the specified offsets.
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__ptinregion">CRgn::PtInRegion</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a specified point is in the region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__rectinregion">CRgn::RectInRegion</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether any part of a specified rectangle is within the boundaries of the region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#crgn__setrectrgn">CRgn::SetRectRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Sets the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object to the specified rectangular region.
                                    </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Operators</title>
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
                                    <para> <link xlink:href="#crgn__operator_hrgn">CRgn::operator HRGN</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>
                                        Returns the Windows handle contained in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                                    </para>
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
                A region is an elliptical or polygonal area within a window. To use regions, you use the member functions of class <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> with the clipping functions defined as members of class <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference>.
            </para>
            <para>
                The member functions of <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> create, alter, and retrieve information about the region object for which they are called.
            </para>
            <para>
                For more information on using <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference>, see <legacyLink xlink:href="41963b25-34b7-4343-8446-34ba516b83ca">Graphic Objects</legacyLink>.
            </para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="1cba3ba5-3d49-4e43-8293-209299f2f6f4">CGdiObject</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h
            </para>
        </content>
    </requirements>
    <section address="crgn__combinergn">
        <!--c20ff366-845d-465c-9fff-69205aceec51-->
        <title>CRgn::CombineRgn</title>
        <content>
            <para>Creates a new GDI region by combining two existing regions.</para>
            <legacySyntax>int CombineRgn(
    CRgn* pRgn1,
    CRgn* pRgn2,
    int nCombineMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies an existing region.</para>
                        </definition>
                        <definedTerm> <parameterReference>pRgn2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies an existing region.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCombineMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the operation to be performed when combining the two source regions. It can be any one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>RGN_AND</legacyBold>   Uses overlapping areas of both regions (intersection).
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_COPY</legacyBold>   Creates a copy of region 1 (identified by <parameterReference>pRgn1</parameterReference>).
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_DIFF</legacyBold>   Creates a region consisting of the areas of region 1 (identified by <parameterReference>pRgn1</parameterReference>) that are not part of region 2 (identified by <parameterReference>pRgn2</parameterReference>).
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_OR</legacyBold>   Combines both regions in their entirety (union).
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_XOR</legacyBold>   Combines both regions but removes overlapping areas.
                                    </para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the type of the resulting region. It can be one of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   New region has overlapping borders.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   No new region created.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   New region is empty.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   New region has no overlapping borders.
                            </para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The regions are combined as specified by <parameterReference>nCombineMode</parameterReference>.
                    </para>
                    <para>
                        The two specified regions are combined, and the resulting region handle is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object. Thus, whatever region is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object is replaced by the combined region.
                    </para>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller. </para>
                    <para>
                        Use <legacyLink xlink:href="#crgn__copyrgn">CopyRgn</legacyLink> to simply copy one region into another region.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#144</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__copyrgn">
        <!--a44b88f6-9db2-4738-ba98-b3ac3d9b84d0-->
        <title>CRgn::CopyRgn</title>
        <content>
            <para>
                Copies the region defined by <parameterReference>pRgnSrc</parameterReference> into the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>int CopyRgn( CRgn* pRgnSrc );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgnSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies an existing region.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the type of the resulting region. It can be one of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   New region has overlapping borders.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   No new region created.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   New region is empty.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   New region has no overlapping borders.
                            </para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The new region replaces the region formerly stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object. This function is a special case of the <legacyLink xlink:href="#crgn__combinergn">CombineRgn</legacyLink> member function.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>
                                See the example for <legacyLink xlink:href="#crgn__createellipticrgn">CRgn::CreateEllipticRgn</legacyLink>.
                            </para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createellipticrgn">
        <!--e7bb105c-07f7-481e-9da4-a103e3aca881-->
        <title>CRgn::CreateEllipticRgn</title>
        <content>
            <para>Creates an elliptical region.</para>
            <legacySyntax>BOOL CreateEllipticRgn(
    int x1,
    int y1,
    int x2,
    int y2 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the bounding rectangle of the ellipse.</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the bounding rectangle of the ellipse.</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the lower-right corner of the bounding rectangle of the ellipse.</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the lower-right corner of the bounding rectangle of the ellipse.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The region is defined by the bounding rectangle specified by <parameterReference>x1</parameterReference>, <parameterReference>y1</parameterReference>, <parameterReference>x2</parameterReference>, and <parameterReference>y2</parameterReference>. The region is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                    </para>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller. </para>
                    <para>
                        When it has finished using a region created with the <unmanagedCodeEntityReference>CreateEllipticRgn</unmanagedCodeEntityReference> function, an application should select the region out of the device context and use the <unmanagedCodeEntityReference>DeleteObject</unmanagedCodeEntityReference> function to remove it.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#145</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createellipticrgnindirect">
        <!--2f44d9d2-6acc-44ce-b236-b60f540b8e28-->
        <title>CRgn::CreateEllipticRgnIndirect</title>
        <content>
            <para>Creates an elliptical region.</para>
            <legacySyntax>BOOL CreateEllipticRgnIndirect( LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the logical coordinates of the upper-left and lower-right corners of the bounding rectangle of the ellipse.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The region is defined by the structure or object pointed to by <parameterReference>lpRect</parameterReference> and is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                    </para>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller. </para>
                    <para>
                        When it has finished using a region created with the <unmanagedCodeEntityReference>CreateEllipticRgnIndirect</unmanagedCodeEntityReference> function, an application should select the region out of the device context and use the <unmanagedCodeEntityReference>DeleteObject</unmanagedCodeEntityReference> function to remove it.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>
                                See the example for <legacyLink xlink:href="#crgn__createrectrgnindirect">CRgn::CreateRectRgnIndirect</legacyLink>.
                            </para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createfromdata">
        <!--bde6e1b7-c7b2-458c-9f2b-d00956dd32d1-->
        <title>CRgn::CreateFromData</title>
        <content>
            <para>Creates a region from the given region and transformation data.</para>
            <legacySyntax>BOOL CreateFromData(
    const XFORM* lpXForm,
    int nCount,
    const RGNDATA* pRgnData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpXForm</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to an <legacyLink xlink:href="4fb4ef5b-05d2-4884-82d1-1cb8f7be6302">XFORM</legacyLink> data structure that defines the transformation to be performed on the region. If this pointer is <legacyBold>NULL</legacyBold>, the identity transformation is used.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the number of bytes pointed to by <parameterReference>pRgnData</parameterReference>.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>pRgnData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a <legacyLink xlink:href="72257c00-f440-4dca-979e-9b6b5b2d5f2f">RGNDATA</legacyLink> data structure that contains the region data.
                            </para>
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
                    <para>
                        An application can retrieve data for a region by calling the <unmanagedCodeEntityReference>CRgn::GetRegionData</unmanagedCodeEntityReference> function.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createfrompath">
        <!--de893506-3dd9-4de0-a512-8ccf02e975b8-->
        <title>CRgn::CreateFromPath</title>
        <content>
            <para>Creates a region from the path that is selected into the given device context.</para>
            <legacySyntax>BOOL CreateFromPath( CDC* pDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies a device context that contains a closed path.</para>
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
                    <para>
                        The device context identified by the <parameterReference>pDC</parameterReference> parameter must contain a closed path. After <unmanagedCodeEntityReference>CreateFromPath</unmanagedCodeEntityReference> converts a path into a region, Windows discards the closed path from the device context.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createpolygonrgn">
        <!--d18f1bf8-ff01-431b-8475-c7a1bcb966d5-->
        <title>CRgn::CreatePolygonRgn</title>
        <content>
            <para>Creates a polygonal region.</para>
            <legacySyntax>BOOL CreatePolygonRgn(
    LPPOINT lpPoints,
    int nCount,
    int nMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to an array of <legacyBold>POINT</legacyBold> structures or an array of <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> objects. Each structure specifies the x-coordinate and y-coordinate of one vertex of the polygon. The <legacyBold>POINT</legacyBold> structure has the following form:
                            </para>
                            <para> <codeInline>typedef struct tagPOINT {</codeInline>
                            </para>
                            <para> <codeInline>int x;</codeInline>
                            </para>
                            <para> <codeInline>int y;</codeInline>
                            </para>
                            <para> <codeInline>} POINT;</codeInline>
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the number of <legacyBold>POINT</legacyBold> structures or <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> objects in the array pointed to by <parameterReference>lpPoints</parameterReference>.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the filling mode for the region. This parameter may be either <legacyBold>ALTERNATE</legacyBold> or <legacyBold>WINDING</legacyBold>.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The system closes the polygon automatically, if necessary, by drawing a line from the last vertex to the first. The resulting region is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                    </para>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.</para>
                    <para>
                        When the polygon-filling mode is <legacyBold>ALTERNATE</legacyBold>, the system fills the area between odd-numbered and even-numbered polygon sides on each scan line. That is, the system fills the area between the first and second side, between the third and fourth side, and so on.
                    </para>
                    <para>
                        When the polygon-filling mode is <legacyBold>WINDING</legacyBold>, the system uses the direction in which a figure was drawn to determine whether to fill an area. Each line segment in a polygon is drawn in either a clockwise or a counterclockwise direction. Whenever an imaginary line drawn from an enclosed area to the outside of a figure passes through a clockwise line segment, a count is incremented. When the line passes through a counterclockwise line segment, the count is decremented. The area is filled if the count is nonzero when the line reaches the outside of the figure.
                    </para>
                    <para>
                        When an application has finished using a region created with the <unmanagedCodeEntityReference>CreatePolygonRgn</unmanagedCodeEntityReference> function, it should select the region out of the device context and use the <unmanagedCodeEntityReference>DeleteObject</unmanagedCodeEntityReference> function to remove it.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#146</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createpolypolygonrgn">
        <!--09520a83-d59f-4ac7-9b7f-8ec063b58149-->
        <title>CRgn::CreatePolyPolygonRgn</title>
        <content>
            <para>Creates a region consisting of a series of closed polygons.</para>
            <legacySyntax>BOOL CreatePolyPolygonRgn(
    LPPOINT lpPoints,
    LPINT lpPolyCounts,
    int nCount,
    int nPolyFillMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to an array of <legacyBold>POINT</legacyBold> structures or an array of <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> objects that defines the vertices of the polygons. Each polygon must be explicitly closed because the system does not close them automatically. The polygons are specified consecutively. The <legacyBold>POINT</legacyBold> structure has the following form:
                            </para>
                            <para> <codeInline>typedef struct tagPOINT {</codeInline>
                            </para>
                            <para> <codeInline>int x;</codeInline>
                            </para>
                            <para> <codeInline>int y;</codeInline>
                            </para>
                            <para> <codeInline>} POINT;</codeInline>
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>lpPolyCounts</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to an array of integers. The first integer specifies the number of vertices in the first polygon in the <parameterReference>lpPoints</parameterReference> array, the second integer specifies the number of vertices in the second polygon, and so on.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the total number of integers in the <parameterReference>lpPolyCounts</parameterReference> array.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nPolyFillMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the polygon-filling mode. This value may be either <legacyBold>ALTERNATE</legacyBold> or <legacyBold>WINDING</legacyBold>.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The resulting region is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
                    </para>
                    <para>The polygons may be disjoint, or they may overlap. </para>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.</para>
                    <para>
                        When the polygon-filling mode is <legacyBold>ALTERNATE</legacyBold>, the system fills the area between odd-numbered and even-numbered polygon sides on each scan line. That is, the system fills the area between the first and second side, between the third and fourth side, and so on.
                    </para>
                    <para>
                        When the polygon-filling mode is <legacyBold>WINDING</legacyBold>, the system uses the direction in which a figure was drawn to determine whether to fill an area. Each line segment in a polygon is drawn in either a clockwise or a counterclockwise direction. Whenever an imaginary line drawn from an enclosed area to the outside of a figure passes through a clockwise line segment, a count is incremented. When the line passes through a counterclockwise line segment, the count is decremented. The area is filled if the count is nonzero when the line reaches the outside of the figure.
                    </para>
                    <para>
                        When an application has finished using a region created with the <unmanagedCodeEntityReference>CreatePolyPolygonRgn</unmanagedCodeEntityReference> function, it should select the region out of the device context and use the <legacyLink xlink:href="1cba3ba5-3d49-4e43-8293-209299f2f6f4#cgdiobject__deleteobject">CGDIObject::DeleteObject</legacyLink> member function to remove it.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createrectrgn">
        <!--97d03fc8-cbcc-47a0-a336-ccf5f988ff7e-->
        <title>CRgn::CreateRectRgn</title>
        <content>
            <para>
                Creates a rectangular region that is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>BOOL CreateRectRgn(
    int x1,
    int y1,
    int x2,
    int y2 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the region.</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the region.</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the lower-right corner of the region.</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the lower-right corner of the region.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller. </para>
                    <para>
                        When it has finished using a region created by <unmanagedCodeEntityReference>CreateRectRgn</unmanagedCodeEntityReference>, an application should use the <legacyLink xlink:href="1cba3ba5-3d49-4e43-8293-209299f2f6f4#cgdiobject__deleteobject">CGDIObject::DeleteObject</legacyLink> member function to remove the region.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#147</codeReference>
                  
                            <para>
                                For an additional example, see <legacyLink xlink:href="#crgn__combinergn">CRgn::CombineRgn</legacyLink>.
                            </para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createrectrgnindirect">
        <!--bee552f6-4d74-40f0-8f23-fcd8c823b988-->
        <title>CRgn::CreateRectRgnIndirect</title>
        <content>
            <para>
                Creates a rectangular region that is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>BOOL CreateRectRgnIndirect( LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the logical coordinates of the upper-left and lower-right corners of the region. The <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure has the following form:
                            </para>
                            <para> <codeInline>typedef struct tagRECT {</codeInline>
                            </para>
                            <para> <codeInline>int left;</codeInline>
                            </para>
                            <para> <codeInline>int top;</codeInline>
                            </para>
                            <para> <codeInline>int right;</codeInline>
                            </para>
                            <para> <codeInline>int bottom;</codeInline>
                            </para>
                            <para> <codeInline>} RECT;</codeInline>
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller. </para>
                    <para>
                        When it has finished using a region created by <unmanagedCodeEntityReference>CreateRectRgnIndirect</unmanagedCodeEntityReference>, an application should use the <legacyLink xlink:href="1cba3ba5-3d49-4e43-8293-209299f2f6f4#cgdiobject__deleteobject">CGDIObject::DeleteObject</legacyLink> member function to remove the region.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#148</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__createroundrectrgn">
        <!--691599de-0705-49a3-9bcd-eca86051b290-->
        <title>CRgn::CreateRoundRectRgn</title>
        <content>
            <para>
                Creates a rectangular region with rounded corners that is stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>BOOL CreateRoundRectRgn(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the region.</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the region.</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the lower-right corner of the region.</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the lower-right corner of the region.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x3</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width of the ellipse used to create the rounded corners.</para>
                        </definition>
                        <definedTerm> <parameterReference>y3</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height of the ellipse used to create the rounded corners.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the operation succeeded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller. </para>
                    <para>
                        When an application has finished using a region created with the <unmanagedCodeEntityReference>CreateRoundRectRgn</unmanagedCodeEntityReference> function, it should select the region out of the device context and use the <legacyLink xlink:href="1cba3ba5-3d49-4e43-8293-209299f2f6f4#cgdiobject__deleteobject">CGDIObject::DeleteObject</legacyLink> member function to remove it.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#149</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__crgn">
        <!--1f28a982-51b7-43db-8ec5-116c67c95ef3-->
        <title>CRgn::CRgn</title>
        <content>
            <para>
                Constructs a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>CRgn();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The <unmanagedCodeEntityReference>m_hObject</unmanagedCodeEntityReference> data member does not contain a valid Windows GDI region until the object is initialized with one or more of the other <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> member functions.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>
                                See the example for <legacyLink xlink:href="#crgn__createroundrectrgn">CRgn::CreateRoundRectRgn</legacyLink>.
                            </para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__equalrgn">
        <!--9685ae11-ba8d-4d32-abf8-ee6cfed5c215-->
        <title>CRgn::EqualRgn</title>
        <content>
            <para>
                Determines whether the given region is equivalent to the region stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>BOOL EqualRgn( CRgn* pRgn ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies a region.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the two regions are equivalent; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#150</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__fromhandle">
        <!--391d75e8-f314-47e1-86d3-82f61e9331e3-->
        <title>CRgn::FromHandle</title>
        <content>
            <para>
                Returns a pointer to a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object when given a handle to a Windows region.
            </para>
            <legacySyntax>static CRgn* PASCAL FromHandle( HRGN hRgn );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a handle to a Windows region.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        A pointer to a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object. If the function was not successful, the return value is <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        If a <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object is not already attached to the handle, a temporary <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object is created and attached. This temporary <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object is valid only until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. Another way of saying this is that the temporary object is only valid during the processing of one window message.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__getregiondata">
        <!--f2249159-8c24-48aa-bc3a-1603f5a70c4b-->
        <title>CRgn::GetRegionData</title>
        <content>
            <para>Fills the specified buffer with data describing the region.</para>
            <legacySyntax>int GetRegionData(
    LPRGNDATA lpRgnData,
    int nCount ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRgnData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a <legacyLink xlink:href="72257c00-f440-4dca-979e-9b6b5b2d5f2f">RGNDATA</legacyLink> data structure that receives the information. If this parameter is <legacyBold>NULL</legacyBold>, the return value contains the number of bytes needed for the region data.
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the size, in bytes, of the <parameterReference>lpRgnData</parameterReference> buffer.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        If the function succeeds and <parameterReference>nCount</parameterReference> specifies an adequate number of bytes, the return value is always <parameterReference>nCount</parameterReference>. If the function fails, or if <parameterReference>nCount</parameterReference> specifies less than adequate number of bytes, the return value is 0 (error).
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        This data includes the dimensions of the rectangles that make up the region. This function is used in conjunction with the <unmanagedCodeEntityReference>CRgn::CreateFromData</unmanagedCodeEntityReference> function.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__getrgnbox">
        <!--0add0d05-b976-4cfb-97f6-e052df658ce1-->
        <title>CRgn::GetRgnBox</title>
        <content>
            <para>
                Retrieves the coordinates of the bounding rectangle of the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>int GetRgnBox( LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object to receive the coordinates of the bounding rectangle. The <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure has the following form:
                            </para>
                            <para> <codeInline>typedef struct tagRECT {</codeInline>
                            </para>
                            <para> <codeInline>int left;</codeInline>
                            </para>
                            <para> <codeInline>int top;</codeInline>
                            </para>
                            <para> <codeInline>int right;</codeInline>
                            </para>
                            <para> <codeInline>int bottom;</codeInline>
                            </para>
                            <para> <codeInline>} RECT;</codeInline>
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the region's type. It can be any of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>    Region has overlapping borders.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   Region is empty.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold> <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object does not specify a valid region.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>    Region has no overlapping borders.
                            </para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>
                                See the example for <legacyLink xlink:href="#crgn__createpolygonrgn">CRgn::CreatePolygonRgn</legacyLink>.
                            </para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__offsetrgn">
        <!--125f5269-b33e-4fae-94f9-55da0aa4ff9b-->
        <title>CRgn::OffsetRgn</title>
        <content>
            <para>
                Moves the region stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object by the specified offsets.
            </para>
            <legacySyntax>int OffsetRgn(
    int x,
    int y );

int OffsetRgn(
    POINT point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to move left or right.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to move up or down.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                The x-coordinate of <parameterReference>point</parameterReference> specifies the number of units to move left or right. The y-coordinate of <parameterReference>point</parameterReference> specifies the number of units to move up or down. The <parameterReference>point</parameterReference> parameter may be either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The new region's type. It can be any one of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   Region has overlapping borders.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   Region handle is not valid.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   Region is empty.
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   Region has no overlapping borders.
                            </para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        The function moves the region                         <legacyItalic>x</legacyItalic> units along the x-axis and                         <legacyItalic>y</legacyItalic> units along the y-axis.
                    </para>
                    <para>
                        The coordinate values of a region must be less than or equal to 32,767 and greater than or equal to –32,768. The                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> parameters must be carefully chosen to prevent invalid region coordinates.
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>
                                See the example for <legacyLink xlink:href="#crgn__createellipticrgn">CRgn::CreateEllipticRgn</legacyLink>.
                            </para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__operator_hrgn">
        <!--fd55b861-3f13-4370-b6d3-6744cfc5bf9b-->
        <title>CRgn::operator HRGN</title>
        <content>
            <para>
                Use this operator to get the attached Windows GDI handle of the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>operator HRGN() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>
                        If successful, a handle to the Windows GDI object represented by the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object; otherwise <legacyBold>NULL</legacyBold>.
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        This operator is a casting operator, which supports direct use of an <legacyBold>HRGN</legacyBold> object.
                    </para>
                    <para>
                        For more information about using graphic objects, see the article                         <externalLink> <linkText>Graphic Objects</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144962</linkUri>
                        </externalLink> in the <token>winSDK</token>.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__ptinregion">
        <!--7de1fc52-8adf-432a-8861-3944e058dd51-->
        <title>CRgn::PtInRegion</title>
        <content>
            <para>
                Checks whether the point given by                 <legacyItalic>x</legacyItalic> and                 <legacyItalic>y</legacyItalic> is in the region stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>BOOL PtInRegion(
    int x,
    int y ) const;

BOOL PtInRegion(
    POINT point ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the point to test.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the point to test.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                The x- and y-coordinates of <parameterReference>point</parameterReference> specify the x- and y-coordinates of the point to test the value of. The <parameterReference>point</parameterReference> parameter can either be a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the point is in the region; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__rectinregion">
        <!--0c5e355b-29f6-48cc-950f-b38e0fcfd480-->
        <title>CRgn::RectInRegion</title>
        <content>
            <para>
                Determines whether any part of the rectangle specified by <parameterReference>lpRect</parameterReference> is within the boundaries of the region stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object.
            </para>
            <legacySyntax>BOOL RectInRegion( LPCRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object. The <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure has the following form:
                            </para>
                            <para> <codeInline>typedef struct tagRECT {</codeInline>
                            </para>
                            <para> <codeInline>int left;</codeInline>
                            </para>
                            <para> <codeInline>int top;</codeInline>
                            </para>
                            <para> <codeInline>int right;</codeInline>
                            </para>
                            <para> <codeInline>int bottom;</codeInline>
                            </para>
                            <para> <codeInline>} RECT;</codeInline>
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if any part of the specified rectangle lies within the boundaries of the region; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="crgn__setrectrgn">
        <!--71849793-5c04-4207-905d-ae3ebd484900-->
        <title>CRgn::SetRectRgn</title>
        <content>
            <para>Creates a rectangular region.</para>
            <legacySyntax>void SetRectRgn(
    int x1,
    int y1,
    int x2,
    int y2 );

void SetRectRgn(
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the rectangular region.</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the rectangular region.</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner of the rectangular region.</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner of the rectangular region.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                Specifies the rectangular region. Can be either a pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object.
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>
                        Unlike <legacyLink xlink:href="#crgn__createrectrgn">CreateRectRgn</legacyLink>, however, it does not allocate any additional memory from the local Windows application heap. Instead, it uses the space allocated for the region stored in the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object. This means that the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object must already have been initialized with a valid Windows region before calling <unmanagedCodeEntityReference>SetRectRgn</unmanagedCodeEntityReference>. The points given by <parameterReference>x1</parameterReference>, <parameterReference>y1</parameterReference>, <parameterReference>x2</parameterReference>, and <parameterReference>y2</parameterReference> specify the minimum size of the allocated space.
                    </para>
                    <para>
                        Use this function instead of the <unmanagedCodeEntityReference>CreateRectRgn</unmanagedCodeEntityReference> member function to avoid calls to the local memory manager.
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



