
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
@brief Inpu Command ��������
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
@brief Dsmcc��ص�FS������
*/
typedef enum
{
  TOS_TBROWSER_FS_ENTRY_TYPE_FILE,
  TOS_TBROWSER_FS_ENTRY_TYPE_DIR,
  TOS_TBROWSER_FS_ENTRY_TYPE_STE,
  TOS_TBROWSER_FS_ENTRY_TYPE_ERR  //for error return
}TOS_TBrowser_FS_Entry_Type;

/**
@brief TVOS��ص�event����
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
@brief DVB��ȡ���ݷ�����Ϣ
*/
typedef enum {
  TOS_TBROWSER_DSMCC_SUCCESS,
  TOS_TBROWSER_DSMCC_WAIT,
  TOS_TBROWSER_DSMCC_FAIL
}TosTBrowserDsmccMsg;

/**
@brief ���������ӿڱ�ʾ��ȡDVB�ļ����ݻ���Ŀ¼���ݻ������¼��б�����

@param[in] entry_uri������Ҫ��ȡ���ݵ�
@param[out] outDescriptor���ػ�ȡ��dsmcc����
@return ����tos_tbrowser_dsmcc_msg��Ϣ��
               TOS_TBROWSER_DSMCC_SUCCESS��ʾ��ȡ���ݳɹ���
			   TOS_TBROWSER_DSMCC_WAIT��ʾδ��ȡ���ݣ���Ҫ�ٴλ�ȡ
               TOS_TBROWSER_DSMCC_FAIL��ʾ��ȡ���ݳ�ʱ����ʧ��
*/
typedef TosTBrowserDsmccMsg (*TosTBrowserGetFileContent)(const char* entry_uri, TOS_TBrowser_FS_Entry_Descriptor** out_descriptor);
typedef TosTBrowserDsmccMsg (*TosTBrowserGetDirContent)(const char* entry_uri, TOS_TBrowser_FS_Entry_Descriptor** out_descriptor);
typedef TosTBrowserDsmccMsg (*TosTBrowserGetStreamEventList)(const char* entry_uri, TOS_TBrowser_FS_Entry_Descriptor** out_descriptor);
/**
@brief ��ȡDVB��������

@param[in] entry_uri������Ҫ��ȡ�������͵�url
@param[out] out_descriptor_type���ػ�ȡ��dvb��������
@return ����tos_tbrowser_dsmcc_msg��Ϣ��
               TOS_TBROWSER_DSMCC_SUCCESS��ʾ��ȡ�������ͳɹ���
			   TOS_TBROWSER_DSMCC_WAIT��ʾδ��ȡ�������ͣ���Ҫ�ٴλ�ȡ
               TOS_TBROWSER_DSMCC_FAIL��ʾ��ȡ�������ͳ�ʱ����ʧ��
*/
typedef TosTBrowserDsmccMsg (*TosTBrowserCheckEntryType)(const char* entry_uri, TOS_TBrowser_FS_Entry_Type* out_descriptor_type);

/**
@brief �ͷ�entry����

@param[in] entry_uri������Ҫ��ȡ���ݵ�url
@return ����0��ʾ�ɹ�������-1��ʾʧ��
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
@brief ������ص���Ϣ�¼�����
*/
typedef enum {
  TOS_TBROWSER_CBEVENT_TYPE_CHANGE_URL,                ///<�л�ҳ�����Ϣ,code��const char*����,��ʾҪ�л������µ�URL��ַ
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_PAGE_START,           ///<��ʼ������ҳ��,code��const char*����,��ʾ���ص�URL��ַ
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_PAGE_END,             ///<ҳ����ؽ���,code��const char*����,��ʾ���ص�URL��ַ
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_FRAME_START,          ///<��ʼ������frame,code��const char*����,��ʾ���ص�URL��ַ
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_FRAME_END,            ///<frame���ؽ���,code��const char*����,��ʾ���ص�URL��ַ
  TOS_TBROWSER_CBEVENT_TYPE_PROGRESS_CHANGED=5,          ///<���ؽ��ȱ仯,code��int����,��ʾ���ȱ�,ȡֵ0-100
  TOS_TBROWSER_CBEVENT_TYPE_UNHANDLED_KEYEVENT,        ///<���������δ����İ����¼�    TOS_TBROWSER_CBEVENT_TYPE_SHOULD_OVERRIDE_KEYEVENT,  ///<�Ƿ�����������¼�,��������յ�ң�����¼�����ȷ��ʹ���Ϣ����ѯ��,
  TOS_TBROWSER_CBEVENT_TYPE_SHOULD_OVERRIDE_KEYEVENT,  ///<�Ƿ�����������¼�,��������յ�ң�����¼�����ȷ��ʹ���Ϣ����ѯ��,
                                                            ///<����0��ʾ������,ֱ�ӽ��������;����-1��ʾӦ���ڻص����Լ��������Ϣ,��Ҫ���������.
                                                            ///<code��TBrowserEvent_S*����                                                         
  TOS_TBROWSER_CBEVENT_TYPE_LOAD_URL_FAILED,            ///<URL��ʧ��,code��int����,��ʾʧ�ܵĴ�����,ȡֵ                                              
  TOS_TBROWSER_CBEVENT_TYPE_WINDOW_CLOSE,            ///<��Ҫ�ر�Ӧ��>
  TOS_TBROWSER_CBEVENT_TYPE_CANNOT_SCROLL,             ///<ҳ����ĳ���������Ѿ����ܹ���>code��int ����,���FocusDirection.h�ļ��еĶ��塣
  TOS_TBROWSER_CBEVENT_TYPE_Input_Method_State_Changed,             ///<��ǰҳ�潹���Ƿ������, 0����������,�������������
  TOS_TBROWSER_CBEVENT_TYPE_RENDER_EXIT,                ///RENDER���̷������˳���
  TOS_TBROWSER_CBEVENT_TYPE_RENDER_MEMORY_PRESSURE      ///render���̵��ڴ�ʹ�����
}TOS_TBrowser_Cb_Event_Type;

