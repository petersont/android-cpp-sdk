/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.CookieManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class CookieManager;
	class CookieManager
		: public object<CookieManager>
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

		explicit CookieManager(jobject jobj)
		: object<CookieManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::webkit::CookieManager > getInstance();
		void setAcceptCookie(jboolean);
		jboolean acceptCookie();
		void setCookie(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getCookie(local_ref< java::lang::String >  const&);
		void removeSessionCookie();
		void removeAllCookie();
		jboolean hasCookies();
		void removeExpiredCookie();
	}; //class CookieManager

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_IMPL

namespace j2cpp {



android::webkit::CookieManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



local_ref< android::webkit::CookieManager > android::webkit::CookieManager::getInstance()
{
	return call_static_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(2),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::webkit::CookieManager >
	>();
}

void android::webkit::CookieManager::setAcceptCookie(jboolean a0)
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(3),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

jboolean android::webkit::CookieManager::acceptCookie()
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(4),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

void android::webkit::CookieManager::setCookie(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(5),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::webkit::CookieManager::getCookie(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(6),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

void android::webkit::CookieManager::removeSessionCookie()
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(7),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

void android::webkit::CookieManager::removeAllCookie()
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(8),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

jboolean android::webkit::CookieManager::hasCookies()
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(9),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

void android::webkit::CookieManager::removeExpiredCookie()
{
	return call_method<
		android::webkit::CookieManager::J2CPP_CLASS_NAME,
		android::webkit::CookieManager::J2CPP_METHOD_NAME(10),
		android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::webkit::CookieManager,"android/webkit/CookieManager")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,2,"getInstance","()Landroid/webkit/CookieManager;")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,3,"setAcceptCookie","(Z)V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,4,"acceptCookie","()Z")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,5,"setCookie","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,6,"getCookie","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,7,"removeSessionCookie","()V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,8,"removeAllCookie","()V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,9,"hasCookies","()Z")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,10,"removeExpiredCookie","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
