#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>
#include "Client.h"

namespace android
{
    sp<IBinder> binder;
    
    int Client::setN(int n)
    {
        get Service();
        Parcel data, reply;
        data.writeInt32(getpid());
        data.writeInt32(n);
        
        DebugPrint(" client - binder->transact()\n");
        binder->transact(0, data, &reply);
        int r = reply.readInt32();
        return r;
    }
    String8  Client::setString8(String8 str)
    {
        get Service();
        Parcel data, reply;//��ȡ�򴴽�Parcel����
        data.writeInt32(getpid());//д��Parcel����
        data.writeString8(str);
        //ALOGE("chyj send %s",str.string());
        DebugPrint(" client - binder->transact() send %s \n",str.string());
        binder->transact(1, data, &reply);//ͨ��Binder�������� 1�Ǻ���˳��ţ������Ӧ
        String8 r = reply.readString8();//reply��������
		DebugPrint(" setString8 reply %s \n",r.string());
		//ALOGE("chyj reply %s",r.string());
        return r;
    }
    void  Client::get Service()
    {
        sp<IServiceManager> sm = defaultServiceManager();
        binder = sm->getService(String16("jack.svc"));
        DebugPrint(" client - etService: %p\n", sm.get());
        if(binder == 0)
        {
            DebugPrint("  Service not published, waiting...");
            return;
        }
    }

}
