#pragma once

// CMyDocument document

// <Snippet18>
//MyDocument.h
class CMyDocument : public CDocument
{
public:
   DECLARE_SERIAL(CMyDocument)

   CObList m_listOfSubItems;

   virtual void Serialize(CArchive& ar);
};
// </Snippet18>