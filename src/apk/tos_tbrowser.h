
#ifndef __TOS_TBROWSER_H__
#define __TOS_TBROWSER_H__

#include "tos_key_code.h"
#ifndef CLOG_TAG
#define CLOG_TAG "clog_tbrowser"
#endif


#ifdef __cplusplus
extern "C" {
#endif

/**
@brief Inpu Command 所有类型
*/
typedef enum {
  TOS_TBROWSER_AlignCenter,
  TOS_TBROWSER_AlignJustified,
  TOS_TBROWSER_AlignLeft,
  TOS_TBROWSER_AlignRight,
  TOS_TBROWSER_BackColor,
  TOS_TBROWSER_BackwardDelete,
  TOS_TBROWSER_Bold,
  TOS_TBROWSER_Copy,
  TOS_TBROWSER_CreateLink,
  TOS_TBROWSER_Cut,
  TOS_TBROWSER_DefaultParagraphSeparator,
  TOS_TBROWSER_Delete,
  TOS_TBROWSER_DeleteBackward,
  TOS_TBROWSER_DeleteBackwardByDecomposingPreviousCharacter,
  TOS_TBROWSER_DeleteForward,
  TOS_TBROWSER_DeleteToBeginningOfLine,
  TOS_TBROWSER_DeleteToBeginningOfParagraph,
  TOS_TBROWSER_DeleteToEndOfLine,
  TOS_TBROWSER_DeleteToEndOfParagraph,
  TOS_TBROWSER_DeleteToMark,
  TOS_TBROWSER_DeleteWordBackward,
  TOS_TBROWSER_DeleteWordForward,
  TOS_TBROWSER_FindString,
  TOS_TBROWSER_FontName,
  TOS_TBROWSER_FontSize,
  TOS_TBROWSER_FontSizeDelta,
  TOS_TBROWSER_ForeColor,
  TOS_TBROWSER_FormatBlock,
  TOS_TBROWSER_ForwardDelete,
  TOS_TBROWSER_HiliteColor,
  TOS_TBROWSER_IgnoreSpelling,
  TOS_TBROWSER_Indent,
  TOS_TBROWSER_InsertBacktab,
  TOS_TBROWSER_InsertHTML,
  TOS_TBROWSER_InsertHorizontalRule,
  TOS_TBROWSER_InsertImage,
  TOS_TBROWSER_InsertLineBreak,
  TOS_TBROWSER_InsertNewline,
  TOS_TBROWSER_InsertNewlineInQuotedContent,
  TOS_TBROWSER_InsertOrderedList,
  TOS_TBROWSER_InsertParagraph,
  TOS_TBROWSER_InsertTab,
  TOS_TBROWSER_InsertText,
  TOS_TBROWSER_InsertUnorderedList,
  TOS_TBROWSER_Italic,
  TOS_TBROWSER_JustifyCenter,
  TOS_TBROWSER_JustifyFull,
  TOS_TBROWSER_JustifyLeft,
  TOS_TBROWSER_JustifyNone,
  TOS_TBROWSER_JustifyRight,
  TOS_TBROWSER_MakeTextWritingDirectionLeftToRight,
  TOS_TBROWSER_MakeTextWritingDirectionNatural,
  TOS_TBROWSER_MakeTextWritingDirectionRightToLeft,
  TOS_TBROWSER_MoveBackward,
  TOS_TBROWSER_MoveBackwardAndModifySelection,
  TOS_TBROWSER_MoveDown,
  TOS_TBROWSER_MoveDownAndModifySelection,
  TOS_TBROWSER_MoveForward,
  TOS_TBROWSER_MoveForwardAndModifySelection,
  TOS_TBROWSER_MoveLeft,
  TOS_TBROWSER_MoveLeftAndModifySelection,
  TOS_TBROWSER_MovePageDown,
  TOS_TBROWSER_MovePageDownAndModifySelection,
  TOS_TBROWSER_MovePageUp,
  TOS_TBROWSER_MovePageUpAndModifySelection,
  TOS_TBROWSER_MoveParagraphBackward,
  TOS_TBROWSER_MoveParagraphBackwardAndModifySelection,
  TOS_TBROWSER_MoveParagraphForward,
  TOS_TBROWSER_MoveParagraphForwardAndModifySelection,
  TOS_TBROWSER_MoveRight,
  TOS_TBROWSER_MoveRightAndModifySelection,
  TOS_TBROWSER_MoveToBeginningOfDocument,
  TOS_TBROWSER_MoveToBeginningOfDocumentAndModifySelection,
  TOS_TBROWSER_MoveToBeginningOfLine,
  TOS_TBROWSER_MoveToBeginningOfLineAndModifySelection,
  TOS_TBROWSER_MoveToBeginningOfParagraph,
  TOS_TBROWSER_MoveToBeginningOfParagraphAndModifySelection,
  TOS_TBROWSER_MoveToBeginningOfSentence,
  TOS_TBROWSER_MoveToBeginningOfSentenceAndModifySelection,
  TOS_TBROWSER_MoveToEndOfDocument,
  TOS_TBROWSER_MoveToEndOfDocumentAndModifySelection,
  TOS_TBROWSER_MoveToEndOfLine,
  TOS_TBROWSER_MoveToEndOfLineAndModifySelection,
  TOS_TBROWSER_MoveToEndOfParagraph,
  TOS_TBROWSER_MoveToEndOfParagraphAndModifySelection,
  TOS_TBROWSER_MoveToEndOfSentence,
  TOS_TBROWSER_MoveToEndOfSentenceAndModifySelection,
  TOS_TBROWSER_MoveToLeftEndOfLine,
  TOS_TBROWSER_MoveToLeftEndOfLineAndModifySelection,
  TOS_TBROWSER_MoveToRightEndOfLine,
  TOS_TBROWSER_MoveToRightEndOfLineAndModifySelection,
  TOS_TBROWSER_MoveUp,
  TOS_TBROWSER_MoveUpAndModifySelection,
  TOS_TBROWSER_MoveWordBackward,
  TOS_TBROWSER_MoveWordBackwardAndModifySelection,
  TOS_TBROWSER_MoveWordForward,
  TOS_TBROWSER_MoveWordForwardAndModifySelection,
  TOS_TBROWSER_MoveWordLeft,
  TOS_TBROWSER_MoveWordLeftAndModifySelection,
  TOS_TBROWSER_MoveWordRight,
  TOS_TBROWSER_MoveWordRightAndModifySelection,
  TOS_TBROWSER_Outdent,
  TOS_TBROWSER_OverWrite,
  TOS_TBROWSER_Paste,
  TOS_TBROWSER_PasteAndMatchStyle,
  TOS_TBROWSER_PasteGlobalSelection,
  TOS_TBROWSER_Print,
  TOS_TBROWSER_Redo,
  TOS_TBROWSER_RemoveFormat,
  TOS_TBROWSER_ScrollPageBackward,
  TOS_TBROWSER_ScrollPageForward,
  TOS_TBROWSER_ScrollLineUp,
  TOS_TBROWSER_ScrollLineDown,
  TOS_TBROWSER_ScrollToBeginningOfDocument,
  TOS_TBROWSER_ScrollToEndOfDocument,
  TOS_TBROWSER_SelectAll,
  TOS_TBROWSER_SelectLine,
  TOS_TBROWSER_SelectParagraph,
  TOS_TBROWSER_SelectSentence,
  TOS_TBROWSER_SelectToMark,
  TOS_TBROWSER_SelectWord,
  TOS_TBROWSER_SetMark,
  TOS_TBROWSER_Strikethrough,
  TOS_TBROWSER_StyleWithCSS,
  TOS_TBROWSER_Subscript,
  TOS_TBROWSER_Superscript,
  TOS_TBROWSER_SwapWithMark,
  TOS_TBROWSER_ToggleBold,
  TOS_TBROWSER_ToggleItalic,
  TOS_TBROWSER_ToggleUnderline,
  TOS_TBROWSER_Transpose,
  TOS_TBROWSER_Underline,
  TOS_TBROWSER_Undo,
  TOS_TBROWSER_Unlink,
  TOS_TBROWSER_Unscript,
  TOS_TBROWSER_Unselect,
  TOS_TBROWSER_UseCSS,
  TOS_TBROWSER_Yank,
  TOS_TBROWSER_YankAndSelect
}TOS_TBrowser_Input_Command_Type;

/**
@brief Dsmcc相关的FS的类型
*/
typedef enum
{
  TOS_TBROWSER_FS_ENTRY_TYPE_FILE,
  TOS_TBROWSER_FS_ENTRY_TYPE_DIR,
  TOS_TBROWSER_FS_ENTRY_TYPE_STE,
  TOS_TBROWSER_FS_ENTRY_TYPE_ERR  //for error return
}TOS_TBrowser_FS_Entry_Type;

/**
@brief TVOS相关的event类型
*/
typedef enum {
  TOS_TBROWSER_EVENT_BEGIN,

  TOS_TBROWSER_SYSTEM_EVENT, //send to default focused page, page name should be null
  TOS_TBROWSER_GLOBAL_EVENT, //send to specific page that appointed by page name

  TOS_TBROWSER_EVENT_END
}TOS_TBrowser_EventType;

typedef struct
{
  TOS_TBrowser_FS_Entry_Type entry_type;
  int entry_payload_len;
  char* entry_payload;
}TOS_TBrowser_FS_Entry_Descriptor;

typedef TOS_TBrowser_FS_Entry_Descriptor* (*TOS_TBrowser_Get_File_Content)(const char* entry_uri);
typedef TOS_TBrowser_FS_Entry_Descriptor* (*TOS_TBrowser_Get_Dir_Content)(const char* entry_uri);
typedef int (*TOS_TBrowser_Release_Entry_Descriptor)(TOS_TBrowser_FS_Entry_Descriptor* entry_uri);
typedef TOS_TBrowser_FS_Entry_Type (*TOS_TBrowser_Check_Entry_Type)(const char* entry_uri);
typedef TOS_TBrowser_FS_Entry_Descriptor* (*TOS_TBrowser_Get_Stream_Event_List)(const char* entry_uri);

typedef struct
{
  TOS_TBrowser_Get_File_Content  get_file_content;
  TOS_TBrowser_Get_Dir_Content   get_dir_content;
  TOS_TBrowser_Release_Entry_Descriptor  release_entry_descriptor;
  TOS_TBrowser_Check_Entry_Type   check_entry_type;
  TOS_TBrowser_Get_Stream_Event_List  get_stream_event_list;
}TOS_TBrowser_Dsmcc_Protocol;

/**
@brief DVB获取数据返回消息
*/
typedef enum {
  TOS_TBROWSER_DSMCC_SUCCESS,
  TOS_TBROWSER_DSMCC_WAIT,
  TOS_TBROWSER_DSMCC_FAIL
}TosTBrowserDsmccMsg;

/**
@brief 以下三个接口表示获取DVB文件内容或者目录内容或者流事件列表内容

@param[in] entry_uri传入需要获取数据的
@param[out] outDescriptor返回获取到dsmcc数据
@return 返回tos_tbrowser_dsmcc_msg消息，
               TOS_TBROWSER_DSMCC_SUCCESS表示获取数据成功，
			   TOS_TBROWSER_DSMCC_WAIT表示未获取数据，需要再次获取
               TOS_TBROWSER_DSMCC_FAIL表示获取数据超时返回失败
*/
typedef TosTBrowserDsmccMsg (*TosTBrowserGetFileContent)(const char* entry_uri, TOS_TBrowser_FS_Entry_Descriptor** out_descriptor);
typedef TosTBrowserDsmccMsg (*TosTBrowserGetDirContent)(const char* entry_uri, TOS_TBrowser_FS_Entry_Descriptor** out_descriptor);
typedef TosTBrowserDsmccMsg (*TosTBrowserGetStreamEventList)(const char* entry_uri, TOS_TBrowser_FS_Entry_Descriptor** out_descriptor);
/**
@brief 获取DVB数据类型

@param[in] entry_uri传入需要获取数据类型的url
@param[out] out_descriptor_type返回获取到dvb数据类型
@return 返回tos_tbrowser_dsmcc_msg消息，
               TOS_TBROWSER_DSMCC_SUCCESS表示获取数据类型成功，
			   TOS_TBROWSER_DSMCC_WAIT表示未获取数据类型，需要再次获取
               TOS_TBROWSER_DSMCC_FAIL表示获取数据类型超时返回失败
*/
typedef TosTBrowserDsmccMsg (*TosTBrowserCheckEntryType)(const char* entry_uri, TOS_TBrowser_FS_Entry_Type* out_descriptor_type);

/**
@brief 释放entry数据

@param[in] entry_uri传入需要获取数据的url
@return 返回0表示成功，返回-1表示失败
*/
typedef int (*TosTBrowserReleaseEntryDescriptor)(TOS_TBrowser_FS_Entry_Descriptor* entry_uri);

typedef struct
{
  TosTBrowserGetFileContent  get_file_content_async;
  TosTBrowserGetDirContent   get_dir_content_async;
  TosTBrowserReleaseEntryDescriptor  release_entry_descriptor;
  TosTBrowserCheckEntryType   check_entry_type_async;
  TosTBrowserGetStreamEventList  get_stream_event_list_async;
}TosTBrowserDvbProtocol;

/**
@brief 浏览器回调消息事件类型
*/
typedef enum {
  TOS_TBROWSER_CBEVENT_TYPE_CHANGE_URL,                ///<切换页面的消息,code是const char*类型,表示要切换到的新的URL地址
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_PAGE_START,           ///<开始加载新页面,code是const char*类型,表示加载的URL地址
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_PAGE_END,             ///<页面加载结束,code是const char*类型,表示加载的URL地址
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_FRAME_START,          ///<开始加载新frame,code是const char*类型,表示加载的URL地址
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_FRAME_END,            ///<frame加载结束,code是const char*类型,表示加载的URL地址
  TOS_TBROWSER_CBEVENT_TYPE_PROGRESS_CHANGED=5,          ///<加载进度变化,code是int类型,表示进度比,取值0-100
  TOS_TBROWSER_CBEVENT_TYPE_UNHANDLED_KEYEVENT,        ///<处理浏览器未处理的按键事件    TOS_TBROWSER_CBEVENT_TYPE_SHOULD_OVERRIDE_KEYEVENT,  ///<是否浏览器按键事件,浏览器接收到遥控器事件后会先发送此消息进行询问,
  TOS_TBROWSER_CBEVENT_TYPE_SHOULD_OVERRIDE_KEYEVENT,  ///<是否浏览器按键事件,浏览器接收到遥控器事件后会先发送此消息进行询问,
                                                            ///<返回0表示不处理,直接交给浏览器;返回-1表示应用在回调中自己处理此消息,不要浏览器处理.
                                                            ///<code是TBrowserEvent_S*类型                                                         
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_URL_FAILED,            ///<URL打开失败,code是int类型,表示失败的错误码,取值                                              
  TOS_TBROWSER_CBEVENT_TYPE_WINDOW_CLOSE,            ///<需要关闭应用>
  TOS_TBROWSER_CBEVENT_TYPE_CANNOT_SCROLL,             ///<页面在某个方向上已经不能滚动>code是int 类型,详见FocusDirection.h文件中的定义。
  TOS_TBROWSER_CBEVENT_TYPE_Input_Method_State_Changed,             ///<当前页面焦点是否可输入, 0代表不可输入,其它代表可输入
  TOS_TBROWSER_CBEVENT_TYPE_RENDER_EXIT,                ///RENDER进程非正常退出了
  TOS_TBROWSER_CBEVENT_TYPE_RENDER_MEMORY_PRESSURE      ///render进程的内存使用情况
}TOS_TBrowser_Cb_Event_Type;

/*
@brief浏览器回调函数类型
*/
typedef int (*TOS_TBrowser_Event_Callback)(const char* page_name, TOS_TBrowser_Cb_Event_Type event, const void* code, void* user_data);

/**
@brief 设置Browser事件回调函数
@brief 浏览器1.0接口，建议不再使用

@param[in] callback:注册回调函数，取值TOS_TBrowser_Event_Callback
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_register_event_callback(const char* page_name, TOS_TBrowser_Event_Callback callback);

/**
@brief 添加Browser事件回调函数

@param[in] callback:注册回调函数，取值TOS_TBrowser_Event_Callback
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_add_event_callback(const char* page_name, TOS_TBrowser_Event_Callback callback, void* user_data);

/**
@brief TBrowser1.0接口
@brief 打开指定页面

@param[in] url 页面地址
@return 成功返回0;失败返回其他
*/
int tos_tbrowser_load_url(const char * url);

/**
@brief TBrowser2.0接口
@brief  通过pageid 获取url

@param[out] url  :page 的url
@param[in] page_name:render进程名字
@param[in] length:url 长度

@return 成功返回0;失败返回其它
*/
int tos_tbrowser_get_(const char* page_name, char* , int length);

/**
@brief TBrowser2.0接口
@brief  通过pageid 获取 title
  
@param[out] title  :page 的title
@param[in] page_name:render进程名字
@param[in] length  :title的长度

@return 成功返回0;失败返回其它
*/
int tos_tbrowser_get_title(const char* page_name, char*title, int length);
  
/**
@brief TBrowser2.0接口
@brief  通过pageid 获取 icon

@param[out] icon  :page 的icon
@param[in] page_name:render进程名字
@param[in] length  :icon的长度

@return 成功返回0;失败返回其它
*/
int tos_tbrowser_get_icon(const char* page_name, char*icon, int length);

/**
@brief TBrowser2.0接口
@brief  通过pageid 获取可后退  的count
  
@param[in] page_name:render进程名字
@param[out] back_count: 可后退的count
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_get_back_count(const char* page_name, int* back_count);
    
/**
@brief TBrowser2.0接口
@brief  通过pageid 获取可前进的count
  
@param[in] page_name:render进程名字
@param[out]forward_count:可前进的count

@return 成功返回0;失败返回其它
*/
int tos_tbrowser_get_forward_count(const char* page_name, int* forward_count);

/**
@brief TBrowser2.0接口
@brief  向后退一页

@param[in] page_name:render进程名字

@return 返回空
*/
int tos_tbrowser_go_back(const char* page_name);

/**
@brief TBrowser2.0接口
@brief  向前进 一页

@param[in] page_id  :page id
@return 返回空
*/
int tos_tbrowser_go_forward(const char* page_name);

/**
@brief TBrowser2.0接口
@brief  page id的页面重新加载

@param[in] page_name:render进程名字

@return 返回空
*/
int tos_tbrowser_reload(const char* page_name);

/**
@brief TBrowser1.0接口
@brief 向页面发送按键事件

@param[in] keyType:按键类型，取值TOS_KeyAction
@param[in] keyCode:键值，具体是sdl类型的键值，keyCode的取值参见tos_key_code.h的按键键值定义
@return 成功返回0;失败返回其他
*/
int tos_tbrowser_push_event(TOS_KeyAction key_type ,int key_code);

/**
@brief TBrowser1.0接口
@brief 退出销毁浏览器

@return 成功返回0;失败返回其他
*/
int tos_tbrowser_destory();

/**
@brief 设置对应Page需要加载的插件路径

@param[in] page_name 对应的Page进程名
@param[in] plugin_file_path 文件路径
@return 成功返回0  否则返回-1
*/
int tos_tbrowser_set_plugin_file_path(const char* page_name, const char* plugin_file_path);

/**
@brief 设置对应Page需要加载的jsext路径

@param[in] page_name 对应的Page进程名
@param[in] jsext_path 文件路径 格式："/data/tbrowser2/jsext/libjsext_demo.so:/data/tbrowser2/jsext/libjsext_tcl.so"
@return 成功返回0  否则返回-1
*/
int tos_tbrowser_set_jsext_path(const char * page_name, const char* jsext_path);

/**
@brief 设置要打开的页面的z-index. 
       此接口需要在打开Render进程之前调用，重复调用会覆盖上次设置值，并在下一次创建Render进程时生效。
@param[in] page_name 目标Render 进程名
@param[in] 要设置的z-index:数字越大在顶层，支持负数，默认为0，数字相同后打开的放下面。
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_set_zindex(const char* page_name, int zindex);

/**
@brief 打开指定页面

@param[in] page_name 目标Render 进程名
@param[in] url 页面地址
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_load_url_with_name(const char* page_name, const char* url);


/**
@brief 设置dsmcc协议句柄

@param[in] protocol:注册dsmcc协议信息，取值TOS_TBrowser_Dsmcc_Protocol*
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_register_dsmcc_protocol(TOS_TBrowser_Dsmcc_Protocol* protocol);


/**
@brief 设置dvb协议句柄

@param[in] protocol:注册dvb协议信息，取值TosTBrowserDvbProtocol*
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_register_dvb_protocol(TosTBrowserDvbProtocol* protocol);

/**
@brief 向页面发送按键事件
已废弃，不建议使用，建议使用tos_tbrowser_push_key_event_with_name
@param[in] keyType:按键类型，取值TOS_Key_Action
@param[in] keyCode:键值
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_push_event_with_name(TOS_KeyAction key_type, int key_code, int unicode_character);

/**
@brief 向页面发送按键事件

@param[in] page_name:render进程名
@param[in] key_event: 中间件按键事件
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_push_key_event_with_name(const char* page_name, const TOS_KeyEvent* key_event);

/**
@brief 向页面发送鼠标事件

@param[in] page_name:render进程名
@param[in] mouse_event: 中间件鼠标事件
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_push_mouse_event_with_name(const char* page_name, const TOS_MouseEvent* mouse_event);

/**
@brief 向页面发送TVOS事件

@param[in] page_name:render进程名
@param[in] event_code:事件编码
@param[in] event_data:事件值
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_push_tvos_event_with_name(const char* page_name, int event_code, int event_data);

/**
@brief 退出销毁浏览器

@param[in] page_name 目标Render 进程名
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_destory_with_name(const char* page_name);

/**
@brief 设置页面的可见性

@param[in] page_name 目标Render 进程名
@param[in] visible 可见性 1表示页面可见 0表示页面不可见
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_set_visible(const char* page_name, int visible);

/**
@brief 设置焦点页面(焦点页面响应按键)。

@param[in] page_name 目标Render 进程名
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_set_active(const char* page_name);

/**
@brief 获取当前响应焦点页面的page_name。

@param[out] page_name_buf 用于存放页面名的buffer
@param[in] buf_len page_name_buf的大小

@return 成功返回0;失败返回其它
*/
int tos_tbrowser_get_active_page(char* page_name_buf, int buf_len);


/**
@brief 设置浏览器cookie是否可用
设置cookie不可用之后页面不可以再设置或读取cookie。
如果不调用此接口设置，默认是可用的

@param[in] page_name 目标Render 进程名
@param[in] enable 0 表示cookie不可用
                     1 表示所有cookie可用
                     2 表示禁用第三方cookie
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_enable_cookie(const char* page_name, int enable);

/**
@brief 设置浏览器是否设置用户是否允许第三方网站追踪(Do Not Tracking)
@param[in] page_name 目标Render 进程名
@param[in] setting : 0 表示用户接受追踪( DNT : 0 )
                     1 表示用户不接受追踪( DNT : 1 )
                     2 表示用户不关心(不设置DNT 请求头)
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_set_do_not_track(const char* page_name, int setting);

/**
@brief 设置自定义的userAgent

@param[in] page_name 目标Render 进程名
@param[in] userAgent 新的userAgent
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_set_user_agent(const char* page_name, const char* user_agent);

/**
@brief 设置页面背景是否透明
如果没有设置，默认背景是透明。

@param[in] transparent 是否透明 1表示透明，0表示不透明
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_set_bg_color_transparent(const char* page_name, int transparent);

/**
@brief 设置新的键值映射文件
@note 映射文件的内容格式为每行内容是old_key=new_key

@param[in] page_name 目标Render 进程名
@param[in] file_path 键值映射文件路径
@return 成功返回0;失败返回其他
*/
int tos_tbrowser_set_key_map_file(const char* page_name, const char* file_path);

/**
@brief 设置强制HTML解析的注入配置文件
@note 配置文件为ini格式,每行都是URL地址

@param[in] page_name 目标Render 进程名
@param[in] file_path 注入配置文件路径
@return 成功返回0;失败返回其他
*/
int tos_tbrowser_set_html_parse_list(const char* page_name, const char* file_path);

/**
@brief 设置js以及css的注入配置xml文件

@param[in] page_name 目标Render 进程名
@param[in] file_path 注入配置文件路径
@return 成功返回0;失败返回其他
*/
int tos_tbrowser_set_inject_script_file(const char* page_name, const char* file_path);

/**
@brief 加载替换代码配置文件
此接口必须在render进程创建前调用。
重复调用相同文件不会加载，不同文件会覆盖上次加载的内容。

@param[in] page_name 目标Render 进程名
@param[in] file_path 替换代码配置文件路径
@return 成功返回0;失败返回其他
*/
int tos_tbrowser_load_repacle_code_config(const char* page_name, const char* file_path);

/**
@brief 设置默认焦点

@param[in] page_name 目标Render 进程名
@param[in] enable 是否默认焦点
@return 成功返回0;失败返回其他
*/
int tos_tbrowser_set_draw_focus( const char* page_name, int enable);

/**
@brief 设置浏览器http请求语言，对所有页面生效

@param[in] request_language 待设置的请求语言，符合iso-639规范
@return 成功返回0;失败返回其它
*/
int tos_tbrowser_set_request_language(const char* request_language);

/**
@brief 检测浏览器服务是否运行, 注意：调用此接口如果服务未运行会阻塞5s。
@return 正在运行返回0;没有运行返回其他
*/
int tos_tbrowser_is_running();

/**
@brief 向当前焦点页面发送输入命令,用于修改当前焦点的文本

@param[in] page_name 对应的Render进程名
@param[in] command_type 命令类型
@param[in] value 携带的数据 
@return 成功发送返回0,否则返回 -1
*/
int tos_tbrowser_execute_input_command(const char * page_name, const TOS_TBrowser_Input_Command_Type command_type, const char* value);

/**
* @brief Push事件中间件扩展JS接口
* @param[in] page_name  :render进程名
* @param[in] eventType:事件类型
* @param[in] jsonData:事件附加json数据,限定最大存储1024字节数据
*
* @return 成功返回0;失败返回-1
*/
int tos_tbrowser_jsext_push_event_interface(const char* page_name, int eventType, const char *jsonData);

/**
* @brief Get事件中间件扩展JS接口
* @param[in] page_name  :render进程名
* @param[in] modifiers:事件描述符
* @param[out] buffer:获取json数据的缓冲区
* @param[in] length:缓冲区最大获取长度

* @return 成功返回0;失败返回-1
*/
int tos_tbrowser_js_get_event_interface(const char* page_name, int modifiers, char* buffer, int length);

/**
* @brief 重置浏览器sbinder为NULL
*/
void tos_tbrowser_reset_binder();

/**
* @brief 检查浏览器服务是否准备好，此函数只在client端使用。
*
* @return 准备好返回0, 否则返回-1
*/
int tos_tbrowser_check_service();

/**
* @brief 清除浏览器数据
* @param[in] cacheType:数据类型描述{0:删除所有数据}
* @return 成功返回0；否则返回-1
*/
int tos_tbrowser_clear_cache(int cacheType);


#ifdef __cplusplus
}
#endif
/** @} */
#endif
