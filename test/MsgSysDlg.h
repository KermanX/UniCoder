
// MsgSysDlg.h: 头文件
//

#pragma once
#define WM_SHOWTASK     WM_USER + 1000 
//void initialization();
// CMsgSysDlg 对话框
class CMsgSysDlg : public CDialogEx
{
// 构造
public:
	CMsgSysDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MSGSYS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//CString GroupName[100];
	UINT NowData=502;
	UINT MyID;
	HWND HStartPage;
	CString MyName;
	CString SendData[600]/* = {
{L""},
{L"陈拓宇"},
{L"陈修齐"},
{L"董余桓"},
{L"黄俊凯"},
{L"简聃"},
{L"蒋天杭"},
{L"李范锴"},
{L"李欣凯"},
{L"刘彦恺"},
{L"骆逢宾"},
{L"吕睿"},
{L"马经纬"},
{L"毛畅"},
{L"倪博迩"},
{L"潘林苗"},
{L"孙瑜潞"},
{L"田以恒"},
{L"王梦其"},
{L"王一涵"},
{L"王与同"},
{L"王羽芊"},
{L"徐江楠"},
{L"许翔"},
{L"宣欣言"},
{L"杨哲予"},
{L"叶轩铭"},
{L"叶洋瑞"},
{L"易子策"},
{L"袁怡帆"},
{L"赵彦铭"},
{L"周莫非"},
{L"诸葛沂诺"},
{L"孔演成"},
{L"陈奕帆"},
{L"方瑜"},
{L"冯俊捷"},
{L"胡钧陶"},
{L"胡正佳"},
{L"黄秋宁"},
{L"黄昱宸"},
{L"黄子睿"},
{L"黄子渔"},
{L"贾宇恒"},
{L"厉书匡"},
{L"钱仕柏"},
{L"申屠肇清"},
{L"宋显楠"},
{L"宋雨奇"},
{L"孙嘉梁"},
{L"王钰廷"},
{L"王孜恒"},
{L"吴知易"},
{L"肖玮骏"},
{L"徐沈希"},
{L"杨景淑"},
{L"余艺玮"},
{L"张帅"},
{L"张一墨"},
{L"张宇宸"},
{L"章弥炫"},
{L"郑竹含"},
{L"周含阳"},
{L"周康阳"},
{L"朱铭睿"},
{L"孙睿璟"},
{L"赵涵益"},
{L"蔡汶桥"},
{L"陈海峻"},
{L"陈湛颜"},
{L"戴好茜"},
{L"董镇宇"},
{L"费悦"},
{L"高启翔"},
{L"胡健宁"},
{L"胡同语"},
{L"蒋欣宜"},
{L"金雨诺"},
{L"马意然"},
{L"钱奕畅"},
{L"苏卓彦"},
{L"童一喆"},
{L"汪子钧"},
{L"王启宁"},
{L"王善水"},
{L"王子浩"},
{L"温李天启"},
{L"熊桐睿"},
{L"徐浩铭"},
{L"徐靖涵"},
{L"严子晨"},
{L"张扬"},
{L"张悠游"},
{L"赵品皓"},
{L"赵筱颖"},
{L"赵莹"},
{L"郑思栋"},
{L"周夕汐"},
{L"朱雨桐"},
{L"陈诺"},
{L"陈玺涵"},
{L"陈卓"},
{L"范侣彦"},
{L"富奕晨"},
{L"高俊涛"},
{L"洪睿强"},
{L"黄钟添"},
{L"李语煊"},
{L"林谦润"},
{L"娄书睿"},
{L"罗嘉木"},
{L"沙拉"},
{L"孙培文"},
{L"汪铧晖"},
{L"汪晓"},
{L"王柏萱"},
{L"王家翰"},
{L"王一凡"},
{L"邬宁远"},
{L"吴若麟"},
{L"谢钰达"},
{L"徐启航"},
{L"杨致远"},
{L"叶禹睿"},
{L"张可扬"},
{L"张睿"},
{L"张子瑞"},
{L"朱礼昂"},
{L"朱平"},
{L"祝易承"},
{L"朱曦元"},
{L"陈铭泽"},
{L"陈鹏涛"},
{L"陈瑞泽"},
{L"陈姝君"},
{L"陈星垣"},
{L"戴亿"},
{L"丁燃"},
{L"傅宾洋"},
{L"何宸禹"},
{L"何静怡"},
{L"何宜轩"},
{L"胡鹏凯"},
{L"胡煜欧"},
{L"黄思远"},
{L"梁宇宸"},
{L"刘原祁"},
{L"楼子铭"},
{L"马可"},
{L"倪家骏"},
{L"施家鑫"},
{L"孙浚豪"},
{L"王畅"},
{L"王麒雯"},
{L"项讳"},
{L"严梓溯"},
{L"姚欣妍"},
{L"应昊肠"},
{L"余昊桦"},
{L"虞卓欣"},
{L"张志博"},
{L"周骏彦"},
{L"周麟"},
{L"蔡沂凌"},
{L"柴艺珊"},
{L"陈铭雨"},
{L"陈紫亦"},
{L"董腾岳"},
{L"范奕凯"},
{L"方伟丞"},
{L"方欣童"},
{L"傅王笑"},
{L"何金洋"},
{L"胡钰涵"},
{L"黄俞郝"},
{L"季桂恺"},
{L"刘易"},
{L"马天宇"},
{L"毛奕东"},
{L"潘昊轩"},
{L"盛锦艺"},
{L"施逸杭"},
{L"汪阳"},
{L"王启铭"},
{L"王艺博"},
{L"吴丞恒"},
{L"吴国诚"},
{L"吴梓睿"},
{L"严琪"},
{L"叶芽儿"},
{L"叶阳"},
{L"应东阳"},
{L"张桐"},
{L"朱璟华"},
{L"朱翔宇"}
	}*/;
	CString MsgData[600] = { L"" };
	bool isShow[600] = { false };
	bool isExit=true;
	bool isNew[600] = { false };
	CListBox m_sendlist;
	afx_msg void OnLbnSelchangeSendlist();
	NOTIFYICONDATA m_taskicon;
	CButton m_totalk;
	CEdit m_allmsg;
	CButton m_select;
	afx_msg void OnBnClickedSelect();
	afx_msg void OnBnClickedWebsite();
	afx_msg void OnBnClickedWebsite2();
	afx_msg void OnBnClickedSettings();
	afx_msg void OnBnClickedHelps();
	afx_msg void OnBnClickedAbouts();
	afx_msg void OnBnClickedPassword();
	afx_msg LRESULT OnClickTaskicon(WPARAM, LPARAM);
	CEdit m_sendinput;
	//CButton m_sendmsg;
	//afx_msg void OnBnClickedSendmsg();
	CEdit m_state;
	SOCKET m_server;
	void sets(void);
	afx_msg void OnBnClickedSendmsg();
	afx_msg void OnEnChangeSendinput();
	afx_msg void OnMenuPassword();
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedMini();
	afx_msg void On32772();
	afx_msg void On32773();
	afx_msg void On32774();
	afx_msg void On32779();
	afx_msg void On32784();
	afx_msg void On32785();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	afx_msg void On32771();
};