/*
@brief������ص���������
*/
typedef int (*TOS_TBrowser_Event_Callback)(const char* page_name, TOS_TBrowser_Cb_Event_Type event, const void* code, void* user_data);

/**
@brief ����Browser�¼��ص�����
@brief �����1.0�ӿڣ����鲻��ʹ��

@param[in] callback:ע��ص�������ȡֵTOS_TBrowser_Event_Callback
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_register_event_callback(const char* page_name, TOS_TBrowser_Event_Callback callback);

/**
@brief ���Browser�¼��ص�����

@param[in] callback:ע��ص�������ȡֵTOS_TBrowser_Event_Callback
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_add_event_callback(const char* page_name, TOS_TBrowser_Event_Callback callback, void* user_data);

/**
@brief TBrowser1.0�ӿ�
@brief ��ָ��ҳ��

@param[in] url ҳ���ַ
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_load_url(const char * url);

/**
@brief TBrowser2.0�ӿ�
@brief  ͨ��pageid ��ȡurl

@param[out] url  :page ��url
@param[in] page_name:render��������
@param[in] length:url ����

@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_get_(const char* page_name, char* , int length);

/**
@brief TBrowser2.0�ӿ�
@brief  ͨ��pageid ��ȡ title
  
@param[out] title  :page ��title
@param[in] page_name:render��������
@param[in] length  :title�ĳ���

@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_get_title(const char* page_name, char*title, int length);
  
/**
@brief TBrowser2.0�ӿ�
@brief  ͨ��pageid ��ȡ icon

@param[out] icon  :page ��icon
@param[in] page_name:render��������
@param[in] length  :icon�ĳ���

@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_get_icon(const char* page_name, char*icon, int length);

/**
@brief TBrowser2.0�ӿ�
@brief  ͨ��pageid ��ȡ�ɺ���  ��count
  
@param[in] page_name:render��������
@param[out] back_count: �ɺ��˵�count
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_get_back_count(const char* page_name, int* back_count);
    
/**
@brief TBrowser2.0�ӿ�
@brief  ͨ��pageid ��ȡ��ǰ����count
  
@param[in] page_name:render��������
@param[out]forward_count:��ǰ����count

@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_get_forward_count(const char* page_name, int* forward_count);

/**
@brief TBrowser2.0�ӿ�
@brief  �����һҳ

@param[in] page_name:render��������

@return ���ؿ�
*/
int tos_tbrowser_go_back(const char* page_name);

/**
@brief TBrowser2.0�ӿ�
@brief  ��ǰ�� һҳ

@param[in] page_id  :page id
@return ���ؿ�
*/
int tos_tbrowser_go_forward(const char* page_name);

/**
@brief TBrowser2.0�ӿ�
@brief  page id��ҳ�����¼���

@param[in] page_name:render��������

@return ���ؿ�
*/
int tos_tbrowser_reload(const char* page_name);

