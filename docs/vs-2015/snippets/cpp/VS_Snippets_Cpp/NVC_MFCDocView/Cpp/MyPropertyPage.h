#pragma once

class CMyPropertyPage : public CPropertyPage
{
public:
   CMyPropertyPage(UINT nIDTemplate) : CPropertyPage(nIDTemplate) {};

   virtual void GetPageSelections(CString& str) = 0;
};