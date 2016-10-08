---
title: "context_unblock_unbalanced Class"
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
ms.topic: article
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
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
# context_unblock_unbalanced Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>This class describes an exception thrown when calls to the <unmanagedCodeEntityReference>Block</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>Unblock</unmanagedCodeEntityReference> methods of a <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> object are not properly paired. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax xml:space= "preserve">class context_unblock_unbalanced : public std::exception;</legacySyntax>
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
                                    <para> <link xlink:href="#context_unblock_unbalanced__context_unblock_unbalanced_constructor">context_unblock_unbalanced::context_unblock_unbalanced Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Overloaded. Constructs a <unmanagedCodeEntityReference>context_unblock_unbalanced</unmanagedCodeEntityReference> object. </para>
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
            <para>Calls to the <unmanagedCodeEntityReference>Block</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>Unblock</unmanagedCodeEntityReference> methods of a <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> object must always be properly paired. The Concurrency Runtime allows the operations to happen in either order. For example, a call to <unmanagedCodeEntityReference>Block</unmanagedCodeEntityReference> can be followed by a call to <unmanagedCodeEntityReference>Unblock</unmanagedCodeEntityReference>, or vice-versa. This exception would be thrown if, for instance, two calls to the <unmanagedCodeEntityReference>Unblock</unmanagedCodeEntityReference> method were made in a row, on a <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> object which was not blocked. </para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <unmanagedCodeEntityReference>exception</unmanagedCodeEntityReference>
            </para>
            <para> <unmanagedCodeEntityReference>context_unblock_unbalanced</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header: </embeddedLabel>concrt.h</para>
            <para>
                <embeddedLabel>Namespace: </embeddedLabel>concurrency</para>
        </content>
    </requirements>
    <section address="context_unblock_unbalanced__context_unblock_unbalanced_constructor">
        <!--c35fea03-54fd-4c3c-9945-71dc50e00705-->
        <title>context_unblock_unbalanced::context_unblock_unbalanced Constructor</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>context_unblock_unbalanced</unmanagedCodeEntityReference> object. </para>
            <legacySyntax xml:space= "preserve">explicit _CRTIMP context_unblock_unbalanced(
    _In_z_ const char * _Message ) throw();


context_unblock_unbalanced() throw();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Message</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A descriptive message of the error. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="f1d33ca2-679b-4442-b140-22a9d9df61d1">concurrency Namespace</link> <link xlink:href="c0d553f3-961d-4ecd-9a29-4fa4351673b8">Context Class</link> <link xlink:href="c0d553f3-961d-4ecd-9a29-4fa4351673b8#context__unblock_method">Context::Unblock Method</link> <link xlink:href="c0d553f3-961d-4ecd-9a29-4fa4351673b8#context__block_method">Context::Block Method</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



