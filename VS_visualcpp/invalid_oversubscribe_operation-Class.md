---
title: "invalid_oversubscribe_operation Class"
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
ms.topic: article
ms.assetid: 0a9c5f08-d5e6-4ad0-90a9-517472b3ac28
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
# invalid_oversubscribe_operation Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>Context::Oversubscribe</unmanagedCodeEntityReference> method is called with the <parameterReference>_BeginOversubscription</parameterReference> parameter set to <unmanagedCodeEntityReference>false</unmanagedCodeEntityReference> without a prior call to the <unmanagedCodeEntityReference>Context::Oversubscribe</unmanagedCodeEntityReference> method with the <parameterReference>_BeginOversubscription</parameterReference> parameter set to <unmanagedCodeEntityReference>true</unmanagedCodeEntityReference>. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax xml:space= "preserve">class invalid_oversubscribe_operation : public std::exception;</legacySyntax>
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
                                    <para> <link xlink:href="#invalid_oversubscribe_operation__invalid_oversubscribe_operation_constructor">invalid_oversubscribe_operation::invalid_oversubscribe_operation Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Overloaded. Constructs an <unmanagedCodeEntityReference>invalid_oversubscribe_operation</unmanagedCodeEntityReference> object. </para>
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
            <para> <unmanagedCodeEntityReference>invalid_oversubscribe_operation</unmanagedCodeEntityReference>
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
    <section address="invalid_oversubscribe_operation__invalid_oversubscribe_operation_constructor">
        <!--c9ff9030-4a20-482c-8b5c-223100157a52-->
        <title>invalid_oversubscribe_operation::invalid_oversubscribe_operation Constructor</title>
        <content>
            <para>Constructs an <unmanagedCodeEntityReference>invalid_oversubscribe_operation</unmanagedCodeEntityReference> object. </para>
            <legacySyntax xml:space= "preserve">explicit _CRTIMP invalid_oversubscribe_operation(
    _In_z_ const char * _Message ) throw();


invalid_oversubscribe_operation() throw();</legacySyntax>
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
    <relatedTopics> <link xlink:href="f1d33ca2-679b-4442-b140-22a9d9df61d1">concurrency Namespace</link> 
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



