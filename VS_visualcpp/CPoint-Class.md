---
title: "CPoint Class"
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
ms.assetid: a6d4db93-35cc-444d-9221-c3e160f6edaa
caps.latest.revision: 14
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
# CPoint Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Similar to the Windows             <unmanagedCodeEntityReference>POINT </unmanagedCodeEntityReference>structure. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CPoint : public tagPOINT</legacySyntax>
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
                                        <link xlink:href="#cpoint__cpoint">CPoint::CPoint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a                                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
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
                                        <link xlink:href="#cpoint__offset">CPoint::Offset</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds values to the                                         <legacyBold>x</legacyBold> and                                         <legacyBold>y</legacyBold> members of the                                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
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
                                    <para>
                                        <link xlink:href="#cpoint__operator_-">CPoint::operator -</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the difference of a                                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> and a size, or the negation of a point, or the size difference between two points, or the offset by a negative size.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#cpoint__operator__neq">CPoint::operator !=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Checks for inequality between two points.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#cpoint__operator__add">CPoint::operator +</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the sum of a                                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> and a size or point, or a                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> offset by a size.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#cpoint__operator__add_eq">CPoint::operator +=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Offsets                                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> by adding a size or point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="428fb5e0ce0f">CPoint::operator -=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Offsets                                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> by subtracting a size or point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#cpoint__operator__eq_eq">CPoint::operator ==</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Checks for equality between two points.</para>
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
            <para>It also includes member functions to manipulate                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> and                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structures. </para>
            <para>A                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object can be used wherever a                 <unmanagedCodeEntityReference>POINT </unmanagedCodeEntityReference>structure is used. The operators of this class that interact with a "size" accept either                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> objects or                 <externalLink>                    <linkText>SIZE</linkText>
                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                </externalLink> structures, since the two are interchangeable.</para>
            <alert class="note">
                <para>This class is derived from the                     <unmanagedCodeEntityReference>tagPOINT </unmanagedCodeEntityReference>structure. (The name                     <unmanagedCodeEntityReference>tagPOINT</unmanagedCodeEntityReference> is a less commonly used name for the                     <unmanagedCodeEntityReference>POINT </unmanagedCodeEntityReference>structure.) This means that the data members of the                     <unmanagedCodeEntityReference>POINT </unmanagedCodeEntityReference>structure,                     <unmanagedCodeEntityReference>x</unmanagedCodeEntityReference> and                     <unmanagedCodeEntityReference>y</unmanagedCodeEntityReference>, are accessible data members of                     <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
            </alert>
            <alert class="note">
                <para>For more information on shared utility classes (like                     <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>), see                     <legacyLink xlink:href="e13aaac3-21ec-4f4d-8834-432b40fde544">Shared Classes</legacyLink>.</para>
            </alert>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para>
                <unmanagedCodeEntityReference>tagPOINT</unmanagedCodeEntityReference>
            </para>
            <para>
                <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> atltypes.h</para>
        </content>
    </requirements>
    <section address="cpoint__cpoint">
        <!--8a165dd3-5cf5-4ad2-a738-674856d5fe80-->
        <title>CPoint::CPoint</title>
        <content>
            <para>Constructs a                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CPoint( ) throw( ); 
CPoint(
    int                 <parameterReference>initX</parameterReference>,
    int                 <parameterReference>initY</parameterReference> 
) throw( );
CPoint(
    POINT                 <parameterReference>initPt</parameterReference> 
) throw( );
CPoint(
    SIZE                 <parameterReference>initSize</parameterReference> 
) throw( );
CPoint(
    LPARAM                 <parameterReference>dwPoint</parameterReference> 
) throw( );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>initX</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the value of the                                 <unmanagedCodeEntityReference>x</unmanagedCodeEntityReference> member of                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>initY</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the value of the                                 <unmanagedCodeEntityReference>y</unmanagedCodeEntityReference> member of                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>initPt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> that specifies the values used to initialize                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>initSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <externalLink>
                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> that specifies the values used to initialize                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>dwPoint</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Sets the                                 <unmanagedCodeEntityReference>x</unmanagedCodeEntityReference> member to the low-order word of                                 <parameterReference>dwPoint</parameterReference> and the                                 <unmanagedCodeEntityReference>y</unmanagedCodeEntityReference> member to the high-order word of                                 <parameterReference>dwPoint</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If no arguments are given,                         <unmanagedCodeEntityReference>x</unmanagedCodeEntityReference> and                         <unmanagedCodeEntityReference>y</unmanagedCodeEntityReference> members are set to 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>
