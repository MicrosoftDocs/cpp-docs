---
title: "hash Structure (STL)"
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
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
caps.latest.revision: 9
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
# hash Structure (STL)
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Defines a member function that returns a value that's uniquely determined by <parameterReference>Val</parameterReference>. The member function defines a <legacyLink xlink:href="e1b500c6-a5c8-4f6f-ad33-7ec52eb8e2e4">hash function</legacyLink> that's suitable for mapping values of type <unmanagedCodeEntityReference>thread::id</unmanagedCodeEntityReference> to a distribution of index values.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>template&lt;&gt;
struct hash&lt;thread::id&gt; : 
   public unary_function&lt;thread::id, size_t&gt;
{
   size_t operator()(thread::id Val) const;
};</legacySyntax>
    </syntaxSection>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header: </embeddedLabel>thread</para>
            <para>
                <embeddedLabel>Namespace: </embeddedLabel>std</para>
        </content>
    </requirements>
    <relatedTopics> <link xlink:href="e7bf497a-0f63-48d0-9b54-cb0eef4073c4">Header Files</link> <link xlink:href="0c858405-4efb-449d-bf76-70d3693c9234">&lt;thread&gt;</link> <link xlink:href="04c2fbdc-c1f6-48ed-b6cc-292a6d484627">unary_function Struct</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



