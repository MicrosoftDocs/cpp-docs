class CMyWorker
{
public:
   typedef MyRequestType RequestType;

   BOOL Initialize(void* pvWorkerParam);

   void Execute(MyRequestType request, void* pvWorkerParam, OVERLAPPED* pOverlapped);

   void Terminate(void* pvWorkerParam);
};