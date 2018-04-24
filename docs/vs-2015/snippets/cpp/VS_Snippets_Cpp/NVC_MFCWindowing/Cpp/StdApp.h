#pragma once



// CStdApp

class CStdApp : public CWinApp
{
	DECLARE_DYNCREATE(CStdApp)

protected:
	CStdApp();           // protected constructor used by dynamic creation
	virtual ~CStdApp();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

protected:
	DECLARE_MESSAGE_MAP()
};


