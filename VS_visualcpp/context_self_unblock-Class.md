---
title: "context_self_unblock Class"
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
ms.assetid: 9601cd28-4f40-4c2e-89ab-747068956331
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
# context_self_unblock Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>Unblock</unmanagedCodeEntityReference> method of a <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> object is called from the same context. This would indicate an attempt by a given context to unblock itself. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax xml:space= "preserve">class context_self_unblock : public std::exception;</legacySyntax>
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
                                    <para> <link xlink:href="#context_self_unblock__context_self_unblock_constructor">context_self_unblock::context_self_unblock Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Overloaded. Constructs a <unmanagedCodeEntityReference>context_self_unblock</unmanagedCodeEntityReference> object. </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <unmanagedCodeEntityReference>exception</unmanagedCodeEntityReference>
            </para>
            <para> <unmanagedCodeEntityReference>context_self_unblock</unmanagedCodeEntityReference>
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
    <section address="context_self_unblock__context_self_unblock_constructor">
        <!--6d62972c-e329-4eca-8a23-f68d6842cc84-->
        <title>context_self_unblock::context_self_unblock Constructor</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>context_self_unblock</unmanagedCodeEntityReference> object. </para>
            <legacySyntax xml:space= "preserve">explicit _CRTIMP context_self_unblock(
    _In_z_ const char * _Message ) throw();


context_self_unblock() throw();</legacySyntax>
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
    <relatedTopics> <link xlink:href="f1d33ca2-679b-4442-b140-22a9d9df61d1">concurrency Namespace</link> <link xlink:href="c0d553f3-961d-4ecd-9a29-4fa4351673b8">Context Class</link> <link xlink:href="c0d553f3-961d-4ecd-9a29-4fa4351673b8#context__unblock_method">Context::Unblock Method</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



