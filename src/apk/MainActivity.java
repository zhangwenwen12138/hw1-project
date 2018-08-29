package com.tcl.tbrowser;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;

public class MainActivity extends Activity {  
	public static final String TAG = "tbrw3";	
	public static final String pageName="hbbtv_tbrowser";
	public static final String mainUrl="http://www.baidu.com" ;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		setContentView(R.layout.activity_main);
		Log.d(TAG, "---------------url="+mainUrl);
		//启动服务		
		Log.d(TAG, "MainActivity onCreate");
		NativeClass.tbrowserLoadUrlWithName(pageName, mainUrl);
		super.onCreate(savedInstanceState);	
	}
	
	@Override
	protected void onStart() {
		Log.d(TAG, "MainActivity onStart");
		super.onStart();		
	}	
	
	@Override
	protected void onResume(){
		Log.d(TAG, "MainActivity onResume");
		super.onResume();		
	}
	
	@Override
	protected void onPause(){
		Log.d(TAG, "MainActivity onPause");
		super.onPause();
	}
	@Override
	protected void onRestart(){
		Log.d(TAG, "MainActivity onRestart");
		super.onRestart();
	}
	
	@Override
	protected void onStop(){
		Log.d(TAG, "MainActivity onStop");
		super.onStop();
	}
	
	@Override
	protected void onDestroy(){
		Log.d(TAG, "MainActivity onDestroy");
		NativeClass.tbrowserDestoryWithName(pageName);
		super.onDestroy();
	}
	
	//load jni
	static
    {
        Log.d(TAG, "libtbrowser3.so  start !");
        try {
            System.loadLibrary("tbrowser3");
            Log.d(TAG, "libtbrowser3.so scuess!");
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "libtbrowser3.so error : "+e.getMessage());
        }
        Log.d(TAG, "libtbrowser3.so End !");
    }
		
		//按键转换
		public int transCode(int keyCode) {
	        switch(keyCode)
	        {
	        case 183: //RED
	        	keyCode = 282;
	            break;
	        case 184: //green
	        	keyCode = 283;
	            break;
	        case 185:  //yellow
	        	keyCode = 284;
	            break;
	        case 186:  //Blue    	
	        	keyCode = 285;
	            break;
//	        case KeyEvent.KEYCODE_DPAD_UP: //up
//	            keyCode = TKeyEvent.KEY_CODE_UP;
//	            break;
//	        case KeyEvent.KEYCODE_DPAD_DOWN://down
//	        	keyCode = TKeyEvent.KEY_CODE_DOWN;
//	            break;
//	        case KeyEvent.KEYCODE_DPAD_LEFT://left
//	        	keyCode = TKeyEvent.KEY_CODE_LEFT;
//	            break;
//	        case KeyEvent.KEYCODE_DPAD_RIGHT://right
//	        	keyCode = TKeyEvent.KEY_CODE_RIGHT;
//	            break;
//	        case KeyEvent.KEYCODE_DPAD_CENTER:// ok 
//	        	keyCode = TKeyEvent.KEY_CODE_OK;
//	            break; 
	        case 4077:// setting
	            keyCode = 319;
	            break;   
	        case 4026:// option
	            keyCode = 362;
	            break;
	        case 178:// Source
	            keyCode = 355;
	            break;            
	        case 166:// p+
	            keyCode = 350;
	            break;
	        case 167:// p-
	            keyCode = 351;
	            break;
	        case 24:// v+
	            keyCode = 353;
	            break;
	        case 25:// v-
	            keyCode = 352;
	            break;     
	        case 172:// Guide
	            keyCode = 364;
	            break; 
	        case 19:// Guide
	            keyCode = 38;
	            break; 
	        case 20:// Guide
	            keyCode = 40;
	            break;
	        case 21:// Guide
	            keyCode = 37;
	            break;
	        case 22:// Guide
	            keyCode = 39;
	            break;
	        case 23:// Guide
	            keyCode = 13;
	            break;
	        case 165:// info
	            keyCode = 357;
	            break;
	        case 4090:// list
	            keyCode = 371;
	            break;
	        case 4085:// subtitle
	            keyCode = 373;
	            break; 
	        case 4086:// text
	            keyCode = 374;
	            break; 
	        case 4073:// 快进
	            keyCode = 381;
	            break; 
	        case 4075:// 快退
	            keyCode = 379;
	            break; 
	        case 4072:// 下一曲
	            keyCode = 378;
	            break; 
	        case 88:// 上一曲
	            keyCode = 375;
	            break; 
	        case 4074:// 停止
	            keyCode = 376;
	            break; 
	        case 127:// 暂停
	            keyCode = 85;
	            break; 
	        case 126://播放
	            keyCode = 383;
	            break;
	        case KeyEvent.KEYCODE_0://0
	        	//keyCode = TKeyEvent.KEY_CODE_0;
	            break;
	        case KeyEvent.KEYCODE_1://1
	        	//keyCode = TKeyEvent.KEY_CODE_1;
	            break;
	        case KeyEvent.KEYCODE_2://2
	        	//keyCode = TKeyEvent.KEY_CODE_2;
	        	//keyCode = 50;
	            break;
	        case KeyEvent.KEYCODE_3://3
	        	//keyCode = TKeyEvent.KEY_CODE_3;
	            break;
	        case KeyEvent.KEYCODE_4://4
	        	//keyCode = TKeyEvent.KEY_CODE_4;
	            break;
	        case KeyEvent.KEYCODE_5://5
	        	//keyCode = TKeyEvent.KEY_CODE_5;
	        	//keyCode = 53;
	            break;
	        case KeyEvent.KEYCODE_6://6
	        	//keyCode = TKeyEvent.KEY_CODE_6;
	            break;
	        case KeyEvent.KEYCODE_7://7
	        	//keyCode = TKeyEvent.KEY_CODE_7;
	            break;
	        case KeyEvent.KEYCODE_8://8
	        	//keyCode = TKeyEvent.KEY_CODE_8;  
	            break;
	        case KeyEvent.KEYCODE_9://9
	        	//keyCode = TKeyEvent.KEY_CODE_9;
	            break;
	        default:
	        	break;
	        }
	        return keyCode;
	    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
    	// TODO Auto-generated method stub
    	if (keyCode == 4095)
    		finish();
    	Log.i(TAG, "you keydown key:" + String.valueOf(keyCode));		
		keyCode = transCode(keyCode);
		Log.i(TAG, "after tansCode keydown key:" + String.valueOf(keyCode));
		NativeClass.tbrowserPushKeyEventWithName(pageName, 0, keyCode,event.getUnicodeChar(),event.getFlags());
		if(keyCode == KeyEvent.KEYCODE_BACK )
			return true;		
    	return super.onKeyDown(keyCode, event);
    }
    
    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event) {
    	// TODO Auto-generated method stub
    	Log.i(TAG, "you keyup key:" + String.valueOf(keyCode));		
		keyCode = transCode(keyCode);
		Log.i(TAG, "after tansCode keyup key:" + String.valueOf(keyCode));	
		NativeClass.tbrowserPushKeyEventWithName(pageName, 1, keyCode,event.getUnicodeChar(),event.getFlags());
		if(keyCode == KeyEvent.KEYCODE_BACK )
			return true;		
		return super.onKeyUp(keyCode, event);
	}

}  
