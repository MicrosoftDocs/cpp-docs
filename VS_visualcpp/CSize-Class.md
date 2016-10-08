---
title: "CSize Class"
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
ms.assetid: fb2cf85a-0bc1-46f8-892b-309c108b52ae
caps.latest.revision: 13
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
# CSize Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Similar to the Windows             <externalLink>                <linkText>SIZE</linkText>
                <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
            </externalLink> structure, which implements a relative coordinate or position. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CSize : public tagSIZE</legacySyntax>
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
                                        <link xlink:href="#csize__csize">CSize::CSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a                                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
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
                                        <link xlink:href="#csize__operator_-">CSize::operator -</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Subtracts two sizes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#csize__operator__neq">CSize::operator !=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Checks for inequality between                                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> and a size.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#csize__operator__add">CSize::operator +</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds two sizes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#csize__operator__add_eq">CSize::operator +=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds a size to                                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#csize__operator_-_eq">CSize::operator -=</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Subtracts a size from                                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>
                                        <link xlink:href="#csize__operator__eq_eq">CSize::operator ==</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Checks for equality between                                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> and a size.</para>
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
            <para>This class is derived from the                 <legacyBold>SIZE</legacyBold> structure. This means you can pass a                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> in a parameter that calls for a                 <legacyBold>SIZE</legacyBold> and that the data members of the                 <legacyBold>SIZE</legacyBold> structure are accessible data members of                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
            <para>The                 <legacyBold>cx</legacyBold> and                 <legacyBold>cy</legacyBold> members of                 <legacyBold>SIZE</legacyBold> (and                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>) are public. In addition,                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> implements member functions to manipulate the                 <legacyBold>SIZE</legacyBold> structure.</para>
            <alert class="note">
                <para>For more information on shared utility classes (like                     <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>), see                     <legacyLink xlink:href="e13aaac3-21ec-4f4d-8834-432b40fde544">Shared Classes</legacyLink>.</para>
            </alert>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para>
                <unmanagedCodeEntityReference>tagSIZE</unmanagedCodeEntityReference>
            </para>
            <para>
                <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <legacyBold>Header:</legacyBold> atltypes.h</para>
        </content>
    </requirements>
    <section address="csize__csize">
        <!--85e88e37-259c-4858-823f-98d545c7c51e-->
        <title>CSize::CSize</title>
        <content>
            <para>Constructs a                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>
                <legacyBold>CSize( ) throw( );</legacyBold> 
                <legacyBold>CSize(</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>initCX</parameterReference>
                <legacyBold>,</legacyBold> 
                <legacyBold>   int </legacyBold>
                <parameterReference>initCY</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CSize(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>initSize</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CSize(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>initPt</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
                <legacyBold>CSize(</legacyBold> 
                <legacyBold>   DWORD </legacyBold>
                <parameterReference>dwSize</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>initCX</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Sets the                                 <legacyBold>cx</legacyBold> member for the                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>initCY</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Sets the                                 <legacyBold>cy</legacyBold> member for the                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>initSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <externalLink>
                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object used to initialize                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>initPt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or                                 <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object used to initialize                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm>
                            <parameterReference>dwSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>
                                <unmanagedCodeEntityReference>DWORD</unmanagedCodeEntityReference> used to initialize                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>. The low-order word is the                                 <legacyBold>cx</legacyBold> member and the high-order word is the                                 <legacyBold>cy</legacyBold> member.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If no arguments are given,                         <legacyBold>cx</legacyBold> and                         <legacyBold>cy</legacyBold> are initialized to zero.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#97</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="csize__operator__eq_eq">
        <!--ed3dd218-ecec-43b7-bcbb-1852c938dfe3-->
        <title>CSize::operator ==</title>
        <content>
            <para>Checks for equality between two sizes.</para>
            <legacySyntax>
                <legacyBold>BOOL operator ==(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Returns nonzero if the sizes are equal, otherwize 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#98</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="csize__operator__neq">
        <!--221469e5-7673-48ed-9b2b-596a9a70c698-->
        <title>CSize::operator !=</title>
        <content>
            <para>Checks for inequality between two sizes.</para>
            <legacySyntax>
                <legacyBold>BOOL operator!=(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Returns nonzero if the sizes are not equal, otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#99</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="csize__operator__add_eq">
        <!--57498314-397a-431d-91ef-b4fa85641d10-->
        <title>CSize::operator +=</title>
        <content>
            <para>Adds a size to this                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>void operator +=(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#100</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="csize__operator_-_eq">
        <!--35cba527-631a-4354-8089-f41c1b0a0bb1-->
        <title>CSize::operator -=</title>
        <content>
            <para>Subtracts a size from this                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference>.</para>
            <legacySyntax>
                <legacyBold>void operator -=(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#101</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="csize__operator__add">
        <!--fbdf8000-145b-4a12-a2af-6fc8c37fb39a-->
        <title>CSize::operator +</title>
        <content>
            <para>These operators add this                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value to the value of parameter.</para>
            <legacySyntax>
                <legacyBold>CSize operator +(</legacyBold> 
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
                <title>Remarks</title>
                <content>
                    <para>See the following descriptions of the individual operators:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>
                                <legacyBold>operator +( </legacyBold>
                                <parameterReference>size</parameterReference>
                                <legacyBold> )</legacyBold>   This operation adds two                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> values.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>operator +( </legacyBold>
                                <parameterReference>point</parameterReference>
                                <legacyBold> )</legacyBold>   This operation offsets (moves) a                                 <externalLink>                                    <linkText>POINT</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162805</linkUri>
                                </externalLink> (or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink>) value by this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value. The                                 <legacyBold>cx</legacyBold> and                                 <legacyBold>cy</legacyBold> members of this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value are added to the                                 <legacyBold>x</legacyBold> and                                 <legacyBold>y</legacyBold> data members of the                                 <legacyBold>POINT</legacyBold> value. It is analogous to the version of                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa#cpoint__operator__add">CPoint::operator +</legacyLink> that takes a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> parameter.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>operator +( </legacyBold>
                                <parameterReference>lpRect</parameterReference>
                                <legacyBold> )</legacyBold>   This operation offsets (moves) a                                 <externalLink>                                    <linkText>RECT</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162897</linkUri>
                                </externalLink> (or                                 <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink>) value by this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value. The                                 <legacyBold>cx</legacyBold> and                                 <legacyBold>cy</legacyBold> members of this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value are added to the                                 <legacyBold>left</legacyBold>,                                 <legacyBold>top</legacyBold>,                                 <legacyBold>right</legacyBold>, and                                 <legacyBold>bottom</legacyBold> data members of the                                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> value. It is analogous to the version of                                 <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca#crect__operator__add">CRect::operator +</legacyLink> that takes a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> parameter.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#102</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="csize__operator_-">
        <!--45a2e93d-b338-4f4b-b17c-f548cc789edb-->
        <title>CSize::operator -</title>
        <content>
            <para>The first three of these operators subtract this                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value to the value of parameter.</para>
            <legacySyntax>
                <legacyBold>CSize operator -(</legacyBold> 
                <legacyBold>   SIZE </legacyBold>
                <parameterReference>size</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CPoint operator -(</legacyBold> 
                <legacyBold>   POINT </legacyBold>
                <parameterReference>point</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CRect operator -(</legacyBold> 
                <legacyBold>   const RECT* </legacyBold>
                <parameterReference>lpRect</parameterReference>  
                <legacyBold>) const throw( );</legacyBold>
                <legacyBold>CSize operator -( ) const throw( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The fourth operator, the unary minus, changes the sign of the                         <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value. See the following descriptions of the individual operators:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>
                                <legacyBold>operator -( </legacyBold>
                                <parameterReference>size</parameterReference>
                                <legacyBold> )</legacyBold>   This operation subtracts two                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> values.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>operator -( </legacyBold>
                                <parameterReference>point</parameterReference>
                                <legacyBold> )</legacyBold>   This operation offsets (moves) a                                 <externalLink>                                    <linkText>POINT</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162805</linkUri>
                                </externalLink> or                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> value by the additive inverse of this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value. The                                 <legacyBold>cx</legacyBold> and                                 <legacyBold>cy</legacyBold> of this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value are subtracted from the                                 <legacyBold>x</legacyBold> and                                 <legacyBold>y</legacyBold> data members of the                                 <legacyBold>POINT</legacyBold> value. It is analogous to the version of                                 <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa#cpoint__operator_-">CPoint::operator -</legacyLink> that takes a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> parameter.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>operator -( </legacyBold>
                                <parameterReference>lpRect</parameterReference>
                                <legacyBold> )</legacyBold>   This operation offsets (moves) a                                 <externalLink>                                    <linkText>RECT</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162897</linkUri>
                                </externalLink> or                                 <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> value by the additive inverse of this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value. The                                 <legacyBold>cx</legacyBold> and                                 <legacyBold>cy</legacyBold> members of this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value are subtracted from the                                 <legacyBold>left</legacyBold>,                                 <legacyBold>top</legacyBold>,                                 <legacyBold>right</legacyBold>, and                                 <legacyBold>bottom</legacyBold> data members of the                                 <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> value. It is analogous to the version of                                 <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca#crect__operator_-">CRect::operator -</legacyLink> that takes a                                 <externalLink>                                    <linkText>SIZE</linkText>
                                    <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> parameter.</para>
                        </listItem>
                        <listItem>
                            <para>
                                <legacyBold>operator -( )</legacyBold>   This operation returns the additive inverse of this                                 <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> value.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_ATLMFC_Utilities#103</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics>
        <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample MDI</legacyLink>
        <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
        <link xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</link>
        <link xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>

