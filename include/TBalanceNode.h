﻿#pragma once
#include "TTreeNode.h"

#define BalOk 0

#define BalLeft -1
#define BalRight 1

class TBalanceNode : public TTreeNode {
protected:
	int Balance; 
public:
	TBalanceNode(TKey k = "", PTDatValue pVal = nullptr, PTTreeNode pL = nullptr,
		PTTreeNode pR = nullptr, int bal = BalOk) :
		TTreeNode(k, pVal, pL, pR), Balance(bal) {}; 
	virtual TDatValue *GetCopy();  
	int GetBalance() const;
	void SetBalance(int bal);
	friend class TBalanceTree;
};

typedef TBalanceNode *PTBalanceNode;
