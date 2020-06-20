#pragma once


// NAMEPAGE 对话框

class NAMEPAGE : public CDialogEx
{
	DECLARE_DYNAMIC(NAMEPAGE)

public:
	NAMEPAGE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~NAMEPAGE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NAMEPAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
