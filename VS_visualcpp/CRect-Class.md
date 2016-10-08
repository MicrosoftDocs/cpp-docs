---
title: "CRect Class"
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
ms.assetid: dee4e752-15d6-4db4-b68f-1ad65b2ed6ca
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
# CRect Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Similar to a Windows             <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>
            <legacyBold>class CRect : public tagRECT</legacyBold>
        </legacySyntax>
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
                                        <link xlink:href="#crect__crect">CRect::CRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object.</para>
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
                                        <link xlink:href="#crect__bottomright">CRect::BottomRight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the bottom-right point of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__centerpoint">CRect::CenterPoint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the centerpoint of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__copyrect">CRect::CopyRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the dimensions of a source rectangle to                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__deflaterect">CRect::DeflateRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Decreases the width and height of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__equalrect">CRect::EqualRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is equal to the given rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__height">CRect::Height</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Calculates the height of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__inflaterect">CRect::InflateRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Increases the width and height of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__intersectrect">CRect::IntersectRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the intersection of two rectangles.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__isrectempty">CRect::IsRectEmpty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is empty.                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is empty if the width and/or height are 0.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__isrectnull">CRect::IsRectNull</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the                                         <legacyBold>top</legacyBold>,                                         <legacyBold>bottom</legacyBold>,                                         <legacyBold>left</legacyBold>, and                                         <legacyBold>right</legacyBold> member variables are all equal to 0.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__movetox">CRect::MoveToX</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to the specified x-coordinate.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__movetoxy">CRect::MoveToXY</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to the specified x- and y-coordinates.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__movetoy">CRect::MoveToY</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to the specified y-coordinate.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__normalizerect">CRect::NormalizeRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Standardizes the height and width of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__offsetrect">CRect::OffsetRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the specified offsets.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__ptinrect">CRect::PtInRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the specified point lies within                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__setrect">CRect::SetRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the dimensions of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__setrectempty">CRect::SetRectEmpty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to an empty rectangle (all coordinates equal to 0).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__size">CRect::Size</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Calculates the size of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__subtractrect">CRect::SubtractRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Subtracts one rectangle from another.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__topleft">CRect::TopLeft</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the top-left point of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__unionrect">CRect::UnionRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the union of two rectangles.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__width">CRect::Width</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Calculates the width of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
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
                                        <link xlink:href="#crect__operator_-">CRect::operator -</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Subtracts the given offsets from                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> or deflates                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and returns the resulting                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator_lpcrect">CRect::operator LPCRECT</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts a                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to an                                         <legacyBold>LPCRECT</legacyBold>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator_lprect">CRect::operator LPRECT</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts a                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to an                                         <unmanagedCodeEntityReference>LPRECT</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__neq">CRect::operator !=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is not equal to a rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__amp_">CRect::operator &amp;</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the intersection of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and a rectangle and returns the resulting                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__amp__eq">CRect::operator &amp;=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the intersection of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and a rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__or">CRect::operator |</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the union of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and a rectangle and returns the resulting                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__or_eq">CRect::operator |=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the union of                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and a rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__add">CRect::operator +</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds the given offsets to                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> or inflates                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and returns the resulting                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__add_eq">CRect::operator +=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds the specified offsets to                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> or inflates                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__eq">CRect::operator =</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the dimensions of a rectangle to                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator_-_eq">CRect::operator -=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Subtracts the specified offsets from                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> or deflates                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#crect__operator__eq_eq">CRect::operator ==</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether                                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is equal to a rectangle.</para>
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
                <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> also includes member functions to manipulate                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> objects and Windows                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structures.</para>
            <para>A                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object can be passed as a function parameter wherever a                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure,                 <legacyBold>LPCRECT</legacyBold>, or                 <unmanagedCodeEntityReference>LPRECT</unmanagedCodeEntityReference> can be passed.</para>
            <alert class="note">
                <para>This class is derived from the                     <legacyBold>tagRECT</legacyBold> structure. (The name                     <legacyBold>tagRECT</legacyBold> is a less-commonly-used name for the                     <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure.) This means that the data members (                    <legacyBold>left</legacyBold>,                     <legacyBold>top</legacyBold>,                     <legacyBold>right</legacyBold>, and                     <legacyBold>bottom</legacyBold>) of the                     <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure are accessible data members of                     <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
            </alert>
            <para>A                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> contains member variables that define the top-left and bottom-right points of a rectangle.</para>
            <para>When specifying a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>, you must be careful to construct it so that it is normalized — in other words, such that the value of the left coordinate is less than the right and the top is less than the bottom. For example, a top left of (10,10) and bottom right of (20,20) defines a normalized rectangle but a top left of (20,20) and bottom right of (10,10) defines a non-normalized rectangle. If the rectangle is not normalized, many                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> member functions may return incorrect results. (See                 <legacyLink xlink:href="#crect__normalizerect">CRect::NormalizeRect</legacyLink> for a list of these functions.) Before you call a function that requires normalized rectangles, you can normalize non-normalized rectangles by calling the                 <unmanagedCodeEntityReference>NormalizeRect</unmanagedCodeEntityReference> function.</para>
            <para>Use caution when manipulating a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> with the                 <legacyLink xlink:href="a2f0ce3a-e775-4646-813d-707a00eb2e0c">CDC::DPtoLP</legacyLink> and                 <legacyLink xlink:href="70d1438d-57f9-4390-9486-f6ceb58da1c4">CDC::LPtoDP</legacyLink> member functions. If the mapping mode of a display context is such that the y-extent is negative, as in                 <unmanagedCodeEntityReference>MM_LOENGLISH</unmanagedCodeEntityReference>, then                 <unmanagedCodeEntityReference>CDC::DPtoLP</unmanagedCodeEntityReference> will transform the                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> so that its top is greater than the bottom. Functions such as                 <legacyBold>Height</legacyBold> and                 <legacyBold>Size</legacyBold> will then return negative values for the height of the transformed                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>, and the rectangle will be non-normalized.</para>
            <para>When using overloaded                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> operators, the first operand must be a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>; the second can be either a                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object.</para>
            <alert class="note">
                <para>For more information on shared utility classes (like                     <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>), see                     <legacyLink xlink:href="e13aaac3-21ec-4f4d-8834-432b40fde544">Shared Classes</legacyLink>.</para>
            </alert>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para>
                <unmanagedCodeEntityReference>tagRECT</unmanagedCodeEntityReference>
            </para>
            <para>
                <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <legacyBold>Header:</legacyBold> atltypes.h</para>
        </content>
    </requirements>
    <section address="crect__bottomright">
        <!--2eb5a9da-5df8-4818-b9ea-ee1d9b458d05-->
        <title>CRect::BottomRight</title>
        <content>
            <para>The coordinates are returned as a reference to a                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object that is contained in                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>CPoint&amp; BottomRight( ) throw( );</legacyBold> 
                <legacyBold>const CPoint&amp; BottomRight( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The coordinates of the bottom-right corner of the rectangle.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can use this function to either get or set the bottom-right corner of the rectangle. Set the corner by using this function on the left side of the assignment operator.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#35</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__centerpoint">
        <!--66e7b0b5-b0d2-41d2-8b3d-76e8af845ca4-->
        <title>CRect::CenterPoint</title>
        <content>
            <para>Calculates the centerpoint of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by adding the left and right values and dividing by two, and adding the top and bottom values and dividing by two.</para>
            <legacySyntax>
                <legacyBold>CPoint CenterPoint( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object that is the centerpoint of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#36</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__copyrect">
        <!--af84c213-d6d0-47a2-ac68-1864f05e1905-->
        <title>CRect::CopyRect</title>
        <content>
            <para>Copies the                 <parameterReference>lpSrcRect</parameterReference> rectangle into                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>void CopyRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpSrcRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>lpSrcRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that is to be copied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#37</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__crect">
        <!--f8244ffe-d418-4ea2-a33b-7260759a88b1-->
        <title>CRect::CRect</title>
        <content>
            <para>Constructs a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>CRect( ) throw( );</legacyBold> 
                <legacyBold>CRect(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>l</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>t</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>r</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>b</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CRect(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>srcRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpSrcRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CRect(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CRect(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>topLeft</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>bottomRight</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>l</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the left position of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>t</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the top of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>r</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the right position of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>b</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bottom of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>srcRect</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Refers to the                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure with the coordinates for                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpSrcRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure with the coordinates for                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the origin point for the rectangle to be constructed. Corresponds to the top-left corner.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the displacement from the top-left corner to the bottom-right corner of the rectangle to be constructed.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>topLeft</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the top-left position of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bottomRight</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bottom-right position of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If no arguments are given,                         <legacyBold>left</legacyBold>,                         <legacyBold>top</legacyBold>,                         <legacyBold>right</legacyBold>, and                         <legacyBold>bottom</legacyBold> members are not initialized.</para>
                    <para>The                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>(                         <legacyBold>const RECT&amp;</legacyBold> ) and                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>(                         <legacyBold>LPCRECT</legacyBold> ) constructors perform a                         <legacyLink xlink:href="#crect__copyrect">CopyRect</legacyLink>. The other constructors initialize the member variables of the object directly.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#38</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__deflaterect">
        <!--d55554cc-f9f9-4342-b127-eda50ef76037-->
        <title>CRect::DeflateRect</title>
        <content>
            <para>
                <unmanagedCodeEntityReference>DeflateRect</unmanagedCodeEntityReference> deflates                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by moving its sides toward its center.</para>
            <legacySyntax>
                <legacyBold>void DeflateRect(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>x</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>y</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void DeflateRect(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void DeflateRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void DeflateRect(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>l</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>t</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>r</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>b</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
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
                            <para>Specifies the number of units to deflate the left and right sides of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to deflate the top and bottom of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> that specifies the number of units to deflate                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>. The                                 <parameterReference>cx</parameterReference> value specifies the number of units to deflate the left and right sides and the                                 <parameterReference>cy</parameterReference> value specifies the number of units to deflate the top and bottom.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that specifies the number of units to deflate each side.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>l</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to deflate the left side of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>t</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to deflate the top of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>r</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to deflate the right side of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>b</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to deflate the bottom of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To do this,                         <unmanagedCodeEntityReference>DeflateRect</unmanagedCodeEntityReference> adds units to the left and top and subtracts units from the right and bottom. The parameters of                         <unmanagedCodeEntityReference>DeflateRect</unmanagedCodeEntityReference> are signed values; positive values deflate                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and negative values inflate it. </para>
                    <para>The first two overloads deflate both pairs of opposite sides of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> so that its total width is decreased by two times                         <legacyItalic>x</legacyItalic> (or                         <parameterReference>cx</parameterReference>) and its total height is decreased by two times                         <legacyItalic>y</legacyItalic> (or                         <parameterReference>cy</parameterReference>). The other two overloads deflate each side of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> independently of the others.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#39</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__equalrect">
        <!--f662ea04-e284-4d9a-9c43-83d27886376d-->
        <title>CRect::EqualRect</title>
        <content>
            <para>Determines whether                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is equal to the given rectangle.</para>
            <legacySyntax>
                <legacyBold>BOOL EqualRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
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
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the upper-left and lower-right corner coordinates of a rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the two rectangles have the same top, left, bottom, and right values; otherwise 0.</para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#40</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__height">
        <!--cf540367-f531-4a76-a607-3c1f6875a105-->
        <title>CRect::Height</title>
        <content>
            <para>Calculates the height of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by subtracting the top value from the bottom value.</para>
            <legacySyntax>
                <legacyBold>int Height( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The height of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The resulting value can be negative.</para>
                    <alert class="note">
                        <para>The rectangle must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangle before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#41</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__inflaterect">
        <!--fdc656b0-5907-45d8-88ea-9553be7533c7-->
        <title>CRect::InflateRect</title>
        <content>
            <para>
                <unmanagedCodeEntityReference>InflateRect</unmanagedCodeEntityReference> inflates                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by moving its sides away from its center.</para>
            <legacySyntax>
                <legacyBold>void InflateRect(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>x</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>y</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void InflateRect(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void InflateRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void InflateRect(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>l</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>t</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>r</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>b</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
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
                            <para>Specifies the number of units to inflate the left and right sides of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to inflate the top and bottom of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> that specifies the number of units to inflate                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>. The                                 <parameterReference>cx</parameterReference> value specifies the number of units to inflate the left and right sides and the                                 <parameterReference>cy</parameterReference> value specifies the number of units to inflate the top and bottom.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that specifies the number of units to inflate each side.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>l</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to inflate the left side of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>t</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to inflate the top of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>r</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to inflate the right side of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>b</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of units to inflate the bottom of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To do this,                         <unmanagedCodeEntityReference>InflateRect</unmanagedCodeEntityReference> subtracts units from the left and top and adds units to the right and bottom. The parameters of                         <unmanagedCodeEntityReference>InflateRect</unmanagedCodeEntityReference> are signed values; positive values inflate                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and negative values deflate it. </para>
                    <para>The first two overloads inflate both pairs of opposite sides of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> so that its total width is increased by two times                         <legacyItalic>x</legacyItalic> (or                         <parameterReference>cx</parameterReference>) and its total height is increased by two times                         <legacyItalic>y</legacyItalic> (or                         <parameterReference>cy</parameterReference>). The other two overloads inflate each side of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> independently of the others.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#42</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__intersectrect">
        <!--6d3fa6d6-2eb6-4576-b97e-d6a4bceee462-->
        <title>CRect::IntersectRect</title>
        <content>
            <para>Makes a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the intersection of two existing rectangles.</para>
            <legacySyntax>
                <legacyBold>BOOL IntersectRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect1</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect2</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>lpRect1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains a source rectangle.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains a source rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the intersection is not empty; 0 if the intersection is empty.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The intersection is the largest rectangle contained in both existing rectangles.</para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#43</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__isrectempty">
        <!--1ff0b971-52d3-442e-b918-b292e6de224d-->
        <title>CRect::IsRectEmpty</title>
        <content>
            <para>Determines whether                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is empty.</para>
            <legacySyntax>
                <legacyBold>BOOL IsRectEmpty( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is empty; 0 if                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> is not empty.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A rectangle is empty if the width and/or height are 0 or negative. Differs from                         <unmanagedCodeEntityReference>IsRectNull</unmanagedCodeEntityReference>, which determines whether all coordinates of the rectangle are zero.</para>
                    <alert class="note">
                        <para>The rectangle must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangle before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#44</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__isrectnull">
        <!--20f0d12d-9175-4de4-8c4e-d9d3735c5162-->
        <title>CRect::IsRectNull</title>
        <content>
            <para>Determines whether the top, left, bottom, and right values of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> are all equal to 0.</para>
            <legacySyntax>
                <legacyBold>BOOL IsRectNull( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>'s top, left, bottom, and right values are all equal to 0; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Differs from                         <unmanagedCodeEntityReference>IsRectEmpty</unmanagedCodeEntityReference>, which determines whether the rectangle is empty.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#45</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__movetox">
        <!--e1708247-0473-4545-9a52-aca7813e127b-->
        <title>CRect::MoveToX</title>
        <content>
            <para>Call this function to move the rectangle to the absolute x-coordinate specified by                 <legacyItalic>x</legacyItalic>.</para>
            <legacySyntax>
                <legacyBold>void MoveToX(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>x</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
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
                            <para>The absolute x-coordinate for the upper-left corner of the rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#46</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__movetoxy">
        <!--6b3ff451-7bb6-452d-9722-90fa868c6c54-->
        <title>CRect::MoveToXY</title>
        <content>
            <para>Call this function to move the rectangle to the absolute x- and y-coordinates specified.</para>
            <legacySyntax>
                <legacyBold>void MoveToXY(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>x</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>y</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void MoveToXY(</legacyBold> 
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
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The absolute x-coordinate for the upper-left corner of the rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The absolute y-coordinate for the upper-left corner of the rectangle.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <legacyBold>POINT</legacyBold> structure specifying the absolute upper-left corner of the rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#47</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__movetoy">
        <!--bcfcbed5-2ea6-446f-96d0-5192cd380678-->
        <title>CRect::MoveToY</title>
        <content>
            <para>Call this function to move the rectangle to the absolute y-coordinate specified by                 <legacyItalic>y</legacyItalic>.</para>
            <legacySyntax>
                <legacyBold>void MoveToY(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>y</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The absolute y-coordinate for the upper-left corner of the rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#48</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__normalizerect">
        <!--0c8fd2fa-53bd-4218-abd6-11923eef7d01-->
        <title>CRect::NormalizeRect</title>
        <content>
            <para>Normalizes                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> so that both the height and width are positive.</para>
            <legacySyntax>
                <legacyBold>void NormalizeRect( ) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The rectangle is normalized for fourth-quadrant positioning, which Windows typically uses for coordinates.                         <unmanagedCodeEntityReference>NormalizeRect</unmanagedCodeEntityReference> compares the top and bottom values, and swaps them if the top is greater than the bottom. Similarly, it swaps the left and right values if the left is greater than the right. This function is useful when dealing with different mapping modes and inverted rectangles.</para>
                    <alert class="note">
                        <para>The following                             <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> member functions require normalized rectangles in order to work properly:                             <legacyLink xlink:href="#crect__height">Height</legacyLink>,                             <legacyLink xlink:href="#crect__width">Width</legacyLink>,                             <legacyLink xlink:href="#crect__size">Size</legacyLink>,                             <legacyLink xlink:href="#crect__isrectempty">IsRectEmpty</legacyLink>,                             <legacyLink xlink:href="#crect__ptinrect">PtInRect</legacyLink>,                             <legacyLink xlink:href="#crect__equalrect">EqualRect</legacyLink>,                             <legacyLink xlink:href="#crect__unionrect">UnionRect</legacyLink>,                             <legacyLink xlink:href="#crect__intersectrect">IntersectRect</legacyLink>,                             <legacyLink xlink:href="#crect__subtractrect">SubtractRect</legacyLink>,                             <legacyLink xlink:href="#crect__operator__eq_eq">operator ==</legacyLink>,                             <legacyLink xlink:href="#crect__operator__neq">operator !=</legacyLink>,                             <legacyLink xlink:href="#crect__operator__or">operator |</legacyLink>,                             <legacyLink xlink:href="#crect__operator__or_eq">operator |=</legacyLink>,                             <legacyLink xlink:href="#crect__operator__amp_">operator &amp;</legacyLink>, and                             <legacyLink xlink:href="#crect__operator__amp__eq">operator &amp;=</legacyLink>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#49</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__offsetrect">
        <!--46b73ee1-17f6-4426-a85d-dd0f521d7e1e-->
        <title>CRect::OffsetRect</title>
        <content>
            <para>Moves                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the specified offsets.</para>
            <legacySyntax>
                <legacyBold>void OffsetRect(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>x</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>y</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void OffsetRect(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void OffsetRect(</legacyBold> 
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
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount to move left or right. It must be negative to move left.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount to move up or down. It must be negative to move up.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object specifying both dimensions by which to move.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object specifying both dimensions by which to move.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Moves                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>                         <legacyItalic>x</legacyItalic> units along the x-axis and                         <legacyItalic>y</legacyItalic> units along the y-axis. The                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> parameters are signed values, so                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> can be moved left or right and up or down.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#50</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator_lpcrect">
        <!--0c3849bd-6de7-4ee3-b4e8-427e2f640d0d-->
        <title>CRect::operator LPCRECT</title>
        <content>
            <para>Converts a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to an                 <legacyLink xlink:href="8954848b-2c01-4a4f-abf5-ee55f6a05eeb">LPCRECT</legacyLink>.</para>
            <legacySyntax>
                <legacyBold>operator LPCRECT( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When you use this function, you don't need the address-of (                        <legacyBold>&amp;</legacyBold>) operator. This operator will be automatically used when you pass a                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object to a function that expects an                         <legacyBold>LPCRECT</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#58</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator_lprect">
        <!--628c15f5-113d-4416-a46d-64fb27bd3876-->
        <title>CRect::operator LPRECT</title>
        <content>
            <para>Converts a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to an                 <legacyLink xlink:href="8954848b-2c01-4a4f-abf5-ee55f6a05eeb">LPRECT</legacyLink>.</para>
            <legacySyntax>
                <legacyBold>operator LPRECT( ) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When you use this function, you don't need the address-of (                        <legacyBold>&amp;</legacyBold>) operator. This operator will be automatically used when you pass a                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object to a function that expects an                         <unmanagedCodeEntityReference>LPRECT</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                  
                            <para>See the example for                                 <legacyLink xlink:href="#crect__operator_lpcrect">CRect::operator LPCRECT</legacyLink>.</para>
                   
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__eq">
        <!--02cf0c63-7ca4-4bfc-b113-440e7797360b-->
        <title>CRect::operator =</title>
        <content>
            <para>Assigns                 <legacyItalic>srcRect</legacyItalic> to                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>void operator =(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>srcRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>srcRect</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Refers to a source rectangle. Can be a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#59</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__eq_eq">
        <!--7e35f922-42e0-42e7-ab92-9dd6f5ce885b-->
        <title>CRect::operator ==</title>
        <content>
            <para>Determines whether                 <parameterReference>rect</parameterReference> is equal to                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by comparing the coordinates of their upper-left and lower-right corners.</para>
            <legacySyntax>
                <legacyBold>BOOL operator ==(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>rect</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Refers to a source rectangle. Can be a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if equal; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#60</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__neq">
        <!--a582729a-1054-448a-958c-ded49b013282-->
        <title>CRect::operator !=</title>
        <content>
            <para>Determines whether                 <parameterReference>rect</parameterReference> is not equal to                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by comparing the coordinates of their upper-left and lower-right corners.</para>
            <legacySyntax>
                <legacyBold>BOOL operator!=(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>rect</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Refers to a source rectangle. Can be a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if not equal; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#61</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__add_eq">
        <!--2ab28143-d50f-46d2-992a-ca4c7180c43c-->
        <title>CRect::operator +=</title>
        <content>
            <para>The first two overloads move                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the specified offsets.</para>
            <legacySyntax>
                <legacyBold>void operator +=(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void operator +=(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void operator +=(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
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
                            <para>A                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object that specifies the number of units to move the rectangle.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object that specifies the number of units to move the rectangle.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the number of units to inflate each side of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The parameter's                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> (or                         <parameterReference>cx</parameterReference> and                         <parameterReference>cy</parameterReference>) values are added to                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                    <para>The third overload inflates                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the number of units specifed in each member of the parameter.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#62</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator_-_eq">
        <!--fcff05b5-c49e-4916-92d0-ee657e4df1de-->
        <title>CRect::operator -=</title>
        <content>
            <para>The first two overloads move                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the specified offsets.</para>
            <legacySyntax>
                <legacyBold>void operator -=(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void operator -=(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>void operator -=(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
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
                            <para>A                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object that specifies the number of units to move the rectangle.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object that specifies the number of units to move the rectangle.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the number of units to deflate each side of                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The parameter's                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> (or                         <parameterReference>cx</parameterReference> and                         <parameterReference>cy</parameterReference>) values are subtracted from                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                    <para>The third overload deflates                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the number of units specifed in each member of the parameter. Note that this overload functions like                         <legacyLink xlink:href="#crect__deflaterect">DeflateRect</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#63</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__amp__eq">
        <!--570fc122-4f4a-437a-b8b2-ace4ce854585-->
        <title>CRect::operator &amp;amp;=</title>
        <content>
            <para>Sets                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the intersection of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and                 <parameterReference>rect</parameterReference>.</para>
            <legacySyntax>
                <legacyBold>void operator&amp;=(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>rect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The intersection is the largest rectangle that is contained in both rectangles.</para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                   
                            <para>See the example for                                 <legacyLink xlink:href="#crect__intersectrect">CRect::IntersectRect</legacyLink>.</para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__or_eq">
        <!--692a264a-7bd9-400e-8182-39b7c6e33df7-->
        <title>CRect::operator |=</title>
        <content>
            <para>Sets                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the union of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and                 <parameterReference>rect</parameterReference>.</para>
            <legacySyntax>
                <legacyBold>void operator|=(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>rect</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> or                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The union is the smallest rectangle that contains both source rectangles. </para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#64</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__add">
        <!--215ee000-bd0a-487e-a004-2daa46d5bfdd-->
        <title>CRect::operator +</title>
        <content>
            <para>The first two overloads return a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that is equal to                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> displaced by the specified offsets.</para>
            <legacySyntax>
                <legacyBold>CRect operator +(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CRect operator +(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CRect operator +(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
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
                            <para>A                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object that specifies the number of units to move the return value.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object that specifies the number of units to move the return value.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the number of units to inflate each side of the return value.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> resulting from moving or inflating                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the number of units specified in the parameter.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The parameter's                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> (or                         <parameterReference>cx</parameterReference> and                         <parameterReference>cy</parameterReference>) parameters are added to                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>'s position.</para>
                    <para>The third overload returns a new                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that is equal to                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> inflated by the number of units specifed in each member of the parameter.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#65</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator_-">
        <!--e3439519-9683-49e5-a8f4-7b025c804ddf-->
        <title>CRect::operator -</title>
        <content>
            <para>The first two overloads return a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that is equal to                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> displaced by the specified offsets.</para>
            <legacySyntax>
                <legacyBold>CRect operator -(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CRect operator -(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CRect operator -(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
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
                            <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object that specifies the number of units to move the return value.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object that specifies the number of units to move the return value.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the number of units to deflate each side of the return value.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> resulting from moving or deflating                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by the number of units specified in the parameter.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The parameter's                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> (or                         <parameterReference>cx</parameterReference> and                         <parameterReference>cy</parameterReference>) parameters are subtracted from                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>'s position.</para>
                    <para>The third overload returns a new                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that is equal to                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> deflated by the number of units specifed in each member of the parameter. Note that this overload functions like                         <legacyLink xlink:href="#crect__deflaterect">DeflateRect</legacyLink>, not                         <legacyLink xlink:href="#crect__subtractrect">SubtractRect</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#66</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__amp_">
        <!--850d51f4-3484-416a-b6d6-7496b8c852e2-->
        <title>CRect::operator &amp;amp;</title>
        <content>
            <para>Returns a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that is the intersection of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and                 <legacyItalic>rect2</legacyItalic>.</para>
            <legacySyntax>
                <legacyBold>CRect operator&amp;(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>rect2</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>rect2</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that is the intersection of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and                         <legacyItalic>rect2</legacyItalic>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The intersection is the largest rectangle that is contained in both rectangles.</para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#67</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__operator__or">
        <!--4b23d639-7181-442f-90ed-be3422088df3-->
        <title>CRect::operator |</title>
        <content>
            <para>Returns a                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that is the union of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and                 <legacyItalic>rect2</legacyItalic>.</para>
            <legacySyntax>
                <legacyBold>CRect operator|(</legacyBold> 
                <legacyBold>   const RECT&amp; </legacyBold>
                <parameterReference>rect2</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>rect2</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Contains a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that is the union of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> and                         <legacyItalic>rect2</legacyItalic>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The union is the smallest rectangle that contains both rectangles.</para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#68</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__ptinrect">
        <!--a1c8f490-8034-44f9-a0e3-71b5832268d8-->
        <title>CRect::PtInRect</title>
        <content>
            <para>Determines whether the specified point lies within                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>BOOL PtInRect(</legacyBold> 
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
                            <para>Contains a                                 <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the point lies within                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A point is within                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> if it lies on the left or top side or is within all four sides. A point on the right or bottom side is outside                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                    <alert class="note">
                        <para>The rectangle must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangle before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#51</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__setrect">
        <!--09c60f9e-9df2-418a-9075-16b2a43d66e0-->
        <title>CRect::SetRect</title>
        <content>
            <para>Sets the dimensions of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> to the specified coordinates.</para>
            <legacySyntax>
                <legacyBold>void SetRect(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>x1</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>y1</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>x2</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>y2</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#52</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__setrectempty">
        <!--17d225fb-4556-4d35-9138-7c5cbf6b89f5-->
        <title>CRect::SetRectEmpty</title>
        <content>
            <para>Makes                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> a null rectangle by setting all coordinates to zero.</para>
            <legacySyntax>
                <legacyBold>void SetRectEmpty( ) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#53</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__size">
        <!--1607dc3b-e0bf-4073-b6fd-bac6970439d2-->
        <title>CRect::Size</title>
        <content>
            <para>The                 <parameterReference>cx</parameterReference> and                 <parameterReference>cy</parameterReference> members of the return value contain the height and width of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>CSize Size( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object that contains the size of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Either the height or width can be negative.</para>
                    <alert class="note">
                        <para>The rectangle must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangle before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#54</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__subtractrect">
        <!--cdf5359b-04fd-4e3f-8a28-ccaf7eef1bc4-->
        <title>CRect::SubtractRect</title>
        <content>
            <para>Makes the dimensions of the                 <legacyBold>CRect </legacyBold>equal to the subtraction of                 <parameterReference>lpRectSrc2</parameterReference> from                 <parameterReference>lpRectSrc1</parameterReference>.</para>
            <legacySyntax>
                <legacyBold>BOOL SubtractRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRectSrc1</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRectSrc2</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>lpRectSrc1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object from which a rectangle is to be subtracted.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRectSrc2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that is to be subtracted from the rectangle pointed to by the                                 <parameterReference>lpRectSrc1</parameterReference> parameter.</para>
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
                    <para>The subtraction is the smallest rectangle that contains all of the points in                         <parameterReference>lpRectScr1</parameterReference> that are not in the intersection of                         <parameterReference>lpRectScr1</parameterReference> and                         <legacyItalic>lpRectScr2</legacyItalic>.</para>
                    <para>The rectangle specified by                         <parameterReference>lpRectSrc1</parameterReference> will be unchanged if the rectangle specified by                         <parameterReference>lpRectSrc2</parameterReference> doesn't completely overlap the rectangle specified by                         <legacyItalic>lpRectSrc1 </legacyItalic>in at least one of the x- or y-directions. </para>
                    <para>For example, if                         <parameterReference>lpRectSrc1</parameterReference> were (10,10, 100,100) and                         <parameterReference>lpRectSrc2</parameterReference> were (50,50, 150,150), the rectangle pointed to by                         <parameterReference>lpRectSrc1</parameterReference> would be unchanged when the function returned. If                         <parameterReference>lpRectSrc1</parameterReference> were (10,10, 100,100) and                         <parameterReference>lpRectSrc2</parameterReference> were (50,10, 150,150), however, the rectangle pointed to by                         <parameterReference>lpRectSrc1</parameterReference> would contain the coordinates (10,10, 50,100) when the function returned.</para>
                    <para>
                        <unmanagedCodeEntityReference>SubtractRect</unmanagedCodeEntityReference> is not the same as                         <legacyLink xlink:href="#crect__operator_-">operator -</legacyLink> nor                         <legacyLink xlink:href="#crect__operator_-_eq">operator -=</legacyLink>. Neither of these operators ever calls                         <unmanagedCodeEntityReference>SubtractRect</unmanagedCodeEntityReference>.</para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#55</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__topleft">
        <!--2cc40f1a-5117-4d22-b553-f0f32c2ff83d-->
        <title>CRect::TopLeft</title>
        <content>
            <para>The coordinates are returned as a reference to a                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object that is contained in                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>CPoint&amp; TopLeft( ) throw( );</legacyBold> 
                <legacyBold>const CPoint&amp; TopLeft( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The coordinates of the top-left corner of the rectangle.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can use this function to either get or set the top-left corner of the rectangle. Set the corner by using this function on the left side of the assignment operator.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    
                   
                            <para>See the example for                                 <legacyLink xlink:href="#crect__centerpoint">CRect::CenterPoint</legacyLink>.</para>
                        
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__unionrect">
        <!--22fb6e72-1e2b-453e-a139-87869c88a3fa-->
        <title>CRect::UnionRect</title>
        <content>
            <para>Makes the dimensions of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> equal to the union of the two source rectangles.</para>
            <legacySyntax>
                <legacyBold>BOOL UnionRect(</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect1</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   LPCRECT </legacyBold>
                <parameterReference>lpRect2</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <parameterReference>lpRect1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that contains a source rectangle.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>lpRect2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> or                                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> that contains a source rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the union is not empty; 0 if the union is empty.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The union is the smallest rectangle that contains both source rectangles. </para>
                    <para>Windows ignores the dimensions of an empty rectangle; that is, a rectangle that has no height or has no width.</para>
                    <alert class="note">
                        <para>Both of the rectangles must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangles before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#56</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="crect__width">
        <!--3f561b92-c6dc-4597-9dd8-12cd60a45d7b-->
        <title>CRect::Width</title>
        <content>
            <para>Calculates the width of                 <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> by subtracting the left value from the right value.</para>
            <legacySyntax>
                <legacyBold>int Width( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The width of                         <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The width can be negative.</para>
                    <alert class="note">
                        <para>The rectangle must be normalized or this function may fail. You can call                             <legacyLink xlink:href="#crect__normalizerect">NormalizeRect</legacyLink> to normalize the rectangle before calling this function.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#57</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics>
        <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
        <link xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</link>
        <link xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</link>
        <link xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>

