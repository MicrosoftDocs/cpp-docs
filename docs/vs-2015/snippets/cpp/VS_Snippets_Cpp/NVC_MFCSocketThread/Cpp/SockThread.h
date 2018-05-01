#pragma once



// CSockThread

// <Snippet1>
class CSockThread : public CWinThread
{
public:
   SOCKET m_hConnected;

protected:
   CChatSocket m_sConnected;

   // remainder of class declaration omitted.
// </Snippet1>

	DECLARE_DYNCREATE(CSockThread)

protected:
	CSockThread();           // protected constructor used by dynamic creation
	virtual ~CSockThread();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

protected:
	DECLARE_MESSAGE_MAP()
};


