
#ifndef __TOS_KEYCODE_H__
#define __TOS_KEYCODE_H__

/**
* @brief �¼���ʶ����
*/
typedef enum {
  TOS_EF_NONE                 = 0,       // Used to denote no flags explicitly

  // Mouse buttons.
  TOS_LEFT_MOUSE_BUTTON    = 1 << 10,
  TOS_MIDDLE_MOUSE_BUTTON  = 1 << 11,
  TOS_RIGHT_MOUSE_BUTTON   = 1 << 12,
  
} TOS_EventFlags;

/**
* @brief �������͵Ķ���
*/
typedef enum 
{
    TosKeyDown = 0,                ///<��������Ϊ:keydown
    TosKeyUp                       ///<��������Ϊ:keyup
} TOS_KeyAction;

/**
* @brief SITA��Ҫ�İ�����ֵ����,����������ı�׼����
*/
typedef enum {
  TOS_VKEY_UNKNOWN = 0,         /**<��Ч������ֵ */
  TOS_VKEY_BACK = 0x08,
  TOS_VKEY_TAB = 0x09,
  TOS_VKEY_BACKTAB = 0x0A,
  TOS_VKEY_CLEAR = 0x0C,
  TOS_VKEY_RETURN = 0x0D,
  TOS_VKEY_SHIFT = 0x10,
  TOS_VKEY_CONTROL = 0x11,
  TOS_VKEY_MENU = 0x12,
  TOS_VKEY_PAUSE = 0x13,
  TOS_VKEY_CAPITAL = 0x14,
  TOS_VKEY_KANA = 0x15,
  TOS_VKEY_HANGUL = 0x15,
  TOS_VKEY_JUNJA = 0x17,
  TOS_VKEY_FINAL = 0x18,
  TOS_VKEY_HANJA = 0x19,
  TOS_VKEY_KANJI = 0x19,
  TOS_VKEY_ESCAPE = 0x1B,   //exit
  TOS_VKEY_CONVERT = 0x1C,
  TOS_VKEY_NONCONVERT = 0x1D,
  TOS_VKEY_ACCEPT = 0x1E,
  TOS_VKEY_MODECHANGE = 0x1F,
  TOS_VKEY_SPACE = 0x20,
  TOS_VKEY_PRIOR = 0x21,
  TOS_VKEY_NEXT = 0x22,
  TOS_VKEY_END = 0x23,
  TOS_VKEY_HOME = 0x24,
  TOS_VKEY_LEFT = 0x25,
  TOS_VKEY_UP = 0x26,
  TOS_VKEY_RIGHT = 0x27,
  TOS_VKEY_DOWN = 0x28,
  TOS_VKEY_SELECT = 0x29,
  TOS_VKEY_PRINT = 0x2A,
  TOS_VKEY_EXECUTE = 0x2B,
  TOS_VKEY_SNAPSHOT = 0x2C,
  TOS_VKEY_INSERT = 0x2D,
  TOS_VKEY_DELETE = 0x2E,
  TOS_VKEY_HELP = 0x2F,
  TOS_VKEY_0 = 0x30,
  TOS_VKEY_1 = 0x31,
  TOS_VKEY_2 = 0x32,
  TOS_VKEY_3 = 0x33,
  TOS_VKEY_4 = 0x34,
  TOS_VKEY_5 = 0x35,
  TOS_VKEY_6 = 0x36,
  TOS_VKEY_7 = 0x37,
  TOS_VKEY_8 = 0x38,
  TOS_VKEY_9 = 0x39,
  TOS_VKEY_A = 0x41,
  TOS_VKEY_B = 0x42,
  TOS_VKEY_C = 0x43,
  TOS_VKEY_D = 0x44,
  TOS_VKEY_E = 0x45,
  TOS_VKEY_F = 0x46,
  TOS_VKEY_G = 0x47,
  TOS_VKEY_H = 0x48,
  TOS_VKEY_I = 0x49,
  TOS_VKEY_J = 0x4A,
  TOS_VKEY_K = 0x4B,
  TOS_VKEY_L = 0x4C,
  TOS_VKEY_M = 0x4D,
  TOS_VKEY_N = 0x4E,
  TOS_VKEY_O = 0x4F,
  TOS_VKEY_P = 0x50,
  TOS_VKEY_Q = 0x51,
  TOS_VKEY_R = 0x52,
  TOS_VKEY_S = 0x53,
  TOS_VKEY_T = 0x54,
  TOS_VKEY_U = 0x55,
  TOS_VKEY_V = 0x56,
  TOS_VKEY_W = 0x57,
  TOS_VKEY_X = 0x58,
  TOS_VKEY_Y = 0x59,
  TOS_VKEY_Z = 0x5A,
  TOS_VKEY_LWIN = 0x5B,
  TOS_VKEY_RWIN = 0x5C,
  TOS_VKEY_APPS = 0x5D,
  TOS_VKEY_SLEEP = 0x5F,
  TOS_VKEY_NUMPAD0 = 0x60,
  TOS_VKEY_NUMPAD1 = 0x61,
  TOS_VKEY_NUMPAD2 = 0x62,
  TOS_VKEY_NUMPAD3 = 0x63,
  TOS_VKEY_NUMPAD4 = 0x64,
  TOS_VKEY_NUMPAD5 = 0x65,
  TOS_VKEY_NUMPAD6 = 0x66,
  TOS_VKEY_NUMPAD7 = 0x67,
  TOS_VKEY_NUMPAD8 = 0x68,
  TOS_VKEY_NUMPAD9 = 0x69,
  TOS_VKEY_MULTIPLY = 0x6A,
  TOS_VKEY_ADD = 0x6B,
  TOS_VKEY_SEPARATOR = 0x6C,
  TOS_VKEY_SUBTRACT = 0x6D,
  TOS_VKEY_DECIMAL = 0x6E,
  TOS_VKEY_DIVIDE = 0x6F,
  TOS_VKEY_F1 = 0x70,
  TOS_VKEY_F2 = 0x71,
  TOS_VKEY_F3 = 0x72,
  TOS_VKEY_F4 = 0x73,
  TOS_VKEY_F5 = 0x74,
  TOS_VKEY_F6 = 0x75,
  TOS_VKEY_F7 = 0x76,
  TOS_VKEY_F8 = 0x77,
  TOS_VKEY_F9 = 0x78,
  TOS_VKEY_F10 = 0x79,
  TOS_VKEY_F11 = 0x7A,
  TOS_VKEY_F12 = 0x7B,
  TOS_VKEY_F13 = 0x7C,
  TOS_VKEY_F14 = 0x7D,
  TOS_VKEY_F15 = 0x7E,
  TOS_VKEY_F16 = 0x7F,
  TOS_VKEY_F17 = 0x80,
  TOS_VKEY_F18 = 0x81,
  TOS_VKEY_F19 = 0x82,
  TOS_VKEY_F20 = 0x83,
  TOS_VKEY_F21 = 0x84,
  TOS_VKEY_F22 = 0x85,
  TOS_VKEY_F23 = 0x86,
  TOS_VKEY_F24 = 0x87,
  TOS_VKEY_NUMLOCK = 0x90,
  TOS_VKEY_SCROLL = 0x91,
  TOS_VKEY_LSHIFT = 0xA0,
  TOS_VKEY_RSHIFT = 0xA1,
  TOS_VKEY_LCONTROL = 0xA2,
  TOS_VKEY_RCONTROL = 0xA3,
  TOS_VKEY_LMENU = 0xA4,
  TOS_VKEY_RMENU = 0xA5,
  TOS_VKEY_BROWSER_BACK = 0xA6,
  TOS_VKEY_BROWSER_FORWARD = 0xA7,
  TOS_VKEY_BROWSER_REFRESH = 0xA8,
  TOS_VKEY_BROWSER_STOP = 0xA9,
  TOS_VKEY_BROWSER_SEARCH = 0xAA,
  TOS_VKEY_BROWSER_FAVORITES = 0xAB,
  TOS_VKEY_BROWSER_HOME = 0xAC,
  TOS_VKEY_VOLUME_MUTE = 0xAD,
  TOS_VKEY_VOLUME_DOWN = 0xAE,
  TOS_VKEY_VOLUME_UP = 0xAF,
  TOS_VKEY_MEDIA_NEXT_TRACK = 0xB0,
  TOS_VKEY_MEDIA_PREV_TRACK = 0xB1,
  TOS_VKEY_MEDIA_STOP = 0xB2,
  TOS_VKEY_MEDIA_PLAY_PAUSE = 0xB3,
  TOS_VKEY_MEDIA_LAUNCH_MAIL = 0xB4,
  TOS_VKEY_MEDIA_LAUNCH_MEDIA_SELECT = 0xB5,
  TOS_VKEY_MEDIA_LAUNCH_APP1 = 0xB6,
  TOS_VKEY_MEDIA_LAUNCH_APP2 = 0xB7,
  TOS_VKEY_OEM_1 = 0xBA,
  TOS_VKEY_OEM_PLUS = 0xBB,
  TOS_VKEY_OEM_COMMA = 0xBC,
  TOS_VKEY_OEM_MINUS = 0xBD,
  TOS_VKEY_OEM_PERIOD = 0xBE,
  TOS_VKEY_OEM_2 = 0xBF,
  TOS_VKEY_OEM_3 = 0xC0,
  TOS_VKEY_OEM_4 = 0xDB,
  TOS_VKEY_OEM_5 = 0xDC,
  TOS_VKEY_OEM_6 = 0xDD,
  TOS_VKEY_OEM_7 = 0xDE,
  TOS_VKEY_OEM_8 = 0xDF,
  TOS_VKEY_OEM_102 = 0xE2,
  TOS_VKEY_OEM_103 = 0xE3,  // GTV KEYCODE_MEDIA_REWIND
  TOS_VKEY_OEM_104 = 0xE4,  // GTV KEYCODE_MEDIA_FAST_FORWARD
  TOS_VKEY_PROCESSKEY = 0xE5,
  TOS_VKEY_PACKET = 0xE7,
  TOS_VKEY_DBE_SBCSCHAR = 0xF3,
  TOS_VKEY_DBE_DBCSCHAR = 0xF4,
  TOS_VKEY_ATTN = 0xF6,
  TOS_VKEY_CRSEL = 0xF7,
  TOS_VKEY_EXSEL = 0xF8,
  TOS_VKEY_EREOF = 0xF9,
  TOS_VKEY_PLAY = 0xFA,
  TOS_VKEY_ZOOM = 0xFB,
  TOS_VKEY_NONAME = 0xFC,
  TOS_VKEY_PA1 = 0xFD,
  TOS_VKEY_OEM_CLEAR = 0xFE,

  // POSIX specific VKEYs. Note that as of Windows SDK 7.1, 0x97-9F, 0xD8-DA,
  // and 0xE8 are unassigned.
  TOS_VKEY_WLAN = 0x97,
  TOS_VKEY_POWER = 0x98,
  TOS_VKEY_BRIGHTNESS_DOWN = 0xD8,
  TOS_VKEY_BRIGHTNESS_UP = 0xD9,
  TOS_VKEY_KBD_BRIGHTNESS_DOWN = 0xDA,
  TOS_VKEY_KBD_BRIGHTNESS_UP = 0xE8,

  // Windows does not have a specific key code for AltGr. We use the unused 0xE1
  // (VK_OEM_AX) code to represent AltGr, matching the behaviour of Firefox on
  // Linux.
  TOS_VKEY_ALTGR = 0xE1,
  // Windows does not have a specific key code for Compose. We use the unused
  // 0xE6 (VK_ICO_CLEAR) code to represent Compose.
  TOS_VKEY_COMPOSE = 0xE6,

  //TV Funcation VKEYs. according to NetRange, LG TV, VOD App added this keycode.
  TOS_TV_VKEY_RED = 0x193,
  TOS_TV_VKEY_GREEN = 0x194,
  TOS_TV_VKEY_YELLOW = 0x195,
  TOS_TV_VKEY_BLUE = 0x196,
  TOS_TV_VKEY_REWIND = 0x19C,
  TOS_TV_VKEY_STOP = 0x19D, 
  TOS_TV_VKEY_PLAY = 0x19F,
  TOS_TV_VKEY_FAST_FWD = 0x1A1,
  TOS_TV_VKEY_PAUSE = TOS_VKEY_PAUSE,
  TOS_TV_VKEY_PLAY_PAUSE = TOS_VKEY_MEDIA_PLAY_PAUSE,
  TOS_TV_VKEY_NEXT = TOS_VKEY_MEDIA_NEXT_TRACK,
  TOS_TV_VKEY_PREV = TOS_VKEY_MEDIA_PREV_TRACK,

  //TV specific VKEYs.
  TOS_TV_VKEY_OK = TOS_VKEY_RETURN,
  TOS_TV_VKEY_EXIT = TOS_VKEY_ESCAPE,
  
  TOS_TV_VKEY_SOURCE = 0xE000, //sourceѡ��˵���ݼ�
  TOS_TV_VKEY_SETTING = 0xE001,//ȫ��setting�˵���ݼ�
  TOS_TV_VKEY_OPTION = 0xE002, //Ӧ��option�˵���ݼ�
  TOS_TV_VKEY_INFO = 0xE003,   //TV��Ϣ��ʾ
  TOS_TV_VKEY_GUIDE = 0xE004,  //����EPG��ݼ�
  TOS_TV_VKEY_LIST = 0xE005,   //Ƶ���б��ݼ�
  TOS_TV_VKEY_CHANNEL_UP = 0xE006,//Ƶ����
  TOS_TV_VKEY_CHANNEL_DOWN = 0xE007,//Ƶ����
  TOS_TV_VKEY_PRE_CHANNEL = 0xE008,//�����ϸ�Ƶ��
  TOS_TV_VKEY_POINT = 0xE009,  //LA����С������̨����
  TOS_TV_VKEY_FAVORITE = 0xE00A,//ϲ��Ƶ���б��ݼ�
  TOS_TV_VKEY_RECORD = 0xE0B,  //¼�ƿ�ݼ�
  TOS_TV_VKEY_TEXT = 0xE00C,   //teletext��ݼ�
  TOS_TV_VKEY_LANG = 0xE00D,   //audio language�����л���ݼ�
  TOS_TV_VKEY_SUBTITLE = 0xE00E,//subtitle�˵���ݼ�
  TOS_TV_VKEY_ZOOM = 0xE00F,   //zoom�˵���ݼ�
  TOS_TV_VKEY_ECO = 0xE010,    //ECO�˵���ݼ�
  TOS_TV_VKEY_CC = 0xE011,     //CC�˵���ݼ�
  TOS_TV_VKEY_MTS = 0xE012,    //MTS����˵���ݼ�
  TOS_TV_VKEY_TUNER = 0xE013,  //tunerѡ��˵���ݼ�
  TOS_TV_VKEY_SOUND = 0xE014,  //��Ч�˵���ݼ�
  TOS_TV_VKEY_PICTURE = 0xE015,//ͼЧ�˵���ݼ�
  TOS_TV_VKEY_SLEEP = 0xE016,  //˯�ߴ������ò˵���ݼ�
  TOS_TV_VKEY_FREEZE = 0xE017, //ͼ��ֹͣ��ݼ�
  TOS_TV_VKEY_SPEAKER = 0xE018,    //���������ݼ�
  
  //TV app HotKey
  TOS_TV_VKEY_HOME = 0xE100,    //HomeӦ�ÿ�ݼ�
  TOS_TV_VKEY_THOME = 0xE101,   //TCL HomeӦ�ÿ�ݼ�����������TCL����
  TOS_TV_VKEY_TV = 0xE102,      //TVӦ�ÿ�ݼ�
  TOS_TV_VKEY_BROWSER = 0xE103, //�����Ӧ�ÿ�ݼ�
  TOS_TV_VKEY_NETFLIX = 0xE104, //netflixӦ�ÿ�ݼ�
  TOS_TV_VKEY_YOUTUBE = 0xE105, //YouTubeӦ�ÿ�ݼ�
  TOS_TV_VKEY_APPSTOTE = 0xE106, //Ӧ���̵�Ӧ�ÿ�ݼ�
  TOS_TV_VKEY_MEDIA = 0xE107,   //���ض�ý��Ӧ�ÿ�ݼ�
  TOS_TV_VKEY_FVP = 0xE108,     //free view play��ݼ�
  TOS_TV_VKEY_GOLIVE = 0xE109,  //ȫ�򲥿�ݼ�
  TOS_TV_VKEY_GLOBOPLAY = 0xE10A,  //GLOBOPLAYӦ�ÿ�ݼ�
  TOS_TV_VKEY_TV_ON = 0xE10B,           //����
  TOS_TV_VKEY_TV_OFF = TOS_VKEY_POWER,  //�ػ�
  TOS_TV_VKEY_HDMI1 = 0xE10D,    //�л���HDMI1��Դ
  TOS_TV_VKEY_HDMI2 = 0xE10E,    //�л���HDMI2��Դ
  TOS_TV_VKEY_HDMI3 = 0xE10F,    //�л���HDMI3��Դ
  TOS_TV_VKEY_HDMI4 = 0xE110,    //�л���HDMI4��Դ
  TOS_TV_VKEY_YPBPR = 0xE111,    //�л���YPbPr��Դ
  TOS_TV_VKEY_VGA = 0xE112,      //�л���VGA��Դ
  TOS_TV_VKEY_AV1 = 0xE113,      //�л���AV1��Դ
  TOS_TV_VKEY_AV2 = 0xE114,      //�л���AV2��Դ

  //TV panel key code
  TOS_TV_PANEL_UP = 0xE200,      //��尴����
  TOS_TV_PANEL_DOWN = 0xE201,    //��尴���� 
  TOS_TV_PANEL_RIGHT = 0xE202,   //��尴����
  TOS_TV_PANEL_LEFT = 0xE203,    //��尴����
  TOS_TV_PANEL_MIDDLE  = 0xE204, //��尴��ȷ��
  TOS_TV_PANEL_MENU = 0xE205,    //��尴���˵����߼����ʹ�ã�
  TOS_TV_PANEL_POWER = 0xE206,   //��尴����Դ���߼����ʹ�ã�


  //Factory_IR_Debug_key
  TOS_FACTORY_MUTE_ON_FIRST = 0xA52D,
  TOS_FACTORY_MUTE_ON_END = 0xA62D,
  TOS_FACTORY_MUTE_OFF = 0xA53F,
  TOS_FACTORY_CLONE_USB_2_TV = 0xA516,
  TOS_FACTORY_WB_INIT = 0xA518,
  TOS_FACTORY_PIC_FORMAT = 0xA519,
  TOS_FACTORY_RESET_SHOP = 0xA62E,
  TOS_FACTORY_NVM_RESET = 0xA62F,
  TOS_FACTORY_WARM_UP_ON = 0xA614,
  TOS_FACTORY_WARM_UP_OFF = 0xA615,
  TOS_FACTORY_KEY_PAD_TEST_ON = 0xA616,
  TOS_FACTORY_KEY_APD_TEST_OFF = 0xA617,
  TOS_FACTORY_PC_LINK_TEST = 0xA61C,
  TOS_FACTORY_RATTLE = 0xA67F,
  TOS_FACTORY_WIFI_TEST = 0xA61D,
  TOS_FACTORY_SND_MUTE_OFF = 0xA816,
  TOS_FACTORY_SND_MUTE_ON = 0xA817,
  TOS_FACTORY_CSMD_ON = 0xA814,
  TOS_FACTORY_CSMD_OFF = 0xA815,
  TOS_FACTORY_AV1 = 0xA801,
  TOS_FACTORY_AV2 = 0xA802,
  TOS_FACTORY_CVBS = 0xA803,
  TOS_FACTORY_S_VIDEO = 0xA804,
  TOS_FACTORY_YPBPR1 = 0xA805,
  TOS_FACTORY_YPBPR2 = 0xA806,
  TOS_FACTORY_VGA = 0xA807,
  TOS_FACTORY_HDMI1 = 0xA808,
  TOS_FACTORY_HDMI2 = 0xA809,
  TOS_FACTORY_HDMI3 = 0xA80A,
  TOS_FACTORY_HDMI4 = 0xA80B,
  TOS_FACTORY_USB = 0xA80C,
  TOS_FACTORY_LS_ON = 0xA812,
  TOS_FACTORY_LS_OFF = 0xA813,
  TOS_FACTORY_SWITCH_COLORTEMP = 0xA828,
  TOS_FACTORY_MIC_ON = 0xA818,
  TOS_FACTORY_MIC_OFF = 0xA819, 
  TOS_FACTORY_JOY_ON = 0xA81A,
  TOS_FACTORY_JOY_OFF = 0xA81B,
  TOS_FACTORY_FLIPPED_ON = 0xA832,
  TOS_FACTORY_FLIPPED_OFF = 0xA833,
  TOS_FACTORY_OAD_UPGRADE_SOFTWARE = 0xA83C,
  TOS_FACTORY_3D_ON = 0xA83D,
  TOS_FACTORY_3D_OFF = 0xA83E,
  TOS_FACTORY_ERG_ON = 0xA845,
  TOS_FACTORY_ERG_OFF = 0xA846,
  TOS_FACTORY_PANEL_TEST_ON = 0xA847,
  TOS_FACTORY_PANEL_TEST_OFF = 0xA848,
  TOS_FACTORY_CI_CARD_INFO_ON = 0xA849,
  TOS_FACTORY_CI_CARD_INFO_OFF = 0xA84A,
  TOS_FACTORY_RF_RC_ON = 0xA84B,
  TOS_FACTORY_RF_RC_OFF = 0xA84C,
  TOS_FACTORY_MTS_SWITCH = 0xA84D,
  TOS_FACTORY_VOLUME_SELECT = 0xA84E,
  TOS_FACTORY_BALANCE_SELECT = 0xA84F,

  //wb adj
  TOS_FACTORY_WB_ADJ_ON = 0xA51E,
  TOS_FACTORY_WB_ADJ_OFF = 0xA51F,
  TOS_FACTORY_WB_RED_ADD_1 = 0xA520,
  TOS_FACTORY_WB_RED_ADD_2 = 0xA521,
  TOS_FACTORY_WB_RED_DEC_1 = 0xA522,
  TOS_FACTORY_WB_RED_DEC_2 = 0xA523,

  TOS_FACTORY_WB_GRE_ADD_1 = 0xA524,
  TOS_FACTORY_WB_GRE_ADD_2 = 0xA525,
  TOS_FACTORY_WB_GRE_DEC_1 = 0xA526,
  TOS_FACTORY_WB_GRE_DEC_2 = 0xA527,  

  TOS_FACTORY_WB_BLUE_ADD_1 = 0xA528,
  TOS_FACTORY_WB_BLUE_ADD_2 = 0xA529,
  TOS_FACTORY_WB_BLUE_DEC_1 = 0xA52A,
  TOS_FACTORY_WB_BLUE_DEC_2 = 0xA52B,

  TOS_FACTORY_WB_R_VAL = 0xA532,
  TOS_FACTORY_WB_G_VAL = 0xA533,
  TOS_FACTORY_WB_B_VAL = 0xA534,
  TOS_FACTORY_WB_VAL_SET = 0xAD00,//TOS_FACTORY_WB_VAL_SET ��λED����set wb����λ��������wb��ֵ����ΧΪ0-255

  //FACTORY_IR_VOLUME ��λ����set volume����λ��������������ֵ����ΧΪ0-100
  TOS_FACTORY_IR_VOLUME = 0xA900,

  //FACTORY_IR_BALANCE ��λ����set volume����λ��������������ֵ����ΧΪ0-100
  TOS_FACTORY_IR_BALANCE = 0xA700,

  //FACTORY_IR_SELECT_RF_PROG ��λ����RF����λ����Ƶ��ֵ����ΧΪ0-255
  TOS_FACTORY_IR_SELECT_RF_PROG = 0xAB00,
  
  //FACTORY_IR_SELECT_CABLE_PROG ��λ����cable����λ����Ƶ��ֵ����ΧΪ0-127
  TOS_FACTORY_IR_SELECT_CABLE_PROG = 0xAC00,

  //FACTORY_IR_SELECT_SAT_PROG ��λ����sat����λ����Ƶ��ֵ����ΧΪ0-255
  TOS_FACTORY_IR_SELECT_SAT_PROG = 0xAD00,
  
  //FACTORY_IR_SELECT_ANTENNA_DTV_PROG ��λ����ANTENNA����λ����Ƶ��ֵ����Χ0-100
  FACTORY_IR_SELECT_ANTENNA_DTV_PROG = 0xAE00,

  //FACTORY_IR_SELECT_CABLE_DTV_PROG ��λ����CABLE����λ����Ƶ��ֵ����Χ0-100
  FACTORY_IR_SELECT_CABLE_DTV_PROG = 0xAF00

} TOS_KeyCode;


