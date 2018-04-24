#pragma once

class CCustomException : public CException {};

class CMyOtherException : public CException {};

class CPerson : public CObject
{
public:
   void SomeFunc() { throw new CCustomException(); };
};