/**
@brief TBrowser1.0�ӿ�
@brief ��ҳ�淢�Ͱ����¼�

@param[in] keyType:�������ͣ�ȡֵTOS_KeyAction
@param[in] keyCode:��ֵ��������sdl���͵ļ�ֵ��keyCode��ȡֵ�μ�tos_key_code.h�İ�����ֵ����
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_push_event(TOS_KeyAction key_type ,int key_code);

/**
@brief TBrowser1.0�ӿ�
@brief �˳����������

@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_destory();

/**
@brief ���ö�ӦPage��Ҫ���صĲ��·��

@param[in] page_name ��Ӧ��Page������
@param[in] plugin_file_path �ļ�·��
@return �ɹ�����0  ���򷵻�-1
*/
int tos_tbrowser_set_plugin_file_path(const char* page_name, const char* plugin_file_path);

/**
@brief ���ö�ӦPage��Ҫ���ص�jsext·��

@param[in] page_name ��Ӧ��Page������
@param[in] jsext_path �ļ�·�� ��ʽ��"/data/tbrowser2/jsext/libjsext_demo.so:/data/tbrowser2/jsext/libjsext_tcl.so"
@return �ɹ�����0  ���򷵻�-1
*/
int tos_tbrowser_set_jsext_path(const char * page_name, const char* jsext_path);

/**
@brief ����Ҫ�򿪵�ҳ���z-index. 
       �˽ӿ���Ҫ�ڴ�Render����֮ǰ���ã��ظ����ûḲ���ϴ�����ֵ��������һ�δ���Render����ʱ��Ч��
@param[in] page_name Ŀ��Render ������
@param[in] Ҫ���õ�z-index:����Խ���ڶ��㣬֧�ָ�����Ĭ��Ϊ0��������ͬ��򿪵ķ����档
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_zindex(const char* page_name, int zindex);

/**
@brief ��ָ��ҳ��

@param[in] page_name Ŀ��Render ������
@param[in] url ҳ���ַ
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_load_url_with_name(const char* page_name, const char* url);


/**
@brief ����dsmccЭ����

@param[in] protocol:ע��dsmccЭ����Ϣ��ȡֵTOS_TBrowser_Dsmcc_Protocol*
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_register_dsmcc_protocol(TOS_TBrowser_Dsmcc_Protocol* protocol);


/**
@brief ����dvbЭ����

@param[in] protocol:ע��dvbЭ����Ϣ��ȡֵTosTBrowserDvbProtocol*
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_register_dvb_protocol(TosTBrowserDvbProtocol* protocol);

/**
@brief ��ҳ�淢�Ͱ����¼�
�ѷ�����������ʹ�ã�����ʹ��tos_tbrowser_push_key_event_with_name
@param[in] keyType:�������ͣ�ȡֵTOS_Key_Action
@param[in] keyCode:��ֵ
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_push_event_with_name(TOS_KeyAction key_type, int key_code, int unicode_character);

/**
@brief ��ҳ�淢�Ͱ����¼�

@param[in] page_name:render������
@param[in] key_event: �м�������¼�
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_push_key_event_with_name(const char* page_name, const TOS_KeyEvent* key_event);

/**
@brief ��ҳ�淢������¼�

@param[in] page_name:render������
@param[in] mouse_event: �м������¼�
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_push_mouse_event_with_name(const char* page_name, const TOS_MouseEvent* mouse_event);

/**
@brief ��ҳ�淢��TVOS�¼�

@param[in] page_name:render������
@param[in] event_code:�¼�����
@param[in] event_data:�¼�ֵ
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_push_tvos_event_with_name(const char* page_name, int event_code, int event_data);

/**
@brief �˳����������

@param[in] page_name Ŀ��Render ������
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_destory_with_name(const char* page_name);

/**
@brief ����ҳ��Ŀɼ���

@param[in] page_name Ŀ��Render ������
@param[in] visible �ɼ��� 1��ʾҳ��ɼ� 0��ʾҳ�治�ɼ�
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_visible(const char* page_name, int visible);

/**
@brief ���ý���ҳ��(����ҳ����Ӧ����)��

@param[in] page_name Ŀ��Render ������
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_active(const char* page_name);

/**
@brief ��ȡ��ǰ��Ӧ����ҳ���page_name��

@param[out] page_name_buf ���ڴ��ҳ������buffer
@param[in] buf_len page_name_buf�Ĵ�С

@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_get_active_page(char* page_name_buf, int buf_len);


/**
@brief ���������cookie�Ƿ����
����cookie������֮��ҳ�治���������û��ȡcookie��
��������ô˽ӿ����ã�Ĭ���ǿ��õ�

@param[in] page_name Ŀ��Render ������
@param[in] enable 0 ��ʾcookie������
                     1 ��ʾ����cookie����
                     2 ��ʾ���õ�����cookie
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_enable_cookie(const char* page_name, int enable);

/**
@brief ����������Ƿ������û��Ƿ������������վ׷��(Do Not Tracking)
@param[in] page_name Ŀ��Render ������
@param[in] setting : 0 ��ʾ�û�����׷��( DNT : 0 )
                     1 ��ʾ�û�������׷��( DNT : 1 )
                     2 ��ʾ�û�������(������DNT ����ͷ)
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_do_not_track(const char* page_name, int setting);

/**
@brief �����Զ����userAgent

@param[in] page_name Ŀ��Render ������
@param[in] userAgent �µ�userAgent
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_user_agent(const char* page_name, const char* user_agent);

/**
@brief ����ҳ�汳���Ƿ�͸��
���û�����ã�Ĭ�ϱ�����͸����

@param[in] transparent �Ƿ�͸�� 1��ʾ͸����0��ʾ��͸��
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_bg_color_transparent(const char* page_name, int transparent);

/**
@brief �����µļ�ֵӳ���ļ�
@note ӳ���ļ������ݸ�ʽΪÿ��������old_key=new_key

@param[in] page_name Ŀ��Render ������
@param[in] file_path ��ֵӳ���ļ�·��
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_key_map_file(const char* page_name, const char* file_path);

/**
@brief ����ǿ��HTML������ע�������ļ�
@note �����ļ�Ϊini��ʽ,ÿ�ж���URL��ַ

@param[in] page_name Ŀ��Render ������
@param[in] file_path ע�������ļ�·��
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_html_parse_list(const char* page_name, const char* file_path);

/**
@brief ����js�Լ�css��ע������xml�ļ�

@param[in] page_name Ŀ��Render ������
@param[in] file_path ע�������ļ�·��
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_inject_script_file(const char* page_name, const char* file_path);

/**
@brief �����滻���������ļ�
�˽ӿڱ�����render���̴���ǰ���á�
�ظ�������ͬ�ļ�������أ���ͬ�ļ��Ḳ���ϴμ��ص����ݡ�

@param[in] page_name Ŀ��Render ������
@param[in] file_path �滻���������ļ�·��
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_load_repacle_code_config(const char* page_name, const char* file_path);

/**
@brief ����Ĭ�Ͻ���

@param[in] page_name Ŀ��Render ������
@param[in] enable �Ƿ�Ĭ�Ͻ���
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_draw_focus( const char* page_name, int enable);

/**
@brief ���������http�������ԣ�������ҳ����Ч

@param[in] request_language �����õ��������ԣ�����iso-639�淶
@return �ɹ�����0;ʧ�ܷ�������
*/
int tos_tbrowser_set_request_language(const char* request_language);

