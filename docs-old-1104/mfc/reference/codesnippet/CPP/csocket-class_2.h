class CSockThread : public CWinThread
{
public:
   SOCKET m_hConnected;

protected:
   CChatSocket m_sConnected;

   // remainder of class declaration omitted.