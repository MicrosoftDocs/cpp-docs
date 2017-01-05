---
title: "HTML Basics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HTML, about HTML"
ms.assetid: aab8ea9f-12d4-4bdd-a585-ac3124081a2a
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# HTML Basics
Most browsers have the capability of examining the HTML source of the pages you browse. When you view the source you will see a number of HTML (Hypertext markup language) tags, surrounded by angle brackets(<>), interspersed with text.  
  
 The steps below use HTML tags to build a simple Web page. In these steps, you'll type plain text into a file in Notepad, make a few changes, save the file, and reload your page in the browser to see your changes.  
  
#### To create an HTML file  
  
1.  Open Notepad or any plain text editor.  
  
2.  From the **File** menu, choose `New`.  
  
3.  Type the following lines:  
  
 ```  
 <HTML>  
 <HEAD>  
 <TITLE>Top HTML Tags</TITLE>  
 </HEAD>  
 </HTML>  
 ```  
  
4.  From the **File** menu, choose **Save**, and save the file as c:\webpages\First.htm. Leave the file open in the editor.  
  
5.  Switch to your browser, and from the **File** menu, choose **Open**, or type `file://C:/webpages/first.htm` in the browser's URL edit box. You should see a blank page with the window caption "Top HTML Tags."  
  
     Notice the tags are paired and are included in angle brackets. Tags are not case-sensitive, but capitalization is often used to make tags stand out.  
  
     The tag \<HTML> starts the document, and the tag \</HTML> ends it. Ending tags (not always required) are the same as the starting tag, but have a forward slash (/) in front of the tag. There should be no spaces between the angle bracket (<) and the start of your tag.  
  
6.  Switch back to Notepad, and after the \</HEAD> line, type:  
  
 ```  
 <BODY>  
    HTML is swell.  
    Life is good.  
 </BODY>  
 ```  
  
7.  From the **File** menu, choose **Save**.  
  
8.  Switch back to your browser and refresh the page.  
  
     The words will appear in the client area of your browser's window. Notice that your carriage return is ignored. If you want to have a line break, you must include a `<BR>` tag after the first line.  
  
     For all the steps that follow, insert the text anywhere between \<BODY> and \</BODY> to add to the body of your document.  
  
9. Add a header:  
  
 ```  
 <H3>Here's the big picture</H3>  
 ```  
  
10. Add an image, using a .gif file saved in the same directory as your page:  
  
 ```  
 <IMG src="yourfile.gif">  
 ```  
  
11. Add a list:  
  
 ```  
 <UL>Make me an unordered list.  
 <LI>One programmer</LI>  
 <LI>Ten SDKs</LI>  
 <LI>Great Internet Apps</LI>  
 </UL>  
 ```  
  
12. To number the list instead, use paired \<OL> and \</OL> tags in place of the \<UL> and \</UL> tags.  
  
 That should get you started. If you see a great feature on a Web page, you can find out how it was created by examining the HTML source. HTML editors such as Microsoft Front Page can be used to create both simple and advanced pages.  
  
 Here's the entire HTML source for the file you've been building:  
  
```  
<HTML>  
<HEAD>  
<TITLE>Top HTML Tags</TITLE>  
</HEAD>  
<BODY>  
HTML is swell.<BR>  
Life is good.  
<H3>Here's the big picture</H3>  
<IMG src="yourfile.gif">  
<UL>Make me an unordered list.  
<LI>One programmer</LI>  
<LI>Ten SDKs</LI>  
<LI>Great Internet Apps</LI>  
</UL>  
</BODY>  
</HTML>  
```  
  
 For a complete description of tags, attributes, and extensions, see the Hypertext Markup Language (HTML) specification:  
  
 [http://www.w3.org/pub/WWW/MarkUp/](http://www.w3.org/pub/www/markup/)  
  
## See Also  
 [MFC Internet Programming Basics](../mfc/mfc-internet-programming-basics.md)