CPoint   ptTopLeft(0,0);

// works from a POINT, too

POINT   ptHere;
ptHere.x = 35;
ptHere.y = 95;

CPoint   ptMFCHere(ptHere);

// works from A SIZE

SIZE   sHowBig;
sHowBig.cx = 300;
sHowBig.cy = 10;

CPoint ptMFCBig(sHowBig);

// or from a DWORD

DWORD   dwSize;
dwSize = MAKELONG(35, 95);

CPoint ptFromDouble(dwSize);
ASSERT(ptFromDouble == ptMFCHere);   </code>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpoint__offset">
        <!--6d103fc9-c570-4916-98d0-432aeae9216c-->
        <title>CPoint::Offset</title>
        <content>
            <para>Adds values to the                 <legacyBold>x</legacyBold> and                 <legacyBold>y</legacyBold> members of the                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>void Offset(</legacyBold>
                <legacyBold>   int </legacyBold>
                <parameterReference>xOffset</parameterReference>
                <legacyBold>,</legacyBold>
                <legacyBold>   int </legacyBold>
                <parameterReference>yOffset</parameterReference>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void Offset(</legacyBold>
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void Offset(</legacyBold>
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>xOffset</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount to offset the                                 <legacyBold>x</legacyBold> member of the                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>yOffset</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount to offset the                                 <legacyBold>y</legacyBold> member of the                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount (                                <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> or                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>) to offset the                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount (                                <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink>) to offset the                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#28</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpoint__operator__eq_eq">
        <!--f9e8b9d7-fab2-40ff-976a-696959cd282e-->
        <title>CPoint::operator ==</title>
        <content>
            <para>Checks for equality between two points.</para>
            <legacySyntax>
                <legacyBold>BOOL operator ==(</legacyBold>
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the points are equal; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#29</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpoint__operator__neq">
        <!--7d94f119-4e4d-4c77-bcc7-8d54d3b84c8f-->
        <title>CPoint::operator !=</title>
        <content>
            <para>Checks for inequality between two points.</para>
            <legacySyntax>
                <legacyBold>BOOL operator!=(</legacyBold>
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the points are not equal; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#30</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpoint__operator__add_eq">
        <!--731e1fe9-374c-46a3-b2a2-23a1ae5ecb3d-->
        <title>CPoint::operator +=</title>
        <content>
            <para>The first overload adds a size to the                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>void operator +=(</legacyBold>
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void operator +=(</legacyBold>
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The second overload adds a point to the                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                    <para>In both cases, addition is done by adding the                         <legacyBold>x</legacyBold> (or                         <legacyBold>cx</legacyBold>) member of the right-hand operand to the                         <legacyBold>x</legacyBold> member of the                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> and adding the                         <legacyBold>y</legacyBold> (or                         <legacyBold>cy</legacyBold>) member of the right-hand operand to the                         <legacyBold>y</legacyBold> member of the                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                    <para>For example, adding                         <codeInline>CPoint(5, -7)</codeInline> to a variable which contains                         <codeInline>CPoint(30, 40)</codeInline> changes the variable to                         <codeInline>CPoint(35, 33)</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#31</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpoint__operator_-_eq">
        <!--bb42bee5-4622-4367-82e5-428fb5e0ce0f-->
        <title>CPoint::operator -=</title>
        <content>
            <para>The first overload subtracts a size from the                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>void operator -=(</legacyBold>
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void operator -=(</legacyBold>
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The second overload subtracts a point from the                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                    <para>In both cases, subtraction is done by subtracting the                         <legacyBold>x</legacyBold> (or                         <legacyBold>cx</legacyBold>) member of the right-hand operand from the                         <legacyBold>x</legacyBold> member of the                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> and subtracting the                         <legacyBold>y</legacyBold> (or                         <legacyBold>cy</legacyBold>) member of the right-hand operand from the                         <legacyBold>y</legacyBold> member of the                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                    <para>For example, subtracting                         <codeInline>CPoint(5, -7)</codeInline> from a variable which contains                         <codeInline>CPoint(30, 40)</codeInline> changes the variable to                         <codeInline>CPoint(25, 47)</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#32</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpoint__operator__add">
        <!--7729efc0-c61b-4906-8b04-097d07b292b9-->
        <title>CPoint::operator +</title>
        <content>
            <para>Use this operator to offset                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> by a                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> or                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object, or to offset a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by a                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>CPoint operator +(</legacyBold>
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CPoint operator +(</legacyBold>
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CRect operator +(</legacyBold>
                <legacyBold>   const RECT* </legacyBold>
                <parameterReference>lpRect</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a pointer to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> that is offset by a size, a                         <legacyBold>CPoint </legacyBold>that is offset by a point, or a                         <legacyBold>CRect </legacyBold>offset by a point.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For example, using one of the first two overloads to offset the point                         <codeInline>CPoint(25, -19)</codeInline> by a point                         <codeInline>CPoint(15, 5)</codeInline> or size                         <codeInline>CSize(15, 5)</codeInline> returns the value                         <codeInline>CPoint(40, -14)</codeInline>.</para>
                    <para>Adding a rectangle to a point returns the rectangle after being offset by the                         <legacyBold>x</legacyBold> and                         <legacyBold>y</legacyBold> values specified in the point. For example, using the last overload to offset a rectangle                         <codeInline>CRect(125, 219, 325, 419)</codeInline> by a point                         <codeInline>CPoint(25, -19)</codeInline> returns                         <codeInline>CRect(150, 200, 350, 400)</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#33</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpoint__operator_-">
        <!--9eeea929-34fe-4f30-8640-a78aa729ea74-->
        <title>CPoint::operator -</title>
        <content>
            <para>Use one of the first two overloads to subtract a                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> or                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object from                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>CSize operator -(</legacyBold>
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CPoint operator -(</legacyBold>
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CRect operator -(</legacyBold>
                <legacyBold>   const RECT* </legacyBold>
                <parameterReference>lpRect</parameterReference>
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CPoint operator -( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a                                 <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> that is the difference between two points, a                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> that is offset by the negation of a size, a                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that is offset by the negation of a point, or a                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> that is the negation of a point.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The third overload offsets a                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the negation of                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>. Finally, use the unary operator to negate                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference>.</para>
                    <para>For example, using the first overload to find the difference between two points                         <codeInline>CPoint(25, -19)</codeInline> and                         <codeInline>CPoint(15, 5)</codeInline> returns                         <codeInline>CSize(10, -24)</codeInline>.</para>
                    <para>Subtracting a                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> from                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> does the same calculation as above but returns a                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object, not a                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object. For example, using the second overload to find the difference between the point                         <codeInline>CPoint(25, -19)</codeInline> and the size                         <codeInline>CSize(15, 5)</codeInline> returns                         <codeInline>CPoint(10, -24)</codeInline>.</para>
                    <para>Subtracting a rectangle from a point returns the rectangle offset by the negatives of the                         <legacyBold>x</legacyBold> and                         <legacyBold>y</legacyBold> values specified in the point. For example, using the last overload to offset the rectangle                         <codeInline>CRect(125, 200, 325, 400)</codeInline> by the point                         <codeInline>CPoint(25, -19)</codeInline> returns                         <codeInline>CRect(100, 219, 300, 419)</codeInline>.</para>
                    <para>Use the unary operator to negate a point. For example, using the unary operator with the point                         <codeInline>CPoint(25, -19)</codeInline> returns                         <codeInline>CPoint(-25, 19)</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#34</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics>
        <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample MDI</legacyLink>
        <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
        <link xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT Structure</link>
        <link xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</link>
        <link xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>

