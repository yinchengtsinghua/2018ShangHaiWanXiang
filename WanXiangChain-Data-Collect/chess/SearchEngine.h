
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SEARCHENGINE_H__2AF7A220_CB28_11D5_AEC7_5254AB2E22C7__INCLUDED_)
#define AFX_SEARCHENGINE_H__2AF7A220_CB28_11D5_AEC7_5254AB2E22C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "MoveGenerator.h"
#include "Eveluation.h"

class CSearchEngine  
{
public:
	CSearchEngine();
	virtual ~CSearchEngine();
	
	virtual int  SearchAGoodMove(BYTE position[10][9])=0;
	
	virtual int  SetSearchDepth(int nDepth) { m_nSearchDepth = nDepth; return 0; };
	
	virtual int SetEveluator(CEveluation *pEval) { m_pEval = pEval; return 0; };

	virtual int SetMoveGenerator(CMoveGenerator *pMG){m_pMG = pMG; return 0;};

protected:
	virtual BYTE MakeMove(CHESSMOVE* move);
	virtual void UnMakeMove(CHESSMOVE* move,BYTE type);
	virtual int IsGameOver(BYTE position[10][9], int nDepth);
	BYTE CurPosition[10][9];
	CHESSMOVE m_cmBestMove;
	CMoveGenerator *m_pMG;
	CEveluation *m_pEval;
	int m_nSearchDepth;
	int m_nMaxDepth;
};

#endif // !defined(AFX_SEARCHENGINE_H__2AF7A220_CB28_11D5_AEC7_5254AB2E22C7__INCLUDED_)
