---
title: "bad_exception Class"
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
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
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
# bad_exception Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The class describes an exception that can be thrown from an unexpected handler.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax> <legacyBold>class bad_exception</legacyBold> <legacyBold>   : public exception {};</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para> <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#unexpected">unexpected</legacyLink> will throw a <unmanagedCodeEntityReference>bad_exception</unmanagedCodeEntityReference> instead of terminating or instead of calling another function specified with <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_unexpected">set_unexpected</legacyLink> if <unmanagedCodeEntityReference>bad_exception</unmanagedCodeEntityReference> is included in the throw list of a function.</para>
            <para>The value returned by <legacyBold>what</legacyBold> is an implementation-defined C string. None of the member functions throw any exceptions.</para>
            <para>For a list of members inherited by the <unmanagedCodeEntityReference>bad_exception</unmanagedCodeEntityReference> class, see <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception Class</link>.</para>
        </content>
    </languageReferenceRemarks>
    <section><title>Example</title><content>
                <para>See <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#set_unexpected">set_unexpected</legacyLink> for an example of the use of <legacyLink xlink:href="c09ac569-5e35-4fe8-872d-ca5810274dd7#unexpected">unexpected</legacyLink> throwing a <unmanagedCodeEntityReference>bad_exception</unmanagedCodeEntityReference>.</para>
            <!--endsnip-->
    </content></section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>&lt;exception&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <relatedTopics> <link xlink:href="4f181f67-5888-4b50-89a6-745091ffb2fe">exception Class</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



