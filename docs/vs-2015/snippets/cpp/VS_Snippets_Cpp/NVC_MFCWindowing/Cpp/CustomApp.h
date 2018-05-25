#pragma once



// CCustomApp

class CCustomApp : public CWinApp
{
	DECLARE_DYNCREATE(CCustomApp)

protected:
	CCustomApp();           // protected constructor used by dynamic creation
	virtual ~CCustomApp();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

   virtual void OnMyFileNew();
   virtual void OnMyFileOpen();
   virtual void OnMyFilePrintSetup();

protected:
	DECLARE_MESSAGE_MAP()
};


