#pragma once


// SETTINGPAGE 对话框

class SETTINGPAGE : public CDialogEx
{
	DECLARE_DYNAMIC(SETTINGPAGE)

public:
	SETTINGPAGE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SETTINGPAGE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SETTINGPAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedPassword();
	afx_msg void OnBnClickedName();
};
