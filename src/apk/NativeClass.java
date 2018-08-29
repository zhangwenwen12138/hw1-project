package com.tcl.tbrowser;

import android.util.Log;  

public class NativeClass { 
	public static native boolean tbrowserLoadUrlWithName(String pageName, String url);
/*
@brief 打开指定页面
@param[in] page_name 目标Render 进程名
@param[in] url 页面地址
@return 成功返回0;失败返回其它
*/

	public static native boolean tbrowserPushKeyEventWithName(String pageName,int action,int keyCode,int unicodeCharacter,int flags);
/*
@brief 向页面发送按键事件
@param[in] page_name:render进程名
@param[in] key_event: 中间件按键事件
@return 成功返回0;失败返回其它
*/

	public static native boolean tbrowserDestoryWithName(String pageName);
/*
@brief 退出销毁浏览器
@param[in] page_name 目标Render 进程名
@return 成功返回0;失败返回其它
*/

	public static native boolean tbrowserSetVisible(String pageName, int visible);
/*
@brief 设置页面的可见性
@param[in] page_name 目标Render 进程名
@param[in] visible 可见性 1表示页面可见 0表示页面不可见
@return 成功返回0;失败返回其它
*/

	 public static native boolean tbrowserSetActive(String pageName);
/*
@brief 设置焦点页面(焦点页面响应按键)。
@param[in] page_name 目标Render 进程名
@return 成功返回0;失败返回其它
*/

    static {  
        Log.i("NativeClass","before load library");  
        System.loadLibrary("tbrowser");//注意这里为自己指定的.so文件，无lib前缀，亦无后缀  
        Log.i("NativeClass","after load library");    
    }
}  