/**
@brief �����м���İ����¼��ṹ��
*/
typedef struct {
    int size;                   ///< ���ṹ���С�����븳ֵ������ֵ�������sizeof(TOS_KeyEvent)
    TOS_KeyAction action;       ///< ����״̬
    TOS_KeyCode key_code;       ///< ������ֵ
    int unicode_character;      ///< ������unicode����
    int flags;                  ///< Ԥ����shift ctrl�ȼ�ʹ�ã�Ŀǰ��������Ϊ0
} TOS_KeyEvent;


/**
* @brief ����¼����͵Ķ���
*/
typedef enum 
{
    TOS_MOUSE_PRESSED = 1,      ///<��갴�������¼�
    TOS_MOUSE_RELEASED = 3,     ///<��갴���ɿ��¼�
    TOS_MOUSE_MOVE = 4,         ///<����ƶ��¼�
    TOS_MOUSEWHEEL = 9,         ///<�������¼�
} TOS_MouseAction;

/**
@brief �����м��������¼��ṹ��
*/
typedef struct {
    int size;                   ///< ���ṹ���С�����븳ֵ������ֵ�������sizeof(TOS_MouseEvent)
    TOS_MouseAction action;     ///< ����¼�״̬
    int x;                      ///< �������λ��x����
    int y;                      ///< �������λ��y����
    int x_offset;               ///< The relative motion in the X direction 
    int y_offset;               ///< The relative motion in the Y direction 
    TOS_EventFlags flags;       ///< ����¼���ʶ�����ڱ����Ǹ��������£�ֵ�ο�TOS_EventFlags
} TOS_MouseEvent;

#endif