/**
@brief �������������Ƿ�����, ע�⣺���ô˽ӿ��������δ���л�����5s��
@return �������з���0;û�����з�������
*/
int tos_tbrowser_is_running();

/**
@brief ��ǰ����ҳ�淢����������,�����޸ĵ�ǰ������ı�

@param[in] page_name ��Ӧ��Render������
@param[in] command_type ��������
@param[in] value Я�������� 
@return �ɹ����ͷ���0,���򷵻� -1
*/
int tos_tbrowser_execute_input_command(const char * page_name, const TOS_TBrowser_Input_Command_Type command_type, const char* value);

/**
* @brief Push�¼��м����չJS�ӿ�
* @param[in] page_name  :render������
* @param[in] eventType:�¼�����
* @param[in] jsonData:�¼�����json����,�޶����洢1024�ֽ�����
*
* @return �ɹ�����0;ʧ�ܷ���-1
*/
int tos_tbrowser_jsext_push_event_interface(const char* page_name, int eventType, const char *jsonData);

/**
* @brief Get�¼��м����չJS�ӿ�
* @param[in] page_name  :render������
* @param[in] modifiers:�¼�������
* @param[out] buffer:��ȡjson���ݵĻ�����
* @param[in] length:����������ȡ����

* @return �ɹ�����0;ʧ�ܷ���-1
*/
int tos_tbrowser_js_get_event_interface(const char* page_name, int modifiers, char* buffer, int length);

/**
* @brief ���������sbinderΪNULL
*/
void tos_tbrowser_reset_binder();

/**
* @brief �������������Ƿ�׼���ã��˺���ֻ��client��ʹ�á�
*
* @return ׼���÷���0, ���򷵻�-1
*/
int tos_tbrowser_check_service();

/**
* @brief ������������
* @param[in] cacheType:������������{0:ɾ����������}
* @return �ɹ�����0�����򷵻�-1
*/
int tos_tbrowser_clear_cache(int cacheType);


#ifdef __cplusplus
}
#endif
/** @} */
#endif
