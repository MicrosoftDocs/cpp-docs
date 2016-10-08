---
title: "&lt;vector&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 6cdcf043-eef6-4330-83f0-4596fb9f968a
caps.latest.revision: 6
---
# &lt;vector&gt; functions
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para/>
    </introduction>
    <section>
        <content>
            <table>
                <tbody>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#swap">swap</link>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </section>
    <section address="swap">
        <!--f699795f-ef0a-48f7-bd55-ffd23f682e74-->
        <title>swap</title>
        <content>
            <para>Exchanges the elements of two vectors.</para>
            <legacySyntax> <legacyBold>template&lt;class Type, class Allocator&gt;</legacyBold> <legacyBold>void swap(</legacyBold> <legacyBold>   vector&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Left</parameterReference> <legacyBold>,</legacyBold> <legacyBold>   vector&lt;Type, Allocator&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The vector providing the elements to be swapped, or the vector whose elements are to be exchanged with those of the vector <parameterReference>_Left</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The vector whose elements are to be exchanged with those of the vector <parameterReference>_Right</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function is an algorithm specialized on the container class vector to execute the member function <parameterReference>_Left.</parameterReference> <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d#vector__swap">vector::swap</legacyLink>
                        <legacyItalic>(_Right</legacyItalic>). These are instances of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, <legacyBold>template </legacyBold>&lt; <legacyBold>class T</legacyBold>&gt; <legacyBold> void swap</legacyBold>( <legacyBold>T&amp;</legacyBold>, <legacyBold>T&amp;</legacyBold>), in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the code example for member function <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d#vector__swap">vector::swap</legacyLink> for an example that uses the template version of <unmanagedCodeEntityReference>swap</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="c1431ad8-c0b6-4dbb-89c4-5f651e432d7f">&amp;lt;vector&amp;gt;</link>
    </relatedTopics>
</developerConceptualDocument>



