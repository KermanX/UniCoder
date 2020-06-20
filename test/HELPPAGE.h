#pragma once


// HELPPAGE 对话框

class HELPPAGE : public CDialogEx
{
	DECLARE_DYNAMIC(HELPPAGE)

public:
	HELPPAGE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~HELPPAGE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HELPPAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
