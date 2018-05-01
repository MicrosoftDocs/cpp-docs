#pragma once


// CSchemaObject

class CSchemaObject : public CObject
{
   DECLARE_SERIAL(CSchemaObject)

public:
   CSchemaObject();
   virtual ~CSchemaObject();

   void Serialize(CArchive& ar);

protected:

};


