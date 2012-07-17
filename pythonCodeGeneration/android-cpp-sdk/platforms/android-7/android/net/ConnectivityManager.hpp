/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.ConnectivityManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_DECL
#define J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class NetworkInfo; } } }


#include <android/net/NetworkInfo.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class ConnectivityManager;
	class ConnectivityManager
		: public object<ConnectivityManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)

		explicit ConnectivityManager(jobject jobj)
		: object<ConnectivityManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jboolean isNetworkTypeValid(jint);
		void setNetworkPreference(jint);
		jint getNetworkPreference();
		local_ref< android::net::NetworkInfo > getActiveNetworkInfo();
		local_ref< android::net::NetworkInfo > getNetworkInfo(jint);
		local_ref< array< local_ref< android::net::NetworkInfo >, 1> > getAllNetworkInfo();
		jint startUsingNetworkFeature(jint, local_ref< java::lang::String >  const&);
		jint stopUsingNetworkFeature(jint, local_ref< java::lang::String >  const&);
		jboolean requestRouteToHost(jint, jint);
		jboolean getBackgroundDataSetting();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > CONNECTIVITY_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > EXTRA_NETWORK_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_IS_FAILOVER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_OTHER_NETWORK_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > EXTRA_NO_CONNECTIVITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_REASON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > EXTRA_EXTRA_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > ACTION_BACKGROUND_DATA_SETTING_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > TYPE_MOBILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > TYPE_WIFI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > DEFAULT_NETWORK_PREFERENCE;
	}; //class ConnectivityManager

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_IMPL
#define J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_IMPL

namespace j2cpp {



android::net::ConnectivityManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jboolean android::net::ConnectivityManager::isNetworkTypeValid(jint a0)
{
	return call_static_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(1),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(a0);
}

void android::net::ConnectivityManager::setNetworkPreference(jint a0)
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(2),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jint android::net::ConnectivityManager::getNetworkPreference()
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(3),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

local_ref< android::net::NetworkInfo > android::net::ConnectivityManager::getActiveNetworkInfo()
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(4),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::net::NetworkInfo >
	>(get_jobject());
}

local_ref< android::net::NetworkInfo > android::net::ConnectivityManager::getNetworkInfo(jint a0)
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(5),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::net::NetworkInfo >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< android::net::NetworkInfo >, 1> > android::net::ConnectivityManager::getAllNetworkInfo()
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(6),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< android::net::NetworkInfo >, 1> >
	>(get_jobject());
}

jint android::net::ConnectivityManager::startUsingNetworkFeature(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(7),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::net::ConnectivityManager::stopUsingNetworkFeature(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(8),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0, a1);
}

jboolean android::net::ConnectivityManager::requestRouteToHost(jint a0, jint a1)
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(9),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::net::ConnectivityManager::getBackgroundDataSetting()
{
	return call_method<
		android::net::ConnectivityManager::J2CPP_CLASS_NAME,
		android::net::ConnectivityManager::J2CPP_METHOD_NAME(10),
		android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}


static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(0),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::CONNECTIVITY_ACTION;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(1),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_NETWORK_INFO;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(2),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_IS_FAILOVER;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(3),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_OTHER_NETWORK_INFO;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(4),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_NO_CONNECTIVITY;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(5),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_REASON;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(6),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_EXTRA_INFO;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(7),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::ACTION_BACKGROUND_DATA_SETTING_CHANGED;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(8),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::net::ConnectivityManager::TYPE_MOBILE;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(9),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::net::ConnectivityManager::TYPE_WIFI;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(10),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::net::ConnectivityManager::DEFAULT_NETWORK_PREFERENCE;


J2CPP_DEFINE_CLASS(android::net::ConnectivityManager,"android/net/ConnectivityManager")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,1,"isNetworkTypeValid","(I)Z")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,2,"setNetworkPreference","(I)V")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,3,"getNetworkPreference","()I")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,4,"getActiveNetworkInfo","()Landroid/net/NetworkInfo;")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,5,"getNetworkInfo","(I)Landroid/net/NetworkInfo;")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,6,"getAllNetworkInfo","()[android.net.NetworkInfo")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,7,"startUsingNetworkFeature","(ILjava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,8,"stopUsingNetworkFeature","(ILjava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,9,"requestRouteToHost","(II)Z")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,10,"getBackgroundDataSetting","()Z")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,0,"CONNECTIVITY_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,1,"EXTRA_NETWORK_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,2,"EXTRA_IS_FAILOVER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,3,"EXTRA_OTHER_NETWORK_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,4,"EXTRA_NO_CONNECTIVITY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,5,"EXTRA_REASON","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,6,"EXTRA_EXTRA_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,7,"ACTION_BACKGROUND_DATA_SETTING_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,8,"TYPE_MOBILE","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,9,"TYPE_WIFI","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,10,"DEFAULT_NETWORK_PREFERENCE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
